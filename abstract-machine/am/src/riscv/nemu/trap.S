#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define MAP(c, f) c(f)

#if __riscv_xlen == 32
#define LOAD  lw
#define STORE sw
#define XLEN  4
#else
#define LOAD  ld
#define STORE sd
#define XLEN  8
#endif

#define REGS_LO16(f) \
      f( 1)       f( 3) f( 4) f( 5) f( 6) f( 7) f( 8) f( 9) \
f(10) f(11) f(12) f(13) f(14) f(15)
#ifndef __riscv_e
#define REGS_HI16(f) \
                                    f(16) f(17) f(18) f(19) \
f(20) f(21) f(22) f(23) f(24) f(25) f(26) f(27) f(28) f(29) \
f(30) f(31)
#define NR_REGS 32
#else
#define REGS_HI16(f)
#define NR_REGS 16
#endif

#define REGS(f) REGS_LO16(f) REGS_HI16(f)

#define PUSH(n) STORE concat(x, n), (n * XLEN)(sp);
#define POP(n)  LOAD  concat(x, n), (n * XLEN)(sp);

#define CONTEXT_SIZE  ((NR_REGS + 3) * XLEN)
#define OFFSET_SP     ( 2 * XLEN)
#define OFFSET_CAUSE  ((NR_REGS + 0) * XLEN)
#define OFFSET_STATUS ((NR_REGS + 1) * XLEN)
#define OFFSET_EPC    ((NR_REGS + 2) * XLEN)



# ========== 通用SP追踪宏定义 ==========
# 这个宏可以在任何地方插入，完全不影响原有逻辑

.macro TRACE_SP label
    # 保存所有可能被破坏的寄存器到栈上
    addi sp, sp, -64              # 为追踪预留栈空间
    STORE ra, 0(sp)               # 保存返回地址
    STORE a0, 8(sp)               # 保存函数参数/返回值寄存器
    STORE a1, 16(sp)
    STORE a2, 24(sp)
    STORE a3, 32(sp)
    STORE t0, 40(sp)              # 保存临时寄存器
    STORE t1, 48(sp)
    STORE t2, 56(sp)
    
    # 计算实际的用户栈指针 (排除我们刚才分配的64字节)
    addi a0, sp, 64
    
    # 可选：添加标签信息 (如果需要区分不同位置的追踪)
    # la a1, \label               # 如果你想传递标签字符串
    
    # 调用C函数
    call printf_SP
    
    # 恢复所有寄存器
    LOAD ra, 0(sp)
    LOAD a0, 8(sp)
    LOAD a1, 16(sp)
    LOAD a2, 24(sp)
    LOAD a3, 32(sp)
    LOAD t0, 40(sp)
    LOAD t1, 48(sp)
    LOAD t2, 56(sp)
    addi sp, sp, 64               # 恢复栈指针
.endm


.align 3
.globl __am_asm_trap
__am_asm_trap:
  TRACE_SP  
  addi sp, sp, -CONTEXT_SIZE

  MAP(REGS, PUSH)

  csrr t0, mcause
  csrr t1, mstatus
  csrr t2, mepc

  STORE t0, OFFSET_CAUSE(sp)
  STORE t1, OFFSET_STATUS(sp)
  STORE t2, OFFSET_EPC(sp)

  # set mstatus.MPRV to pass difftest
  li a0, (1 << 17)
  or t1, t1, a0
  csrw mstatus, t1
 
  TRACE_SP  
  mv a0, sp
  call __am_irq_handle

  LOAD t1, OFFSET_STATUS(sp)
  LOAD t2, OFFSET_EPC(sp)
  csrw mstatus, t1
  csrw mepc, t2

  MAP(REGS, POP)

  addi sp, sp, CONTEXT_SIZE
  mret
