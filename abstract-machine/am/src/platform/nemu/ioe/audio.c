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
  }

  // 严格限制单次写入的大小 - 更激进的限制
  if (len > 1024) { // Mario每次366字节是正常的，但限制在1KB以内
    len = 1024;
  }

  // 检查缓冲区状态
  uint32_t current_count = inl(AUDIO_COUNT_ADDR);

  // 防止current_count异常值
  if (current_count > SBUF_SIZE) {
    return; // 异常情况直接返回
  }

  uint32_t free_space = SBUF_SIZE - current_count;

  // 激进的丢弃策略：如果缓冲区使用超过25%就开始丢弃数据
  if (current_count > SBUF_SIZE / 4) {
    static int drop_counter = 0;
    drop_counter++;
    if (drop_counter % 2 == 0) { // 每隔一次丢弃数据
      return;
    }
  }

  // 缓冲区满或空间不足的处理
  if (free_space < len) {
    if (free_space == 0) {
      return; // 直接丢弃
    }
    len = free_space; // 截断
  }

  static uint32_t write_offset = 0;
  uint8_t *src = (uint8_t *)ctl->buf.start;

  // 确保write_offset在有效范围内
  if (write_offset >= SBUF_SIZE) {
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

  // 只在特定条件下输出日志，减少性能开销
  static int log_counter = 0;
  if (++log_counter % 100 == 0) {
    printf("AM Audio: Periodic check - count=%d, len=%d\n", (int)current_count,
           (int)len);
  }
}