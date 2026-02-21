#ifndef __YSYXSOC_H__
#define __YSYXSOC_H__

#include <klib-macros.h>

#include ISA_H

#define ysyxsoc_trap(code) asm volatile("mv a0, %0; ebreak" : : "r"(code))

#define SERIAL_PORT 0x10000000

#define UART_RBR (SERIAL_PORT + 0x0)
#define UART_THR (SERIAL_PORT + 0x0)
#define UART_DLL (SERIAL_PORT + 0x0)
#define UART_IER (SERIAL_PORT + 0x1)
#define UART_DLM (SERIAL_PORT + 0x1)
#define UART_FCR (SERIAL_PORT + 0x2)
#define UART_LCR (SERIAL_PORT + 0x3)
#define UART_MCR (SERIAL_PORT + 0x4)
#define UART_LSR (SERIAL_PORT + 0x5)
#define UART_MSR (SERIAL_PORT + 0x6)
#define UART_SCR (SERIAL_PORT + 0x7)

#define UART_LSR_THRE (1 << 5)

#define CLINT_BASE 0x02000000
#define RTC_ADDR (CLINT_BASE + 0x0000BFF8)
#define CLINT_FREQ 1000000ULL

typedef uintptr_t PTE;

#define PGSIZE 4096

#endif
