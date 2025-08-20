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
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:177:34
    extern void difftest_skip_ref();
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:181:34
    extern void itrace_print(int pc, int instruction_word, int instr_len_bytes, int p_count_number);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:180:33
    extern int printf_finish(int inst);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:182:34
    extern void trap_record(int pc, int cause);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_RegisterFile.v:43:32
    extern void update_cpu_state(unsigned int pc, const svOpenArrayHandle regs);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:183:36
    extern void update_decode_state(int pc, int snpc, int dnpc, int inst);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:178:34
    extern void verilog_pmem_read(int addr, int* data);
    // DPI import at /home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v:179:34
    extern void verilog_pmem_write(int addr, int data, int len);

#ifdef __cplusplus
}
#endif

#endif  // guard
