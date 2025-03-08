// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1U] = 2U;
    vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3U] = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = 0U;
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [0U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__hit = 1U;
    }
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [1U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__hit = 1U;
    }
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [2U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__hit = 1U;
    }
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xcU | (IData)(vlSelf->X3));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (8U | (IData)(vlSelf->X2));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (4U | (IData)(vlSelf->X1));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = vlSelf->X0;
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelf->X3;
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = vlSelf->X2;
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = vlSelf->X1;
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = vlSelf->X0;
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = 0U;
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [0U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out 
            = vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
            [0U];
    }
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [1U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out 
            = vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
            [1U];
    }
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [2U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out 
            = vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
            [2U];
    }
    if (((IData)(vlSelf->Y) == vlSelf->top__DOT__i0__DOT__i0__DOT__key_list
         [3U])) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__hit = 1U;
        vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out 
            = vlSelf->top__DOT__i0__DOT__i0__DOT__data_list
            [3U];
    }
    vlSelf->F = vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out;
    vlSelf->LD1 = (1U & ((IData)(vlSelf->F) >> 1U));
    vlSelf->LD0 = (1U & (IData)(vlSelf->F));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->SW0 = VL_RAND_RESET_I(1);
    vlSelf->SW1 = VL_RAND_RESET_I(1);
    vlSelf->SW2 = VL_RAND_RESET_I(1);
    vlSelf->SW3 = VL_RAND_RESET_I(1);
    vlSelf->SW4 = VL_RAND_RESET_I(1);
    vlSelf->SW5 = VL_RAND_RESET_I(1);
    vlSelf->SW6 = VL_RAND_RESET_I(1);
    vlSelf->SW7 = VL_RAND_RESET_I(1);
    vlSelf->SW8 = VL_RAND_RESET_I(1);
    vlSelf->SW9 = VL_RAND_RESET_I(1);
    vlSelf->LD1 = VL_RAND_RESET_I(1);
    vlSelf->LD0 = VL_RAND_RESET_I(1);
    vlSelf->Y = VL_RAND_RESET_I(2);
    vlSelf->X0 = VL_RAND_RESET_I(2);
    vlSelf->X1 = VL_RAND_RESET_I(2);
    vlSelf->X2 = VL_RAND_RESET_I(2);
    vlSelf->X3 = VL_RAND_RESET_I(2);
    vlSelf->F = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
