// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Vysyx_25040109_top.h"
#include "Vysyx_25040109_top__Syms.h"
#include "verilated_dpi.h"


void Vysyx_25040109_top::print_registers() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root::print_registers\n"); );
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("print_registers");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Vysyx_25040109_top__Vcb_print_registers_t __Vcb = (Vysyx_25040109_top__Vcb_print_registers_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Vysyx_25040109_top__Syms*)(__Vscopep->symsp()));
}
