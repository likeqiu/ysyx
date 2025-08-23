#ifndef RISCV_H__
#define RISCV_H__



#include <stdint.h>
// 包含标准整数类型定义
// uint8_t, uint16_t, uint32_t, uintptr_t: 无符号整数类型，分别表示 8 位、16 位、32 位和指针大小的整数

// inb: Input Byte，从内存地址读取字节
// volatile: 防止编译器优化，确保实际读取内存
static inline uint8_t  inb(uintptr_t addr) { return *(volatile uint8_t  *)addr; }
// 定义内联函数 inw，用于从指定地址读取 16 位数据
// inw: Input Word，从内存地址读取字（16 位）
static inline uint16_t inw(uintptr_t addr) { return *(volatile uint16_t *)addr; }
// 定义内联函数 inl，用于从指定地址读取 32 位数据
// inl: Input Long，从内存地址读取长字（32 位）
static inline uint32_t inl(uintptr_t addr) { return *(volatile uint32_t *)addr; }

static inline void outb(uintptr_t addr, uint8_t  data) { *(volatile uint8_t  *)addr = data; }
static inline void outw(uintptr_t addr, uint16_t data) { *(volatile uint16_t *)addr = data; }
static inline void outl(uintptr_t addr, uint32_t data) { *(volatile uint32_t *)addr = data; }

#define PTE_V 0x01
// Valid，页面有效标志，1 表示页面条目有效
#define PTE_R 0x02
// Readable，页面可读标志
#define PTE_W 0x04
// Writable，页面可写标志
#define PTE_X 0x08
// Executable，页面可执行标志
#define PTE_U 0x10
// User，用户模式可访问标志
#define PTE_A 0x40
// Accessed，页面被访问标志，硬件自动设置
#define PTE_D 0x80
// Dirty，页面被修改标志，硬件自动设置

enum { MODE_U, MODE_S, MODE_M = 3 };
// 定义 RISC-V 的特权模式枚举
// MODE_U: User Mode，用户模式
// MODE_S: Supervisor Mode，监管者模式
// MODE_M: Machine Mode，机器模式（最高特权级别）

#define MSTATUS_MXR  (1 << 19)
// 定义 mstatus 寄存器（机器状态寄存器）的标志位
// MSTATUS: Machine Status，机器状态寄存器
// MSTATUS_MXR: Make Executable Readable，使可执行页面可读，位 19
#define MSTATUS_SUM  (1 << 18)
// MSTATUS_SUM: Supervisor User Memory，允许监管者模式访问用户内存，位 18

#if __riscv_xlen == 64
#define MSTATUS_SXL  (2ull << 34)
#define MSTATUS_UXL  (2ull << 32)
#else

#define MSTATUS_SXL  0
#define MSTATUS_UXL  0
#endif

#endif
