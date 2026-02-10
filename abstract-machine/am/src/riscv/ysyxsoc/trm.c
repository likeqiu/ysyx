#include <am.h>
#include <ysyxsoc.h>
#include<klib.h>


extern char _heap_start;
extern char _heap_end;
int main(const char *args);

Area heap = { .start = &_heap_start, .end = &_heap_end };
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER;

void putch(char ch) {

  outb(UART_THR, (uint8_t)ch);
}

void halt(int code) {
  ysyxsoc_trap(code);


  while (1) {
     
   //  putch('.');
  }
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
