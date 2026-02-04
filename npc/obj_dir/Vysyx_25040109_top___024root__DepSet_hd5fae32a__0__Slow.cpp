// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_static(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial\n"); );
    // Body
    Vysyx_25040109_top___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_initial__TOP(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0U] = 0x63U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1U] = 0x6fU;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2U] = 0x23U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xaU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xbU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xcU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xdU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xeU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0xfU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x10U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x11U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x12U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x13U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x14U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x15U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x16U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x17U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x18U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x19U] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_final(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_triggers__stl(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__stl(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_stl(Vysyx_25040109_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_settle(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_25040109_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_25040109_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__stl(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__mem__DOT__pmem_read_ok_TOP(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read_ok__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);
extern const VlUnpacked<CData/*2:0*/, 128> Vysyx_25040109_top__ConstPool__TABLE_h322a62b6_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vysyx_25040109_top__ConstPool__TABLE_h25dfdbb8_0;

VL_ATTR_COLD void Vysyx_25040109_top___024root___stl_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe;
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__dmem_bready = (6U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state));
    vlSelf->inst_wb_complete = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_imem__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_b__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_w__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_aw__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_full 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_aw_valid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_w_valid));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w 
        = (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awburst)) 
            | (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awburst))) 
           & (2U >= (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awsize)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok_w 
        = (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arburst)) 
            | (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arburst))) 
           & (2U >= (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arsize)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
            ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3)
            : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched));
    vlSelf->dmem_raddr_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arvalid 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_ar_done)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched
            : 0U);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_active)) 
                 & (~ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid) 
                       | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid)
            ? vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched
            : vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awaddr);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wvalid 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_w_done)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)) 
           & (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state)));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8d8946d8__0 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)) 
           & (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)) 
           & (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)));
    vlSelf->ysyx_25040109_top__DOT__clint_wready = 
        (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid)) 
               & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_seen))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_ar 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_valid)) 
                 & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight))));
    vlSelf->ysyx_25040109_top__DOT__mem_bvalid = ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)) 
                                                  & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_pending) 
                                                     & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err)
                                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid)
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                          ? 
                                                         ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid) 
                                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight))
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                           ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                                           & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid)))))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rlast 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arlen_cnt)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__uart_awready = 
        (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid)) 
               & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen))));
    vlSelf->ysyx_25040109_top__DOT__clint_awready = 
        (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid)) 
               & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_seen))));
    vlSelf->ysyx_25040109_top__DOT__uart_wready = (1U 
                                                   & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid)) 
                                                      & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen))));
    vlSelf->ysyx_25040109_top__DOT__mem_bready = ((3U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awvalid 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_aw_done)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid)) 
                 & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid))));
    vlSelf->ysyx_25040109_top__DOT__dmem_arvalid = 
        ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                 & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid)) 
                    & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending)))));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok 
        = ((2U == ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                    ? 2U : 0U)) & (1U == ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
                                           ? 1U : 0U)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT____VdfgTmp_hd60917bf__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_w_valid)) 
                 & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight))));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused 
        = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched
            : 0U);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
        = ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                            >> 0x14U))) ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0x14U))]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
        = ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                            >> 0xfU))) ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0xfU))]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                  >> 8U)))));
    vlSelf->__VdfgTmp_h6ff933f9__0 = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                       ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)
                                       : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
               & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp))) 
              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched) 
                 & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0 
        = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                         >> 0xcU))) | (2U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 
        = (IData)((0x5000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 
        = (IData)((0x40005000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 
        = ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                         >> 0xcU))) | (1U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               >> 0xcU))));
    vlSelf->opcode_out = (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    vlSelf->dmem_waddr_out = vlSelf->dmem_raddr_out;
    if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))) {
        vlSelf->ysyx_25040109_top__DOT__mem_arid = 0U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused = 2U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused = 1U;
        vlSelf->ysyx_25040109_top__DOT__mem_araddr 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch;
    } else if ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))) {
        vlSelf->ysyx_25040109_top__DOT__mem_arid = 1U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused = 2U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused = 1U;
        vlSelf->ysyx_25040109_top__DOT__mem_araddr 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched;
    } else {
        vlSelf->ysyx_25040109_top__DOT__mem_arid = 0U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused = 0U;
        vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem_araddr = 0U;
    }
    if (vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err) {
        vlSelf->ysyx_25040109_top__DOT__mem_rdata = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem_rresp = 3U;
    } else if ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))) {
        if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight) {
            vlSelf->ysyx_25040109_top__DOT__mem_rdata 
                = vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf;
            vlSelf->ysyx_25040109_top__DOT__mem_rresp 
                = vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rresp;
        } else {
            vlSelf->ysyx_25040109_top__DOT__mem_rdata = 0U;
            vlSelf->ysyx_25040109_top__DOT__mem_rresp = 0U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))) {
        vlSelf->ysyx_25040109_top__DOT__mem_rdata = vlSelf->ysyx_25040109_top__DOT__uart_rdata;
        vlSelf->ysyx_25040109_top__DOT__mem_rresp = vlSelf->ysyx_25040109_top__DOT__uart_rresp;
    } else if ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))) {
        vlSelf->ysyx_25040109_top__DOT__mem_rdata = vlSelf->ysyx_25040109_top__DOT__clint_rdata;
        vlSelf->ysyx_25040109_top__DOT__mem_rresp = vlSelf->ysyx_25040109_top__DOT__clint_rresp;
    } else {
        vlSelf->ysyx_25040109_top__DOT__mem_rdata = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem_rresp = 3U;
    }
    vlSelf->pc = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                   : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch);
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arready));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__mem__DOT__pmem_read_ok_TOP(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__mem__DOT__pmem_read_ok__14__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__mem_rlast = ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                                  ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlast)
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rlast) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight))
                                                   : (IData)(vlSelf->__VdfgTmp_h6ff933f9__0)));
    vlSelf->ysyx_25040109_top__DOT__mem_arvalid = (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                                    ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_arvalid)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok 
        = (0U != vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__mem__DOT__pmem_read_ok__14__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__dmem_rdata = ((4U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                                   ? vlSelf->ysyx_25040109_top__DOT__mem_rdata
                                                   : 0U);
    vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = (
                                                   (3U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__b_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_bvalid));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__b_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_bvalid));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bready 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0) 
            & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight));
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_bvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_bready));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awready));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__ar_simple_ok 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused)) 
           & (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_aw_valid)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT____VdfgTmp_hd60917bf__0));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram 
        = ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__mem_araddr) 
           & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__mem_araddr));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart 
        = ((0x10000000U <= vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused) 
           & ((0x10000008U >= vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok)));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint 
        = (((0x10010000U == vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused) 
            | (0x10010004U == vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram 
        = ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused) 
           & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__mem_rvalid = ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state)) 
                                                  & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_pending) 
                                                     & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err)
                                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid)
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target))
                                                          ? 
                                                         ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid) 
                                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight))
                                                          : (IData)(vlSelf->__VdfgTmp_h6ff933f9__0)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
           | (2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                           >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr 
        = (IData)(((0x67U == (IData)(vlSelf->opcode_out)) 
                   & (0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type 
        = ((0x13U == (IData)(vlSelf->opcode_out)) & 
           ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                          >> 0xcU))) | ((2U == (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                        | ((3U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                           | ((4U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                              | ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                                 | ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 0xcU))) 
                                                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                       | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                          | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0))))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type 
        = ((0x33U == (IData)(vlSelf->opcode_out)) & 
           ((IData)((0U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
            | ((IData)((0x40000000U == (0xfe007000U 
                                        & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                  | ((IData)((0x2000U == (0xfe007000U 
                                          & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                     | ((IData)((0x3000U == (0xfe007000U 
                                             & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                        | ((IData)((0x4000U == (0xfe007000U 
                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                 | ((IData)((0x6000U 
                                             == (0xfe007000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                                    | ((IData)((0x7000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                                       | (((0U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                           | ((1U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                              | ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                                 | ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                         >> 0xcU))) 
                                                    | ((6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0xcU))) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                              >> 0xcU)))))))) 
                                          & (1U == 
                                             (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x19U))))))))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch 
        = ((0x63U == (IData)(vlSelf->opcode_out)) & 
           ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
            | ((5U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                             >> 0xcU))) | ((4U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                      >> 0xcU))) 
                                           | ((6U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0xcU))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                     >> 0xcU))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system 
        = ((0x73U == (IData)(vlSelf->opcode_out)) & 
           ((IData)((0U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
            | ((IData)((0x100000U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
               | ((IData)((0x30200000U == (0xfff07000U 
                                           & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
        = (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
             ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
             : vlSelf->ysyx_25040109_top__DOT__dmem_rdata) 
           >> (0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                          : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                        << 3U)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bready) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)
            ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awlen)
            : (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_cnt));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wready 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire)));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arvalid));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart 
        = ((0x10000000U <= vlSelf->ysyx_25040109_top__DOT__mem_araddr) 
           & ((0x10000008U >= vlSelf->ysyx_25040109_top__DOT__mem_araddr) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__ar_simple_ok)));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint 
        = (((0x10010000U == vlSelf->ysyx_25040109_top__DOT__mem_araddr) 
            | (0x10010004U == vlSelf->ysyx_25040109_top__DOT__mem_araddr)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__ar_simple_ok));
    vlSelf->ysyx_25040109_top__DOT__mem_awready = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)) 
                                                   & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram)
                                                       ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw)
                                                       : 
                                                      ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart)
                                                        ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_awready)
                                                        : 
                                                       ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint)) 
                                                        | (IData)(vlSelf->ysyx_25040109_top__DOT__clint_awready)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
          ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
          : 0U);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire 
        = (IData)(((((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                     & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid)) 
                    & (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) 
                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast)));
    vlSelf->ysyx_25040109_top__DOT__imem_rvalid = (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store 
        = ((0x23U == (IData)(vlSelf->opcode_out)) & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load 
        = ((3U == (IData)(vlSelf->opcode_out)) & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                                                  | ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                          >> 0xcU))) 
                                                     | (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0xcU))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type)
            ? ((0x4000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                ? ((0x2000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                    ? ((0x1000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                        ? 9U : 8U) : ((0x1000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                       ? ((0x20U == 
                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x19U))
                                           ? 7U : 6U)
                                       : 5U)) : ((0x2000U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                                  ? 
                                                 ((0x1000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                                   ? 4U
                                                   : 3U)
                                                  : 
                                                 ((0x1000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                                   ? 2U
                                                   : 0U)))
            : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)
                ? ((1U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                           >> 0x19U)) ? ((0x4000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                          ? ((0x2000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                              ? ((0x1000U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                                  ? 0xfU
                                                  : 0xeU)
                                              : ((0x1000U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                                  ? 0xdU
                                                  : 0xcU))
                                          : ((0x2000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                              ? 0U : 
                                             ((0x1000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                               ? 0xbU
                                               : 0xaU)))
                    : ((0x4000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                        ? ((0x2000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                            ? ((0x1000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                ? 9U : 8U) : ((0x1000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                               ? ((0x20U 
                                                   == 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))
                                                   ? 7U
                                                   : 6U)
                                               : 5U))
                        : ((0x2000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                            ? ((0x1000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                ? 4U : 3U) : ((0x1000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)
                                               ? 2U
                                               : ((0x20U 
                                                   == 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                    >> 0x19U))
                                                   ? 1U
                                                   : 0U)))))
                : 0U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch)
            ? (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                     >> 0xcU)) : 0U);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel 
        = ((0x37U == (IData)(vlSelf->opcode_out)) ? 2U
            : (((0x17U == (IData)(vlSelf->opcode_out)) 
                | ((0x6fU == (IData)(vlSelf->opcode_out)) 
                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch)))
                ? 1U : 0U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op = 0U;
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
         & (0x1000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op = 1U;
    } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                & (0x2000U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op = 2U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
           & (0U == (0x7000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wready));
    vlSelf->ysyx_25040109_top__DOT__sram_arvalid = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram));
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__ar_fire 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart)));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__ar_fire 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint)));
    vlSelf->ysyx_25040109_top__DOT__mem_arready = (
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state)) 
                                                   & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram)
                                                       ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_ar)
                                                       : 
                                                      ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart)
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid))
                                                        : 
                                                       ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint)) 
                                                        | (~ (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending) 
              & (0U != ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rresp)
                         : 0U))));
    vlSelf->is_store_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->is_load_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0 
        = ((0x37U == (IData)(vlSelf->opcode_out)) | 
           ((0x17U == (IData)(vlSelf->opcode_out)) 
            | ((0x6fU == (IData)(vlSelf->opcode_out)) 
               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr) 
                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
        = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
            : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel))
                ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel 
        = (((0x6fU == (IData)(vlSelf->opcode_out)) 
            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr))
            ? 2U : ((0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op))
                     ? 1U : 0U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
           & (0U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                     >> 0x14U)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_last_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wlast) 
              | (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire) 
           & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wlast) 
               & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use))) 
              | ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wlast)) 
                 & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use)))));
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_arvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_arready));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load) 
              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) 
                 & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err)))));
    vlSelf->__VdfgTmp_h2aca818a__0 = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
                                            | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgExtracted_hbd62d6b5__0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9a4a4173__0 
        = ((0x80000000U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
           & (0xffffffffU == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
    vlSelf->is_ecall_out = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op) 
            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
               & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)))) 
           & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)) 
           & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
               & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                  | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))) 
              & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid 
        = ((~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused 
        = ((IData)(vlSelf->__VdfgTmp_h2aca818a__0) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp = 0ULL;
    vlSelf->ysyx_25040109_top__DOT__dmem_wvalid = (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
    vlSelf->ysyx_25040109_top__DOT__dmem_awvalid = 
        ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0x342U : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)
                         ? 0x341U : ((IData)(vlSelf->is_ecall_out)
                                      ? 0x341U : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                   >> 0x14U)
                                                   : 0U))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
        = ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus
            : ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : ((0x341U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                    ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x342U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause
                        : 0U))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
    if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu 
            = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op)) 
               | ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op)) 
                  & (0U != (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                     >> 0xfU)))));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any) 
              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                 & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) 
                    & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu) 
                       | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall))))));
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = 0U;
    } else if ((0x10U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = 0U;
    } else if ((8U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                            : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                            : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9a4a4173__0)
                                ? 0U : VL_MODDIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))))
                    : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9a4a4173__0)
                                              ? 0x80000000U
                                              : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))));
        } else if ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgExtracted_hbd62d6b5__0;
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                    = (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                               >> 0x20U));
            } else {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgExtracted_hbd62d6b5__0;
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                    = (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp);
            }
        } else {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, 
                                         (0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           >> (0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))
                    : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                            < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? 1U : 0U))) : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                                             ? ((1U 
                                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                                                 ? 
                                                (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))
                                             : ((1U 
                                                 & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op))
                                                 ? 
                                                (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                 - vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                 : 
                                                (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                 + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))));
    }
    vlSelf->ysyx_25040109_top__DOT__imem_rdata = ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                                   ? vlSelf->ysyx_25040109_top__DOT__mem_rdata
                                                   : 0U);
    if (VL_UNLIKELY(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 211, "");
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
        VL_WRITEF(" hit bad trap :0x%08x:\n",32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                    & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U))) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x6fU == (IData)(vlSelf->opcode_out))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                        : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr)
                            ? (0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)
                            : (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
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
                                                     >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                                : ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe))))));
    }
    vlSelf->ysyx_25040109_top__DOT__mem_wvalid = ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                                                  & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wvalid));
    vlSelf->ysyx_25040109_top__DOT__mem_awvalid = (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result 
        = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile
            : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel))
                ? ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)
                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = 0U;
    if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu 
            = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data
                : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
                       | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data)
                    : 0U));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)) 
                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready)));
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe), vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe);
    }
    vlSelf->ysyx_25040109_top__DOT__mem_rready = ((2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state))
                                                   ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause
            : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc
                : ((IData)(vlSelf->is_ecall_out) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                    : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu)));
    vlSelf->ysyx_25040109_top__DOT__sram_wvalid = ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8d8946d8__0) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid)));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8d8946d8__0) 
            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_wready));
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8d8946d8__0) 
            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_wready));
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_awvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awready));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h30c135bd__0 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_awvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_use 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire)
            ? vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused
            : vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h30c135bd__0) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_awready));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h30c135bd__0) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_awready));
    vlSelf->ysyx_25040109_top__DOT__sram_awvalid = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h30c135bd__0) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__in_r_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready));
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__r_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
            & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__uart_rvalid));
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__r_fire 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
            & ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_rvalid));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rready 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0) 
            & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target)) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow) 
                             << 6U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_arvalid) 
                                        << 5U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire) 
                                                   << 4U) 
                                                  | ((((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rvalid) 
                                                       & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_rready) 
                                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_rlast))) 
                                                      << 3U) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state)))));
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state_n 
        = Vysyx_25040109_top__ConstPool__TABLE_h322a62b6_0
        [vlSelf->__Vtableidx1];
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_w 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_aw_valid) 
            | ((IData)(vlSelf->ysyx_25040109_top__DOT__sram_awvalid) 
               & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw))) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT____VdfgTmp_hd60917bf__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rready) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid));
    vlSelf->ysyx_25040109_top__DOT__mem_wready = ((1U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state)) 
                                                  & ((IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err) 
                                                     | ((0U 
                                                         == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                         ? (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_w)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target))
                                                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__uart_wready)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target)) 
                                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__clint_wready))))));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_awvalid) 
                             << 5U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire) 
                                        << 4U) | ((
                                                   ((IData)(vlSelf->ysyx_25040109_top__DOT__mem_wvalid) 
                                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__mem_wready)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state)))));
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state_n 
        = Vysyx_25040109_top__ConstPool__TABLE_h25dfdbb8_0
        [vlSelf->__Vtableidx2];
}

