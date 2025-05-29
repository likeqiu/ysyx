// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top__Syms.h"
#include "Vysyx_25040109_top___024unit.h"

extern "C" void mtrace_record(char typ, int addr, int len, int data);

VL_INLINE_OPT void Vysyx_25040109_top___024unit____Vdpiimwrap_mtrace_record_TOP____024unit(CData/*7:0*/ typ, IData/*31:0*/ addr, IData/*31:0*/ len, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_25040109_top___024unit____Vdpiimwrap_mtrace_record_TOP____024unit\n"); );
    // Body
    char typ__Vcvt;
    for (size_t typ__Vidx = 0; typ__Vidx < 1; ++typ__Vidx) typ__Vcvt = typ;
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int len__Vcvt;
    for (size_t len__Vidx = 0; len__Vidx < 1; ++len__Vidx) len__Vcvt = len;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    mtrace_record(typ__Vcvt, addr__Vcvt, len__Vcvt, data__Vcvt);
}
