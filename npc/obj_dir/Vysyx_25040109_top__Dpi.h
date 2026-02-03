// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_25040109_TOP__DPI_H_
#define VERILATED_VYSYX_25040109_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v:447:34
    extern void difftest_skip_ref();
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v:449:34
    extern void itrace_print(int pc, int instruction_word, int instr_len_bytes, int p_count_number);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_MEM.v:191:33
    extern int pmem_read(int raddr);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_MEM.v:193:33
    extern int pmem_read_ok(int addr);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_MEM.v:192:34
    extern void pmem_write(int waddr, int wdata, char wmask);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v:448:33
    extern int printf_finish(int inst);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_RegisterFile.v:43:32
    extern void update_cpu_state(unsigned int pc, const svOpenArrayHandle regs);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v:450:34
    extern void update_decode_state(int pc, int snpc, int dnpc, int inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
