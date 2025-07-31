/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <SDL2/SDL.h>
#include <SDL2/SDL_audio.h>
#include <common.h>
#include <device/map.h>

enum {
  reg_freq,
  reg_channels,
  reg_samples,
  reg_sbuf_size,
  reg_init,
  reg_count,
  nr_reg
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;

// 简单的指针管理，类似pipe
static volatile uint32_t data_count = 0; // 当前缓冲区中的数据量
static uint32_t consume_pos = 0;         // SDL消费位置
static SDL_AudioSpec spec;
static bool audio_initialized = false;

// SDL音频回调函数
static void audio_play_callback(void *userdata, uint8_t *stream, int len) {
  SDL_LockAudio();

  int nread = (len > data_count) ? data_count : len;

  if (nread > 0) {
    // 从缓冲区读取数据
    if (consume_pos + nread <= CONFIG_SB_SIZE) {
      memcpy(stream, sbuf + consume_pos, nread);
    } else {
      // 处理环形缓冲区边界
      int first_part = CONFIG_SB_SIZE - consume_pos;
      memcpy(stream, sbuf + consume_pos, first_part);
      memcpy(stream + first_part, sbuf, nread - first_part);
    }

    consume_pos = (consume_pos + nread) % CONFIG_SB_SIZE;
    data_count -= nread;
  }

  // 剩余部分填静音
  if (nread < len) {
    memset(stream + nread, 0, len - nread);
  }

  SDL_UnlockAudio();
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  int reg_idx = offset / 4;

  if (is_write) {
    switch (reg_idx) {
    case reg_init:
      if (!audio_initialized) {
        SDL_InitSubSystem(SDL_INIT_AUDIO);

        spec.freq = audio_base[reg_freq];
        spec.format = AUDIO_S16SYS;
        spec.channels = audio_base[reg_channels];
        spec.samples = audio_base[reg_samples];
        spec.callback = audio_play_callback;
        spec.userdata = NULL;

        int ret = SDL_OpenAudio(&spec, NULL);
        if (ret == 0) {
          SDL_PauseAudio(0);
          audio_initialized = true;

          // 重置状态
          data_count = 0;
          consume_pos = 0;
        }
      }
      break;

    case reg_count: {
      // AM层通知有新数据写入
      uint32_t bytes_added = audio_base[reg_count];

      SDL_LockAudio();

      // 更新数据计数，但要防止溢出
      if (data_count + bytes_added > CONFIG_SB_SIZE) {
        data_count = CONFIG_SB_SIZE;
      } else {
        data_count += bytes_added;
      }

      SDL_UnlockAudio();
    } break;

    default:
      break;
    }
  } else {
    switch (reg_idx) {
    case reg_sbuf_size:
      audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;
      break;

    case reg_count:
      // 返回当前缓冲区中的数据量
      audio_base[reg_count] = data_count;
      break;

    default:
      break;
    }
  }
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);

#ifdef CONFIG_HAS_PORT_IO
  add_pio_map("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size,
              audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size,
               audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  // 音频缓冲区不需要特殊处理函数，AM层直接写入
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);

  // 初始化状态
  data_count = 0;
  consume_pos = 0;
  audio_initialized = false;
}