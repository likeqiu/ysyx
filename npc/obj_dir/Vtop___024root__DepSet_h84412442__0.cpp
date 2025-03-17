// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("clk: %b, ps2_clk: %b, ps2_data: %b, date: %b, ready: %b\n",
                  1,vlSelf->clk,1,(IData)(vlSelf->ps2_clk),
                  1,vlSelf->ps2_date,8,(IData)(vlSelf->date),
                  1,vlSelf->ready);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_hb1f3222a_0;
extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h228bbf13_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vdly__top__DOT__ps2_clk_sync;
    __Vdly__top__DOT__ps2_clk_sync = 0;
    CData/*3:0*/ __Vdly__top__DOT__count;
    __Vdly__top__DOT__count = 0;
    CData/*3:0*/ __Vdly__top__DOT__w_ptr;
    __Vdly__top__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__r_ptr;
    __Vdly__top__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*0:0*/ __Vdly__overflow;
    __Vdly__overflow = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__fifo__v0;
    __Vdlyvval__top__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__fifo__v0;
    __Vdlyvset__top__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__ps2_clk_sync = vlSelf->top__DOT__ps2_clk_sync;
    __Vdly__overflow = vlSelf->overflow;
    __Vdly__top__DOT__w_ptr = vlSelf->top__DOT__w_ptr;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__ready = vlSelf->ready;
    __Vdly__top__DOT__r_ptr = vlSelf->top__DOT__r_ptr;
    __Vdlyvset__top__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__ps2_clk_sync = ((6U & (IData)(vlSelf->top__DOT__ps2_clk_sync)) 
                                      | (IData)(vlSelf->ps2_clk));
    if (vlSelf->clrk) {
        __Vdly__top__DOT__count = 0U;
        __Vdly__top__DOT__w_ptr = 0U;
        __Vdly__top__DOT__r_ptr = 0U;
        __Vdly__ready = 0U;
        __Vdly__overflow = 0U;
    } else {
        if (vlSelf->ready) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->nextdate_n))))) {
                __Vdly__top__DOT__r_ptr = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__r_ptr)));
                VL_WRITEF("receive %x\n",8,vlSelf->date);
                if (((IData)(vlSelf->top__DOT__w_ptr) 
                     == (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__r_ptr))))) {
                    __Vdly__ready = 0U;
                }
            }
        }
        if ((IData)((2U == (3U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__count))) {
                if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->top__DOT__buffer)) 
                                        & (~ (IData)(vlSelf->ps2_date))) 
                                       & VL_REDXOR_32(
                                                      (0x1ffU 
                                                       & ((IData)(vlSelf->top__DOT__buffer) 
                                                          >> 1U))))))) {
                    VL_WRITEF("receive %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__buffer) 
                                                   >> 1U)));
                    __Vdlyvval__top__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__fifo__v0 
                        = (7U & (IData)(vlSelf->top__DOT__w_ptr));
                    __Vdly__ready = 1U;
                    __Vdly__top__DOT__w_ptr = (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__w_ptr)));
                    __Vdly__overflow = ((IData)(vlSelf->overflow) 
                                        | ((IData)(vlSelf->top__DOT__r_ptr) 
                                           == (0xfU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__count = 0U;
            } else {
                vlSelf->top__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_date;
                if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__count)))) {
                    vlSelf->top__DOT__buffer = (((~ 
                                                  ((IData)(1U) 
                                                   << (IData)(vlSelf->top__DOT__count))) 
                                                 & (IData)(vlSelf->top__DOT__buffer)) 
                                                | (0x3ffU 
                                                   & ((IData)(vlSelf->top__DOT____Vlvbound_h1a91ade8__0) 
                                                      << (IData)(vlSelf->top__DOT__count))));
                }
                __Vdly__top__DOT__count = (0xfU & ((IData)(1U) 
                                                   + (IData)(vlSelf->top__DOT__count)));
            }
        }
    }
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->top__DOT__w_ptr = __Vdly__top__DOT__w_ptr;
    vlSelf->overflow = __Vdly__overflow;
    vlSelf->top__DOT__ps2_clk_sync = __Vdly__top__DOT__ps2_clk_sync;
    vlSelf->ready = __Vdly__ready;
    vlSelf->top__DOT__r_ptr = __Vdly__top__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__fifo__v0) {
        vlSelf->top__DOT__fifo[__Vdlyvdim0__top__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__fifo__v0;
    }
    vlSelf->date = vlSelf->top__DOT__fifo[(7U & (IData)(vlSelf->top__DOT__r_ptr))];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("clk: %b, ps2_clk: %b, ps2_data: %b, date: %b, ready: %b\n",
                  1,vlSelf->clk,1,(IData)(vlSelf->ps2_clk),
                  1,vlSelf->ps2_date,8,(IData)(vlSelf->date),
                  1,vlSelf->ready);
    }
    __Vtableidx1 = (0xfU & (IData)(vlSelf->date));
    vlSelf->seg0 = Vtop__ConstPool__TABLE_hb1f3222a_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->date) >> 4U));
    vlSelf->seg1 = Vtop__ConstPool__TABLE_hb1f3222a_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & VL_MODDIV_III(32, (0xfU 
                                              & ((IData)(0xfU) 
                                                 + (IData)(vlSelf->date))), (IData)(0xaU)));
    vlSelf->seg2 = Vtop__ConstPool__TABLE_h228bbf13_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & VL_DIV_III(32, (0xfU & (
                                                   ((IData)(0x2fU) 
                                                    + (IData)(vlSelf->date)) 
                                                   >> 4U)), (IData)(0xaU)));
    vlSelf->seg3 = Vtop__ConstPool__TABLE_h228bbf13_0
        [__Vtableidx4];
}
