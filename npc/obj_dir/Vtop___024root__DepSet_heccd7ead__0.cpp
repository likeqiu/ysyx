// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->X0 = (((IData)(vlSelf->SW3) << 1U) | (IData)(vlSelf->SW2));
    vlSelf->X1 = (((IData)(vlSelf->SW5) << 1U) | (IData)(vlSelf->SW4));
    vlSelf->X2 = (((IData)(vlSelf->SW7) << 1U) | (IData)(vlSelf->SW6));
    vlSelf->X3 = (((IData)(vlSelf->SW9) << 1U) | (IData)(vlSelf->SW8));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (((IData)(vlSelf->SW9) << 1U) | (IData)(vlSelf->SW8));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (((IData)(vlSelf->SW7) << 1U) | (IData)(vlSelf->SW6));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (((IData)(vlSelf->SW5) << 1U) | (IData)(vlSelf->SW4));
    vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (((IData)(vlSelf->SW3) << 1U) | (IData)(vlSelf->SW2));
    vlSelf->Y = (((IData)(vlSelf->SW1) << 1U) | (IData)(vlSelf->SW0));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = vlSelf->X0;
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (4U | (IData)(vlSelf->X1));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (8U | (IData)(vlSelf->X2));
    vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xcU | (IData)(vlSelf->X3));
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

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->SW0 & 0xfeU))) {
        Verilated::overWidthError("SW0");}
    if (VL_UNLIKELY((vlSelf->SW1 & 0xfeU))) {
        Verilated::overWidthError("SW1");}
    if (VL_UNLIKELY((vlSelf->SW2 & 0xfeU))) {
        Verilated::overWidthError("SW2");}
    if (VL_UNLIKELY((vlSelf->SW3 & 0xfeU))) {
        Verilated::overWidthError("SW3");}
    if (VL_UNLIKELY((vlSelf->SW4 & 0xfeU))) {
        Verilated::overWidthError("SW4");}
    if (VL_UNLIKELY((vlSelf->SW5 & 0xfeU))) {
        Verilated::overWidthError("SW5");}
    if (VL_UNLIKELY((vlSelf->SW6 & 0xfeU))) {
        Verilated::overWidthError("SW6");}
    if (VL_UNLIKELY((vlSelf->SW7 & 0xfeU))) {
        Verilated::overWidthError("SW7");}
    if (VL_UNLIKELY((vlSelf->SW8 & 0xfeU))) {
        Verilated::overWidthError("SW8");}
    if (VL_UNLIKELY((vlSelf->SW9 & 0xfeU))) {
        Verilated::overWidthError("SW9");}
}
#endif  // VL_DEBUG
