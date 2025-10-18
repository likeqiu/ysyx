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

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__difftest_skip_ref_TOP();
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes, IData/*31:0*/ p_count_number);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__3__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__3__Vfuncout = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data;
    __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data = 0;
    IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__6__data;
    __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__6__data = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*1:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__imem_ready;
    __Vdly__ysyx_25040109_top__DOT__imem_ready = 0;
    IData/*31:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf = 0;
    CData/*1:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__dmem_rready;
    __Vdly__ysyx_25040109_top__DOT__dmem_rready = 0;
    IData/*31:0*/ __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__dmem_wready;
    __Vdly__ysyx_25040109_top__DOT__dmem_wready = 0;
    // Body
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf;
    __Vdly__ysyx_25040109_top__DOT__dmem_rready = vlSelf->ysyx_25040109_top__DOT__dmem_rready;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_state;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf;
    __Vdly__ysyx_25040109_top__DOT__imem_ready = vlSelf->ysyx_25040109_top__DOT__imem_ready;
    __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state 
        = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_state;
    __Vdly__ysyx_25040109_top__DOT__dmem_wready = vlSelf->ysyx_25040109_top__DOT__dmem_wready;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    if (((((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h486b00cb__0)) 
            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)) 
           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)) 
          | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)) 
         | (0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__difftest_skip_ref_TOP();
    }
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu, 4U, vlSelf->p_count_number);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu, __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__3__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__3__Vfuncout))) {
            VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v", 332, "");
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__dmem_wready = 1U;
    } else {
        if ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h486b00cb__0)) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready))) {
            if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 1U);
            } else if ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 2U);
            } else if ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 4U);
            }
        }
        __Vdly__ysyx_25040109_top__DOT__dmem_wready = 1U;
    }
    if ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
           ? ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__load_data_valid_from_lsu) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__reg_write_en_exu))
           : ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)) 
              & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__reg_write_en_exu))) 
         & (0U != (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                            >> 7U))))) {
        __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load)
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__load_data_from_lsu
                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result);
        __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 7U));
    }
    vlSelf->ysyx_25040109_top__DOT__dmem_wready = __Vdly__ysyx_25040109_top__DOT__dmem_wready;
    if (__Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus = 0x1800U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg = 0x80000000U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
        } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall) {
            __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 1U;
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
                if ((0x305U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec 
                        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
                }
            }
            if ((0x300U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr))) {
                vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus 
                    = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
            }
        }
        if (((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_valid_from_ifu))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__load_data_valid_from_lsu 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid));
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__load_data_from_lsu = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_valid_from_ifu = 0U;
    } else {
        if (vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__load_data_from_lsu 
                = ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                    ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                        ? 0U : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                                 ? (0xffffU & vlSelf->ysyx_25040109_top__DOT__dmem_rdata)
                                 : (0xffU & vlSelf->ysyx_25040109_top__DOT__dmem_rdata)))
                    : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                        ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                            ? 0U : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)
                        : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3))
                            ? (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->ysyx_25040109_top__DOT__dmem_rdata))
                            : (((- (IData)((1U & (vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->ysyx_25040109_top__DOT__dmem_rdata)))));
        }
        if (vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_valid_from_ifu = 1U;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_valid_from_ifu = 0U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 0U;
        __Vdly__ysyx_25040109_top__DOT__dmem_rready = 1U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid = 0U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata = 0U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_state))) {
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_valid) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rready))) {
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result;
            __Vdly__ysyx_25040109_top__DOT__dmem_rready = 0U;
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_state))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf, __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__6__data);
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_data_buf 
            = __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__6__data;
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_data_buf;
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 2U;
    } else if ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_state))) {
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid = 0U;
        __Vdly__ysyx_25040109_top__DOT__dmem_rready = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 0U;
    } else {
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state = 0U;
        __Vdly__ysyx_25040109_top__DOT__dmem_rready = 1U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata_valid = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_state 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_state;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__dmem_raddr_buf;
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3 = 0U;
        vlSelf->ysyx_25040109_top__DOT__dmem_rready 
            = __Vdly__ysyx_25040109_top__DOT__dmem_rready;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu = 0x13U;
    } else {
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_valid) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rready))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_funct3 
                = (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                         >> 0xcU));
        }
        vlSelf->ysyx_25040109_top__DOT__dmem_rready 
            = __Vdly__ysyx_25040109_top__DOT__dmem_rready;
        if (vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                = vlSelf->ysyx_25040109_top__DOT__imem_rdata;
        } else if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu = 0x13U;
        }
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 0U;
        __Vdly__ysyx_25040109_top__DOT__imem_ready = 1U;
        vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid = 0U;
        vlSelf->ysyx_25040109_top__DOT__imem_rdata = 0x13U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf = 0U;
    } else if ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_state))) {
        if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid) 
             & (IData)(vlSelf->ysyx_25040109_top__DOT__imem_ready))) {
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf 
                = vlSelf->pc;
            __Vdly__ysyx_25040109_top__DOT__imem_ready = 0U;
            __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_state))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf, __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data);
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_data_buf 
            = __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data;
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_data_buf;
        vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 2U;
    } else if ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_state))) {
        vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid = 0U;
        __Vdly__ysyx_25040109_top__DOT__imem_ready = 1U;
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 0U;
    } else {
        __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state = 0U;
        __Vdly__ysyx_25040109_top__DOT__imem_ready = 1U;
        vlSelf->ysyx_25040109_top__DOT__imem_rdata_valid = 0U;
    }
    vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu;
    vlSelf->ysyx_25040109_top__DOT__dmem_wlen = ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 0xcU)))
                                                   ? 2U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 0xcU)))
                                                    ? 4U
                                                    : 0U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 
        = (IData)((0x73U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
        = ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                            >> 0xfU))) ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
           [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                      >> 0xfU))]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0 
        = ((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
           | ((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
              | (0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))));
    vlSelf->__VdfgTmp_ha77e4c63__0 = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [(0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                   >> 0x14U))];
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 
        = (IData)((0x5000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 
        = (IData)((0x40005000U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x14U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
        = ((0x80000U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0xcU)) | ((0x7f800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                            >> 0x15U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s 
        = ((0xfe0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                      >> 0x14U)) | (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             >> 7U)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b 
        = ((0x800U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                      >> 0x14U)) | ((0x400U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               << 3U)) 
                                    | ((0x3f0U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 0x15U)) 
                                       | (0xfU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 8U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0 
        = (IData)((0U == (0xfff07000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 
        = ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                         >> 0xcU))) | (1U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_state 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_state;
    vlSelf->ysyx_25040109_top__DOT__imem_ready = __Vdly__ysyx_25040109_top__DOT__imem_ready;
    vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf 
        = __Vdly__ysyx_25040109_top__DOT__mem__DOT__imem_addr_buf;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid 
        = ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg) 
           & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg));
    vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data);
    if ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                         >> 0x14U)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
            = vlSelf->__VdfgTmp_ha77e4c63__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_ha77e4c63__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_ha77e4c63__0;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type 
        = ((0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
           & ((IData)((0U == (0xfe007000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
              | ((IData)((0x40000000U == (0xfe007000U 
                                          & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                 | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                    | ((IData)((0x2000U == (0xfe007000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                       | ((IData)((0x3000U == (0xfe007000U 
                                               & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                          | ((IData)((0x4000U == (0xfe007000U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                   | ((IData)((0x6000U 
                                               == (0xfe007000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                                      | ((IData)((0x7000U 
                                                  == 
                                                  (0xfe007000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                                         | (((0U == 
                                              (7U & 
                                               (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0xcU))) 
                                             | ((1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 0xcU))) 
                                                | ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 0xcU))) 
                                                   | ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0xcU))) 
                                                      | ((6U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                              >> 0xcU))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                                >> 0xcU)))))))) 
                                            & (1U == 
                                               (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x19U))))))))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0x1fU))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                        >> 0x1fU))) << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system 
        = ((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0) 
              | ((IData)((0x100000U == (0xfff07000U 
                                        & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                 | ((IData)((0x30200000U == (0xfff07000U 
                                             & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                    | ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                     >> 0xcU))) | (2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 0xcU))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
           | (2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                           >> 0xcU))));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm = 
        ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit)
          ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out
          : 0U);
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr 
            = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
               >> 0x14U);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store 
        = ((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load 
        = ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
              | ((4U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                               >> 0xcU))) | (5U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount 
        = (0x1fU & (((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                     & ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0xcU))) | 
                        (5U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0xcU))))) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm
                     : ((0U == (0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x14U)))
                         ? 0U : vlSelf->__VdfgTmp_ha77e4c63__0)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0x342U : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)
                         ? 0x341U : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)));
    if (VL_LIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                   | ((IData)((0x67U == (0x707fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))) 
                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
                         | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store) 
                            | (((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                   | ((5U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))) 
                                      | ((4U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0xcU))) 
                                         | ((6U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))) 
                                            | (7U == 
                                               (7U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 0xcU)))))))) 
                               | (((0x13U == (0x7fU 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                   & ((0U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))) 
                                      | ((2U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0xcU))) 
                                         | ((3U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0xcU))) 
                                            | ((4U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0xcU))) 
                                               | ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 0xcU))) 
                                                  | ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          >> 0xcU))) 
                                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                        | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0)))))))))) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)))))))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 1U;
        VL_WRITEF("inst:0x%08x\n",32,vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu) 
              == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm);
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__reg_write_en_exu 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) 
           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
              | ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                 | ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                    | ((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                       | ((0x33U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                          | (0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h486b00cb__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) 
                 & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = 0U;
    if (((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                             >> 0xcU))) | (IData)((
                                                   (0x2000U 
                                                    == 
                                                    (0x7000U 
                                                     & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                                   & (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          >> 0xfU))))));
    }
    if (VL_UNLIKELY(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 217, "");
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = ((IData)(4U) + vlSelf->pc);
        VL_WRITEF("0x%08x:\n",32,vlSelf->pc);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                    & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                    ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                        : ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))
                            ? (0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                              + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data))
                            : (((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                & ((IData)(((0U == 
                                             (0x7000U 
                                              & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                               == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                   | ((IData)(((0x1000U 
                                                == 
                                                (0x7000U 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                  != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                      | ((IData)(((0x4000U 
                                                   == 
                                                   (0x7000U 
                                                    & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                                  & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                         | ((IData)(
                                                    ((0x5000U 
                                                      == 
                                                      (0x7000U 
                                                       & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                                     & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                            | ((IData)(
                                                       ((0x6000U 
                                                         == 
                                                         (0x7000U 
                                                          & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                           < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))) 
                                               | (IData)(
                                                         ((0x7000U 
                                                           == 
                                                           (0x7000U 
                                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                             >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)))))))))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                                : ((IData)(4U) + vlSelf->pc))))));
    }
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = 0U;
    } else if (((((((((0x4c00U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 0x19U))))) 
                      | (0x4d00U == (0x1ff80U & ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 0x19U)))))) 
                     | (0x4d80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0x19U)))))) 
                    | (0x4e00U == (0x1ff80U & ((0x1fc00U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   << 0xaU)) 
                                               | ((0x380U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 5U)) 
                                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 0x19U)))))) 
                   | (0x4f00U == (0x1ff80U & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0x19U)))))) 
                  | (0x4f80U == (0x1ff80U & ((0x1fc00U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 0x19U)))))) 
                 | (0x4c80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) 
                | (0x4e80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                     >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4c00U == (0x1ff80U & ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 0x19U)))))
                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                : ((0x4d00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 0x19U)))))
                    ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? 1U : 0U) : ((0x4d80U == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                            >> 0x19U)))))
                                       ? ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           ? 1U : 0U)
                                       : ((0x4e00U 
                                           == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 0x19U)))))
                                           ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                              ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           : ((0x4f00U 
                                               == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                            >> 0x19U)))))
                                               ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                  | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                               : ((0x4f80U 
                                                   == 
                                                   (0x1ff80U 
                                                    & ((0x1fc00U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           << 0xaU)) 
                                                       | ((0x380U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                              >> 5U)) 
                                                          | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                             >> 0x19U)))))
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                   : 
                                                  ((0x4c80U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x19U)))) 
                      | (0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                           >> 0x19U))))) 
                     | (0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          >> 0x19U))))) 
                    | (0xcc80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x19U))))) 
                   | (0xcd00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 5U)) 
                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                        >> 0x19U))))) 
                  | (0xcd80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 5U)) 
                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                       >> 0x19U))))) 
                 | (0xce00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) 
                | (0xce80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                     >> 0x19U)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4ea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         << 0xaU)) 
                            | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          >> 5U)) | 
                               (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                >> 0x19U)))) ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                : ((0xcc00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U)))) ? 
                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                    + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0xcc20U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          >> 0x19U))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           - vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0xcc80U == ((0x1fc00U & 
                                         (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          << 0xaU)) 
                                        | ((0x380U 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 5U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 0x19U))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                            : ((0xcd00U == ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 0x19U))))
                                ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    ? 1U : 0U) : ((0xcd80U 
                                                   == 
                                                   ((0x1fc00U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        << 0xaU)) 
                                                    | ((0x380U 
                                                        & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 5U)) 
                                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          >> 0x19U))))
                                                   ? 
                                                  ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xce00U 
                                                    == 
                                                    ((0x1fc00U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                         << 0xaU)) 
                                                     | ((0x380U 
                                                         & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                            >> 5U)) 
                                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                           >> 0x19U))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x19U)))) 
                      | (0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  << 0xaU)) 
                                     | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                        | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                           >> 0x19U))))) 
                     | (0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          >> 0x19U))))) 
                    | (0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x19U))))) 
                   | (0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               << 0xaU)) 
                                  | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 5U)) 
                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                        >> 0x19U))))) 
                  | (0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              << 0xaU)) 
                                 | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 5U)) 
                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                       >> 0x19U))))) 
                 | (0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) 
                | (0xcf01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                            << 0xaU)) 
                               | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             >> 5U)) 
                                  | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                     >> 0x19U)))))) {
        if ((0xcea0U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      << 0xaU)) | (
                                                   (0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount));
        } else if ((0xcf00U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcf80U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcc01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp);
        } else if ((0xcc81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = ((0xce01U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U)))) ? 
                   ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                     ? 0xffffffffU : (((0x80000000U 
                                        == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
                                       & (0xffffffffU 
                                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                                       ? 0x80000000U
                                       : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))
                    : ((0xce81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                    | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 5U)) 
                                       | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                          >> 0x19U))))
                        ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? 0xffffffffU : VL_DIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                        : ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                            : (((0x80000000U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
                                & (0xffffffffU == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                                ? 0U : VL_MODDIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))));
        }
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = (((((((((0xcf81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                   | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                         >> 0x19U)))) 
                      | (0xdc00U == (0x1fc00U & ((0x1fc00U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     << 0xaU)) 
                                                 | ((0x380U 
                                                     & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 5U)) 
                                                    | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 0x19U)))))) 
                     | (0x5c00U == (0x1fc00U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0x19U)))))) 
                    | (0xc00U == (0x1ff80U & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0x19U)))))) 
                   | (0xc80U == (0x1ff80U & ((0x1fc00U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 << 0xaU)) 
                                             | ((0x380U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 5U)) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 0x19U)))))) 
                  | (0xd00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 0x19U)))))) 
                 | (0xe00U == (0x1ff80U & ((0x1fc00U 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               << 0xaU)) 
                                           | ((0x380U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 5U)) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 0x19U)))))) 
                | (0xe80U == (0x1ff80U & ((0x1fc00U 
                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              << 0xaU)) 
                                          | ((0x380U 
                                              & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                 >> 5U)) 
                                             | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 0x19U))))))
                ? ((0xcf81U == ((0x1fc00U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                | ((0x380U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                              >> 5U)) 
                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                      >> 0x19U)))) ? 
                   ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                     ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                     : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((0xdc00U == (0x1fc00U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0x19U)))))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b
                        : ((0x5c00U == (0x1fc00U & 
                                        ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0x19U)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : ((0xc00U == (0x1ff80U 
                                           & ((0x1fc00U 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  << 0xaU)) 
                                              | ((0x380U 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                     >> 5U)) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    >> 0x19U)))))
                                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                : ((0xc80U == (0x1ff80U 
                                               & ((0x1fc00U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      << 0xaU)) 
                                                  | ((0x380U 
                                                      & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                         >> 5U)) 
                                                     | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                        >> 0x19U)))))
                                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    : ((0xd00U == (0x1ff80U 
                                                   & ((0x1fc00U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          << 0xaU)) 
                                                      | ((0x380U 
                                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                             >> 5U)) 
                                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                            >> 0x19U)))))
                                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                        : ((0xe00U 
                                            == (0x1ff80U 
                                                & ((0x1fc00U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       << 0xaU)) 
                                                   | ((0x380U 
                                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                          >> 5U)) 
                                                      | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                         >> 0x19U)))))
                                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                            : (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))))))))
                : ((0x8c00U == (0x1ff80U & ((0x1fc00U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                << 0xaU)) 
                                            | ((0x380U 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                   >> 5U)) 
                                               | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                  >> 0x19U)))))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0x8c80U == (0x1ff80U & ((0x1fc00U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                    << 0xaU)) 
                                                | ((0x380U 
                                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                       >> 5U)) 
                                                   | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                      >> 0x19U)))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0x8d00U == (0x1ff80U & 
                                        ((0x1fc00U 
                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                             << 0xaU)) 
                                         | ((0x380U 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                                >> 5U)) 
                                            | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                               >> 0x19U)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : 0U))));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = 0U;
    if (((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu 
            = ((1U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                             >> 0xcU))) ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data
                : ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu 
                                 >> 0xcU))) ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
                                               | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data)
                    : 0U));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_valid 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h486b00cb__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(vlSelf->pc, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->pc), vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0xbU : ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall)
                       ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg
                       : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result 
        = ((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile
            : (((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)) 
                | (0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu)))
                ? ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)
                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out));
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
