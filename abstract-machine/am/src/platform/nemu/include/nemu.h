#ifndef NEMU_H__
#define NEMU_H__



#include <klib-macros.h>

#include ISA_H // the macro `ISA_H` is defined in CFLAGS
               // it will be expanded as "x86/x86.h", "mips/mips32.h", ...

#if defined(__ISA_X86__)
# define nemu_trap(code) asm volatile ("int3" : :"a"(code))
#elif defined(__ISA_MIPS32__)
# define nemu_trap(code) asm volatile ("move $v0, %0; sdbbp" : :"r"(code))
#elif defined(__riscv)
# define nemu_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

#elif defined(__ISA_LOONGARCH32R__)
# define nemu_trap(code) asm volatile("move $a0, %0; break 0" : :"r"(code))
#else
# error unsupported ISA __ISA__
#endif

#if defined(__ARCH_X86_NEMU)
# define DEVICE_BASE 0x0
#else
# define DEVICE_BASE 0xa0000000
#endif

// 定义内存映射 I/O（MMIO）的基地址
// MMIO: Memory-Mapped Input/Output，内存映射输入输出
#define MMIO_BASE 0xa0000000

// SERIAL_PORT: 串口地址，用于串口通信（如调试输出）
#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
// KBD_ADDR: Keyboard Address，键盘地址，用于键盘输入
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
// RTC_ADDR: Real-Time Clock Address，实时时钟地址，解地址用于获取时间,，RTC_ADDR 映射的 64 位值表示自某一时刻（通常是模拟器启动时或 Epoch 时间）起经过的微秒数（μs）

#define RTC_ADDR        (DEVICE_BASE + 0x0000048)

// VGACTL_ADDR: VGA Control Address，VGA 控制地址，用于图形显示控制
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
// AUDIO_ADDR: Audio Address，音频地址，用于音频设备控制
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
// DISK_ADDR: Disk Address，磁盘地址，用于磁盘读写
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
// FB_ADDR: Framebuffer Address，帧缓冲区地址，用于显示像素数据
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
// AUDIO_SBUF_ADDR: Audio Sample Buffer Address，音频样本缓冲区地址
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)


#define NEMU_PADDR_SPACE \
  RANGE(&_pmem_start, PMEM_END), \
  RANGE(FB_ADDR, FB_ADDR + 0x200000), \
  RANGE(MMIO_BASE, MMIO_BASE + 0x1000) /* serial, rtc, screen, keyboard */

// 定义页面表条目（Page Table Entry）的类型为 uintptr_t
// PTE: Page Table Entry，页面表条目
typedef uintptr_t PTE;

// 定义页面大小为 4KB（4096 字节）
// PGSIZE: Page Size，页面大小
#define PGSIZE    4096

#endif
