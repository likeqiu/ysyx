// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__buffer),10);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__fifo),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__w_ptr),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__r_ptr),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__count),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ps2_clk_sync),3);
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__last_buffer),10);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__button_times),8);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__release_detected));
        bufp->chgBit(oldp+9,((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))));
        bufp->chgCData(oldp+10,((0xfU & (IData)(vlSelf->top__DOT__fifo))),4);
        bufp->chgCData(oldp+11,((0xfU & ((IData)(vlSelf->top__DOT__fifo) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__ascll),8);
        bufp->chgCData(oldp+13,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__ascll), (IData)(0xaU)))),8);
        bufp->chgCData(oldp+14,((0xffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__ascll), (IData)(0xaU)))),8);
        bufp->chgCData(oldp+15,((0xffU & VL_MODDIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)))),8);
        bufp->chgCData(oldp+16,((0xffU & VL_DIV_III(32, (IData)(vlSelf->top__DOT__button_times), (IData)(0xaU)))),8);
    }
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->clrk));
    bufp->chgBit(oldp+19,(vlSelf->nextdate_n));
    bufp->chgBit(oldp+20,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+21,(vlSelf->ps2_date));
    bufp->chgCData(oldp+22,(vlSelf->date),8);
    bufp->chgBit(oldp+23,(vlSelf->ready));
    bufp->chgBit(oldp+24,(vlSelf->overflow));
    bufp->chgCData(oldp+25,(vlSelf->seg0),7);
    bufp->chgCData(oldp+26,(vlSelf->seg1),7);
    bufp->chgCData(oldp+27,(vlSelf->seg2),7);
    bufp->chgCData(oldp+28,(vlSelf->seg3),7);
    bufp->chgCData(oldp+29,(vlSelf->seg4),7);
    bufp->chgCData(oldp+30,(vlSelf->seg5),7);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
