#ifndef __RISCV_REG_H__
#define __RISCV_REG_H__

#include "ram.h"

word_t isa_reg_str2val(const char *s, bool *success);

#define gpr(idx) (top->rootp->ysyx_25040109_top__DOT__regfile__DOT__rf[idx])

    static inline const char *reg_name(int idx)
{
    extern const char *regs[];
    return regs[idx];
}

#endif
