#include <am.h>
#include <nemu.h>

extern char _heap_start;                                //heap表示可用堆空间区域
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);             // RANGE：宏或函数，构造一个内存区域，
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS ,由编译器替换为实际的参数

void putch(char ch) {
  outb(SERIAL_PORT, ch);//SERIAL_PORT表示端口,putch输出一个字节
}

void halt(int code) {
  nemu_trap(code); 

  // should not reach here
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);//启动用户程序
  halt(ret);
}
