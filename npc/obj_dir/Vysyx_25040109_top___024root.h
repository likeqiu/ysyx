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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*0:0*/ ysyx_25040109_top__DOT__is_jalr;
    CData/*0:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_s;
    SData/*11:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_b;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(a0_out,31,0);
    IData/*31:0*/ ysyx_25040109_top__DOT__next_pc;
    IData/*31:0*/ ysyx_25040109_top__DOT__rs1_data;
    IData/*31:0*/ ysyx_25040109_top__DOT__imm;
    IData/*19:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_j;
    IData/*31:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_i_ext;
    IData/*31:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_j_ext;
    IData/*31:0*/ ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out;
    IData/*31:0*/ ysyx_25040109_top__DOT__exu__DOT__alu_b;
    IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__print_registers__Vstatic__i;
    IData/*31:0*/ ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*38:0*/, 6> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 6> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 6> ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_25040109_top__DOT__regfile__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
