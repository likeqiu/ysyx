// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_25040109_top__Syms.h"


VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_init_sub__TOP__0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"debug_cmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+192,"debug_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"debug_cmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+192,"debug_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+193,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"rs1_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"mem_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+55,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+56,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"step_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+197,"fetch_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"debug_action",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+59,"is_sw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"is_lw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+62,"addr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"debug_addr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("debug_mux ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+215,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+45,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+191,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+216,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+217,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+215,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+45,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+191,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+216,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+217,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+219,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+7+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 3,0);
    }
    tracep->declBus(c+46,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+47,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+220,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+50,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"reg_write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+194,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+54,"mem_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+56,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"is_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"is_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"is_addi",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"is_lw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+69,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+70,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+72,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+71,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+73,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alu_a_select ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+69,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+50,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+200,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+69,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+50,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+200,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+223,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+74+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+80+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+83,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+84,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+220,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("next_pc_select ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+48,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+199,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+204,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+48,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+199,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+204,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+223,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+85+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+13+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+91+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+94,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+95,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+220,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("result_select ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+53,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+70,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+208,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+53,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+70,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+208,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+223,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+96+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+16+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+102+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+105,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+106,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+220,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+49,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+52,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"reg_write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"rs1_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+58,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+107,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+108,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+109,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+110,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+111,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+112,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+113,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+114,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+115,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+116,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+221,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+52,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+224,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+117,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+221,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+221,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+52,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+224,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+117,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->declBus(c+223,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+126+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+19+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+140+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+147,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+225,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_write_select ");
    tracep->declBus(c+226,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+227,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+56,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+149,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+228,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+229,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+226,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+227,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+218,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+56,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+149,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+228,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declArray(c+229,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 65,0);
    tracep->declBus(c+232,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+26+i*1,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 10,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+32+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 9,0);
    }
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+38+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 0,0);
    }
    tracep->declBus(c+150,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBit(c+151,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+233,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+194,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+190,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+152,"inst_read",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,"inst_raw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("inst_reg ");
    tracep->declBus(c+222,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+224,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+234,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+222,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+235,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+212,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+236,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+222,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+189,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+213,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+154,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+155,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+50,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+156+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+44,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+188,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_init_top(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_25040109_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040109_top___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_25040109_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_register(Vysyx_25040109_top___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_25040109_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_25040109_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_25040109_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_25040109_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_25040109_top___024root*>(voidSelf);
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_25040109_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_25040109_top___024root__trace_full_sub_0(Vysyx_25040109_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_25040109_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_25040109_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<9>/*287:0*/ __Vtemp_h7720c87c__0;
    VlWide<4>/*127:0*/ __Vtemp_hfaf36e9a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6b33a6c0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc92765bb__0;
    VlWide<3>/*95:0*/ __Vtemp_h4d1dc47f__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullSData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+28,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullSData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[3]),11);
    bufp->fullSData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[4]),11);
    bufp->fullSData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__pair_list[5]),11);
    bufp->fullSData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[0]),10);
    bufp->fullSData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[1]),10);
    bufp->fullSData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[2]),10);
    bufp->fullSData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[3]),10);
    bufp->fullSData(oldp+36,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[4]),10);
    bufp->fullSData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__key_list[5]),10);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+41,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+42,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__data_list[5]));
    bufp->fullIData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_25040109_top__DOT__debug_action),4);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+47,(vlSelf->ysyx_25040109_top__DOT__debug_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+48,(vlSelf->ysyx_25040109_top__DOT__next_pc),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__inst_ifu),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__imm),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__result),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__mem_data),32);
    bufp->fullCData(oldp+55,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                       >> 7U))),5);
    bufp->fullBit(oldp+56,(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu));
    bufp->fullCData(oldp+57,((0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu)),7);
    bufp->fullCData(oldp+58,((7U & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+59,((IData)((0x2023U == (0x707fU 
                                                & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
    bufp->fullBit(oldp+60,((IData)((0x2003U == (0x707fU 
                                                & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
    bufp->fullIData(oldp+61,(vlSelf->ysyx_25040109_top__DOT__mem_addr),32);
    bufp->fullBit(oldp+62,(vlSelf->ysyx_25040109_top__DOT__addr_valid));
    bufp->fullBit(oldp+63,((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    bufp->fullBit(oldp+64,((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    bufp->fullBit(oldp+65,((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__inst_ifu))));
    bufp->fullBit(oldp+66,((IData)((0x67U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
    bufp->fullBit(oldp+67,((IData)((0x13U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
    bufp->fullBit(oldp+68,((IData)((0x63U == (0x707fU 
                                              & vlSelf->ysyx_25040109_top__DOT__inst_ifu)))));
    bufp->fullIData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+70,((vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a 
                              + vlSelf->ysyx_25040109_top__DOT__imm)),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+72,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr)),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken));
    bufp->fullQData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+89,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+98,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+100,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+106,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+107,((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+108,((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+113,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__inst_ifu)),32);
    bufp->fullIData(oldp+114,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+115,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+116,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    __Vtemp_h7720c87c__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_h7720c87c__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_h7720c87c__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_h7720c87c__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_h7720c87c__0[4U] = (0x600000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                              << 0x1cU) 
                                             | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                >> 0xbU)));
    __Vtemp_h7720c87c__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_h7720c87c__0[6U] = (1U | (0xffff8000U & 
                                      (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                       << 3U)));
    __Vtemp_h7720c87c__0[7U] = (0x1b8U | ((0xffc00000U 
                                           & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                              << 0xaU)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                             >> 0x1dU)));
    __Vtemp_h7720c87c__0[8U] = (0x5c00U | (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                           >> 0x16U));
    bufp->fullWData(oldp+117,(__Vtemp_h7720c87c__0),273);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+148,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__idu__DOT____Vcellinp__reg_write_select__key),10);
    bufp->fullBit(oldp+150,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__reg_write_select__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_read),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_raw),32);
    bufp->fullCData(oldp+154,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+155,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__inst_ifu 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+189,(vlSelf->clk));
    bufp->fullBit(oldp+190,(vlSelf->rst));
    bufp->fullCData(oldp+191,(vlSelf->debug_cmd),4);
    bufp->fullIData(oldp+192,(vlSelf->debug_addr),32);
    bufp->fullIData(oldp+193,(vlSelf->inst),32);
    bufp->fullIData(oldp+194,(vlSelf->pc),32);
    bufp->fullIData(oldp+195,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+196,((1U == (IData)(vlSelf->debug_cmd))));
    bufp->fullBit(oldp+197,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullBit(oldp+198,(((0x80000000U <= vlSelf->debug_addr) 
                             & (0x87ffffffU >= vlSelf->debug_addr))));
    bufp->fullIData(oldp+199,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hfaf36e9a__0[0U] = vlSelf->pc;
    __Vtemp_hfaf36e9a__0[1U] = 0x6fU;
    __Vtemp_hfaf36e9a__0[2U] = (0x1b80U | (vlSelf->pc 
                                           << 0xeU));
    __Vtemp_hfaf36e9a__0[3U] = (0x5c000U | (vlSelf->pc 
                                            >> 0x12U));
    bufp->fullWData(oldp+200,(__Vtemp_hfaf36e9a__0),117);
    __Vtemp_h6b33a6c0__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                                            ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->pc))))));
    __Vtemp_h6b33a6c0__0[1U] = ((0xffffff00U & (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                                << 7U)) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                                : 
                                                               ((IData)(4U) 
                                                                + vlSelf->pc))))) 
                                           >> 0x20U)));
    __Vtemp_h6b33a6c0__0[2U] = (0x3380U | ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                              >> 0x19U)));
    __Vtemp_h6b33a6c0__0[3U] = (0x1bc000U | (vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                             >> 0x12U));
    bufp->fullWData(oldp+204,(__Vtemp_h6b33a6c0__0),117);
    __Vtemp_hc92765bb__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))));
    __Vtemp_hc92765bb__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 7U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__mem_data))) 
                                                   >> 0x20U)));
    __Vtemp_hc92765bb__0[2U] = (0x3380U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0xeU) 
                                           | (((IData)(4U) 
                                               + vlSelf->pc) 
                                              >> 0x19U)));
    __Vtemp_hc92765bb__0[3U] = (0x1bc000U | (((IData)(4U) 
                                              + vlSelf->pc) 
                                             >> 0x12U));
    bufp->fullWData(oldp+208,(__Vtemp_hc92765bb__0),117);
    bufp->fullBit(oldp+212,(((~ (IData)(vlSelf->rst)) 
                             & (1U == (IData)(vlSelf->debug_cmd)))));
    bufp->fullBit(oldp+213,(((IData)(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu) 
                             & (1U == (IData)(vlSelf->debug_cmd)))));
    bufp->fullIData(oldp+214,(3U),32);
    bufp->fullIData(oldp+215,(4U),32);
    bufp->fullCData(oldp+216,(0U),4);
    bufp->fullIData(oldp+217,(0x112233U),24);
    bufp->fullIData(oldp+218,(1U),32);
    bufp->fullIData(oldp+219,(8U),32);
    bufp->fullIData(oldp+220,(3U),32);
    bufp->fullIData(oldp+221,(7U),32);
    bufp->fullIData(oldp+222,(0x20U),32);
    bufp->fullIData(oldp+223,(0x27U),32);
    bufp->fullIData(oldp+224,(0U),32);
    bufp->fullIData(oldp+225,(7U),32);
    bufp->fullIData(oldp+226,(6U),32);
    bufp->fullIData(oldp+227,(0xaU),32);
    bufp->fullBit(oldp+228,(0U));
    __Vtemp_h4d1dc47f__0[0U] = 0xbc738835U;
    __Vtemp_h4d1dc47f__0[1U] = 0x989716e3U;
    __Vtemp_h4d1dc47f__0[2U] = 0U;
    bufp->fullWData(oldp+229,(__Vtemp_h4d1dc47f__0),66);
    bufp->fullIData(oldp+232,(0xbU),32);
    bufp->fullIData(oldp+233,(6U),32);
    bufp->fullBit(oldp+234,(1U));
    bufp->fullIData(oldp+235,(0x80000000U),32);
    bufp->fullIData(oldp+236,(5U),32);
}
