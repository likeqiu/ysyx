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
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow));
        bufp->chgBit(oldp+11,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
        bufp->chgCData(oldp+15,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25040109_top__DOT__dmem_arvalid));
        bufp->chgBit(oldp+17,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
        bufp->chgBit(oldp+19,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid))));
        bufp->chgBit(oldp+20,((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid));
        bufp->chgBit(oldp+22,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready))));
        bufp->chgBit(oldp+23,(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
        bufp->chgIData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
        bufp->chgCData(oldp+25,((0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
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
        bufp->chgBit(oldp+26,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgCData(oldp+27,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+28,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                      ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bresp)
                                                   : 0U)
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bresp)
                                                    : 3U))))
                                  : 0U)),2);
        bufp->chgBit(oldp+29,(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid));
        bufp->chgBit(oldp+30,((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgCData(oldp+31,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_id_latched)
                                      : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                          ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                              : 0U)
                                          : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched)
                                                  : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__mem_arvalid));
        bufp->chgBit(oldp+33,(vlSelf->ysyx_25040109_top__DOT__mem_arready));
        bufp->chgIData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__mem_araddr),32);
        bufp->chgBit(oldp+35,(vlSelf->ysyx_25040109_top__DOT__mem_rvalid));
        bufp->chgBit(oldp+36,(vlSelf->ysyx_25040109_top__DOT__mem_rready));
        bufp->chgIData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__mem_rdata),32);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_25040109_top__DOT__mem_rresp),2);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused),3);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused),2);
        bufp->chgBit(oldp+41,(vlSelf->ysyx_25040109_top__DOT__mem_awvalid));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_25040109_top__DOT__mem_awready));
        bufp->chgIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused),32);
        bufp->chgCData(oldp+44,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                  ? 1U : 0U)),4);
        bufp->chgBit(oldp+45,(vlSelf->ysyx_25040109_top__DOT__mem_wvalid));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_25040109_top__DOT__mem_wready));
        bufp->chgIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused),32);
        bufp->chgCData(oldp+48,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
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
        bufp->chgCData(oldp+49,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                  ? 2U : 0U)),3);
        bufp->chgCData(oldp+50,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                  ? 1U : 0U)),2);
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__mem_bvalid));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_25040109_top__DOT__mem_bready));
        bufp->chgCData(oldp+53,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                  ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                           ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bresp)
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bresp)
                                                   : 3U))))),2);
        bufp->chgCData(oldp+54,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_id_latched)
                                  : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                      ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                          : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                     ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched)
                                                     : 0U))))),4);
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__sram_arvalid));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_ar));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_25040109_top__DOT__sram_rvalid));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_25040109_top__DOT__sram_rready));
        bufp->chgIData(oldp+59,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                  ? vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf
                                  : 0U)),32);
        bufp->chgCData(oldp+60,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25040109_top__DOT__sram_awvalid));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25040109_top__DOT__sram_wvalid));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_w));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_25040109_top__DOT__sram_bvalid));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_25040109_top__DOT__sram_bready));
        bufp->chgCData(oldp+67,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+68,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight)
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                  : 0U)),4);
        bufp->chgBit(oldp+69,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart))));
        bufp->chgBit(oldp+70,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)))));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_25040109_top__DOT__uart_rvalid));
        bufp->chgBit(oldp+72,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__uart_rdata),32);
        bufp->chgCData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__uart_rresp),2);
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25040109_top__DOT__uart_awvalid));
        bufp->chgBit(oldp+76,(vlSelf->ysyx_25040109_top__DOT__uart_awready));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_25040109_top__DOT__uart_wvalid));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__uart_wready));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_25040109_top__DOT__uart_bvalid));
        bufp->chgBit(oldp+80,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__uart_bresp),2);
        bufp->chgCData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched),4);
        bufp->chgBit(oldp+83,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint))));
        bufp->chgBit(oldp+84,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid)))));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_25040109_top__DOT__clint_rvalid));
        bufp->chgBit(oldp+86,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
                               & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__clint_rdata),32);
        bufp->chgCData(oldp+88,(vlSelf->ysyx_25040109_top__DOT__clint_rresp),2);
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25040109_top__DOT__clint_awvalid));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_25040109_top__DOT__clint_awready));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25040109_top__DOT__clint_wvalid));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25040109_top__DOT__clint_wready));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_25040109_top__DOT__clint_bvalid));
        bufp->chgBit(oldp+94,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
                               & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__clint_bresp),2);
        bufp->chgCData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched),4);
        bufp->chgCData(oldp+97,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_id_latched)
                                      : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                          ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                              : 0U)
                                          : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                  : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+98,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
        bufp->chgCData(oldp+99,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_id_latched)
                                      : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                          ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                              : 0U)
                                          : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                              ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                              : ((2U 
                                                  == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                  : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+100,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
        bufp->chgCData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__mem_arid),4);
        bufp->chgCData(oldp+102,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_id_latched)
                                   : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                       ? ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                           ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                           : 0U) : 
                                      ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                        ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                        : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                            : 0U))))),4);
        bufp->chgBit(oldp+103,(vlSelf->ysyx_25040109_top__DOT__mem_rlast));
        bufp->chgCData(oldp+104,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight)
                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                   : 0U)),4);
        bufp->chgBit(oldp+105,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rlast) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight))));
        bufp->chgCData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched),4);
        bufp->chgCData(oldp+107,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched),4);
        bufp->chgBit(oldp+108,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arvalid))));
        bufp->chgBit(oldp+109,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid))));
        bufp->chgBit(oldp+110,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awvalid))));
        bufp->chgBit(oldp+111,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid))));
        bufp->chgBit(oldp+112,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bvalid))));
        bufp->chgBit(oldp+113,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_ar) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_arvalid))));
        bufp->chgBit(oldp+114,(((IData)(vlSelf->ysyx_25040109_top__DOT__sram_rready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_rvalid))));
        bufp->chgBit(oldp+115,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_awvalid))));
        bufp->chgBit(oldp+116,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_w) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_wvalid))));
        bufp->chgBit(oldp+117,(((IData)(vlSelf->ysyx_25040109_top__DOT__sram_bready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bvalid))));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__ar_fire));
        bufp->chgBit(oldp+119,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid))));
        bufp->chgBit(oldp+120,(((IData)(vlSelf->ysyx_25040109_top__DOT__uart_awready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_awvalid))));
        bufp->chgBit(oldp+121,(((IData)(vlSelf->ysyx_25040109_top__DOT__uart_wready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_wvalid))));
        bufp->chgBit(oldp+122,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid))));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__ar_fire));
        bufp->chgBit(oldp+124,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
                                 & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid))));
        bufp->chgBit(oldp+125,(((IData)(vlSelf->ysyx_25040109_top__DOT__clint_awready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_awvalid))));
        bufp->chgBit(oldp+126,(((IData)(vlSelf->ysyx_25040109_top__DOT__clint_wready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_wvalid))));
        bufp->chgBit(oldp+127,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
                                 & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid))));
        bufp->chgIData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
        bufp->chgBit(oldp+129,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
        bufp->chgIData(oldp+131,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
        bufp->chgIData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
        bufp->chgBit(oldp+133,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
        bufp->chgBit(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending));
        bufp->chgIData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
        bufp->chgCData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
        bufp->chgBit(oldp+137,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
        bufp->chgIData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc),32);
        bufp->chgIData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause),32);
        bufp->chgBit(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
        bufp->chgIData(oldp+141,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)
                                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp
                                   : vlSelf->ysyx_25040109_top__DOT__imem_rdata)),32);
        bufp->chgBit(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
        bufp->chgBit(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
        bufp->chgBit(oldp+144,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow) 
                                & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+145,(((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
                                   & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))))));
        bufp->chgCData(oldp+146,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+147,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
        bufp->chgCData(oldp+149,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+150,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 7U))),5);
        bufp->chgBit(oldp+151,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
        bufp->chgBit(oldp+152,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
        bufp->chgSData(oldp+153,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                                   ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                      >> 0x14U) : 0U)),12);
        bufp->chgCData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
        bufp->chgCData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
        bufp->chgBit(oldp+156,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
        bufp->chgCData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
        bufp->chgBit(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
        bufp->chgBit(oldp+159,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
        bufp->chgCData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
        bufp->chgCData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
        bufp->chgBit(oldp+162,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                                & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+165,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                          | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
        bufp->chgBit(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
        bufp->chgIData(oldp+170,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
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
        bufp->chgBit(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
        bufp->chgBit(oldp+172,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                                   & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any))))));
        bufp->chgBit(oldp+173,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire))));
        bufp->chgBit(oldp+174,((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+175,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
        bufp->chgBit(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
        bufp->chgBit(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire));
        bufp->chgBit(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err));
        bufp->chgBit(oldp+179,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                   | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgBit(oldp+180,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                 & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                    | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))) 
                                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)))));
        bufp->chgBit(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
        bufp->chgBit(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
        bufp->chgBit(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
        bufp->chgIData(oldp+184,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
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
        bufp->chgBit(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
        bufp->chgBit(oldp+186,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                      | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
        bufp->chgBit(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
        bufp->chgBit(oldp+193,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))))));
        bufp->chgBit(oldp+194,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
        bufp->chgSData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
        bufp->chgBit(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem));
        bufp->chgBit(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load));
        bufp->chgBit(oldp+199,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)))));
        bufp->chgBit(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any));
        bufp->chgBit(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
        bufp->chgIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
        bufp->chgBit(oldp+204,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
        bufp->chgIData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
        bufp->chgQData(oldp+209,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
        bufp->chgCData(oldp+211,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
        bufp->chgIData(oldp+212,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+214,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
        bufp->chgBit(oldp+215,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
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
        bufp->chgCData(oldp+216,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+217,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+218,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+220,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+221,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+223,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
        bufp->chgIData(oldp+224,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                << 1U))),32);
        bufp->chgIData(oldp+225,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+226,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                               << 1U))),32);
        bufp->chgBit(oldp+227,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
        bufp->chgBit(oldp+228,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
        bufp->chgBit(oldp+229,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
        bufp->chgBit(oldp+230,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                & (0x1000U == (0x7000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
        bufp->chgBit(oldp+231,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
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
        bufp->chgWData(oldp+232,(__Vtemp_hcccdb7e8__0),312);
        bufp->chgQData(oldp+242,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+244,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+246,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+248,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+250,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+252,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+254,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+256,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+260,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+261,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+262,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+263,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+264,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+265,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+266,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+267,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+268,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
        bufp->chgIData(oldp+269,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
        bufp->chgBit(oldp+270,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
        bufp->chgBit(oldp+271,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire));
        bufp->chgCData(oldp+272,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),3);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
        bufp->chgCData(oldp+274,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
        bufp->chgCData(oldp+275,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
        bufp->chgCData(oldp+277,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
        bufp->chgBit(oldp+278,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
        bufp->chgBit(oldp+279,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
        bufp->chgBit(oldp+280,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
        bufp->chgBit(oldp+281,((((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                                 & (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgBit(oldp+282,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_arvalid) 
                                & ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+283,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                                & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready)))));
        bufp->chgIData(oldp+284,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                   : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
        bufp->chgCData(oldp+285,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
        bufp->chgCData(oldp+286,((3U & ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                         : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
        bufp->chgCData(oldp+287,((0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                             ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                             : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                           << 3U))),5);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
        bufp->chgCData(oldp+289,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp),2);
        bufp->chgCData(oldp+290,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp),2);
        bufp->chgBit(oldp+291,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid) 
                                & (6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
        bufp->chgIData(oldp+292,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+304,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+305,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+306,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+307,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+308,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+316,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+317,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+318,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+319,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+320,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+321,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+322,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+323,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+324,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
        bufp->chgIData(oldp+325,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
        bufp->chgBit(oldp+326,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_valid));
        bufp->chgIData(oldp+327,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_araddr),32);
        bufp->chgCData(oldp+328,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arid),4);
        bufp->chgCData(oldp+329,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arlen),8);
        bufp->chgCData(oldp+330,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arsize),3);
        bufp->chgCData(oldp+331,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arburst),2);
        bufp->chgBit(oldp+332,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_aw_valid));
        bufp->chgBit(oldp+333,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_w_valid));
        bufp->chgIData(oldp+334,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awaddr),32);
        bufp->chgCData(oldp+335,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awid),4);
        bufp->chgCData(oldp+336,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awlen),8);
        bufp->chgCData(oldp+337,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awsize),3);
        bufp->chgCData(oldp+338,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awburst),2);
        bufp->chgIData(oldp+339,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wdata),32);
        bufp->chgCData(oldp+340,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wstrb),4);
        bufp->chgBit(oldp+341,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wlast));
        bufp->chgBit(oldp+342,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight));
        bufp->chgBit(oldp+343,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight));
        bufp->chgBit(oldp+344,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_ar_done));
        bufp->chgBit(oldp+345,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_aw_done));
        bufp->chgBit(oldp+346,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_w_done));
        bufp->chgBit(oldp+347,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__last_grant));
        bufp->chgBit(oldp+348,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_full));
        bufp->chgBit(oldp+349,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arvalid));
        bufp->chgBit(oldp+350,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arready));
        bufp->chgBit(oldp+351,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid));
        bufp->chgBit(oldp+352,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rready));
        bufp->chgIData(oldp+353,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf),32);
        bufp->chgCData(oldp+354,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rresp),2);
        bufp->chgCData(oldp+355,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched),4);
        bufp->chgBit(oldp+356,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rlast));
        bufp->chgBit(oldp+357,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awvalid));
        bufp->chgBit(oldp+358,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awready));
        bufp->chgBit(oldp+359,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wvalid));
        bufp->chgBit(oldp+360,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wready));
        bufp->chgBit(oldp+361,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid));
        bufp->chgBit(oldp+362,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bready));
        bufp->chgCData(oldp+363,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bresp),2);
        bufp->chgCData(oldp+364,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched),4);
        bufp->chgBit(oldp+365,((1U & (~ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy)))))));
        bufp->chgIData(oldp+366,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_rdata_buf),32);
        bufp->chgBit(oldp+367,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused));
        bufp->chgCData(oldp+368,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rresp_unused),2);
        bufp->chgCData(oldp+369,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arid_latched),4);
        bufp->chgBit(oldp+370,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt)))));
        bufp->chgIData(oldp+371,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_araddr_reg),32);
        bufp->chgCData(oldp+372,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt),8);
        bufp->chgCData(oldp+373,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arsize_reg),3);
        bufp->chgCData(oldp+374,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arburst_reg),2);
        bufp->chgBit(oldp+375,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active));
        bufp->chgBit(oldp+376,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_ok));
        bufp->chgIData(oldp+377,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_araddr_reg),32);
        bufp->chgCData(oldp+378,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arlen_cnt),8);
        bufp->chgCData(oldp+379,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arsize_reg),3);
        bufp->chgCData(oldp+380,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arburst_reg),2);
        bufp->chgBit(oldp+381,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_active));
        bufp->chgBit(oldp+382,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok));
        bufp->chgCData(oldp+383,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_cnt),8);
        bufp->chgCData(oldp+384,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg),3);
        bufp->chgCData(oldp+385,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg),2);
        bufp->chgBit(oldp+386,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok));
        bufp->chgBit(oldp+387,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err));
        bufp->chgBit(oldp+388,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok_w));
        bufp->chgBit(oldp+389,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w));
        bufp->chgIData(oldp+390,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched),32);
        bufp->chgBit(oldp+391,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid));
        bufp->chgIData(oldp+392,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use),32);
        bufp->chgBit(oldp+393,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid))));
        bufp->chgBit(oldp+394,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire));
        bufp->chgBit(oldp+395,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire));
        bufp->chgCData(oldp+396,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use),8);
        bufp->chgCData(oldp+397,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awsize)
                                   : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg))),3);
        bufp->chgCData(oldp+398,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awburst)
                                   : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg))),2);
        bufp->chgBit(oldp+399,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                 ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w)
                                 : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok))));
        bufp->chgBit(oldp+400,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this));
        bufp->chgBit(oldp+401,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this))));
        bufp->chgBit(oldp+402,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_last_fire));
        bufp->chgBit(oldp+403,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire));
        bufp->chgBit(oldp+404,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bready) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid))));
        bufp->chgCData(oldp+405,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wstrb),8);
        bufp->chgIData(oldp+406,((vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wdata 
                                  << (0x18U & (vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use 
                                               << 3U)))),32);
        bufp->chgBit(oldp+407,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok));
        bufp->chgBit(oldp+408,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy));
        bufp->chgBit(oldp+409,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy));
        bufp->chgBit(oldp+410,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_busy));
        bufp->chgCData(oldp+411,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay),5);
        bufp->chgCData(oldp+412,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay),5);
        bufp->chgCData(oldp+413,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay),5);
        bufp->chgCData(oldp+414,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay),5);
        bufp->chgCData(oldp+415,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay),5);
        bufp->chgCData(oldp+416,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay_cnt),5);
        bufp->chgCData(oldp+417,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay_cnt),5);
        bufp->chgCData(oldp+418,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay_cnt),5);
        bufp->chgBit(oldp+419,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay))));
        bufp->chgBit(oldp+420,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay))));
        bufp->chgBit(oldp+421,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay))));
        bufp->chgBit(oldp+422,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay))));
        bufp->chgBit(oldp+423,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay))));
        bufp->chgCData(oldp+424,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state),3);
        bufp->chgCData(oldp+425,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state_n),3);
        bufp->chgCData(oldp+426,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state),2);
        bufp->chgCData(oldp+427,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state_n),2);
        bufp->chgBit(oldp+428,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire));
        bufp->chgBit(oldp+429,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast)))));
        bufp->chgBit(oldp+430,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire));
        bufp->chgBit(oldp+431,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgBit(oldp+432,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire));
        bufp->chgQData(oldp+433,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__mtime),64);
        bufp->chgBit(oldp+435,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_seen));
        bufp->chgBit(oldp+436,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_seen));
        bufp->chgBit(oldp+437,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_fire));
        bufp->chgBit(oldp+438,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_fire));
        bufp->chgBit(oldp+439,((0x10010000U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
        bufp->chgBit(oldp+440,((0x10010004U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
        bufp->chgBit(oldp+441,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen));
        bufp->chgBit(oldp+442,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen));
        bufp->chgIData(oldp+443,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched),32);
        bufp->chgIData(oldp+444,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awaddr_latched),32);
        bufp->chgBit(oldp+445,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire));
        bufp->chgBit(oldp+446,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire));
        bufp->chgIData(oldp+447,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire)
                                   ? vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused
                                   : vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched)),32);
        bufp->chgBit(oldp+448,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlast));
        bufp->chgCData(oldp+449,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlen_cnt),8);
        bufp->chgCData(oldp+450,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_id_latched),4);
        bufp->chgCData(oldp+451,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_id_latched),4);
        bufp->chgCData(oldp+452,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state),2);
        bufp->chgCData(oldp+453,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state),2);
        bufp->chgCData(oldp+454,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target),2);
        bufp->chgCData(oldp+455,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target),2);
        bufp->chgBit(oldp+456,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err));
        bufp->chgBit(oldp+457,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err));
        bufp->chgBit(oldp+458,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_done));
        bufp->chgBit(oldp+459,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__w_done));
        bufp->chgBit(oldp+460,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid));
        bufp->chgBit(oldp+461,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid));
        bufp->chgBit(oldp+462,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_pending));
        bufp->chgBit(oldp+463,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_pending));
        bufp->chgBit(oldp+464,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__ar_simple_ok));
        bufp->chgBit(oldp+465,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok));
        bufp->chgBit(oldp+466,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart));
        bufp->chgBit(oldp+467,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram));
        bufp->chgBit(oldp+468,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint));
        bufp->chgBit(oldp+469,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart));
        bufp->chgBit(oldp+470,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram));
        bufp->chgBit(oldp+471,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint));
        bufp->chgBit(oldp+472,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgBit(oldp+473,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__in_r_fire));
    }
    bufp->chgBit(oldp+474,(vlSelf->clock));
    bufp->chgBit(oldp+475,(vlSelf->reset));
    bufp->chgIData(oldp+476,(vlSelf->p_count_number),32);
    bufp->chgIData(oldp+477,(vlSelf->inst),32);
    bufp->chgIData(oldp+478,(vlSelf->pc),32);
    bufp->chgIData(oldp+479,(vlSelf->a0_out),32);
    bufp->chgBit(oldp+480,(vlSelf->inst_wb_complete));
    bufp->chgBit(oldp+481,(vlSelf->is_load_out));
    bufp->chgBit(oldp+482,(vlSelf->is_store_out));
    bufp->chgBit(oldp+483,(vlSelf->is_ecall_out));
    bufp->chgCData(oldp+484,(vlSelf->opcode_out),7);
    bufp->chgIData(oldp+485,(vlSelf->dmem_raddr_out),32);
    bufp->chgIData(oldp+486,(vlSelf->dmem_waddr_out),32);
    bufp->chgBit(oldp+487,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+488,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+489,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+490,((0x73U == (IData)(vlSelf->opcode_out))));
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
