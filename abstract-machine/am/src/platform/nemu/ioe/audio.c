#include <am.h>
#include <klib.h>
#include <nemu.h>

static uint32_t SBUF_SIZE = 0;
#define AUDIO_FREQ_ADDR (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR (AUDIO_ADDR + 0x14)

void __am_audio_init() {}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->bufsize = SBUF_SIZE;
  cfg->present = true;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);
  outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  uint32_t len = (uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start;

  if (len == 0)
    return;

  // 初始化SBUF_SIZE（如果还没有初始化）
  if (SBUF_SIZE == 0) {
    SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
    printf("AM Audio: SBUF_SIZE initialized to %u\n", SBUF_SIZE);
  }

  // 严格限制单次写入的大小
  if (len > SBUF_SIZE / 4) {
    printf("AM Audio: len too large (%u), limiting to %u\n", len,
           SBUF_SIZE / 4);
    len = SBUF_SIZE / 4;
  }

  // 检查缓冲区状态
  uint32_t current_count = inl(AUDIO_COUNT_ADDR);

  // 防止current_count异常值
  if (current_count > SBUF_SIZE) {
    printf("AM Audio: WARNING - current_count (%u) > SBUF_SIZE (%u), treating "
           "as full\n",
           current_count, SBUF_SIZE);
    return;
  }

  uint32_t free_space = SBUF_SIZE - current_count;

  printf("AM Audio: len=%u, current_count=%u, free_space=%u, SBUF_SIZE=%u\n",
         len, current_count, free_space, SBUF_SIZE);

  // 缓冲区满或空间不足
  if (free_space < len) {
    if (free_space == 0) {
      printf("AM Audio: Buffer full, dropping data\n");
      return;
    }
    printf("AM Audio: Truncating from %u to %u bytes\n", len, free_space);
    len = free_space;
  }

  static uint32_t write_offset = 0;
  uint8_t *src = (uint8_t *)ctl->buf.start;

  // 确保write_offset在有效范围内
  if (write_offset >= SBUF_SIZE) {
    printf("AM Audio: write_offset overflow (%u), resetting to 0\n",
           write_offset);
    write_offset = 0;
  }

  // 写入数据到循环缓冲区
  for (uint32_t i = 0; i < len; i++) {
    uint32_t offset = (write_offset + i) % SBUF_SIZE;
    outb(AUDIO_SBUF_ADDR + offset, src[i]);
  }

  write_offset = (write_offset + len) % SBUF_SIZE;

  // 通知硬件写入的数据量
  outl(AUDIO_COUNT_ADDR, len);

  printf("AM Audio: Wrote %u bytes, write_offset=%u\n", len, write_offset);
}