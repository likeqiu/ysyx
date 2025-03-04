// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VWATER_FALL_LIGHT__SYMS_H_
#define VERILATED_VWATER_FALL_LIGHT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vwater_fall_light.h"

// INCLUDE MODULE CLASSES
#include "Vwater_fall_light___024root.h"

// SYMS CLASS (contains all model state)
class Vwater_fall_light__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vwater_fall_light* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vwater_fall_light___024root    TOP;

    // CONSTRUCTORS
    Vwater_fall_light__Syms(VerilatedContext* contextp, const char* namep, Vwater_fall_light* modelp);
    ~Vwater_fall_light__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
