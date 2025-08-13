#ifndef __AMDEV_H__
#define __AMDEV_H__

// **MAY SUBJECT TO CHANGE IN THE FUTURE**


// ## 是 C 预处理器中的连接运算符，用于将 AM_ 和 reg 拼接成一个标识符。
// 匿名枚举，提供一个唯一的寄存器编号，用于在代码中标识特定寄存器（例如在查找表或寄存器读写函数中
// 定义一个结构体，命名为 AM_##reg##_T，其成员由 __VA_ARGS__ 指定。
#define AM_DEVREG(id, reg, perm, ...) \
  enum { AM_##reg = (id) }; \
  typedef struct { __VA_ARGS__; } AM_##reg##_T;
  
//定义常见设备的抽象寄存器编号和数据结构
//串口设备
AM_DEVREG( 1, UART_CONFIG,  RD, bool present);//检查串口是否存在
AM_DEVREG( 2, UART_TX,      WR, char data);//写入串口数据
AM_DEVREG( 3, UART_RX,      RD, char data);//读取串口数据
AM_DEVREG( 4, TIMER_CONFIG, RD, bool present, has_rtc);//检查定时器配置
AM_DEVREG( 5, TIMER_RTC,    RD, int year, month, day, hour, minute, second);//读取实时时钟
AM_DEVREG( 6, TIMER_UPTIME, RD, uint64_t us);//读取运行时间
// 输入设备（键盘）
AM_DEVREG(7, INPUT_CONFIG, RD, bool present); // 检查键盘是否存在
AM_DEVREG(8, INPUT_KEYBRD, RD, bool keydown; int keycode); // 读取键盘事件

// GPU 设备
AM_DEVREG(9, GPU_CONFIG, RD, bool present, has_accel; int width, height, vmemsz); // GPU 配置
AM_DEVREG(10, GPU_STATUS, RD, bool ready);   // 帧缓冲区绘制
AM_DEVREG(11, GPU_FBDRAW, WR, int x, y; void *pixels; int w, h; bool sync); 
AM_DEVREG(12, GPU_MEMCPY, WR, uint32_t dest; void *src; int size);
AM_DEVREG(25, GPU_TILEBLIT, WR, int x, y; void *tiles; int w, h; int tile_w,  tile_h);

// 音频设备
AM_DEVREG(13, GPU_RENDER,   WR, uint32_t root);
AM_DEVREG(14, AUDIO_CONFIG, RD, bool present; int bufsize);
AM_DEVREG(15, AUDIO_CTRL,   WR, int freq, channels, samples);
AM_DEVREG(16, AUDIO_STATUS, RD, int count);
AM_DEVREG(17, AUDIO_PLAY,   WR, Area buf);
AM_DEVREG(18, DISK_CONFIG,  RD, bool present; int blksz, blkcnt);
AM_DEVREG(19, DISK_STATUS,  RD, bool ready);
AM_DEVREG(20, DISK_BLKIO,   WR, bool write; void *buf; int blkno, blkcnt);
// 网络设备
AM_DEVREG(21, NET_CONFIG,   RD, bool present);
AM_DEVREG(22, NET_STATUS,   RD, int rx_len, tx_len);
AM_DEVREG(23, NET_TX,       WR, Area buf);
AM_DEVREG(24, NET_RX,       WR, Area buf);

// Input
// 定义键盘键码
//_：这里的 _ 是一个占位符，表示一个宏函数（稍后会替换为实际的宏，比如 AM_KEY_NAMES）。每个按键名称会被 _ 处理一次。
// _(ESCAPE) 的括号是用来将按键名称（如 ESCAPE）作为参数传递给 _ 宏的。
#define AM_KEYS(_) \
  _(ESCAPE) _(F1) _(F2) _(F3) _(F4) _(F5) _(F6) _(F7) _(F8) _(F9) _(F10) _(F11) _(F12) \
  _(GRAVE) _(1) _(2) _(3) _(4) _(5) _(6) _(7) _(8) _(9) _(0) _(MINUS) _(EQUALS) _(BACKSPACE) \
  _(TAB) _(Q) _(W) _(E) _(R) _(T) _(Y) _(U) _(I) _(O) _(P) _(LEFTBRACKET) _(RIGHTBRACKET) _(BACKSLASH) \
  _(CAPSLOCK) _(A) _(S) _(D) _(F) _(G) _(H) _(J) _(K) _(L) _(SEMICOLON) _(APOSTROPHE) _(RETURN) \
  _(LSHIFT) _(Z) _(X) _(C) _(V) _(B) _(N) _(M) _(COMMA) _(PERIOD) _(SLASH) _(RSHIFT) \
  _(LCTRL) _(APPLICATION) _(LALT) _(SPACE) _(RALT) _(RCTRL) \
  _(UP) _(DOWN) _(LEFT) _(RIGHT) _(INSERT) _(DELETE) _(HOME) _(END) _(PAGEUP) _(PAGEDOWN)

#define AM_KEY_NAMES(key) AM_KEY_##key,
    enum {
      AM_KEY_NONE = 0,
      AM_KEYS(AM_KEY_NAMES)
    };

// GPU

#define AM_GPU_TEXTURE  1
#define AM_GPU_SUBTREE  2
#define AM_GPU_NULL     0xffffffff

// GPU 指针类型
typedef uint32_t gpuptr_t;

struct gpu_texturedesc
{
  uint16_t w, h;
  gpuptr_t pixels;
} __attribute__((packed));

struct gpu_canvas {
  uint16_t type, w, h, x1, y1, w1, h1;
  gpuptr_t sibling;
  union {
    gpuptr_t child;
    struct gpu_texturedesc texture;
  };
} __attribute__((packed));

#endif
