#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>


void printf_SP(uintptr_t sp){
  printf("sp:0x%08x\n", sp);
}

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {


  printf("\033[1;33m cte regs interrupt during 1.0:\033[0m\n");
  printf("\n[AM] IRQ handled, context at: %p\n", c);
  printf(" mepc   : 0x%08x\n", c->mepc);
  printf(" mcause : 0x%08x (%d)\n", c->mcause, c->mcause);
  printf(" mstatus: 0x%08x\n", c->mstatus);


  const char *reg_names[] = {"$0 ", "ra ", "sp ", "gp ", "tp ", "t0 ", "t1 ",
                             "t2 ", "s0 ", "s1 ", "a0 ", "a1 ", "a2 ", "a3 ",
                             "a4 ", "a5 ", "a6 ", "a7 ", "s2 ", "s3 ", "s4 ",
                             "s5 ", "s6 ", "s7 ", "s8 ", "s9 ", "s10", "s11",
                             "t3 ", "t4 ", "t5 ", "t6 "};



  for (int i = 0; i < 32; i++)
  {
    printf("  gpr[%2d](%s): 0x%08x\n", i, reg_names[i], c->gpr[i]);
  }

  


  if (user_handler) {
    Event ev = {0};
    switch (c->mcause) {
      case 11:
        ev.event = EVENT_YIELD;
        ev.cause = c->mcause;
        ev.ref   = c->mepc;
        ev.msg = "Machine External Interrupt";
        break;

      default: 
      ev.event = EVENT_ERROR;
      ev.cause = c->mcause;
      ev.ref = c->mepc;
      break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

 // c->gpr[1] = 0x80000000;测试恢复的是这个函数的返回内容

  printf("\033[1;33m cte regs interrupt during 2.0:\033[0m\n");
  printf("\n[AM] IRQ handled, context at: %p\n", c);
  printf(" mepc   : 0x%08x\n", c->mepc);
  printf(" mcause : 0x%08x (%d)\n", c->mcause, c->mcause);
  printf(" mstatus: 0x%08x\n", c->mstatus);

  for (int i = 0; i < 32; i++) {
    printf("  gpr[%2d](%s): 0x%08x\n", i, reg_names[i], c->gpr[i]);
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

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
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
