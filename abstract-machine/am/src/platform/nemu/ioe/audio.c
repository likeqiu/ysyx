#include <am.h>
#include <nemu.h>
#include<klib.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

void __am_audio_init() {
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  cfg->bufsize = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->present = true;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);

  outl(AUDIO_INIT_ADDR,1);
  printf("AM: Audio control called. Freq=%d, Channels=%d, Samples=%d\n",
         ctrl->freq, ctrl->channels, ctrl->samples);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {

  uint32_t len = (uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start;

  if(len == 0)
    return;

  uint32_t sbuf_size = inl(AUDIO_COUNT_ADDR);


  while(sbuf_size - inl(AUDIO_COUNT_ADDR) < len){
    //printf("AM: Waiting for buffer... Current count = %d\n",inl(AUDIO_COUNT_ADDR));
    // 空间不足，CPU自旋等待
    // 在真实操作系统中会使用更高效的等待方式（如让出CPU）
    // 但在AM这个抽象层中，自旋是可接受的
  }

  static uint32_t write_offset = 0;
  uint8_t *src = (uint8_t *)ctl->buf.start;


  for (int i = 0; i < len;i++){
    uint32_t offset = (write_offset + i) % sbuf_size;
    outb(AUDIO_SBUF_ADDR + offset,src[i]);
  }

    write_offset = (write_offset + len) % sbuf_size;

  outl(AUDIO_COUNT_ADDR, len);

  printf("AM: Audio play called, trying to write %d bytes.\n", len);
}
