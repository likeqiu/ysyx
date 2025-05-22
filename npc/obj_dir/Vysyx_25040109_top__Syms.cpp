// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_25040109_top__Syms.h"
#include "Vysyx_25040109_top.h"
#include "Vysyx_25040109_top___024root.h"

void Vysyx_25040109_top___024root____Vdpiexp_ysyx_25040109_top__DOT__regfile__DOT__print_registers_TOP(Vysyx_25040109_top__Syms* __restrict vlSymsp);

// FUNCTIONS
Vysyx_25040109_top__Syms::~Vysyx_25040109_top__Syms()
{
}

Vysyx_25040109_top__Syms::Vysyx_25040109_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_25040109_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyx_25040109_top__regfile.configure(this, name(), "ysyx_25040109_top.regfile", "regfile", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ysyx_25040109_top__regfile.exportInsert(__Vfinal, "print_registers", (void*)(&Vysyx_25040109_top___024root____Vdpiexp_ysyx_25040109_top__DOT__regfile__DOT__print_registers_TOP));
    }
}
