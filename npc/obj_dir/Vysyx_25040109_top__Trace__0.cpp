// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040109_top__Syms.h"


void Vysyx_25040109_top___024root__trace_chg_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_25040109_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_25040109_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_25040109_top___024root__trace_chg_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgBit(oldp+33,(vlSelf->rst));
    bufp->chgIData(oldp+34,(vlSelf->inst),32);
    bufp->chgIData(oldp+35,(vlSelf->pc),32);
    bufp->chgIData(oldp+36,(((0x6fU == (0x7fU & vlSelf->inst))
                              ? (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                 + vlSelf->pc) : ((IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                                      + vlSelf->ysyx_25040109_top__DOT__rs1_data))
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc)))),32);
    bufp->chgIData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->chgIData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
    bufp->chgIData(oldp+39,((((0x6fU == (0x7fU & vlSelf->inst)) 
                              | (0x67U == (0x7fU & vlSelf->inst)))
                              ? ((IData)(4U) + vlSelf->pc)
                              : (((0x17U == (0x7fU 
                                             & vlSelf->inst))
                                   ? vlSelf->pc : (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->inst))
                                                    ? 0U
                                                    : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                                 + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b))),32);
    bufp->chgCData(oldp+40,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgBit(oldp+41,(((IData)((0x13U == (0x707fU 
                                              & vlSelf->inst))) 
                           | ((0x17U == (0x7fU & vlSelf->inst)) 
                              | ((0x37U == (0x7fU & vlSelf->inst)) 
                                 | ((0x6fU == (0x7fU 
                                               & vlSelf->inst)) 
                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__is_jalr)))))));
    bufp->chgCData(oldp+42,((0x7fU & vlSelf->inst)),7);
    bufp->chgBit(oldp+43,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__is_jalr));
    bufp->chgIData(oldp+45,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                             + vlSelf->pc)),32);
    bufp->chgIData(oldp+46,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b 
                                            + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgIData(oldp+47,((0x17U == (0x7fU & vlSelf->inst))),32);
    bufp->chgIData(oldp+48,((0x37U == (0x7fU & vlSelf->inst))),32);
    bufp->chgIData(oldp+49,((0x6fU == (0x7fU & vlSelf->inst))),32);
    bufp->chgIData(oldp+50,((0x67U == (0x7fU & vlSelf->inst))),32);
    bufp->chgIData(oldp+51,(((0x17U == (0x7fU & vlSelf->inst))
                              ? vlSelf->pc : ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->inst))
                                               ? 0U
                                               : vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->chgIData(oldp+52,((((0x17U == (0x7fU & vlSelf->inst))
                               ? vlSelf->pc : ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst))
                                                ? 0U
                                                : vlSelf->ysyx_25040109_top__DOT__rs1_data)) 
                             + vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b)),32);
    bufp->chgIData(oldp+53,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+54,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+55,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgSData(oldp+56,((vlSelf->inst >> 0x14U)),12);
    bufp->chgIData(oldp+57,((vlSelf->inst >> 0xcU)),20);
    bufp->chgIData(oldp+58,(((0x80000U & (vlSelf->inst 
                                          >> 0xcU)) 
                             | ((0x7f800U & (vlSelf->inst 
                                             >> 1U)) 
                                | ((0x400U & (vlSelf->inst 
                                              >> 0xaU)) 
                                   | (0x3ffU & (vlSelf->inst 
                                                >> 0x15U)))))),20);
    bufp->chgIData(oldp+59,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->inst 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+60,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+61,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0x15U) | ((0x100000U 
                                            & (vlSelf->inst 
                                               >> 0xbU)) 
                                           | ((0xff000U 
                                               & vlSelf->inst) 
                                              | ((0x800U 
                                                  & (vlSelf->inst 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->inst 
                                                       >> 0x14U))))))),32);
}

void Vysyx_25040109_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
