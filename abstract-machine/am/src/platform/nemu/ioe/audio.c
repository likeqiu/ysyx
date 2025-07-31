#include <am.h>
#include <nemu.h>
#include<klib.h>

static uint32_t SBUF_SIZE = 0;
#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

void __am_audio_init() {
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
   
  SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->present = true;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);

  outl(AUDIO_INIT_ADDR,1);
  //printf("AM: Audio control called. Freq=%d, Channels=%d, Samples=%d\n",ctrl->freq, ctrl->channels, ctrl->samples);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  uint32_t len = (uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start;

  if (len == 0)
    return;

  static uint32_t write_offset = 0;
  uint8_t *src = (uint8_t *)ctl->buf.start;

  // 分块写入，避免一次写入过多数据导致缓冲区溢出
  uint32_t written = 0;
  while (written < len) {
    uint32_t current_count = inl(AUDIO_COUNT_ADDR);
    uint32_t free_space = SBUF_SIZE - current_count;

    if (free_space == 0) {
      // 缓冲区满，等待一小段时间或直接返回
      // 在实际应用中，这里应该yield CPU或使用更好的同步机制
      break;
    }

    uint32_t chunk_size = len - written;
    if (chunk_size > free_space) {
      chunk_size = free_space;
    }

    // 写入数据到循环缓冲区
    for (uint32_t i = 0; i < chunk_size; i++) {
      uint32_t offset = (write_offset + i) % SBUF_SIZE;
      outb(AUDIO_SBUF_ADDR + offset, src[written + i]);
    }

    write_offset = (write_offset + chunk_size) % SBUF_SIZE;
    written += chunk_size;

    // 通知硬件有新数据
    outl(AUDIO_COUNT_ADDR, chunk_size);
  }
}