VL_ATTR_COLD void Vysyx_25040109_top___024root___eval_stl(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_25040109_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__nba(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_25040109_top___024root___ctor_var_reset(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->p_count_number = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->a0_out = VL_RAND_RESET_I(32);
    vlSelf->inst_wb_complete = VL_RAND_RESET_I(1);
    vlSelf->is_load_out = VL_RAND_RESET_I(1);
    vlSelf->is_store_out = VL_RAND_RESET_I(1);
    vlSelf->is_ecall_out = VL_RAND_RESET_I(1);
    vlSelf->opcode_out = VL_RAND_RESET_I(7);
    vlSelf->dmem_raddr_out = VL_RAND_RESET_I(32);
    vlSelf->dmem_waddr_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__imem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__dmem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__dmem_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__sram_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__sram_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__sram_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__uart_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__uart_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__uart_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__uart_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__uart_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__uart_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__uart_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__clint_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__clint_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__clint_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__clint_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__clint_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__clint_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__clint_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__fetch_allow = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j = VL_RAND_RESET_I(20);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b = VL_RAND_RESET_I(12);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgExtracted_hbd62d6b5__0 = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9a4a4173__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__rd_state_n = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__wr_state_n = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__aw_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_arbiter__DOT__b_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rlen_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_id_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_id_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_state = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_target = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_target = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_err = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_err = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__err_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__rd_pending = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__wr_pending = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__ar_simple_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__aw_simple_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_uart = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_sram = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_ar_clint = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_uart = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_sram = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__hit_aw_clint = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT__in_r_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h72036432__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_ha38bac7d__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h30c135bd__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8d8946d8__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__xbar__DOT____VdfgTmp_h8c1d6087__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__arid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_seen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_seen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awaddr_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__awid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__r_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__aw_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__b_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_uart__DOT__wdata_use = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awaddr_unused = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__wdata_unused = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arsize_unused = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__arburst_unused = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_seen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_seen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__awid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__ar_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__r_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__aw_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__w_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__u_clint__DOT__b_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_araddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rdq_arburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_w_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awaddr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awid = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awlen = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awsize = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_awburst = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wdata = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wstrb = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_wlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_inflight = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_inflight = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__rd_ar_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_aw_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wr_w_done = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__last_grant = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__wrq_full = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_ar = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_aw = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__can_accept_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_arready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_rlast = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_awready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_wready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bvalid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bready = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__m_bresp = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rvalid_unused = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rresp_unused = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT____VdfgTmp_hd60917bf__0 = 0;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awid_latched = VL_RAND_RESET_I(4);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arlen_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arsize_reg = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_arburst_reg = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_active = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_burst_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_araddr_reg = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arlen_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arsize_reg = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_arburst_reg = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_active = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_cnt = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awsize_reg = VL_RAND_RESET_I(3);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awburst_reg = VL_RAND_RESET_I(2);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_burst_ok_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_burst_ok_w = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_latched = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awaddr_valid = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_use = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_awlen_use = VL_RAND_RESET_I(8);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_wlast_err_this = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_last_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_ar_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_fire = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_rdata_buf = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_rdata_buf = VL_RAND_RESET_I(32);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_waddr_ok = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_r_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_busy = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__imem_delay_cnt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_delay_cnt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_w_delay_cnt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_aw_delay_cnt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__dmem_b_delay_cnt = VL_RAND_RESET_I(5);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_imem__DOT__lsb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem__DOT__lsb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_w__DOT__lsb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_aw__DOT__lsb = VL_RAND_RESET_I(1);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__mem__DOT__ifsr_dmem_b__DOT__lsb = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h2aca818a__0 = 0;
    vlSelf->__VdfgTmp_h6ff933f9__0 = 0;
    vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__mem__DOT__pmem_read_ok__14__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
