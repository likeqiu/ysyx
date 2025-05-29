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
    // DPI import at vsrc/ysyx_25040109_top.v:81:34
    extern void debug_exu(int pc, int inst, int rs1_data, int rd_addr, int result);
    // DPI import at vsrc/ysyx_25040109_top.v:2:30
    extern void mtrace_record(char typ, int addr, int len, int data);
    // DPI import at vsrc/ysyx_25040109_top.v:77:34
    extern void pmem_read(int addr, int* data);
    // DPI import at vsrc/ysyx_25040109_top.v:78:34
    extern void pmem_write(int addr, int data, int len);
    // DPI import at vsrc/ysyx_25040109_top.v:79:33
    extern int printf_finish(int inst);
    // DPI import at vsrc/ysyx_25040109_top.v:80:34
    extern void sdb_scan_mem(int addr, int* value);

#ifdef __cplusplus
}
#endif

#endif  // guard
