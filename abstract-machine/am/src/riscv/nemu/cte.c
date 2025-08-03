#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>


//搭配trap.s使用可追踪汇编过程的寄存器变化
/*
 void printf_SP(uintptr_t sp) {

   printf("sp:0x%08x\n", sp);
}
*/

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {

  if (user_handler) {
    Event ev = {0};

    // 根据mcause判断事件类型
    if (c->mcause == 11) { // Environment call from M-mode (ecall)
      ev.event = EVENT_YIELD;
      c->mepc += 4; // 重要！跳过ecall指令，避免无限循环
    } else {
      ev.event = EVENT_ERROR;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

extern void __am_kcontext_start(void);

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  // 在栈顶分配Context结构体空间，注意要对齐
  Context *c = (Context *)(((uintptr_t)kstack.end - sizeof(Context)) & ~0xF);

  // 清零上下文结构体
  memset(c, 0, sizeof(Context));

  // 设置程序计数器为kcontext_start入口
  c->mepc = (uintptr_t)__am_kcontext_start;

  // 设置栈指针 - 关键修正！
  // sp应该指向Context结构体的起始位置，因为trap处理会减去CONTEXT_SIZE
  c->gpr[2] = (uintptr_t)kstack.end; // sp寄存器是x2

  // 设置参数寄存器
  c->gpr[10] = (uintptr_t)arg;   // a0寄存器是x10
  c->gpr[11] = (uintptr_t)entry; // a1寄存器是x11

  // 设置mstatus寄存器 - 重要！
  c->mstatus = 0x1800; // MPP=11 (Machine mode), 允许中断

  return c;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
