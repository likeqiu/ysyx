// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top__Syms.h"
#include "Vysyx_25040109_top___024root.h"

extern "C" int printf_finish(int inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__printf_finish_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int printf_finish__Vfuncrtn__Vcvt;
    printf_finish__Vfuncrtn__Vcvt = printf_finish(inst__Vcvt);
    printf_finish__Vfuncrtn = printf_finish__Vfuncrtn__Vcvt;
}

void Vysyx_25040109_top___024root____Vdpiexp_ysyx_25040109_top__DOT__regfile__DOT__print_registers_TOP(Vysyx_25040109_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root____Vdpiexp_ysyx_25040109_top__DOT__regfile__DOT__print_registers_TOP\n"); );
    // Init
    // Body
    VL_WRITEF("=== Register File Contents ===\nx0: 0x%x (%0#)\nx1: 0x%x (%0#)\nx2: 0x%x (%0#)\nx3: 0x%x (%0#)\nx4: 0x%x (%0#)\nx5: 0x%x (%0#)\nx6: 0x%x (%0#)\nx7: 0x%x (%0#)\nx8: 0x%x (%0#)\nx9: 0x%x (%0#)\nx10: 0x%x (%0#)\nx11: 0x%x (%0#)\nx12: 0x%x (%0#)\nx13: 0x%x (%0#)\nx14: 0x%x (%0#)\nx15: 0x%x (%0#)\nx16: 0x%x (%0#)\nx17: 0x%x (%0#)\nx18: 0x%x (%0#)\nx19: 0x%x (%0#)\nx20: 0x%x (%0#)\nx21: 0x%x (%0#)\nx22: 0x%x (%0#)\nx23: 0x%x (%0#)\nx24: 0x%x (%0#)\nx25: 0x%x (%0#)\nx26: 0x%x (%0#)\nx27: 0x%x (%0#)\nx28: 0x%x (%0#)\nx29: 0x%x (%0#)\n",
              32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [1U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [1U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [2U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [2U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [3U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [3U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [4U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [4U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [5U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [5U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [6U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [6U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [7U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [7U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [8U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [8U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [9U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [9U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xaU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xaU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xbU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xbU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xcU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xcU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xdU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xdU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xeU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xeU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xfU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0xfU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x10U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x10U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x11U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x11U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x12U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x12U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x13U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x13U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x14U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x14U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x15U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x15U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x16U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x16U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x17U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x17U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x18U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x18U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x19U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x19U],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1aU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1aU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1bU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1bU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1cU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1cU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1dU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1dU]);
    VL_WRITEF("x30: 0x%x (%0#)\nx31: 0x%x (%0#)\n=============================\n",
              32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1eU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1eU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1fU],32,vlSymsp->TOP.ysyx_25040109_top__DOT__regfile__DOT__rf
              [0x1fU]);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__ico(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root___eval_triggers__ico(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25040109_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root___eval_triggers__act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_25040109_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
