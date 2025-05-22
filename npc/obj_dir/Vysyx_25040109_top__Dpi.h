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


    // DPI EXPORTS
    // DPI export at vsrc/ysyx_25040109_RegisterFile.v:24:10
    extern void print_registers();

    // DPI IMPORTS
    // DPI import at vsrc/ysyx_25040109_top.v:72:33
    extern int printf_finish(int inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
