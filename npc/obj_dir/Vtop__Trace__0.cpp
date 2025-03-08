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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),2);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+14,(vlSelf->SW0));
    bufp->chgBit(oldp+15,(vlSelf->SW1));
    bufp->chgBit(oldp+16,(vlSelf->SW2));
    bufp->chgBit(oldp+17,(vlSelf->SW3));
    bufp->chgBit(oldp+18,(vlSelf->SW4));
    bufp->chgBit(oldp+19,(vlSelf->SW5));
    bufp->chgBit(oldp+20,(vlSelf->SW6));
    bufp->chgBit(oldp+21,(vlSelf->SW7));
    bufp->chgBit(oldp+22,(vlSelf->SW8));
    bufp->chgBit(oldp+23,(vlSelf->SW9));
    bufp->chgBit(oldp+24,(vlSelf->LD1));
    bufp->chgBit(oldp+25,(vlSelf->LD0));
    bufp->chgCData(oldp+26,(vlSelf->Y),2);
    bufp->chgCData(oldp+27,(vlSelf->X0),2);
    bufp->chgCData(oldp+28,(vlSelf->X1),2);
    bufp->chgCData(oldp+29,(vlSelf->X2),2);
    bufp->chgCData(oldp+30,(vlSelf->X3),2);
    bufp->chgCData(oldp+31,(vlSelf->F),2);
    bufp->chgSData(oldp+32,((0x48cU | (((IData)(vlSelf->X0) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->X1) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->X2) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->X3)))))),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
