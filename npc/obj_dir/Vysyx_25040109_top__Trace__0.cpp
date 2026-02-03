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
        bufp->chgBit(oldp+10,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r));
        bufp->chgBit(oldp+11,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
        bufp->chgBit(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
        bufp->chgBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
        bufp->chgCData(oldp+15,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgBit(oldp+16,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r));
        bufp->chgBit(oldp+17,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready))));
        bufp->chgIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
        bufp->chgBit(oldp+19,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid))));
        bufp->chgBit(oldp+20,((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+21,(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid));
        bufp->chgBit(oldp+22,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
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
        bufp->chgBit(oldp+26,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgCData(oldp+27,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                                  : 0U)),2);
        bufp->chgCData(oldp+28,(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                      ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
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
        bufp->chgCData(oldp+31,(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                      ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                                   : 
                                                  ((2U 
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
        bufp->chgBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__mem_awvalid));
        bufp->chgBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__mem_awready));
        bufp->chgIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused),32);
        bufp->chgCData(oldp+42,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? 1U : 0U)),4);
        bufp->chgBit(oldp+43,(vlSelf->ysyx_25040109_top__DOT__mem_wvalid));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__mem_wready));
        bufp->chgIData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused),32);
        bufp->chgCData(oldp+46,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
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
        bufp->chgBit(oldp+47,(vlSelf->ysyx_25040109_top__DOT__mem_wlast));
        bufp->chgCData(oldp+48,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? 2U : 0U)),3);
        bufp->chgCData(oldp+49,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? 1U : 0U)),2);
        bufp->chgBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__mem_bvalid));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__mem_bready));
        bufp->chgCData(oldp+52,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                  ? 3U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                           ? (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bresp)
                                           : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bresp)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bresp)
                                                   : 3U))))),2);
        bufp->chgCData(oldp+53,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                  ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                           ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched)
                                           : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched)
                                               : ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched)
                                                   : 0U))))),4);
        bufp->chgBit(oldp+54,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram))));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_25040109_top__DOT__sram_arready));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__sram_rvalid));
        bufp->chgBit(oldp+57,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf),32);
        bufp->chgCData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__sram_rresp),2);
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram))));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_25040109_top__DOT__sram_awready));
        bufp->chgBit(oldp+62,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_25040109_top__DOT__sram_wready));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_25040109_top__DOT__sram_bvalid));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                               & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+66,(vlSelf->ysyx_25040109_top__DOT__sram_bresp),2);
        bufp->chgCData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched),4);
        bufp->chgBit(oldp+68,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart))));
        bufp->chgBit(oldp+69,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)))));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_25040109_top__DOT__uart_rvalid));
        bufp->chgBit(oldp+71,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__uart_rdata),32);
        bufp->chgCData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__uart_rresp),2);
        bufp->chgBit(oldp+74,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart))));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_25040109_top__DOT__uart_awready));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_25040109_top__DOT__uart_wready));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_25040109_top__DOT__uart_bvalid));
        bufp->chgBit(oldp+79,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                               & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__uart_bresp),2);
        bufp->chgCData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched),4);
        bufp->chgBit(oldp+82,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h17557492__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint))));
        bufp->chgBit(oldp+83,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid)))));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_25040109_top__DOT__clint_rvalid));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                               & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready)))));
        bufp->chgIData(oldp+86,(vlSelf->ysyx_25040109_top__DOT__clint_rdata),32);
        bufp->chgCData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__clint_rresp),2);
        bufp->chgBit(oldp+88,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h358f6a08__0) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint))));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_25040109_top__DOT__clint_awready));
        bufp->chgBit(oldp+90,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h95941268__0) 
                               & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)))));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_25040109_top__DOT__clint_wready));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_25040109_top__DOT__clint_bvalid));
        bufp->chgBit(oldp+93,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                               & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready)))));
        bufp->chgCData(oldp+94,(vlSelf->ysyx_25040109_top__DOT__clint_bresp),2);
        bufp->chgCData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched),4);
        bufp->chgCData(oldp+96,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                      ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                    : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+97,(((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
        bufp->chgCData(oldp+98,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                  ? ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                      ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                               ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                    : 0U))))
                                  : 0U)),4);
        bufp->chgBit(oldp+99,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))));
        bufp->chgCData(oldp+100,(vlSelf->ysyx_25040109_top__DOT__mem_arid),4);
        bufp->chgCData(oldp+101,(((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                   ? 0U : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                            ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched)
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched)
                                                    : 0U))))),4);
        bufp->chgBit(oldp+102,(vlSelf->ysyx_25040109_top__DOT__mem_rlast));
        bufp->chgCData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched),4);
        bufp->chgBit(oldp+104,(vlSelf->ysyx_25040109_top__DOT__sram_rlast));
        bufp->chgCData(oldp+105,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched),4);
        bufp->chgCData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched),4);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
        bufp->chgBit(oldp+108,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
        bufp->chgIData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending));
        bufp->chgIData(oldp+114,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
        bufp->chgCData(oldp+115,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
        bufp->chgBit(oldp+116,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
        bufp->chgIData(oldp+117,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc),32);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause),32);
        bufp->chgBit(oldp+119,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
        bufp->chgIData(oldp+120,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)
                                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp
                                   : vlSelf->ysyx_25040109_top__DOT__imem_rdata)),32);
        bufp->chgBit(oldp+121,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
        bufp->chgBit(oldp+123,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_ifu_r) 
                                & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+124,(((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
                                   & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))))));
        bufp->chgCData(oldp+125,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+126,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+127,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
        bufp->chgCData(oldp+128,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+129,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                           >> 7U))),5);
        bufp->chgBit(oldp+130,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
        bufp->chgBit(oldp+131,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
        bufp->chgSData(oldp+132,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                                   ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                      >> 0x14U) : 0U)),12);
        bufp->chgCData(oldp+133,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
        bufp->chgCData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
        bufp->chgBit(oldp+135,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
        bufp->chgCData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
        bufp->chgBit(oldp+137,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
        bufp->chgBit(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
        bufp->chgCData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
        bufp->chgCData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
        bufp->chgBit(oldp+141,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                                & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x14U)))));
        bufp->chgIData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
        bufp->chgIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
        bufp->chgBit(oldp+144,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                          | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
        bufp->chgBit(oldp+145,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
        bufp->chgIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
        bufp->chgBit(oldp+147,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
        bufp->chgIData(oldp+149,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
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
        bufp->chgBit(oldp+150,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
        bufp->chgBit(oldp+151,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                                   & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any))))));
        bufp->chgBit(oldp+152,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire))));
        bufp->chgBit(oldp+153,((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
        bufp->chgBit(oldp+154,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                   | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgBit(oldp+159,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                                 & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                    | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))) 
                                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)))));
        bufp->chgBit(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
        bufp->chgBit(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
        bufp->chgIData(oldp+163,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
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
        bufp->chgBit(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
        bufp->chgBit(oldp+165,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                      | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
        bufp->chgIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
        bufp->chgBit(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
        bufp->chgBit(oldp+172,(((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))))));
        bufp->chgBit(oldp+173,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
        bufp->chgSData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
        bufp->chgBit(oldp+176,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem));
        bufp->chgBit(oldp+177,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load));
        bufp->chgBit(oldp+178,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)))));
        bufp->chgBit(oldp+179,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any));
        bufp->chgBit(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
        bufp->chgIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
        bufp->chgIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
        bufp->chgBit(oldp+183,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
        bufp->chgBit(oldp+184,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
        bufp->chgIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
        bufp->chgIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
        bufp->chgQData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
        bufp->chgCData(oldp+190,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
        bufp->chgIData(oldp+191,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
        bufp->chgIData(oldp+193,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
        bufp->chgBit(oldp+194,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
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
        bufp->chgCData(oldp+195,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+196,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+197,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
        bufp->chgSData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
        bufp->chgSData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
        bufp->chgIData(oldp+202,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
        bufp->chgIData(oldp+203,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                << 1U))),32);
        bufp->chgIData(oldp+204,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
        bufp->chgIData(oldp+205,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                               << 1U))),32);
        bufp->chgBit(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
        bufp->chgBit(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
        bufp->chgBit(oldp+209,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                & (0x1000U == (0x7000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
        bufp->chgBit(oldp+210,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
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
        bufp->chgWData(oldp+211,(__Vtemp_hcccdb7e8__0),312);
        bufp->chgQData(oldp+221,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+223,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+225,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+227,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+229,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+231,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+233,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+235,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+237,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+238,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+239,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+240,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+241,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+242,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+243,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+244,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+245,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+246,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+247,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
        bufp->chgIData(oldp+248,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
        bufp->chgBit(oldp+249,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire));
        bufp->chgCData(oldp+251,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),3);
        bufp->chgIData(oldp+252,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
        bufp->chgCData(oldp+253,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
        bufp->chgCData(oldp+254,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
        bufp->chgCData(oldp+256,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
        bufp->chgBit(oldp+257,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
        bufp->chgBit(oldp+258,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
        bufp->chgBit(oldp+259,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
        bufp->chgBit(oldp+260,((((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid) 
                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_he79ec405__0)) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgBit(oldp+261,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__req_lsu_r) 
                                & ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state)) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready)))));
        bufp->chgBit(oldp+262,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT____VdfgTmp_h739842b2__0) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready)))));
        bufp->chgIData(oldp+263,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                   : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
        bufp->chgCData(oldp+264,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
        bufp->chgCData(oldp+265,((3U & ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                         : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
        bufp->chgCData(oldp+266,((0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                             ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                             : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                           << 3U))),5);
        bufp->chgIData(oldp+267,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
        bufp->chgCData(oldp+268,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp),2);
        bufp->chgCData(oldp+269,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp),2);
        bufp->chgBit(oldp+270,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid) 
                                & (6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))));
        bufp->chgIData(oldp+271,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
        bufp->chgIData(oldp+274,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
        bufp->chgIData(oldp+275,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
        bufp->chgIData(oldp+277,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
        bufp->chgIData(oldp+278,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
        bufp->chgIData(oldp+280,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
        bufp->chgIData(oldp+304,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
        bufp->chgBit(oldp+305,((1U & (~ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy)))))));
        bufp->chgIData(oldp+306,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_rdata_buf),32);
        bufp->chgBit(oldp+307,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused));
        bufp->chgCData(oldp+308,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rresp_unused),2);
        bufp->chgCData(oldp+309,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arid_latched),4);
        bufp->chgBit(oldp+310,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused) 
                                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt)))));
        bufp->chgIData(oldp+311,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_araddr_reg),32);
        bufp->chgCData(oldp+312,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt),8);
        bufp->chgCData(oldp+313,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arsize_reg),3);
        bufp->chgCData(oldp+314,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arburst_reg),2);
        bufp->chgBit(oldp+315,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active));
        bufp->chgBit(oldp+316,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_ok));
        bufp->chgIData(oldp+317,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_araddr_reg),32);
        bufp->chgCData(oldp+318,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arlen_cnt),8);
        bufp->chgCData(oldp+319,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arsize_reg),3);
        bufp->chgCData(oldp+320,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arburst_reg),2);
        bufp->chgBit(oldp+321,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_active));
        bufp->chgBit(oldp+322,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok));
        bufp->chgCData(oldp+323,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_cnt),8);
        bufp->chgCData(oldp+324,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg),3);
        bufp->chgCData(oldp+325,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg),2);
        bufp->chgBit(oldp+326,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok));
        bufp->chgBit(oldp+327,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err));
        bufp->chgBit(oldp+328,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w));
        bufp->chgIData(oldp+329,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched),32);
        bufp->chgBit(oldp+330,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid));
        bufp->chgIData(oldp+331,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use),32);
        bufp->chgBit(oldp+332,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                                 & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_rvalid))));
        bufp->chgBit(oldp+333,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire));
        bufp->chgBit(oldp+334,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire));
        bufp->chgCData(oldp+335,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use),8);
        bufp->chgCData(oldp+336,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                   ? ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                       ? 2U : 0U) : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg))),3);
        bufp->chgCData(oldp+337,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                   ? ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
                                       ? 1U : 0U) : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg))),2);
        bufp->chgBit(oldp+338,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
                                 ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w)
                                 : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok))));
        bufp->chgBit(oldp+339,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this));
        bufp->chgBit(oldp+340,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this))));
        bufp->chgBit(oldp+341,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_last_fire));
        bufp->chgBit(oldp+342,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire));
        bufp->chgBit(oldp+343,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                                 & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__sram_bvalid))));
        bufp->chgCData(oldp+344,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state))
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
        bufp->chgIData(oldp+345,((vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused 
                                  << (0x18U & (vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use 
                                               << 3U)))),32);
        bufp->chgBit(oldp+346,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok));
        bufp->chgBit(oldp+347,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy));
        bufp->chgBit(oldp+348,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy));
        bufp->chgBit(oldp+349,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_busy));
        bufp->chgCData(oldp+350,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay),5);
        bufp->chgCData(oldp+351,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay),5);
        bufp->chgCData(oldp+352,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay),5);
        bufp->chgCData(oldp+353,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay),5);
        bufp->chgCData(oldp+354,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay),5);
        bufp->chgCData(oldp+355,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay_cnt),5);
        bufp->chgCData(oldp+356,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay_cnt),5);
        bufp->chgCData(oldp+357,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay_cnt),5);
        bufp->chgBit(oldp+358,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay))));
        bufp->chgBit(oldp+359,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay))));
        bufp->chgBit(oldp+360,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay))));
        bufp->chgBit(oldp+361,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay))));
        bufp->chgBit(oldp+362,((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay))));
        bufp->chgCData(oldp+363,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state),3);
        bufp->chgCData(oldp+364,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__state_n),3);
        bufp->chgBit(oldp+365,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_done));
        bufp->chgBit(oldp+366,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__w_done));
        bufp->chgBit(oldp+367,(((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid))));
        bufp->chgBit(oldp+368,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire));
        bufp->chgBit(oldp+369,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast)))));
        bufp->chgBit(oldp+370,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire));
        bufp->chgBit(oldp+371,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready) 
                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wlast)))));
        bufp->chgBit(oldp+372,(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire));
        bufp->chgQData(oldp+373,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__mtime),64);
        bufp->chgBit(oldp+375,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_seen));
        bufp->chgBit(oldp+376,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_seen));
        bufp->chgBit(oldp+377,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__ar_fire));
        bufp->chgBit(oldp+378,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                                 & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid))));
        bufp->chgBit(oldp+379,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_fire));
        bufp->chgBit(oldp+380,(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_fire));
        bufp->chgBit(oldp+381,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                                 & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid))));
        bufp->chgBit(oldp+382,((0x10010000U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
        bufp->chgBit(oldp+383,((0x10010004U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)));
        bufp->chgBit(oldp+384,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen));
        bufp->chgBit(oldp+385,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen));
        bufp->chgIData(oldp+386,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched),32);
        bufp->chgIData(oldp+387,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awaddr_latched),32);
        bufp->chgBit(oldp+388,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__ar_fire));
        bufp->chgBit(oldp+389,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h5bc4d2f1__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid))));
        bufp->chgBit(oldp+390,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire));
        bufp->chgBit(oldp+391,(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire));
        bufp->chgBit(oldp+392,((((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha390e7a0__0) 
                                 & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid))));
        bufp->chgIData(oldp+393,(((IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire)
                                   ? vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused
                                   : vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched)),32);
        bufp->chgBit(oldp+394,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlast));
        bufp->chgCData(oldp+395,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlen_cnt),8);
        bufp->chgCData(oldp+396,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__state),2);
        bufp->chgCData(oldp+397,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target),2);
        bufp->chgCData(oldp+398,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target),2);
        bufp->chgBit(oldp+399,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err));
        bufp->chgBit(oldp+400,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err));
        bufp->chgBit(oldp+401,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_done));
        bufp->chgBit(oldp+402,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__w_done));
        bufp->chgBit(oldp+403,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid));
        bufp->chgBit(oldp+404,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid));
        bufp->chgBit(oldp+405,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok));
        bufp->chgBit(oldp+406,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart));
        bufp->chgBit(oldp+407,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram));
        bufp->chgBit(oldp+408,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint));
        bufp->chgBit(oldp+409,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart));
        bufp->chgBit(oldp+410,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram));
        bufp->chgBit(oldp+411,(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint));
        bufp->chgBit(oldp+412,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready))));
        bufp->chgBit(oldp+413,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                                & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))));
    }
    bufp->chgBit(oldp+414,(vlSelf->clk));
    bufp->chgBit(oldp+415,(vlSelf->rst));
    bufp->chgIData(oldp+416,(vlSelf->p_count_number),32);
    bufp->chgIData(oldp+417,(vlSelf->inst),32);
    bufp->chgIData(oldp+418,(vlSelf->pc),32);
    bufp->chgIData(oldp+419,(vlSelf->a0_out),32);
    bufp->chgBit(oldp+420,(vlSelf->inst_wb_complete));
    bufp->chgBit(oldp+421,(vlSelf->is_load_out));
    bufp->chgBit(oldp+422,(vlSelf->is_store_out));
    bufp->chgBit(oldp+423,(vlSelf->is_ecall_out));
    bufp->chgCData(oldp+424,(vlSelf->opcode_out),7);
    bufp->chgIData(oldp+425,(vlSelf->dmem_raddr_out),32);
    bufp->chgIData(oldp+426,(vlSelf->dmem_waddr_out),32);
    bufp->chgBit(oldp+427,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+428,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+429,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->chgBit(oldp+430,((0x73U == (IData)(vlSelf->opcode_out))));
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
