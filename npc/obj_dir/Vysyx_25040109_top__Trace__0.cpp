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
    VlWide<4>/*127:0*/ __Vtemp_h18725beb__0;
    VlWide<5>/*159:0*/ __Vtemp_h78e5326e__0;
    VlWide<10>/*319:0*/ __Vtemp_hcccdb7e8__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+16,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                                  ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc
                                  : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch)),32);
        bufp->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
        bufp->chgBit(oldp+19,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
        bufp->chgBit(oldp+20,(vlSelf->ysyx_25040109_top__DOT__dmem_ren));
        bufp->chgIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
        bufp->chgIData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__dmem_wlen),3);
        bufp->chgBit(oldp+25,(vlSelf->ysyx_25040109_top__DOT__dmem_wen));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_25040109_top__DOT__dmem_wready));
        bufp->chgIData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
        bufp->chgIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
        bufp->chgCData(oldp+35,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+36,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 7U))),5);
        bufp->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->__VdfgTmp_h52f553fe__0)))));
        bufp->chgSData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr),12);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
        bufp->chgIData(oldp+46,(((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                   | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done))
                                  ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                      ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))
                                      : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                          ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                              ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                          : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata))
                                              : (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))))
                                  : 0U)),32);
        bufp->chgBit(oldp+47,(((IData)(vlSelf->__VdfgTmp_h52f553fe__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched))));
        bufp->chgBit(oldp+48,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                               & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)))));
        bufp->chgBit(oldp+49,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                               | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid));
        bufp->chgIData(oldp+51,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
                                  ? ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                       | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                                      | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done))
                                      ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                          ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? (0xffffU 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                               : (0xffU 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))
                                          : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                              ? ((1U 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                  ? 0U
                                                  : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                              : ((1U 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))))
                                      : 0U) : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result)),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
        bufp->chgSData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
        bufp->chgBit(oldp+63,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid)))));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
        bufp->chgQData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount),5);
        bufp->chgBit(oldp+74,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                               & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))));
        bufp->chgIData(oldp+76,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
        bufp->chgIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+78,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                                + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data))),32);
        __Vtemp_h18725beb__0[0U] = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
        __Vtemp_h18725beb__0[1U] = 0x6fU;
        __Vtemp_h18725beb__0[2U] = (0x1b80U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe 
                                               << 0xeU));
        __Vtemp_h18725beb__0[3U] = (0x5c000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe 
                                                >> 0x12U));
        bufp->chgWData(oldp+79,(__Vtemp_h18725beb__0),117);
        bufp->chgQData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
        __Vtemp_h78e5326e__0[0U] = (IData)((0x2300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm))));
        __Vtemp_h78e5326e__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                     << 7U) | (IData)(
                                                      ((0x2300000000ULL 
                                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm))) 
                                                       >> 0x20U)));
        __Vtemp_h78e5326e__0[2U] = (0x180U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                               << 0xeU) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                                 >> 0x19U)));
        __Vtemp_h78e5326e__0[3U] = (0x18c000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                                  << 0x15U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                                    >> 0x12U)));
        __Vtemp_h78e5326e__0[4U] = (0x6600000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
                                                  >> 0xbU));
        bufp->chgWData(oldp+94,(__Vtemp_h78e5326e__0),156);
        bufp->chgQData(oldp+99,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+105,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+113,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+114,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+116,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+117,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+119,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
        bufp->chgIData(oldp+120,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                << 1U))),32);
        bufp->chgIData(oldp+121,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+122,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                               << 1U))),32);
        bufp->chgBit(oldp+123,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
        __Vtemp_hcccdb7e8__0[0U] = (IData)((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))));
        __Vtemp_hcccdb7e8__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x1fU))) 
                                       << 0x1cU) | 
                                      (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                       << 8U))) | (IData)(
                                                          ((0x6300000000ULL 
                                                            | (QData)((IData)(
                                                                              (((- (IData)(
                                                                                (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                                >> 0x1fU))) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                                                << 1U))))) 
                                                           >> 0x20U)));
        __Vtemp_hcccdb7e8__0[2U] = (0x3780U | ((0xffffc000U 
                                                & (((- (IData)(
                                                               (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                >> 0x1fU))) 
                                                    << 0x1aU) 
                                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                      << 0xeU))) 
                                               | (0x7fU 
                                                  & (((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                  >> 0x1fU))) 
                                                      >> 4U) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                        >> 0x18U)))));
        __Vtemp_hcccdb7e8__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                 << 0x15U) 
                                                | (0x3fffU 
                                                   & ((0x3fffU 
                                                       & ((- (IData)(
                                                                     (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                      >> 0x1fU))) 
                                                          >> 6U)) 
                                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                         >> 0x12U)))));
        __Vtemp_hcccdb7e8__0[4U] = (0xce00000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                   << 0x1cU) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                     >> 0xbU)));
        __Vtemp_hcccdb7e8__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                   >> 4U));
        __Vtemp_hcccdb7e8__0[6U] = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                    << 3U);
        __Vtemp_hcccdb7e8__0[7U] = (0x98U | ((0xffc00000U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 << 0xaU)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                >> 0x1dU)));
        __Vtemp_hcccdb7e8__0[8U] = (0xdc00U | ((0xe0000000U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   << 0x11U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x16U)));
        __Vtemp_hcccdb7e8__0[9U] = (0x2e0000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                 >> 0xfU));
        bufp->chgWData(oldp+125,(__Vtemp_hcccdb7e8__0),312);
        bufp->chgQData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),2);
        bufp->chgIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
        bufp->chgCData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
        bufp->chgCData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
        bufp->chgBit(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
        bufp->chgBit(oldp+170,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wen) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready))));
        bufp->chgIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata),32);
        bufp->chgCData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
        bufp->chgBit(oldp+207,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy));
        bufp->chgCData(oldp+208,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt),2);
        bufp->chgBit(oldp+209,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy));
        bufp->chgCData(oldp+210,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt),2);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf),32);
    }
    bufp->chgBit(oldp+213,(vlSelf->clk));
    bufp->chgBit(oldp+214,(vlSelf->rst));
    bufp->chgIData(oldp+215,(vlSelf->p_count_number),32);
    bufp->chgIData(oldp+216,(vlSelf->inst),32);
    bufp->chgIData(oldp+217,(vlSelf->pc),32);
    bufp->chgIData(oldp+218,(vlSelf->a0_out),32);
    bufp->chgBit(oldp+219,(vlSelf->inst_wb_complete));
    bufp->chgBit(oldp+220,(vlSelf->is_load_out));
    bufp->chgBit(oldp+221,(vlSelf->is_store_out));
    bufp->chgBit(oldp+222,(vlSelf->is_ecall_out));
    bufp->chgCData(oldp+223,(vlSelf->opcode_out),7);
    bufp->chgIData(oldp+224,(vlSelf->dmem_raddr_out),32);
    bufp->chgIData(oldp+225,(vlSelf->dmem_waddr_out),32);
    bufp->chgBit(oldp+226,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                            | ((0x67U == (IData)(vlSelf->opcode_out)) 
                               | ((3U == (IData)(vlSelf->opcode_out)) 
                                  | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                     | ((0x33U == (IData)(vlSelf->opcode_out)) 
                                        | (0x73U == (IData)(vlSelf->opcode_out)))))))));
    bufp->chgBit(oldp+227,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                            & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                   | ((3U == (IData)(vlSelf->opcode_out)) 
                                      | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                         | ((0x33U 
                                             == (IData)(vlSelf->opcode_out)) 
                                            | (0x73U 
                                               == (IData)(vlSelf->opcode_out))))))) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->chgBit(oldp+228,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                            & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                               | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                  | ((3U == (IData)(vlSelf->opcode_out)) 
                                     | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                        | ((0x33U == (IData)(vlSelf->opcode_out)) 
                                           | (0x73U 
                                              == (IData)(vlSelf->opcode_out))))))))));
    bufp->chgBit(oldp+229,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                             | ((0x67U == (IData)(vlSelf->opcode_out)) 
                                | ((3U == (IData)(vlSelf->opcode_out)) 
                                   | ((0x13U == (IData)(vlSelf->opcode_out)) 
                                      | ((0x33U == (IData)(vlSelf->opcode_out)) 
                                         | (0x73U == (IData)(vlSelf->opcode_out))))))) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    bufp->chgBit(oldp+230,((0x73U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+231,(((0x63U == (IData)(vlSelf->opcode_out)) 
                            & ((IData)(((0U == (0x7000U 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                               | ((IData)(((0x1000U 
                                            == (0x7000U 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                              != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                  | ((IData)(((0x4000U 
                                               == (0x7000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                              & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                     | ((IData)(((0x5000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                 & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                        | ((IData)(
                                                   ((0x6000U 
                                                     == 
                                                     (0x7000U 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                       < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                           | (IData)(
                                                     ((0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)) 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                         >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)))))))))));
    bufp->chgBit(oldp+232,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+233,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+234,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+235,((IData)(((0x67U == (IData)(vlSelf->opcode_out)) 
                                    & (0U == (0x7000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))))));
    bufp->chgBit(oldp+236,(((0x63U == (IData)(vlSelf->opcode_out)) 
                            & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                               | ((5U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0xcU))) 
                                  | ((4U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                     | ((6U == (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                        | (7U == (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0xcU))))))))));
    bufp->chgBit(oldp+237,(((0x13U == (IData)(vlSelf->opcode_out)) 
                            & ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             >> 0xcU))) 
                               | ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0xcU))) 
                                  | ((3U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                     | ((4U == (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                        | ((6U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                           | ((7U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0))))))))))));
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
