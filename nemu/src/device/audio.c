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
  reg_freq,      // 音频频率寄存器
  reg_channels,  // 音频通道数寄存器
  reg_samples,   // 音频样本数寄存器
  reg_sbuf_size, // 音频数据缓冲区大小寄存器
  reg_init,      // 初始化寄存器，用于启动音频设备
  reg_count,     // 音频流的已使用字节数寄存器
  nr_reg         // 寄存器的总数量
};

static uint8_t *sbuf = NULL;
static uint32_t *audio_base = NULL;

static uint32_t head = 0;
static uint32_t tail = 0;
static SDL_AudioSpec spec;
static bool audio_initialized = false;

// 强制确保指针在有效范围内的安全函数
static void normalize_pointers() {
  if (head >= CONFIG_SB_SIZE) {
    head = head % CONFIG_SB_SIZE;
  }
  if (tail >= CONFIG_SB_SIZE) {
    tail = tail % CONFIG_SB_SIZE;
  }
}

// 健壮的音频数据大小计算
static int get_audio_data_size() {
  normalize_pointers();

  if (tail >= head) {
    return tail - head;
  } else {
    return CONFIG_SB_SIZE - (head - tail);
  }
}

static void audio_fill_callback(void *userdata, uint8_t *stream, int len) {
  normalize_pointers();

  int data_size = get_audio_data_size();
  int nread = len > data_size ? data_size : len;

  if (nread == 0) {
    // 没有数据时填充静音
    memset(stream, 0, len);
    return;
  }

  if (head + nread <= CONFIG_SB_SIZE) {
    memcpy(stream, sbuf + head, nread);
  } else {
    int first_part_len = CONFIG_SB_SIZE - head;
    memcpy(stream, sbuf + head, first_part_len);
    memcpy(stream + first_part_len, sbuf, nread - first_part_len);
  }

  head = (head + nread) % CONFIG_SB_SIZE;

  if (nread < len) {
    memset(stream + nread, 0, len - nread);
  }
}

static void audio_io_handler(uint32_t offset, int len, bool is_write) {
  int reg_idx = offset / 4;

  SDL_LockAudio();

  if (is_write) {
    switch (reg_idx) {
    case reg_init:
      if (!audio_initialized) {
        SDL_InitSubSystem(SDL_INIT_AUDIO);
        spec.freq = audio_base[reg_freq];
        spec.format = AUDIO_S16SYS;
        spec.channels = audio_base[reg_channels];
        spec.samples = 1024; // 增大缓冲区，减少回调频率
        spec.callback = audio_fill_callback;
        spec.userdata = NULL;

        // 请求SDL使用我们的配置
        SDL_AudioSpec obtained_spec;
        int ret = SDL_OpenAudio(&spec, &obtained_spec);
        Assert(ret == 0, "SDL_OpenAudio failed");

        printf("NEMU Audio: SDL Audio initialized - freq=%d, channels=%d, "
               "samples=%d\n",
               obtained_spec.freq, obtained_spec.channels,
               obtained_spec.samples);

        SDL_PauseAudio(0);
        audio_initialized = true;

        // 重置缓冲区指针
        head = 0;
        tail = 0;
      }
      break;

    case reg_count: {
      uint32_t bytes_to_add = audio_base[reg_count];

      // 强制规范化指针
      normalize_pointers();

      // 限制单次添加的数据量
      if (bytes_to_add > CONFIG_SB_SIZE / 2) {
        bytes_to_add = CONFIG_SB_SIZE / 2;
      }

      uint32_t current_data_size = get_audio_data_size();

      // 激进的缓冲区管理：如果数据积累太多，丢弃一些旧数据
      if (current_data_size > CONFIG_SB_SIZE / 3) {
        head = (head + CONFIG_SB_SIZE / 8) % CONFIG_SB_SIZE;
        current_data_size = get_audio_data_size();
      }

      uint32_t max_can_add = CONFIG_SB_SIZE - current_data_size;

      if (bytes_to_add > max_can_add) {
        bytes_to_add = max_can_add;
      }

      if (bytes_to_add > 0) {
        tail = (tail + bytes_to_add) % CONFIG_SB_SIZE;
      }
    } break;

    default:
      break;
    }
  } else {
    switch (reg_idx) {
    case reg_sbuf_size:
      audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;
      break;

    case reg_count: {
      uint32_t data_size = get_audio_data_size();
      audio_base[reg_count] = data_size;
    } break;

    default:
      break;
    }
  }

  SDL_UnlockAudio();
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

  // 初始化状态
  head = 0;
  tail = 0;
  audio_initialized = false;
}