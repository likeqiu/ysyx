#include <am.h>

extern char _heap_start;
extern char _sram_end;
int main(const char *args);

#define UART_BASE 0x10000000
#define UART_THR (UART_BASE + 0x0)
#define UART_LSR (UART_BASE + 0x5)
#define UART_LSR_THRE (1 << 5)

Area heap = { .start = &_heap_start, .end = &_sram_end };

void putch(char ch) {
  while ((inb(UART_LSR) & UART_LSR_THRE) == 0) {
  }
  outb(UART_THR, (uint8_t)ch);
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : : "r"(code));
  while (1) {
  }
}

void _trm_init() {
  int ret = main("");
  halt(ret);
}
