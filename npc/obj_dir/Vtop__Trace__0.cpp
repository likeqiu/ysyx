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
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__fifo[0]),8);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__fifo[1]),8);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__fifo[2]),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__fifo[3]),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__fifo[4]),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__fifo[5]),8);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__fifo[6]),8);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__fifo[7]),8);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__w_ptr),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__r_ptr),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__count),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__ps2_clk_sync),3);
        bufp->chgBit(oldp+13,((IData)((2U == (3U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))));
    }
    bufp->chgBit(oldp+14,(vlSelf->clk));
    bufp->chgBit(oldp+15,(vlSelf->clrk));
    bufp->chgBit(oldp+16,(vlSelf->nextdate_n));
    bufp->chgBit(oldp+17,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+18,(vlSelf->ps2_date));
    bufp->chgCData(oldp+19,(vlSelf->date),8);
    bufp->chgBit(oldp+20,(vlSelf->ready));
    bufp->chgBit(oldp+21,(vlSelf->overflow));
    bufp->chgCData(oldp+22,(vlSelf->seg0),7);
    bufp->chgCData(oldp+23,(vlSelf->seg1),7);
    bufp->chgCData(oldp+24,(vlSelf->seg2),7);
    bufp->chgCData(oldp+25,(vlSelf->seg3),7);
    bufp->chgCData(oldp+26,((0xfU & (IData)(vlSelf->date))),4);
    bufp->chgCData(oldp+27,((0xfU & ((IData)(vlSelf->date) 
                                     >> 4U))),4);
    bufp->chgCData(oldp+28,((0xffU & ((IData)(0x2fU) 
                                      + (IData)(vlSelf->date)))),8);
    bufp->chgCData(oldp+29,((0xfU & VL_MODDIV_III(4, 
                                                  (0xfU 
                                                   & ((IData)(0xfU) 
                                                      + (IData)(vlSelf->date))), (IData)(0xaU)))),4);
    bufp->chgCData(oldp+30,((0xfU & VL_DIV_III(32, 
                                               (0xfU 
                                                & (((IData)(0x2fU) 
                                                    + (IData)(vlSelf->date)) 
                                                   >> 4U)), (IData)(0xaU)))),4);
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
