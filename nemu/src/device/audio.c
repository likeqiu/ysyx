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
static uint32_t head = 0;
static uint32_t tail = 0;
static SDL_AudioSpec spec;
static bool audio_initialized = false;

// 极简的数据大小计算
static int get_audio_data_size() {
  head = head % CONFIG_SB_SIZE;
  tail = tail % CONFIG_SB_SIZE;

  if (tail >= head) {
    return tail - head;
  } else {
    return CONFIG_SB_SIZE - (head - tail);
  }
}

// 极简的音频回调
static void audio_fill_callback(void *userdata, uint8_t *stream, int len) {
  int data_size = get_audio_data_size();
  int nread = (len > data_size) ? data_size : len;

  if (nread <= 0) {
    memset(stream, 0, len);
    return;
  }

  // 简单的线性拷贝，不处理环形缓冲区的复杂情况
  if (head + nread <= CONFIG_SB_SIZE) {
    memcpy(stream, sbuf + head, nread);
  } else {
    // 如果跨越边界，只拷贝到边界为止，剩余填0
    int first_part = CONFIG_SB_SIZE - head;
    memcpy(stream, sbuf + head, first_part);
    memset(stream + first_part, 0, len - first_part);
    nread = first_part;
  }

  head = (head + nread) % CONFIG_SB_SIZE;

  if (nread < len) {
    memset(stream + nread, 0, len - nread);
  }
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
        spec.samples = 2048; // 大缓冲区
        spec.callback = audio_fill_callback;
        spec.userdata = NULL;

        if (SDL_OpenAudio(&spec, NULL) == 0) {
          SDL_PauseAudio(0);
          audio_initialized = true;
          head = 0;
          tail = 0;
        }
      }
      break;

    case reg_count: {
      uint32_t bytes_to_add = audio_base[reg_count];

      // 极简处理：直接限制大小并添加
      if (bytes_to_add > CONFIG_SB_SIZE / 2) {
        bytes_to_add = CONFIG_SB_SIZE / 2;
      }

      int current_size = get_audio_data_size();

      // 如果缓冲区超过一半，丢弃一些数据
      if (current_size > CONFIG_SB_SIZE / 2) {
        head = (head + CONFIG_SB_SIZE / 4) % CONFIG_SB_SIZE;
      }

      // 重新计算可用空间
      current_size = get_audio_data_size();
      int available = CONFIG_SB_SIZE - current_size;

      if (bytes_to_add > available) {
        bytes_to_add = available;
      }

      if (bytes_to_add > 0) {
        tail = (tail + bytes_to_add) % CONFIG_SB_SIZE;
      }
    } break;
    }
  } else {
    switch (reg_idx) {
    case reg_sbuf_size:
      audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;
      break;

    case reg_count:
      audio_base[reg_count] = get_audio_data_size();
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
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);

  head = 0;
  tail = 0;
  audio_initialized = false;
}