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
        CData/*0:0*/ ysyx_25040109_top__DOT__inst_invalid;
        CData/*0:0*/ ysyx_25040109_top__DOT__csr_we_from_exu;
        CData/*0:0*/ ysyx_25040109_top__DOT__trap_state;
        CData/*0:0*/ ysyx_25040109_top__DOT__is_ecall;
        CData/*0:0*/ ysyx_25040109_top__DOT__final_csr_we;
        CData/*0:0*/ ysyx_25040109_top__DOT__is_load;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT__valid_r_type;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT__valid_system;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_25040109_top__DOT__exu__DOT__shift_amount;
        CData/*0:0*/ ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0;
        CData/*0:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit;
        CData/*0:0*/ __VdfgTmp_h61070d84__0;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ ysyx_25040109_top__DOT__final_csr_waddr;
        SData/*11:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_s;
        SData/*11:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_b;
        SData/*11:0*/ ysyx_25040109_top__DOT__exu__DOT__funct12;
        VL_IN(p_count_number,31,0);
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(a0_out,31,0);
        IData/*31:0*/ ysyx_25040109_top__DOT__next_pc;
        IData/*31:0*/ ysyx_25040109_top__DOT__rs1_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__rs2_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__imm;
        IData/*31:0*/ ysyx_25040109_top__DOT__result;
        IData/*31:0*/ ysyx_25040109_top__DOT__mem_data;
        IData/*31:0*/ ysyx_25040109_top__DOT__csr_rdata_from_regfile;
        IData/*31:0*/ ysyx_25040109_top__DOT__csr_wdata_from_exu;
        IData/*31:0*/ ysyx_25040109_top__DOT__final_csr_wdata;
        IData/*31:0*/ ysyx_25040109_top__DOT__load_result;
        IData/*31:0*/ ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem;
        IData/*19:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_j;
        IData/*31:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_i_ext;
        IData/*31:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_a;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_b;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__jal_target;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__mstatus;
        IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__mepc;
        IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__mcause;
        IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__mtvec;
        IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VdfgTmp_ha3c42dfe__0;
        IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__verilog_pmem_read__0__data;
        IData/*31:0*/ __Vtask_ysyx_25040109_top__DOT__ifu__DOT__verilog_pmem_read__7__data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_25040109_top__DOT__exu__DOT__mul_temp;
        VlUnpacked<QData/*38:0*/, 8> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list;
    };
    struct {
        VlUnpacked<CData/*6:0*/, 8> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 3> ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 3> ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 3> ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 4> ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 4> ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 4> ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_25040109_top__DOT__regfile__DOT__rf;
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
