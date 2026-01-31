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
    VlWide<10>/*319:0*/ __Vtemp_hcccdb7e8__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+9,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_addr_ok));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
        bufp->chgBit(oldp+11,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r));
        bufp->chgBit(oldp+12,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
        bufp->chgBit(oldp+15,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
        bufp->chgCData(oldp+16,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+17,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r));
        bufp->chgBit(oldp+18,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
        bufp->chgBit(oldp+20,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid))));
        bufp->chgBit(oldp+21,((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+22,(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready))));
        bufp->chgBit(oldp+24,(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
        bufp->chgIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
        bufp->chgCData(oldp+26,((0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                          ? ((IData)(1U) 
                                             << (3U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                          : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                              ? ((IData)(3U) 
                                                 << 
                                                 (2U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                  ? 0xfU
                                                  : 0U))))),4);
        bufp->chgBit(oldp+27,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgCData(oldp+28,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+29,(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                      ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
                                               : (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)))
                                  : 0U)),2);
        bufp->chgBit(oldp+30,(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid));
        bufp->chgBit(oldp+31,((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__mem_arvalid));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25040109_top__DOT__mem_arready));
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__mem_araddr),32);
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25040109_top__DOT__mem_rvalid));
        bufp->chgBit(oldp+36,(vlSelf->ysyx_25040109_top__DOT__mem_rready));
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__mem_rdata),32);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__mem_rresp),2);
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__mem_awvalid));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__mem_awready));
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__mem_awaddr),32);
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25040109_top__DOT__mem_wvalid));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25040109_top__DOT__mem_wready));
        bufp->chgIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__mem_wdata),32);
        bufp->chgCData(oldp+45,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? (0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                              ? ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                              : ((1U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                  ? 
                                                 ((IData)(3U) 
                                                  << 
                                                  (2U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                   ? 0xfU
                                                   : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25040109_top__DOT__mem_bvalid));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25040109_top__DOT__mem_bready));
        bufp->chgCData(oldp+48,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                  ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                           ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
                                           : (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)))),2);
        bufp->chgBit(oldp+49,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                               & (0x80U == (vlSelf->ysyx_25040109_top__DOT__mem_araddr 
                                            >> 0x18U)))));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__sram_arready));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__sram_rvalid));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__sram_rdata),32);
        bufp->chgCData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__sram_rresp),2);
        bufp->chgBit(oldp+55,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram))));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__sram_awready));
        bufp->chgBit(oldp+57,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25040109_top__DOT__sram_wready));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_25040109_top__DOT__sram_bvalid));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__sram_bresp),2);
        bufp->chgBit(oldp+62,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                               & (0x10000U == (vlSelf->ysyx_25040109_top__DOT__mem_araddr 
                                               >> 0xcU)))));
        bufp->chgBit(oldp+63,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)))));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__uart_rvalid));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__uart_rdata),32);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__uart_rresp),2);
        bufp->chgBit(oldp+68,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart))));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_25040109_top__DOT__uart_awready));
        bufp->chgBit(oldp+70,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_25040109_top__DOT__uart_wready));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_25040109_top__DOT__uart_bvalid));
        bufp->chgBit(oldp+73,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__uart_bresp),2);
        bufp->chgIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
        bufp->chgIData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
        bufp->chgBit(oldp+80,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending));
        bufp->chgIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
        bufp->chgCData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
        bufp->chgIData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause),32);
        bufp->chgBit(oldp+87,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
        bufp->chgIData(oldp+88,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)
                                  ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp
                                  : vlSelf->ysyx_25040109_top__DOT__imem_rdata)),32);
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
        bufp->chgBit(oldp+91,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+92,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid))));
        bufp->chgCData(oldp+93,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+94,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
        bufp->chgCData(oldp+96,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+97,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 7U))),5);
        bufp->chgBit(oldp+98,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                        & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
        bufp->chgBit(oldp+99,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
        bufp->chgSData(oldp+100,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                                   ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                      >> 0x14U) : 0U)),12);
        bufp->chgCData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
        bufp->chgCData(oldp+102,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
        bufp->chgBit(oldp+103,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
        bufp->chgCData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
        bufp->chgBit(oldp+105,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
        bufp->chgCData(oldp+107,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
        bufp->chgCData(oldp+108,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
        bufp->chgBit(oldp+109,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                                & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+112,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                          | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
        bufp->chgBit(oldp+115,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
        bufp->chgIData(oldp+117,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                   | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                                   ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                                       : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? 0U
                                               : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                           : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                                               : ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                                   : 0U)),32);
        bufp->chgBit(oldp+118,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
        bufp->chgBit(oldp+119,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                                   & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any))))));
        bufp->chgBit(oldp+120,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire))));
        bufp->chgBit(oldp+121,((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+122,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                   | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgBit(oldp+127,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                 & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                    | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))) 
                                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)))));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
        bufp->chgIData(oldp+131,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
                                   ? (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                                       | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                                       ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                                           : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                               ? ((1U 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                   ? 0U
                                                   : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                               : ((1U 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                                                   : 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                                       : 0U) : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result)),32);
        bufp->chgBit(oldp+132,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
        bufp->chgBit(oldp+133,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                      | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgIData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
        bufp->chgIData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
        bufp->chgIData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
        bufp->chgBit(oldp+139,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
        bufp->chgBit(oldp+140,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))))));
        bufp->chgBit(oldp+141,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
        bufp->chgSData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
        bufp->chgBit(oldp+144,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem));
        bufp->chgBit(oldp+145,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load));
        bufp->chgBit(oldp+146,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)))));
        bufp->chgBit(oldp+147,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
        bufp->chgIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
        bufp->chgIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
        bufp->chgBit(oldp+151,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
        bufp->chgBit(oldp+152,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
        bufp->chgIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
        bufp->chgCData(oldp+158,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
        bufp->chgIData(oldp+159,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
        bufp->chgIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+161,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
        bufp->chgBit(oldp+162,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
                                & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                   | (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                          != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                      | (((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                          & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                         | (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                             & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                            | (((6U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                   < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                               | ((7U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                     >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))));
        bufp->chgCData(oldp+163,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+164,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+165,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+170,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
        bufp->chgIData(oldp+171,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                << 1U))),32);
        bufp->chgIData(oldp+172,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+173,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                               << 1U))),32);
        bufp->chgBit(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
        bufp->chgBit(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
        bufp->chgBit(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
        bufp->chgBit(oldp+177,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                & (0x1000U == (0x7000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
        bufp->chgBit(oldp+178,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                & (0x2000U == (0x7000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
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
        bufp->chgWData(oldp+179,(__Vtemp_hcccdb7e8__0),312);
        bufp->chgQData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+214,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+215,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
        bufp->chgIData(oldp+216,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
        bufp->chgBit(oldp+217,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
        bufp->chgBit(oldp+218,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire));
        bufp->chgCData(oldp+219,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),3);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
        bufp->chgCData(oldp+221,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
        bufp->chgCData(oldp+222,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
        bufp->chgCData(oldp+224,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
        bufp->chgBit(oldp+225,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
        bufp->chgBit(oldp+226,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
        bufp->chgBit(oldp+227,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
        bufp->chgBit(oldp+228,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready)))));
        bufp->chgBit(oldp+229,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r) 
                                & ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready)))));
        bufp->chgIData(oldp+231,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                   : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
        bufp->chgCData(oldp+232,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
        bufp->chgCData(oldp+233,((3U & ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                         : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
        bufp->chgCData(oldp+234,((0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                             ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                             : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                           << 3U))),5);
        bufp->chgIData(oldp+235,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
        bufp->chgCData(oldp+236,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp),2);
        bufp->chgCData(oldp+237,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp),2);
        bufp->chgBit(oldp+238,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid) 
                                & (6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+246,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+247,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+248,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+249,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+250,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+251,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+252,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+253,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+254,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+256,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+257,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+260,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+261,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+262,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+263,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+264,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+265,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+266,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+267,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+268,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+269,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+270,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+271,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
        bufp->chgBit(oldp+273,((1U & (~ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                         | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy))))));
        bufp->chgBit(oldp+274,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused));
        bufp->chgCData(oldp+275,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rresp_unused),2);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched),32);
        bufp->chgBit(oldp+277,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid));
        bufp->chgIData(oldp+278,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use),32);
        bufp->chgBit(oldp+279,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                                 & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_rvalid))));
        bufp->chgBit(oldp+280,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire));
        bufp->chgBit(oldp+281,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire));
        bufp->chgBit(oldp+282,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire));
        bufp->chgBit(oldp+283,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                                 & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bvalid))));
        bufp->chgCData(oldp+284,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                   ? (0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                               ? ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                   ? 
                                                  ((IData)(3U) 
                                                   << 
                                                   (2U 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                    ? 0xfU
                                                    : 0U))))
                                   : 0U)),8);
        bufp->chgIData(oldp+285,((vlSelf->ysyx_25040109_top__DOT__mem_wdata 
                                  << (0x18U & (vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use 
                                               << 3U)))),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf),32);
        bufp->chgBit(oldp+287,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_raddr_ok));
        bufp->chgBit(oldp+288,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok));
        bufp->chgBit(oldp+289,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy));
        bufp->chgBit(oldp+290,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy));
        bufp->chgBit(oldp+291,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_busy));
        bufp->chgCData(oldp+292,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay),5);
        bufp->chgCData(oldp+293,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay),5);
        bufp->chgCData(oldp+294,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay),5);
        bufp->chgCData(oldp+295,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay),5);
        bufp->chgCData(oldp+296,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay),5);
        bufp->chgCData(oldp+297,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay_cnt),5);
        bufp->chgCData(oldp+298,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay_cnt),5);
        bufp->chgCData(oldp+299,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay_cnt),5);
        bufp->chgBit(oldp+300,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay))));
        bufp->chgBit(oldp+301,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay))));
        bufp->chgBit(oldp+302,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay))));
        bufp->chgBit(oldp+303,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay))));
        bufp->chgBit(oldp+304,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay))));
        bufp->chgCData(oldp+305,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state),3);
        bufp->chgCData(oldp+306,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state_n),3);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_done));
        bufp->chgBit(oldp+308,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__w_done));
        bufp->chgBit(oldp+309,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid))));
        bufp->chgBit(oldp+310,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire));
        bufp->chgBit(oldp+311,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__r_fire));
        bufp->chgBit(oldp+312,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire));
        bufp->chgBit(oldp+313,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__w_fire));
        bufp->chgBit(oldp+314,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire));
        bufp->chgBit(oldp+315,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen));
        bufp->chgIData(oldp+317,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched),32);
        bufp->chgIData(oldp+318,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awaddr_latched),32);
        bufp->chgBit(oldp+319,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                                   & (0x10000U == (vlSelf->ysyx_25040109_top__DOT__mem_araddr 
                                                   >> 0xcU))))));
        bufp->chgBit(oldp+320,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid))));
        bufp->chgBit(oldp+321,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire));
        bufp->chgBit(oldp+322,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire));
        bufp->chgBit(oldp+323,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid))));
        bufp->chgIData(oldp+324,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire)
                                   ? vlSelf->ysyx_25040109_top__DOT__mem_wdata
                                   : vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched)),32);
        bufp->chgCData(oldp+325,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__state),2);
        bufp->chgCData(oldp+326,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target),2);
        bufp->chgCData(oldp+327,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target),2);
        bufp->chgBit(oldp+328,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err));
        bufp->chgBit(oldp+329,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err));
        bufp->chgBit(oldp+330,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_done));
        bufp->chgBit(oldp+331,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__w_done));
        bufp->chgBit(oldp+332,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid));
        bufp->chgBit(oldp+333,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid));
        bufp->chgBit(oldp+334,((0x10000U == (vlSelf->ysyx_25040109_top__DOT__mem_araddr 
                                             >> 0xcU))));
        bufp->chgBit(oldp+335,((0x80U == (vlSelf->ysyx_25040109_top__DOT__mem_araddr 
                                          >> 0x18U))));
        bufp->chgBit(oldp+336,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart));
        bufp->chgBit(oldp+337,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram));
    }
    bufp->chgBit(oldp+338,(vlSelf->clk));
    bufp->chgBit(oldp+339,(vlSelf->rst));
    bufp->chgIData(oldp+340,(vlSelf->p_count_number),32);
    bufp->chgIData(oldp+341,(vlSelf->inst),32);
    bufp->chgIData(oldp+342,(vlSelf->pc),32);
    bufp->chgIData(oldp+343,(vlSelf->a0_out),32);
    bufp->chgBit(oldp+344,(vlSelf->inst_wb_complete));
    bufp->chgBit(oldp+345,(vlSelf->is_load_out));
    bufp->chgBit(oldp+346,(vlSelf->is_store_out));
    bufp->chgBit(oldp+347,(vlSelf->is_ecall_out));
    bufp->chgCData(oldp+348,(vlSelf->opcode_out),7);
    bufp->chgIData(oldp+349,(vlSelf->dmem_raddr_out),32);
    bufp->chgIData(oldp+350,(vlSelf->dmem_waddr_out),32);
    bufp->chgBit(oldp+351,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+352,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+353,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+354,((0x73U == (IData)(vlSelf->opcode_out))));
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
