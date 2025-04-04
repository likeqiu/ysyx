// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+18,"X0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+19,"X1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+20,"X2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"X3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+22,"F",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+16,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"Y",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+18,"X0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+19,"X1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+20,"X2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"X3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+22,"F",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+5,"out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+24,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+5,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+17,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+23,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+24,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+26,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+5,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+17,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+27,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+23,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+24,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+10+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 1,0);
    }
    tracep->declBus(c+14,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+15,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+28,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__i0__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__out),2);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__i0__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__i0__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+15,(vlSelf->top__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+16,(vlSelf->clk));
    bufp->fullCData(oldp+17,(vlSelf->Y),2);
    bufp->fullCData(oldp+18,(vlSelf->X0),2);
    bufp->fullCData(oldp+19,(vlSelf->X1),2);
    bufp->fullCData(oldp+20,(vlSelf->X2),2);
    bufp->fullCData(oldp+21,(vlSelf->X3),2);
    bufp->fullCData(oldp+22,(vlSelf->F),2);
    bufp->fullSData(oldp+23,((0x48cU | (((IData)(vlSelf->X0) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->X1) 
                                          << 8U) | 
                                         (((IData)(vlSelf->X2) 
                                           << 4U) | (IData)(vlSelf->X3)))))),16);
    bufp->fullIData(oldp+24,(4U),32);
    bufp->fullIData(oldp+25,(2U),32);
    bufp->fullIData(oldp+26,(0U),32);
    bufp->fullCData(oldp+27,(0U),2);
    bufp->fullIData(oldp+28,(4U),32);
}
