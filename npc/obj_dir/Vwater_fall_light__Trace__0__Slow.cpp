// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vwater_fall_light__Syms.h"


VL_ATTR_COLD void Vwater_fall_light___024root__trace_init_sub__TOP__0(Vwater_fall_light___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("light ");
    tracep->declBit(c+1,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"led",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+4,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vwater_fall_light___024root__trace_init_top(Vwater_fall_light___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root__trace_init_top\n"); );
    // Body
    Vwater_fall_light___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vwater_fall_light___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vwater_fall_light___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vwater_fall_light___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vwater_fall_light___024root__trace_register(Vwater_fall_light___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vwater_fall_light___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vwater_fall_light___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vwater_fall_light___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vwater_fall_light___024root__trace_full_sub_0(Vwater_fall_light___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vwater_fall_light___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root__trace_full_top_0\n"); );
    // Init
    Vwater_fall_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vwater_fall_light___024root*>(voidSelf);
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vwater_fall_light___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vwater_fall_light___024root__trace_full_sub_0(Vwater_fall_light___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vwater_fall_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwater_fall_light___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullSData(oldp+3,(vlSelf->led),16);
    bufp->fullIData(oldp+4,(vlSelf->light__DOT__count),32);
}
