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

#include <SDL2/SDL_audio.h>
#include <common.h>
#include <device/map.h>
#include <SDL2/SDL.h>

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

static int get_audio_data_size() {
  if (head <= tail) {
    return tail - head;
  }
  // 修复：当head > tail时，数据跨越了缓冲区边界
  return (CONFIG_SB_SIZE - head) + tail;
}

static void audio_fill_callback(void *userdata,uint8_t *stream,int len){

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
  //Log("Audio handler entered: offset=0x%x, reg_idx=%d, is_write=%d", offset,reg_idx, is_write);

  SDL_LockAudio();

  if(is_write){
    switch(reg_idx){

      case reg_init:
       // Log("Audio WRITE: case reg_init");
        SDL_InitSubSystem(SDL_INIT_AUDIO);
        spec.freq = audio_base[reg_freq];
        spec.format = AUDIO_S16SYS;
        spec.channels = audio_base[reg_channels];
        spec.samples = audio_base[reg_samples];
        spec.callback = audio_fill_callback;
        spec.userdata = NULL;

        int ret = SDL_OpenAudio(&spec, NULL);
        Assert(ret == 0, "SDL_OpenAudio failed");
        SDL_PauseAudio(0);
        break;

      case reg_count: {
        uint32_t bytes_to_add = audio_base[reg_count];
        uint32_t current_data_size = get_audio_data_size();

        // 确保不会超过缓冲区大小
        if (current_data_size + bytes_to_add > CONFIG_SB_SIZE) {
          bytes_to_add = CONFIG_SB_SIZE - current_data_size;
        }

        tail = (tail + bytes_to_add) % CONFIG_SB_SIZE;
      } break;

      default:
        break;
      }
  } else{
    switch(reg_idx){
      case reg_sbuf_size:
        //Log("Audio READ: case reg_sbuf_size. Assigning size %u.",(unsigned)CONFIG_SB_SIZE);
        audio_base[reg_sbuf_size] = CONFIG_SB_SIZE;
        break;
      case reg_count:
       // Log("Audio READ: case reg_count.");
        audio_base[reg_count] = get_audio_data_size();
        break;
      }
  }

  SDL_UnlockAudio();
}

void init_audio() {
  uint32_t space_size = sizeof(uint32_t) * nr_reg;
  audio_base = (uint32_t *)new_space(space_size);
#ifdef CONFIG_HAS_PORT_IO
  add_pio_map ("audio", CONFIG_AUDIO_CTL_PORT, audio_base, space_size, audio_io_handler);
#else
  add_mmio_map("audio", CONFIG_AUDIO_CTL_MMIO, audio_base, space_size, audio_io_handler);
#endif

  sbuf = (uint8_t *)new_space(CONFIG_SB_SIZE);
  add_mmio_map("audio-sbuf", CONFIG_SB_ADDR, sbuf, CONFIG_SB_SIZE, NULL);

  head = 0;
  tail = 0;
}
