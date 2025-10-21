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
    VlWide<5>/*159:0*/ __Vtemp_hf5e3f678__0;
    VlWide<10>/*319:0*/ __Vtemp_he5eb606e__0;
    VlWide<4>/*127:0*/ __Vtemp_h09ea840d__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__next_pc),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__memory__DOT__ifu_inst),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__rs2_data),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__imm),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__result),32);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__rd_addr_idu),5);
        bufp->chgBit(oldp+23,(((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                               | ((0x67U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                  | ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                     | ((0x13U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                        | ((0x33U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                           | (0x73U 
                                              == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)))))))));
        bufp->chgBit(oldp+24,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                               & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                  | ((0x67U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                     | ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                        | ((0x13U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                           | ((0x33U 
                                               == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                              | (0x73U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode))))))))));
        bufp->chgCData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode),7);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__funct3_idu),3);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__funct7_idu),7);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_25040109_top__DOT____Vcellinp__regfile__raddr1),5);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040109_top__DOT__inst_invalid));
        bufp->chgSData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12),12);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu),32);
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu));
        bufp->chgBit(oldp+34,(vlSelf->ysyx_25040109_top__DOT__is_load));
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25040109_top__DOT__is_store));
        bufp->chgIData(oldp+36,((((IData)(vlSelf->ysyx_25040109_top__DOT__lsu__DOT__is_load_op) 
                                  & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)))
                                  ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                      ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)))
                                      : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                          ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                              ? 0U : vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)
                                          : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)))))
                                  : 0U)),32);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__lsu_mem_wstrb),2);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data),32);
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__is_ecall));
        bufp->chgBit(oldp+40,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)) 
                               & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                                  & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                     | ((0x67U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                        | ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                           | ((0x13U 
                                               == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                              | ((0x33U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                                                 | (0x73U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)))))))))));
        bufp->chgBit(oldp+41,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__is_store))));
        bufp->chgSData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr),12);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__final_csr_wdata),32);
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__final_csr_we));
        bufp->chgIData(oldp+45,(((IData)(vlSelf->ysyx_25040109_top__DOT__is_load)
                                  ? (((IData)(vlSelf->ysyx_25040109_top__DOT__lsu__DOT__is_load_op) 
                                      & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)))
                                      ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                          ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                               ? (0xffffU 
                                                  & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)
                                               : (0xffU 
                                                  & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)))
                                          : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                                  ? 0U
                                                  : vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_data)))))
                                      : 0U) : vlSelf->ysyx_25040109_top__DOT__result)),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out),32);
        bufp->chgQData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp),64);
        bufp->chgCData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount),5);
        bufp->chgBit(oldp+52,((0x73U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode))));
        bufp->chgBit(oldp+53,(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))));
        bufp->chgBit(oldp+54,(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))));
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+56,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
        bufp->chgBit(oldp+57,(((0x63U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                   & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                      == vlSelf->ysyx_25040109_top__DOT__rs2_data)) 
                                  | (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                      & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                         != vlSelf->ysyx_25040109_top__DOT__rs2_data)) 
                                     | (((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                         & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data)) 
                                        | (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                            & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data)) 
                                           | (((6U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                               & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                  < vlSelf->ysyx_25040109_top__DOT__rs2_data)) 
                                              | ((7U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                 & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                    >= vlSelf->ysyx_25040109_top__DOT__rs2_data))))))))));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
        __Vtemp_hf5e3f678__0[0U] = (IData)((0x2300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))));
        __Vtemp_hf5e3f678__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__imm 
                                     << 7U) | (IData)(
                                                      ((0x2300000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_hf5e3f678__0[2U] = (0x180U | ((vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                               << 0xeU) 
                                              | (vlSelf->ysyx_25040109_top__DOT__imm 
                                                 >> 0x19U)));
        __Vtemp_hf5e3f678__0[3U] = (0x18c000U | ((vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                                  << 0x15U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                                    >> 0x12U)));
        __Vtemp_hf5e3f678__0[4U] = (0x6600000U | (vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                                  >> 0xbU));
        bufp->chgWData(oldp+60,(__Vtemp_hf5e3f678__0),156);
        bufp->chgQData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i),12);
        bufp->chgIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u),20);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+84,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+85,((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u 
                                 << 0xcU)),32);
        bufp->chgIData(oldp+86,((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                  << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                               << 1U))),32);
        bufp->chgIData(oldp+87,((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                  << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+88,((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                  << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                              << 1U))),32);
        bufp->chgBit(oldp+89,((0x37U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode))));
        bufp->chgBit(oldp+90,((0x17U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode))));
        bufp->chgBit(oldp+91,((0x6fU == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode))));
        bufp->chgBit(oldp+92,(((0x67U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)))));
        bufp->chgBit(oldp+93,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                                  | (IData)(vlSelf->__VdfgTmp_h9da331bc__0)))));
        bufp->chgBit(oldp+94,(((0x23U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0))));
        bufp->chgBit(oldp+95,(((0x63U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                  | ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                     | ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                        | ((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                           | (7U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)))))))));
        bufp->chgBit(oldp+96,(((0x13U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                  | ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                     | ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                        | ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                           | ((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                              | ((7U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                       | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0))))))))))));
        bufp->chgBit(oldp+97,(((0x33U == (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__opcode)) 
                               & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                   & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                  | (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                      & (0x20U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                        | (((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                            & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                           | (((3U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                               & (0U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                              | (((4U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                                       | (((6U 
                                                            == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                           & (0U 
                                                              == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                                          | (((7U 
                                                               == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                              & (0U 
                                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))) 
                                                             | (((0U 
                                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                                 | ((1U 
                                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                                    | ((4U 
                                                                        == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                                       | ((5U 
                                                                           == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                                          | ((6U 
                                                                              == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu)) 
                                                                             | (7U 
                                                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__funct3_idu))))))) 
                                                                & (1U 
                                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__funct7_idu))))))))))))))));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system));
        __Vtemp_he5eb606e__0[0U] = (IData)((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))));
        __Vtemp_he5eb606e__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                       << 0x1cU) | 
                                      (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                       << 8U))) | (IData)(
                                                          ((0x6300000000ULL 
                                                            | (QData)((IData)(
                                                                              (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                                << 1U))))) 
                                                           >> 0x20U)));
        __Vtemp_he5eb606e__0[2U] = (0x3780U | ((0xffffc000U 
                                                & (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                      << 0xeU))) 
                                               | (0x7fU 
                                                  & (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                      >> 4U) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                        >> 0x18U)))));
        __Vtemp_he5eb606e__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                 << 0x15U) 
                                                | (0x3fffU 
                                                   & ((0x3fffU 
                                                       & ((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                                          >> 6U)) 
                                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                         >> 0x12U)))));
        __Vtemp_he5eb606e__0[4U] = (0xce00000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                   << 0x1cU) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                     >> 0xbU)));
        __Vtemp_he5eb606e__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                   >> 4U));
        __Vtemp_he5eb606e__0[6U] = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                    << 3U);
        __Vtemp_he5eb606e__0[7U] = (0x98U | ((0xfffffc00U 
                                              & (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u 
                                                 << 0x16U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                >> 0x1dU)));
        __Vtemp_he5eb606e__0[8U] = (0xdc00U | ((0xfffe0000U 
                                                & (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u 
                                                   << 0x1dU)) 
                                               | (0x3ffU 
                                                  & (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u 
                                                     >> 0xaU))));
        __Vtemp_he5eb606e__0[9U] = (0x2e0000U | (0x1ffffU 
                                                 & (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_u 
                                                    >> 3U)));
        bufp->chgWData(oldp+99,(__Vtemp_he5eb606e__0),312);
        bufp->chgQData(oldp+109,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+113,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+117,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+119,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+121,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+123,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+125,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+126,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+129,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+130,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+133,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+134,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+135,(vlSelf->ysyx_25040109_top__DOT__lsu__DOT__is_load_op));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_25040109_top__DOT__lsu__DOT__is_store_op));
        bufp->chgBit(oldp+137,(vlSelf->ysyx_25040109_top__DOT____Vcellinp__memory__dsu_valid));
        bufp->chgBit(oldp+138,(vlSelf->ysyx_25040109_top__DOT__memory__DOT__dsu_addr_valid));
        bufp->chgCData(oldp+139,(vlSelf->ysyx_25040109_top__DOT____Vcellinp__regfile__raddr2),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc),32);
        bufp->chgIData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec),32);
        bufp->chgBit(oldp+142,(vlSelf->ysyx_25040109_top__DOT__trap_state));
        bufp->chgBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)))));
        bufp->chgIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__pc_val_reg),32);
        bufp->chgIData(oldp+145,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__pc_val_reg)),32);
        __Vtemp_h09ea840d__0[0U] = vlSelf->ysyx_25040109_top__DOT__pc_val_reg;
        __Vtemp_h09ea840d__0[1U] = 0x6fU;
        __Vtemp_h09ea840d__0[2U] = (0x1b80U | (vlSelf->ysyx_25040109_top__DOT__pc_val_reg 
                                               << 0xeU));
        __Vtemp_h09ea840d__0[3U] = (0x5c000U | (vlSelf->ysyx_25040109_top__DOT__pc_val_reg 
                                                >> 0x12U));
        bufp->chgWData(oldp+146,(__Vtemp_h09ea840d__0),117);
        bufp->chgQData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgBit(oldp+159,(vlSelf->ysyx_25040109_top__DOT__memory__DOT__ifu_addr_valid));
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mstatus),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mcause),32);
    }
    bufp->chgBit(oldp+194,(vlSelf->clk));
    bufp->chgBit(oldp+195,(vlSelf->rst));
    bufp->chgIData(oldp+196,(vlSelf->p_count_number),32);
    bufp->chgIData(oldp+197,(vlSelf->inst),32);
    bufp->chgIData(oldp+198,(vlSelf->pc),32);
    bufp->chgIData(oldp+199,(vlSelf->a0_out),32);
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
