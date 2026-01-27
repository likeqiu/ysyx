// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_25040109_top.h for the primary calling header

#ifndef VERILATED_VYSYX_25040109_TOP___024ROOT_H_
#define VERILATED_VYSYX_25040109_TOP___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_25040109_top__Syms;

class Vysyx_25040109_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(inst_wb_complete,0,0);
        VL_OUT8(is_load_out,0,0);
        VL_OUT8(is_store_out,0,0);
        VL_OUT8(is_ecall_out,0,0);
        VL_OUT8(opcode_out,6,0);
        CData/*0:0*/ ysyx_25040109_top__DOT__imem_ren;
        CData/*0:0*/ ysyx_25040109_top__DOT__imem_rvalid;
        CData/*0:0*/ ysyx_25040109_top__DOT__dmem_ren;
        CData/*0:0*/ ysyx_25040109_top__DOT__dmem_rvalid;
        CData/*0:0*/ ysyx_25040109_top__DOT__dmem_wvalid;
        CData/*2:0*/ ysyx_25040109_top__DOT__dmem_wlen;
        CData/*0:0*/ ysyx_25040109_top__DOT__dmem_wready;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__stage_valid;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__id_valid;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu_ready;
        CData/*4:0*/ ysyx_25040109_top__DOT__cpu__DOT__alu_op;
        CData/*1:0*/ ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel;
        CData/*1:0*/ ysyx_25040109_top__DOT__cpu__DOT__result_sel;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__is_branch;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__is_jalr;
        CData/*2:0*/ ysyx_25040109_top__DOT__cpu__DOT__branch_op;
        CData/*1:0*/ ysyx_25040109_top__DOT__cpu__DOT__csr_op;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__is_load;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__is_store;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu_out_valid;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__wb_fire;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__ex_ready;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__id_fire;
        CData/*3:0*/ ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__trap_state;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__final_csr_we;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__mem_op;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_hd1deae94__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he2c0485b__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h26e5c323__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5db903ec__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgTmp_h9a4a4173__0;
        CData/*1:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state;
        CData/*2:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3;
        CData/*2:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_done;
    };
    struct {
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__out_fire;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire;
        CData/*2:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3;
        CData/*0:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT____VdfgTmp_hb587fe3a__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__mem__DOT__imem_busy;
        CData/*1:0*/ ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt;
        CData/*0:0*/ ysyx_25040109_top__DOT__mem__DOT__dmem_busy;
        CData/*1:0*/ ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt;
        CData/*0:0*/ __VdfgTmp_h2aca818a__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr;
        SData/*11:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s;
        SData/*11:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b;
        VL_IN(p_count_number,31,0);
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(a0_out,31,0);
        VL_OUT(dmem_raddr_out,31,0);
        VL_OUT(dmem_waddr_out,31,0);
        IData/*31:0*/ ysyx_25040109_top__DOT__imem_rdata;
        IData/*31:0*/ ysyx_25040109_top__DOT__dmem_rdata;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__pc_fetch;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__pc_exe;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__id_inst;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__id_pc;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__inst_exe;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__inst_ifu;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__imm;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__result;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__writeback_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__rs1_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__rs2_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp;
        IData/*19:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_rdata;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec;
        IData/*31:0*/ ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf;
        IData/*31:0*/ ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf;
        IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__4__data;
        IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__mem__DOT__verilog_pmem_read__5__data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp;
        QData/*63:0*/ ysyx_25040109_top__DOT__cpu__DOT__exu__DOT____VdfgExtracted_hbd62d6b5__0;
    };
    struct {
        VlUnpacked<QData/*38:0*/, 8> ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 8> ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_25040109_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_25040109_top___024root(Vysyx_25040109_top__Syms* symsp, const char* v__name);
    ~Vysyx_25040109_top___024root();
    VL_UNCOPYABLE(Vysyx_25040109_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
