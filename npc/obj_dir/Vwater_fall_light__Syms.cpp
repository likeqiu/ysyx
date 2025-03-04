// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vwater_fall_light__Syms.h"
#include "Vwater_fall_light.h"
#include "Vwater_fall_light___024root.h"

// FUNCTIONS
Vwater_fall_light__Syms::~Vwater_fall_light__Syms()
{
}

Vwater_fall_light__Syms::Vwater_fall_light__Syms(VerilatedContext* contextp, const char* namep, Vwater_fall_light* modelp)
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
}
