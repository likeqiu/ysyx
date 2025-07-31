#include <am.h>
#include <klib.h>
#include <nemu.h>

static uint32_t SBUF_SIZE = 0;
static volatile uint32_t write_pos = 0;

#define AUDIO_FREQ_ADDR (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR (AUDIO_ADDR + 0x14)

void __am_audio_init() {
  // 类似native的pipe初始化
  write_pos = 0;
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg) {
  SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
  cfg->bufsize = SBUF_SIZE;
  cfg->present = true;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl) {
  // 类似native的SDL初始化
  outl(AUDIO_FREQ_ADDR, ctrl->freq);
  outl(AUDIO_CHANNELS_ADDR, ctrl->channels);
  outl(AUDIO_SAMPLES_ADDR, ctrl->samples);

  // 重置写入位置
  write_pos = 0;

  // 初始化音频
  outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) {
  stat->count = inl(AUDIO_COUNT_ADDR);
}

// 模拟native的audio_write函数
static void audio_write(uint8_t *buf, int len) {
  if (len <= 0 || SBUF_SIZE == 0)
    return;

  // 获取当前缓冲区状态
  uint32_t current_count = inl(AUDIO_COUNT_ADDR);
  uint32_t free_space = SBUF_SIZE - current_count;

  // 如果没有足够空间，截断数据
  if (len > free_space) {
    len = free_space;
  }

  if (len <= 0)
    return;

  // 写入数据到缓冲区
  for (int i = 0; i < len; i++) {
    outb(AUDIO_SBUF_ADDR + ((write_pos + i) % SBUF_SIZE), buf[i]);
  }

  write_pos = (write_pos + len) % SBUF_SIZE;

  // 通知NEMU有新数据写入
  outl(AUDIO_COUNT_ADDR, len);
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) {
  // 完全模拟native的实现
  int len = (uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start;

  if (len <= 0)
    return;

  // 初始化SBUF_SIZE
  if (SBUF_SIZE == 0) {
    SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
  }

  // 调用audio_write写入数据
  audio_write(ctl->buf.start, len);
}