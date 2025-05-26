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
    VlWide<9>/*287:0*/ __Vtemp_h7720c87c__0;
    VlWide<4>/*127:0*/ __Vtemp_hfaf36e9a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b33a6c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc92765bb__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
        bufp->chgSData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgSData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[3]),11);
        bufp->chgSData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[4]),11);
        bufp->chgSData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[5]),11);
        bufp->chgSData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[0]),10);
        bufp->chgSData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[1]),10);
        bufp->chgSData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[2]),10);
        bufp->chgSData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[3]),10);
        bufp->chgSData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[4]),10);
        bufp->chgSData(oldp+36,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[5]),10);
        bufp->chgBit(oldp+37,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[5]));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__debug_action),4);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__next_pc),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__inst_ifu),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__rs2_data),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__imm),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__result),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__mem_data),32);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                          >> 7U))),5);
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu));
        bufp->chgCData(oldp+56,((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)),7);
        bufp->chgCData(oldp+57,((7U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+58,((IData)((0x2023U == (0x707fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
        bufp->chgBit(oldp+59,((IData)((0x2003U == (0x707fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
        bufp->chgIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__mem_addr),32);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25040109_top__DOT__addr_valid));
        bufp->chgBit(oldp+62,((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
        bufp->chgBit(oldp+63,((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
        bufp->chgBit(oldp+64,((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
        bufp->chgBit(oldp+65,((IData)((0x67U == (0x707fU 
                                                 & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
        bufp->chgBit(oldp+66,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
        bufp->chgBit(oldp+67,((IData)((0x63U == (0x707fU 
                                                 & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+69,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                                 + vlSelf->ysyx_25040109_top__DOT__imm)),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+71,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr)),32);
        bufp->chgBit(oldp+72,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken));
        bufp->chgQData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+83,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+84,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+86,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+88,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+94,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+97,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+99,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+106,((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+107,((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+109,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+112,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)),32);
        bufp->chgIData(oldp+113,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                               >> 0x1fU))) 
                                   << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                << 1U))),32);
        bufp->chgIData(oldp+114,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+115,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                               << 1U))),32);
        __Vtemp_h7720c87c__0[0U] = (IData)((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))));
        __Vtemp_h7720c87c__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                   >> 0x1fU))) 
                                       << 0x1cU) | 
                                      (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                       << 8U))) | (IData)(
                                                          ((0x6300000000ULL 
                                                            | (QData)((IData)(
                                                                              (((- (IData)(
                                                                                (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                                >> 0x1fU))) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                                << 1U))))) 
                                                           >> 0x20U)));
        __Vtemp_h7720c87c__0[2U] = (0x3780U | ((0xffffc000U 
                                                & (((- (IData)(
                                                               (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                >> 0x1fU))) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                      << 0xeU))) 
                                               | (0x7fU 
                                                  & (((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                  >> 0x1fU))) 
                                                      >> 4U) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                        >> 0x18U)))));
        __Vtemp_h7720c87c__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                 << 0x15U) 
                                                | (0x3fffU 
                                                   & ((0x3fffU 
                                                       & ((- (IData)(
                                                                     (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                      >> 0x1fU))) 
                                                          >> 6U)) 
                                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                         >> 0x12U)))));
        __Vtemp_h7720c87c__0[4U] = (0x600000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                  << 0x1cU) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                    >> 0xbU)));
        __Vtemp_h7720c87c__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                   >> 4U));
        __Vtemp_h7720c87c__0[6U] = (1U | (0xffff8000U 
                                          & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                             << 3U)));
        __Vtemp_h7720c87c__0[7U] = (0x1b8U | ((0xffc00000U 
                                               & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                  << 0xaU)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                 >> 0x1dU)));
        __Vtemp_h7720c87c__0[8U] = (0x5c00U | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                               >> 0x16U));
        bufp->chgWData(oldp+116,(__Vtemp_h7720c87c__0),273);
        bufp->chgQData(oldp+125,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+127,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+129,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+131,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+133,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+147,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key),10);
        bufp->chgBit(oldp+149,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+150,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_raw),32);
        bufp->chgCData(oldp+152,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+153,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+187,(vlSelf->clk));
    bufp->chgBit(oldp+188,(vlSelf->rst));
    bufp->chgCData(oldp+189,(vlSelf->debug_cmd),4);
    bufp->chgIData(oldp+190,(vlSelf->debug_addr),32);
    bufp->chgIData(oldp+191,(vlSelf->inst),32);
    bufp->chgIData(oldp+192,(vlSelf->pc),32);
    bufp->chgIData(oldp+193,(vlSelf->a0_out),32);
    bufp->chgBit(oldp+194,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->chgBit(oldp+195,(((0x80000000U <= vlSelf->debug_addr) 
                            & (0x87ffffffU >= vlSelf->debug_addr))));
    bufp->chgIData(oldp+196,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hfaf36e9a__0[0U] = vlSelf->pc;
    __Vtemp_hfaf36e9a__0[1U] = 0x6fU;
    __Vtemp_hfaf36e9a__0[2U] = (0x1b80U | (vlSelf->pc 
                                           << 0xeU));
    __Vtemp_hfaf36e9a__0[3U] = (0x5c000U | (vlSelf->pc 
                                            >> 0x12U));
    bufp->chgWData(oldp+197,(__Vtemp_hfaf36e9a__0),117);
    __Vtemp_h6b33a6c0__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->pc))))));
    __Vtemp_h6b33a6c0__0[1U] = ((0xffffff00U & (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                                << 7U)) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                                : 
                                                               ((IData)(4U) 
                                                                + vlSelf->pc))))) 
                                           >> 0x20U)));
    __Vtemp_h6b33a6c0__0[2U] = (0x3380U | ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                              >> 0x19U)));
    __Vtemp_h6b33a6c0__0[3U] = (0x1bc000U | (vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                             >> 0x12U));
    bufp->chgWData(oldp+201,(__Vtemp_h6b33a6c0__0),117);
    __Vtemp_hc92765bb__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))));
    __Vtemp_hc92765bb__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 7U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))) 
                                                   >> 0x20U)));
    __Vtemp_hc92765bb__0[2U] = (0x3380U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0xeU) 
                                           | (((IData)(4U) 
                                               + vlSelf->pc) 
                                              >> 0x19U)));
    __Vtemp_hc92765bb__0[3U] = (0x1bc000U | (((IData)(4U) 
                                              + vlSelf->pc) 
                                             >> 0x12U));
    bufp->chgWData(oldp+205,(__Vtemp_hc92765bb__0),117);
    bufp->chgBit(oldp+209,(((~ (IData)(vlSelf->rst)) 
                            & ((0x80000000U <= vlSelf->pc) 
                               & (0x87ffffffU >= vlSelf->pc)))));
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
