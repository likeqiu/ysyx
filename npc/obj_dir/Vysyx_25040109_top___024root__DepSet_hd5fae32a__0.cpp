// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

void Vysyx_25040109_top___024root___eval_act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_act\n"); );
}

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes, IData/*31:0*/ p_count_number);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok_TOP(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read_ok__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt = 0;
    IData/*31:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0;
    CData/*3:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_valid;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_valid = 0;
    CData/*2:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay = 0;
    CData/*4:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay = 0;
    // Body
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_valid 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire) {
            if (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_ok) 
                 & (0U != (0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                    ? ((IData)(1U) 
                                       << (3U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                    : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                        ? ((IData)(3U) 
                                           << (2U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                        : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                            ? 0xfU : 0U))))))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_use, 
                                                                                (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched 
                                                                                << 
                                                                                (0x18U 
                                                                                & (vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_use 
                                                                                << 3U))), 
                                                                                (0xfU 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                << 
                                                                                (3U 
                                                                                & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                                                                 : 
                                                                                ((1U 
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
                                                                                 : 0U)))));
            }
        }
    }
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid 
        = ((~ (IData)(vlSelf->rst)) & ((2U == (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire))) 
                                       | ((1U != (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire))) 
                                          & ((3U != 
                                              (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire))) 
                                             & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)))));
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_valid 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)) 
                                       & ((2U == (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire))) 
                                          | ((1U != 
                                              (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire))) 
                                             & ((3U 
                                                 == 
                                                 (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire))) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid))))));
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we) 
         & (0U != (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                            >> 7U))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__writeback_data;
        __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 7U));
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_aw_delay = 1U;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_w_delay = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay = 1U;
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt = 0U;
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_aw_delay 
            = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_aw_delay))
                ? 1U : (0x1fU & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_aw_delay) 
                                  >> 1U) ^ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_aw__DOT__lsb)
                                             ? 0x12U
                                             : 0U))));
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_w_delay 
            = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_w_delay))
                ? 1U : (0x1fU & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_w_delay) 
                                  >> 1U) ^ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_w__DOT__lsb)
                                             ? 0x12U
                                             : 0U))));
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay 
            = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay))
                ? 1U : (0x1fU & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay) 
                                  >> 1U) ^ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_b__DOT__lsb)
                                             ? 0x12U
                                             : 0U))));
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay 
            = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay))
                ? 1U : (0x1fU & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay) 
                                  >> 1U) ^ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem__DOT__lsb)
                                             ? 0x10U
                                             : 0U))));
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay 
            = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay))
                ? 1U : (0x1fU & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay) 
                                  >> 1U) ^ ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_imem__DOT__lsb)
                                             ? 0x12U
                                             : 0U))));
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt = 0U;
        } else if ((0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt 
                = (0xfU & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt) 
                           - (IData)(1U)));
        }
        if ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
                if ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
                    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 0U;
                } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bready))) {
                    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 5U;
                }
            } else if ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
                if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) {
                    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 0U;
                }
            } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire) {
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 6U;
            }
        } else if ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
            if ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
                if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire) {
                    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 4U;
                }
            } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire) {
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 5U;
            }
        } else if ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))) {
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire) {
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 2U;
            }
        } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load))) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 1U;
        } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
                    & (IData)(vlSelf->is_store_out))) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 3U;
        }
    }
    if (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe, 4U, vlSelf->p_count_number);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe, __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout))) {
            VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v", 417, "");
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt = 0U;
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt = 0U;
    } else {
        if (VL_UNLIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) 
                         & VL_GTS_III(32, 0xaU, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt)))) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt 
                = ((IData)(1U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt);
            VL_WRITEF("[DBG id_fire%0d] pc_fetch=0x%08x inst_ifu=0x%08x id_valid=%b stage_valid=%b ifu_ready=%b mem_valid=%b imem_addr=0x%08x\n",
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu,
                      1,(IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid),
                      1,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid,
                      1,(IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem),
                      1,vlSelf->ysyx_25040109_top__DOT__imem_rvalid,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch);
        }
        if (VL_UNLIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) 
                         & VL_GTS_III(32, 0xaU, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt)))) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt 
                = ((IData)(1U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt);
            VL_WRITEF("[DBG commit%0d] pc_exe=0x%08x inst=0x%08x rd=%0# wdata=0x%08x wen=%b pc_fetch=0x%08x next_pc=0x%08x\n",
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe,
                      5,(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 7U)),32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__writeback_data,
                      1,(IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we),
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch,
                      32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc);
        }
    }
    if (((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data 
            = vlSelf->ysyx_25040109_top__DOT__dmem_rdata;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset 
            = (3U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched);
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt;
    if (__Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_valid;
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus = 0x1800U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc = 0U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 0U;
        vlSelf->ysyx_25040109_top__DOT__imem_rresp = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched = 0U;
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc = 0x80000000U;
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause = 0U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp 
                = vlSelf->ysyx_25040109_top__DOT__imem_rdata;
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire) {
            vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched 
                = vlSelf->dmem_raddr_out;
        }
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire) 
             & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full = 1U;
        } else if (((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire)) 
                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full = 0U;
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we) {
            if ((0x300U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                if ((0x305U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                    if ((0x341U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                        if ((0x342U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause 
                                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
                        }
                    }
                    if ((0x341U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc 
                            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
                    }
                }
            }
            if ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
            }
        }
        if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_fire) {
            vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire) {
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy = 1U;
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
                = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay;
            vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy) {
            if ((0U < (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt))) {
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
                    = (0x1fU & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt) 
                                - (IData)(1U)));
                vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = 0U;
            } else {
                vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = 1U;
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy = 0U;
            }
        }
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_delay;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy;
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 0U;
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending = 0U;
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch;
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause = 1U;
            } else {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause 
                    = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_load)
                        ? 5U : 7U);
            }
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 1U;
        } else {
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 0U;
            } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 0U;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued = 1U;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending = 1U;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_r_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending = 0U;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) {
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
            } else if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                        & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall))) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause = 0xbU;
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 1U;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) {
                __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch;
            }
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire) {
            vlSelf->ysyx_25040109_top__DOT__imem_rresp 
                = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_ok)
                    ? 0U : 2U);
        }
        if (((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp 
                = vlSelf->ysyx_25040109_top__DOT__dmem_rresp;
        }
        if ((IData)(((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                     & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp 
                = vlSelf->ysyx_25040109_top__DOT__dmem_bresp;
        }
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                | (IData)(vlSelf->is_store_out)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched 
                = vlSelf->is_store_out;
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load;
        } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched = 0U;
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched = 0U;
        }
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_aw__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_aw_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_w__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_w_delay));
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay));
    vlSelf->ysyx_25040109_top__DOT__dmem_bready = (6U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid) 
           & (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_fire 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_resp_err 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
               & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_rresp))) 
              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched) 
                 & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_bresp)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_fire 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r = 0U;
        vlSelf->ysyx_25040109_top__DOT__imem_rvalid = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                | (IData)(vlSelf->is_store_out)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data;
        }
        if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r 
                = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond));
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_r_fire) {
            vlSelf->ysyx_25040109_top__DOT__imem_rvalid = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire) {
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy = 1U;
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt 
                = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay;
            vlSelf->ysyx_25040109_top__DOT__imem_rvalid = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy) {
            if ((0U < (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt))) {
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt 
                    = (0x1fU & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt) 
                                - (IData)(1U)));
                vlSelf->ysyx_25040109_top__DOT__imem_rvalid = 0U;
            } else {
                vlSelf->ysyx_25040109_top__DOT__imem_rvalid = 1U;
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy = 0U;
            }
        }
    }
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_delay;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_busy;
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf 
            = vlSelf->ysyx_25040109_top__DOT__dmem_rdata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched = 0U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rresp = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                | (IData)(vlSelf->is_store_out)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result;
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire) {
            vlSelf->ysyx_25040109_top__DOT__dmem_rresp 
                = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_ok)
                    ? 0U : 2U);
        }
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire 
        = (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched)) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_r_busy)) 
              & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid))));
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__dmem_bresp = 0U;
        vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt = 0U;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe = 0x80000000U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_fire) {
            vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = 0U;
        }
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire) {
            vlSelf->ysyx_25040109_top__DOT__dmem_bresp 
                = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_ok)
                    ? 0U : 2U);
            if ((0U != (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay))) {
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy = 1U;
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt 
                    = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay;
            } else {
                vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = 1U;
            }
        }
        if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy) {
            if ((0U != (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt))) {
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt 
                    = (0x1fU & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt) 
                                - (IData)(1U)));
            } else {
                vlSelf->ysyx_25040109_top__DOT__dmem_bvalid = 1U;
                __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy = 0U;
            }
        }
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_busy;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay_cnt;
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay 
            = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay;
        if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)))) {
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc;
            }
        }
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__id_pc;
    vlSelf->inst_wb_complete = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_imem__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_imem 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending) 
              & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rresp))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_use 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)
            ? vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched);
    vlSelf->dmem_raddr_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__ifsr_dmem_b__DOT__lsb 
        = (1U & (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_delay));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_b_fire 
        = ((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid));
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf 
            = vlSelf->ysyx_25040109_top__DOT__imem_rdata;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch = 0x80000000U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched = 0U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec;
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = 0U;
        } else {
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc;
            }
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = 1U;
            } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid = 0U;
            }
        }
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire) 
             & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                | (IData)(vlSelf->is_store_out)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched 
                = (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                         >> 0xcU));
        }
    }
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__6__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_ok 
        = (0U != vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__6__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire 
        = (1U & (((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                  & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid)) 
                     & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending)))) 
                 & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy)) 
                    & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
            ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3)
            : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched));
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe = 0U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we) {
            if ((0x300U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                if ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec 
                        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)))) {
            if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst;
            }
        }
    }
    vlSelf->pc = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)
                   ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                   : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch);
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok_TOP(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_use, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__8__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_waddr_ok 
        = (0U != vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__8__Vfuncout);
    vlSelf->dmem_waddr_out = vlSelf->dmem_raddr_out;
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok_TOP(vlSelf->dmem_raddr_out, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__7__Vfuncout);
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_ok 
        = (0U != vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read_ok__7__Vfuncout);
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf);
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read__4__Vfuncout);
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_ok)
                ? vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read__4__Vfuncout
                : 0U);
    } else {
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf;
    }
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__pmem_read_TOP(vlSelf->dmem_raddr_out, vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read__5__Vfuncout);
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_ok)
                ? vlSelf->__Vfunc_ysyx_25040109_top__DOT__mem__DOT__pmem_read__5__Vfuncout
                : 0U);
    } else {
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf;
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)))) {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu;
        }
    }
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                >> 0x14U));
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
        = (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
             ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
             : vlSelf->ysyx_25040109_top__DOT__dmem_rdata) 
           >> (0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                          : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                        << 3U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp
            : vlSelf->ysyx_25040109_top__DOT__imem_rdata);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system 
        = ((0x73U == (IData)(vlSelf->opcode_out)) & 
           ((IData)((0U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
            | ((IData)((0x100000U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
               | ((IData)((0x30200000U == (0xfff07000U 
                                           & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe))) 
                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))));
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm);
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused 
        = ((IData)(vlSelf->__VdfgTmp_h2aca818a__0) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid 
        = ((~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire 
        = (((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused)) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)) 
              & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we 
        = ((((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__commit_cond)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                    | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                       & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp = 0ULL;
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire 
        = (((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused)) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_bvalid)) 
              & ((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid) 
                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire))));
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_cause
            : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_mepc
                : ((IData)(vlSelf->is_ecall_out) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe
                    : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__writeback_data 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
            ? (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                    ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                        ? 0U : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                 ? (0xffffU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                 : (0xffU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                    : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                        ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                            ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                        : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                            ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                            : (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                : 0U) : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_r_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__idu_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_valid_to_idu) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exc_any)) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready)));
}

void Vysyx_25040109_top___024root___eval_nba(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_25040109_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vysyx_25040109_top___024root___eval_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__act(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__nba(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_25040109_top___024root___eval(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_25040109_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_25040109_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_25040109_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_25040109_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_25040109_top___024root___eval_debug_assertions(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
