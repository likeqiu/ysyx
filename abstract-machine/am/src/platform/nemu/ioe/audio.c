#include <am.h>
#include <klib.h>
#include <nemu.h>

static uint32_t SBUF_SIZE = 0;
static uint32_t last_write_count = 0;
static uint32_t consecutive_full_count = 0;

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

  // 初始化SBUF_SIZE
  if (SBUF_SIZE == 0) {
    SBUF_SIZE = inl(AUDIO_SBUF_SIZE_ADDR);
  }

  // 检查是否是重复的相同大小的调用（可能的无限循环检测）
  if (len == last_write_count) {
    consecutive_full_count++;
    if (consecutive_full_count > 10) {
      // 检测到可能的无限循环，直接返回
      return;
    }
  } else {
    consecutive_full_count = 0;
  }
  last_write_count = len;

  // 严格限制数据大小
  if (len > 2048) {
    len = 2048;
  }

  // 读取当前缓冲区状态
  uint32_t current_count = inl(AUDIO_COUNT_ADDR);

  // 异常检测
  if (current_count > SBUF_SIZE) {
    return;
  }

  // 计算可用空间
  uint32_t free_space = SBUF_SIZE - current_count;

  // 激进策略：如果缓冲区使用超过12.5%就开始限制
  if (current_count > SBUF_SIZE / 8) {
    // 每4次调用只处理1次
    static int throttle_counter = 0;
    throttle_counter++;
    if (throttle_counter % 4 != 0) {
      return;
    }
  }

  // 如果没有足够空间，直接返回
  if (free_space < len) {
    return;
  }

  static uint32_t write_offset = 0;
  uint8_t *src = (uint8_t *)ctl->buf.start;

  // 安全的写入偏移处理
  write_offset = write_offset % SBUF_SIZE;

  // 快速写入循环
  for (uint32_t i = 0; i < len; i++) {
    outb(AUDIO_SBUF_ADDR + ((write_offset + i) % SBUF_SIZE), src[i]);
  }

  write_offset = (write_offset + len) % SBUF_SIZE;

  // 通知硬件
  outl(AUDIO_COUNT_ADDR, len);
}