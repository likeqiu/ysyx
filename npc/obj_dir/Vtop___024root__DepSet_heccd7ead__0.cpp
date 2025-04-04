// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h13ff2797_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->compare_out = 0U;
    vlSelf->result = 0U;
    vlSelf->zero = 0U;
    vlSelf->cin = 0U;
    vlSelf->overflow = 0U;
    if ((4U & (IData)(vlSelf->select))) {
        if ((2U & (IData)(vlSelf->select))) {
            if ((1U & (IData)(vlSelf->select))) {
                vlSelf->compare_out = ((IData)(vlSelf->a) 
                                       == (IData)(vlSelf->b));
            } else if (((IData)(vlSelf->a) > (IData)(vlSelf->b))) {
                vlSelf->compare_out = 1U;
            } else if (((IData)(vlSelf->a) < (IData)(vlSelf->b))) {
                vlSelf->compare_out = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->select) >> 1U)))) {
            vlSelf->result = ((1U & (IData)(vlSelf->select))
                               ? ((IData)(vlSelf->a) 
                                  ^ (IData)(vlSelf->b))
                               : ((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b)));
        }
    } else if ((2U & (IData)(vlSelf->select))) {
        vlSelf->result = (0xfU & ((1U & (IData)(vlSelf->select))
                                   ? ((IData)(vlSelf->a) 
                                      & (IData)(vlSelf->b))
                                   : (~ (IData)(vlSelf->a))));
    } else if ((1U & (IData)(vlSelf->select))) {
        vlSelf->result = (0xfU & ((IData)(vlSelf->a) 
                                  - (IData)(vlSelf->b)));
        vlSelf->overflow = (((1U & ((IData)(vlSelf->a) 
                                    >> 3U)) != (1U 
                                                & ((IData)(vlSelf->b) 
                                                   >> 3U))) 
                            & (VL_LTS_III(32, 7U, VL_EXTENDS_II(32,4, (IData)(vlSelf->result))) 
                               | VL_GTS_III(32, 0xfffffff8U, 
                                            VL_EXTENDS_II(32,4, (IData)(vlSelf->result)))));
        vlSelf->cin = vlSelf->overflow;
        vlSelf->zero = (0U == (IData)(vlSelf->result));
    } else {
        vlSelf->result = (0xfU & ((IData)(vlSelf->a) 
                                  + (IData)(vlSelf->b)));
        if ((1U & ((~ ((IData)(vlSelf->a) >> 3U)) & 
                   (~ ((IData)(vlSelf->b) >> 3U))))) {
            vlSelf->overflow = ((1U & ((IData)(vlSelf->a) 
                                       >> 3U)) != (1U 
                                                   & ((IData)(vlSelf->result) 
                                                      >> 3U)));
        } else if ((8U & ((IData)(vlSelf->a) & (IData)(vlSelf->b)))) {
            if (VL_GTS_III(32, 0xfffffff8U, (VL_EXTENDS_II(32,4, (IData)(vlSelf->a)) 
                                             + VL_EXTENDS_II(32,4, (IData)(vlSelf->b))))) {
                vlSelf->overflow = 1U;
            }
        } else {
            vlSelf->overflow = 0U;
        }
        vlSelf->cin = vlSelf->overflow;
        vlSelf->zero = (0U == (IData)(vlSelf->result));
    }
    __Vtableidx1 = vlSelf->result;
    vlSelf->seg0 = Vtop__ConstPool__TABLE_h13ff2797_0
        [__Vtableidx1];
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

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
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
                    VL_FATAL_MT("vsrc/ALU/top.v", 1, "", "Active region did not converge.");
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
                VL_FATAL_MT("vsrc/ALU/top.v", 1, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->select & 0xf8U))) {
        Verilated::overWidthError("select");}
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
