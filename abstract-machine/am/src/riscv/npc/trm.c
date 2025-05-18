#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
}

void halt(int code) {
  asm volatile("mv a0, %0; ebreak" : : "r"(code));
  // 相当于npc_trap(code);
  //  asm: 关键字，表示后面的内容是汇编指令。
  /*volatile : 这是内联汇编的一个修饰符。它告诉编译器 不要 对这段汇编代码进行优化（例如，移除它、重排它）或者认为它没有副作用。这对于像 ebreak 这种会改变程序流程或与外部环境交互的指令至关重要。
  总结来说，nemu_trap(code) 宏是在被模拟程序中，将一个表示特定状态或信息的数值 code 放入 a0 寄存器，然后执行 ebreak 指令，从而通知 NEMU 模拟器发生了某个特定事件（其类型由 code 的值指示）。NEMU 在捕获到 ebreak 陷阱后，会检查 a0 寄存器的值来确定如何处理（例如，根据 code 的值判断程序是正常退出还是出错）。*/
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
