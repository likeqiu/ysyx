// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_25040109_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_25040109_top___024root.h"

VL_INLINE_OPT void Vysyx_25040109_top___024root___ico_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst_wb_complete = ((~ (IData)(vlSelf->rst)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we) 
                                      | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_mem_we) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready)) 
                                         | ((0x63U 
                                             == (IData)(vlSelf->opcode_out)) 
                                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____VdfgTmp_hc38dad51__0))))));
}

void Vysyx_25040109_top___024root___eval_ico(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_25040109_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_25040109_top___024root___eval_act(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___eval_act\n"); );
}

void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(IData/*31:0*/ pc, IData/*31:0*/ instruction_word, IData/*31:0*/ instr_len_bytes, IData/*31:0*/ p_count_number);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(IData/*31:0*/ inst, IData/*31:0*/ &printf_finish__Vfuncrtn);
extern const VlUnpacked<CData/*0:0*/, 512> Vysyx_25040109_top__ConstPool__TABLE_h1d669fa4_0;
extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_25040109_top__ConstPool__TABLE_h8719fb58_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vysyx_25040109_top__ConstPool__TABLE_hd9ba0375_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25040109_top__ConstPool__TABLE_h4032e768_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vysyx_25040109_top__ConstPool__TABLE_h2e24dd26_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_25040109_top__ConstPool__TABLE_h9c2c59f3_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vysyx_25040109_top__ConstPool__TABLE_h1b7590e4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vysyx_25040109_top__ConstPool__TABLE_hca1c778d_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vysyx_25040109_top__ConstPool__TABLE_h0a6f08af_0;
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(IData/*31:0*/ addr, IData/*31:0*/ data, IData/*31:0*/ len);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(IData/*31:0*/ pc, const VlUnpacked<IData/*31:0*/, 32> &regs);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(IData/*31:0*/ addr, IData/*31:0*/ &data);
void Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(IData/*31:0*/ pc, IData/*31:0*/ snpc, IData/*31:0*/ dnpc, IData/*31:0*/ inst);

VL_INLINE_OPT void Vysyx_25040109_top___024root___nba_sequent__TOP__0(Vysyx_25040109_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout;
    __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0;
    CData/*1:0*/ __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__itrace_print_TOP(vlSelf->pc, vlSelf->inst, 4U, vlSelf->p_count_number);
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__printf_finish_TOP(vlSelf->inst, __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout);
        if (VL_UNLIKELY((0U == __Vfunc_ysyx_25040109_top__DOT__cpu__DOT__printf_finish__2__Vfuncout))) {
            VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_CPU.v", 382, "");
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid) 
                     << 8U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire) 
                                << 7U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_mem_we) 
                                            << 5U) 
                                           | (((IData)(vlSelf->is_load_out) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_ready) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->rst))))))));
    if (Vysyx_25040109_top__ConstPool__TABLE_h1d669fa4_0
        [__Vtableidx2]) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state 
            = Vysyx_25040109_top__ConstPool__TABLE_h8719fb58_0
            [__Vtableidx2];
    }
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we) 
         & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rd_addr_idu)))) {
        __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = ((IData)(vlSelf->is_load_out) ? (((IData)(vlSelf->is_load_out) 
                                                | (2U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                      ? 
                                                     (0xffffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                                      : 
                                                     (0xffU 
                                                      & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                      ? 0U
                                                      : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata)
                                                     : 
                                                    ((1U 
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
                                                : 0U)
                : vlSelf->dmem_raddr_out);
        __Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rd_addr_idu;
    }
    if (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data 
            = vlSelf->ysyx_25040109_top__DOT__dmem_rdata;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3;
    }
    __Vtableidx1 = (2U | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready) 
                           << 6U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wen) 
                                      << 5U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid) 
                                                       << 2U) 
                                                      | (IData)(vlSelf->rst)))))));
    if ((1U & Vysyx_25040109_top__ConstPool__TABLE_hd9ba0375_0
         [__Vtableidx1])) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_wait 
            = Vysyx_25040109_top__ConstPool__TABLE_h4032e768_0
            [__Vtableidx1];
    }
    if ((2U & Vysyx_25040109_top__ConstPool__TABLE_hd9ba0375_0
         [__Vtableidx1])) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dmem_wait 
            = Vysyx_25040109_top__ConstPool__TABLE_h2e24dd26_0
            [__Vtableidx1];
    }
    if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy)))) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf 
            = vlSelf->ysyx_25040109_top__DOT__imem_rdata;
    }
    if (vlSelf->rst) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
    } else if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 0U;
    } else if (vlSelf->is_ecall_out) {
        __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state = 1U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__trap_state;
    if (__Vdlyvset__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[__Vdlyvdim0__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf__v0;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state 
        = __Vdly__ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
    vlSelf->a0_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [0xaU];
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_ready 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)));
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus = 0x1800U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg = 0x80000000U;
    } else {
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
        if ((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__cpu_stall)))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg 
                = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__cpu_stall 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dmem_wait) 
              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_wait)));
    __Vtableidx4 = (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt) 
                     << 3U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy) 
                                << 2U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
                                           << 1U) | (IData)(vlSelf->rst))));
    vlSelf->ysyx_25040109_top__DOT__dmem_rvalid = Vysyx_25040109_top__ConstPool__TABLE_h9c2c59f3_0
        [__Vtableidx4];
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy)))) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf 
            = vlSelf->ysyx_25040109_top__DOT__dmem_rdata;
    }
    if ((2U & Vysyx_25040109_top__ConstPool__TABLE_h1b7590e4_0
         [__Vtableidx4])) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy 
            = Vysyx_25040109_top__ConstPool__TABLE_hca1c778d_0
            [__Vtableidx4];
    }
    if ((4U & Vysyx_25040109_top__ConstPool__TABLE_h1b7590e4_0
         [__Vtableidx4])) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt 
            = Vysyx_25040109_top__ConstPool__TABLE_h0a6f08af_0
            [__Vtableidx4];
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_25040109_top__DOT__dmem_wready = 1U;
    } else {
        if (((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wen))) {
            if ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->dmem_raddr_out, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 1U);
            } else if ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->dmem_raddr_out, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 2U);
            } else if ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wlen))) {
                Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_write_TOP(vlSelf->dmem_raddr_out, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data, 4U);
            }
        }
        vlSelf->ysyx_25040109_top__DOT__dmem_wready = 1U;
    }
    __Vtableidx3 = (2U | (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt) 
                           << 3U) | (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy) 
                                      << 2U) | (IData)(vlSelf->rst))));
    vlSelf->ysyx_25040109_top__DOT__imem_rvalid = Vysyx_25040109_top__ConstPool__TABLE_h9c2c59f3_0
        [__Vtableidx3];
    if ((2U & Vysyx_25040109_top__ConstPool__TABLE_h1b7590e4_0
         [__Vtableidx3])) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy 
            = Vysyx_25040109_top__ConstPool__TABLE_hca1c778d_0
            [__Vtableidx3];
    }
    if ((4U & Vysyx_25040109_top__ConstPool__TABLE_h1b7590e4_0
         [__Vtableidx3])) {
        vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt 
            = Vysyx_25040109_top__ConstPool__TABLE_h0a6f08af_0
            [__Vtableidx3];
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6f00000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2U] 
        = (0x1700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid 
        = ((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg) 
           & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg));
    vlSelf->pc = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h0edd4ba6__0 
        = (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_ready)) 
           | (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)));
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__update_cpu_state__Vdpioc2_TOP(vlSelf->pc, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf);
    if (vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy) {
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf;
    } else {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(vlSelf->pc, vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data);
        vlSelf->ysyx_25040109_top__DOT__imem_rdata 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data;
    }
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_addr 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                        >> 0xfU));
        vlSelf->inst = vlSelf->ysyx_25040109_top__DOT__imem_rdata;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rd_addr_idu 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                        >> 7U));
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_addr 
            = (0x1fU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                        >> 0x14U));
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u 
            = (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
               >> 0xcU);
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7 
            = (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
               >> 0x19U);
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i 
            = (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
               >> 0x14U);
        vlSelf->opcode_out = (0x7fU & vlSelf->ysyx_25040109_top__DOT__imem_rdata);
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3 
            = (7U & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                     >> 0xcU));
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0 
            = (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
               >> 0x1fU);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_addr = 0U;
        vlSelf->inst = 0x13U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rd_addr_idu = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_addr = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7 = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i = 0U;
        vlSelf->opcode_out = 0x13U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3 = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0 = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_addr))
            ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
           [vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_addr]);
    vlSelf->__VdfgTmp_he98813b0__0 = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf
        [vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_addr];
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u 
                                              << 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u 
                                              << 0xcU))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6U] 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u 
           << 0xcU);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_u 
           << 0xcU);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7) 
            << 5U) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rd_addr_idu));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0 
        = ((0x37U == (IData)(vlSelf->opcode_out)) | 
           ((0x17U == (IData)(vlSelf->opcode_out)) 
            | (0x6fU == (IData)(vlSelf->opcode_out))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0) 
            << 0x13U) | ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)
                            ? (0xffU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                        >> 0xcU)) : 0U) 
                          << 0xbU) | ((0x3ffc00U & 
                                       (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid) 
                                         << 0xaU) & 
                                        (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                         >> 0xaU))) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)
                                          ? (0x3ffU 
                                             & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                                >> 0x15U))
                                          : 0U))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b 
        = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0) 
            << 0xbU) | ((0xfffffc00U & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid) 
                                         << 0xaU) & 
                                        (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                         << 3U))) | 
                        ((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)
                            ? (0x3fU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                        >> 0x19U)) : 0U) 
                          << 4U) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__is_pc_valid)
                                     ? (0xfU & (vlSelf->ysyx_25040109_top__DOT__imem_rdata 
                                                >> 8U))
                                     : 0U))));
    if ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))) {
        vlSelf->ysyx_25040109_top__DOT__dmem_wlen = 1U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 
            = (0x73U == (IData)(vlSelf->opcode_out));
    } else {
        vlSelf->ysyx_25040109_top__DOT__dmem_wlen = 
            ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))
              ? 2U : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))
                       ? 4U : 0U));
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0 = 0U;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0 
        = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0 
        = ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
           & (0x20U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
           & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0 
        = ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
           | (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit)
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out
            : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data);
    if ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_addr))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] = 0U;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data 
            = vlSelf->__VdfgTmp_he98813b0__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2U] 
            = vlSelf->__VdfgTmp_he98813b0__0;
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3U] 
            = vlSelf->__VdfgTmp_he98813b0__0;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                               << 0xcU) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                               << 0x15U) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                         << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
                                               << 0xdU) 
                                              | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                 << 1U)))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hdcea48d4__0))) 
            << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                        << 1U));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system 
        = ((0x73U == (IData)(vlSelf->opcode_out)) & 
           ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0) 
            | (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                & (1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i))) 
               | (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                   & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i))) 
                  | ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                     | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)))))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
           | (2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2U] 
        = (0x6300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3U] 
        = (0x3300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)));
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
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr 
            = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i;
        vlSelf->is_ecall_out = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hfd368011__0;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr = 0U;
        vlSelf->is_ecall_out = 0U;
    }
    vlSelf->is_load_out = ((3U == (IData)(vlSelf->opcode_out)) 
                           & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                              | ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                 | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)))));
    vlSelf->is_store_out = ((0x23U == (IData)(vlSelf->opcode_out)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0U] 
        = (0x2300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount 
        = (0x1fU & (((0x13U == (IData)(vlSelf->opcode_out)) 
                     & ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                        | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))))
                     ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm
                     : ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_addr))
                         ? 0U : vlSelf->__VdfgTmp_he98813b0__0)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1U] 
        = vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm;
    vlSelf->ysyx_25040109_top__DOT__dmem_ren = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h0edd4ba6__0) 
                                                & (IData)(vlSelf->is_load_out));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0x342U : ((IData)(vlSelf->is_ecall_out)
                         ? 0x341U : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
            ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3)
            : (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3));
    if (VL_LIKELY(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                   | (((0x67U == (IData)(vlSelf->opcode_out)) 
                       & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))) 
                      | ((IData)(vlSelf->is_load_out) 
                         | ((IData)(vlSelf->is_store_out) 
                            | (((0x63U == (IData)(vlSelf->opcode_out)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                   | ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                      | ((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                         | ((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                            | (7U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))))))) 
                               | (((0x13U == (IData)(vlSelf->opcode_out)) 
                                   & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                      | ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                         | ((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                            | ((4U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                               | ((6U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                     | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                        | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                           | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0)))))))))) 
                                  | (((0x33U == (IData)(vlSelf->opcode_out)) 
                                      & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                          & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                         | (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                             & (0x20U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                            | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                               | (((2U 
                                                    == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                                  | (((3U 
                                                       == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                      & (0U 
                                                         == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                                     | (((4U 
                                                          == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                         & (0U 
                                                            == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                                        | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0) 
                                                              | (((6U 
                                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                  & (0U 
                                                                     == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                                                 | (((7U 
                                                                      == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                     & (0U 
                                                                        == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))) 
                                                                    | (((0U 
                                                                         == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                           | ((4U 
                                                                               == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                              | ((5U 
                                                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                                | ((6U 
                                                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                                                | (7U 
                                                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))))))) 
                                                                       & (1U 
                                                                          == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))))))))))) 
                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)))))))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 0U;
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid = 1U;
        VL_WRITEF("inst:0x%08x\n",32,vlSelf->inst);
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->opcode_out) 
                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
        = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->opcode_out) 
                          == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->opcode_out) == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list
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
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we 
        = ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__cpu_stall)) 
           & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) 
              & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                 | ((0x67U == (IData)(vlSelf->opcode_out)) 
                    | ((3U == (IData)(vlSelf->opcode_out)) 
                       | ((0x13U == (IData)(vlSelf->opcode_out)) 
                          | ((0x33U == (IData)(vlSelf->opcode_out)) 
                             | (0x73U == (IData)(vlSelf->opcode_out)))))))));
    if (VL_UNLIKELY(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) {
        VL_FINISH_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_EXU.v", 217, "");
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = ((IData)(4U) + vlSelf->pc);
        VL_WRITEF(" hit bad trap :0x%08x:\n",32,vlSelf->pc);
    } else {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc 
            = (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec
                : (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                    & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_addr)))
                    ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc
                    : ((0x6fU == (IData)(vlSelf->opcode_out))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                        : ((0x67U == (IData)(vlSelf->opcode_out))
                            ? (0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm 
                                              + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data))
                            : (((0x63U == (IData)(vlSelf->opcode_out)) 
                                & (((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                    & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                       == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                   | (((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                       & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                          != vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                      | (((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                          & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                         | (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                             & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                            | (((6U 
                                                 == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                   < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                               | ((7U 
                                                   == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                                                  & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                     >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target
                                : ((IData)(4U) + vlSelf->pc))))));
    }
    if (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out = 0U;
    } else if (((((((((0x4c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                   << 7U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                      | (0x4d00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                     << 7U) 
                                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                     | (0x4d80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                    | (0x4e00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                << 0xaU) 
                                               | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                   << 7U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                   | (0x4f00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                  | (0x4f80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                 | (0x4c80U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                | (0x4e80U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                             << 7U) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                          << 7U) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                : ((0x4d00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                    ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? 1U : 0U) : ((0x4d80U == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                          << 7U) 
                                                         | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                       ? ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           ? 1U : 0U)
                                       : ((0x4e00U 
                                           == (0x1ff80U 
                                               & (((IData)(vlSelf->opcode_out) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                      << 7U) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                           ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                              ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                           : ((0x4f00U 
                                               == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                          << 7U) 
                                                         | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                               ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                  | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                               : ((0x4f80U 
                                                   == 
                                                   (0x1ff80U 
                                                    & (((IData)(vlSelf->opcode_out) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                           << 7U) 
                                                          | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                                   ? 
                                                  (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                   : 
                                                  ((0x4c80U 
                                                    == 
                                                    (((IData)(vlSelf->opcode_out) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                         << 7U) 
                                                        | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0x4ea0U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))) 
                      | (0xcc00U == (((IData)(vlSelf->opcode_out) 
                                      << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                   << 7U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                     | (0xcc20U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                    | (0xcc80U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                   | (0xcd00U == (((IData)(vlSelf->opcode_out) 
                                   << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                  | (0xcd80U == (((IData)(vlSelf->opcode_out) 
                                  << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                               << 7U) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                 | (0xce00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                | (0xce80U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                             << 7U) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
            = ((0x4ea0U == (((IData)(vlSelf->opcode_out) 
                             << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                          << 7U) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                ? VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                : ((0xcc00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0xcc20U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           - vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0xcc80U == (((IData)(vlSelf->opcode_out) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                          << 7U) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               << (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount))
                            : ((0xcd00U == (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                                ? (VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    ? 1U : 0U) : ((0xcd80U 
                                                   == 
                                                   (((IData)(vlSelf->opcode_out) 
                                                     << 0xaU) 
                                                    | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                        << 7U) 
                                                       | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                                                   ? 
                                                  ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    ? 1U
                                                    : 0U)
                                                   : 
                                                  ((0xce00U 
                                                    == 
                                                    (((IData)(vlSelf->opcode_out) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                         << 7U) 
                                                        | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                                                    ? 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    ^ vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                                    : 
                                                   (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                                    >> (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount)))))))));
    } else if (((((((((0xcea0U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))) 
                      | (0xcf00U == (((IData)(vlSelf->opcode_out) 
                                      << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                   << 7U) 
                                                  | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                     | (0xcf80U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                    | (0xcc01U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                   | (0xcc81U == (((IData)(vlSelf->opcode_out) 
                                   << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                  | (0xce01U == (((IData)(vlSelf->opcode_out) 
                                  << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                               << 7U) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                 | (0xce81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) 
                | (0xcf01U == (((IData)(vlSelf->opcode_out) 
                                << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                             << 7U) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) {
        if ((0xcea0U == (((IData)(vlSelf->opcode_out) 
                          << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                       << 7U) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__shift_amount));
        } else if ((0xcf00U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcf80U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b);
        } else if ((0xcc01U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp);
        } else if ((0xcc81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))) {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b));
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp 
                           >> 0x20U));
        } else {
            vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out 
                = ((0xce01U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                    ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? 0xffffffffU : (((0x80000000U 
                                           == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a) 
                                          & (0xffffffffU 
                                             == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)))
                    : ((0xce81U == (((IData)(vlSelf->opcode_out) 
                                     << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
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
            = (((((((((0xcf81U == (((IData)(vlSelf->opcode_out) 
                                    << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))) 
                      | (0xdc00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                     << 7U) 
                                                    | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                     | (0x5c00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                    | (0xc00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                   | (0xc80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                 << 7U) 
                                                | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                  | (0xd00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                 | (0xe00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                               << 7U) 
                                              | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))) 
                | (0xe80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))))
                ? ((0xcf81U == (((IData)(vlSelf->opcode_out) 
                                 << 0xaU) | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                              << 7U) 
                                             | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7))))
                    ? ((0U == vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a
                        : VL_MODDIV_III(32, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a, vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))
                    : ((0xdc00U == (0x1fc00U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                        ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b
                        : ((0x5c00U == (0x1fc00U & 
                                        (((IData)(vlSelf->opcode_out) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                             << 7U) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : ((0xc00U == (0x1ff80U 
                                           & (((IData)(vlSelf->opcode_out) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                  << 7U) 
                                                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                   + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                : ((0xc80U == (0x1ff80U 
                                               & (((IData)(vlSelf->opcode_out) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                      << 7U) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                    : ((0xd00U == (0x1ff80U 
                                                   & (((IData)(vlSelf->opcode_out) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                          << 7U) 
                                                         | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                        : ((0xe00U 
                                            == (0x1ff80U 
                                                & (((IData)(vlSelf->opcode_out) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                       << 7U) 
                                                      | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                                            : (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b))))))))
                : ((0x8c00U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                << 7U) 
                                               | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                       + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                    : ((0x8c80U == (0x1ff80U & (((IData)(vlSelf->opcode_out) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                                    << 7U) 
                                                   | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                        ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                           + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                        : ((0x8d00U == (0x1ff80U & 
                                        (((IData)(vlSelf->opcode_out) 
                                          << 0xaU) 
                                         | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3) 
                                             << 7U) 
                                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct7)))))
                            ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a 
                               + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)
                            : 0U))));
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu = 0U;
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT____VdfgTmp_hc38dad51__0 
        = (1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)) 
                 & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__cpu_stall))));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu = 0U;
    if (((0x73U == (IData)(vlSelf->opcode_out)) & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid)))) {
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu 
            = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
               | ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3)) 
                  & (0U != (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_addr))));
        vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu 
            = ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))
                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data
                : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__funct3))
                    ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile 
                       | vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data)
                    : 0U));
    }
    Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__cpu__DOT__update_decode_state_TOP(vlSelf->pc, 
                                                                                ((IData)(4U) 
                                                                                + vlSelf->pc), vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc, vlSelf->inst);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state)
            ? 0xbU : ((IData)(vlSelf->is_ecall_out)
                       ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg
                       : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state) 
           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu) 
              | (IData)(vlSelf->is_ecall_out)));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_mem_we 
        = ((IData)(vlSelf->is_store_out) & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____VdfgTmp_hc38dad51__0));
    vlSelf->dmem_raddr_out = ((0x73U == (IData)(vlSelf->opcode_out))
                               ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile
                               : (((0x6fU == (IData)(vlSelf->opcode_out)) 
                                   | (0x67U == (IData)(vlSelf->opcode_out)))
                                   ? ((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_reg)
                                   : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out));
    vlSelf->inst_wb_complete = ((~ (IData)(vlSelf->rst)) 
                                & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we) 
                                      | (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_mem_we) 
                                          & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready)) 
                                         | ((0x63U 
                                             == (IData)(vlSelf->opcode_out)) 
                                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____VdfgTmp_hc38dad51__0))))));
    vlSelf->ysyx_25040109_top__DOT__dmem_wen = ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_h0edd4ba6__0) 
                                                & ((~ 
                                                    ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_invalid) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__cpu_stall))) 
                                                   & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_mem_we)));
    vlSelf->dmem_waddr_out = vlSelf->dmem_raddr_out;
    if (((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_ren) 
         & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy)))) {
        Vysyx_25040109_top___024root____Vdpiimwrap_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read_TOP(vlSelf->dmem_raddr_out, vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data);
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->__Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data;
    } else {
        vlSelf->ysyx_25040109_top__DOT__dmem_rdata 
            = vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf;
    }
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
            ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
            : vlSelf->ysyx_25040109_top__DOT__dmem_rdata);
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire 
        = ((IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wen) 
           & (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_wready));
    vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid 
        = ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
           | ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
              & ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire) 
                 | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire))));
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

void Vysyx_25040109_top___024root___eval_triggers__ico(Vysyx_25040109_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_25040109_top___024root___dump_triggers__ico(Vysyx_25040109_top___024root* vlSelf);
#endif  // VL_DEBUG
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
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_25040109_top___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_25040109_top___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/zxj17/ysyx-workbench/npc/vsrc/ysyx_25040109_top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_25040109_top___024root___eval_ico(vlSelf);
        }
    }
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
