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
    tracep->declBit(c+180,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+182,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+180,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+182,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+22,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+27,"inst_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+31,"mem_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"mem_data_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+33,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+34,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"step_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+37,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"mem_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+40,"addr_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+23,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"reg_write_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+183,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+29,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"funct7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+31,"mem_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+35,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+44,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+46,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+185,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"rs1_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rs2_signed",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"rs1_unsigned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rs2_unsigned",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+49,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alu_a_select ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+41,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+23,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+186,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+41,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+23,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+186,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+204,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+50+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+56+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+59,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_b_select ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+42,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+61,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+42,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+61,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+204,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+65+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+71+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+74,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("next_pc_select ");
    tracep->declBus(c+206,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+185,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+190,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+206,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+185,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+190,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->declBus(c+204,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+76+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+7+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+84+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+88,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+89,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+207,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("result_select ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+26,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+43,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+195,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+200,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+26,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+43,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+195,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+204,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+90+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+11+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+96+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+99,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+182,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+25,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+34,"reg_write_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+28,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+101,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+102,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+103,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+104,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+105,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+106,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+107,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+108,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+109,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+110,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+201,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+208,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+111,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+201,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+208,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+111,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 272,0);
    tracep->declBus(c+204,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 7; ++i) {
        tracep->declQuad(c+120+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+14+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+134+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+141,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+142,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+209,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+180,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+183,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+182,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+27,"inst_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"inst_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,"inst_valid_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"is_pc_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+145,"inst_from_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg ");
    tracep->declBus(c+202,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+210,"RESET_VAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+180,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+22,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+183,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+199,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+211,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+183,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+180,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+26,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+35,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+146,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+147,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+23,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+24,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+184,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+148+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+21,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    VlWide<4>/*127:0*/ __Vtemp_h5397309d__0;
    VlWide<9>/*287:0*/ __Vtemp_ha4f1bbc3__0;
    VlWide<4>/*127:0*/ __Vtemp_hfaf36e9a__0;
    VlWide<5>/*159:0*/ __Vtemp_hccadfe19__0;
    VlWide<4>/*127:0*/ __Vtemp_h239dd0a9__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_25040109_top__DOT__next_pc),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs1_signed),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_25040109_top__DOT__imm),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_25040109_top__DOT__result),32);
    bufp->fullBit(oldp+27,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_valid_reg));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25040109_top__DOT__inst_invalid));
    bufp->fullCData(oldp+29,((7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+30,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__mem_data),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_25040109_top__DOT__mem_data_temp),32);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                       >> 7U))),5);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu));
    bufp->fullBit(oldp+35,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__reg_write_en_idu))));
    bufp->fullCData(oldp+36,((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)),7);
    bufp->fullBit(oldp+37,(((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                            & ((IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_h8a51f582__0) 
                               | ((4U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                >> 0xcU))) 
                                  | (5U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                  >> 0xcU))))))));
    bufp->fullBit(oldp+38,(((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT____VdfgTmp_h8a51f582__0))));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_25040109_top__DOT__mem_addr),32);
    bufp->fullBit(oldp+40,(vlSelf->ysyx_25040109_top__DOT__addr_valid));
    bufp->fullIData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+44,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount),5);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+48,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__mem_addr)),32);
    bufp->fullBit(oldp+49,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken));
    bufp->fullQData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+54,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
    __Vtemp_h5397309d__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))));
    __Vtemp_h5397309d__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed 
                                 << 7U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_h5397309d__0[2U] = (0x3180U | ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed 
                                            << 0xeU) 
                                           | (vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed 
                                              >> 0x19U)));
    __Vtemp_h5397309d__0[3U] = (0xcc000U | (vlSelf->ysyx_25040109_top__DOT__exu__DOT__rs2_signed 
                                            >> 0x12U));
    bufp->fullWData(oldp+61,(__Vtemp_h5397309d__0),117);
    bufp->fullQData(oldp+65,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+80,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+82,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+89,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__next_pc_select__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+90,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+94,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+100,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__result_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+101,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+102,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+104,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+105,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+107,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg)),32);
    bufp->fullIData(oldp+108,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+109,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+110,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    __Vtemp_ha4f1bbc3__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_ha4f1bbc3__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_ha4f1bbc3__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_ha4f1bbc3__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_ha4f1bbc3__0[4U] = (0x600000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                              << 0x1cU) 
                                             | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                >> 0xbU)));
    __Vtemp_ha4f1bbc3__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_ha4f1bbc3__0[6U] = (1U | (0xffff8000U & 
                                      (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                       << 3U)));
    __Vtemp_ha4f1bbc3__0[7U] = (0x1b8U | ((0xffc00000U 
                                           & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                              << 0xaU)) 
                                          | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                             >> 0x1dU)));
    __Vtemp_ha4f1bbc3__0[8U] = (0x5c00U | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                           >> 0x16U));
    bufp->fullWData(oldp+111,(__Vtemp_ha4f1bbc3__0),273);
    bufp->fullQData(oldp+120,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+122,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+124,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+126,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+128,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+130,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullIData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+142,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg),32);
    bufp->fullBit(oldp+144,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__is_pc_valid));
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem),32);
    bufp->fullCData(oldp+146,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+147,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_reg 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullBit(oldp+180,(vlSelf->clk));
    bufp->fullBit(oldp+181,(vlSelf->rst));
    bufp->fullIData(oldp+182,(vlSelf->inst),32);
    bufp->fullIData(oldp+183,(vlSelf->pc),32);
    bufp->fullIData(oldp+184,(vlSelf->a0_out),32);
    bufp->fullIData(oldp+185,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hfaf36e9a__0[0U] = vlSelf->pc;
    __Vtemp_hfaf36e9a__0[1U] = 0x6fU;
    __Vtemp_hfaf36e9a__0[2U] = (0x1b80U | (vlSelf->pc 
                                           << 0xeU));
    __Vtemp_hfaf36e9a__0[3U] = (0x5c000U | (vlSelf->pc 
                                            >> 0x12U));
    bufp->fullWData(oldp+186,(__Vtemp_hfaf36e9a__0),117);
    __Vtemp_hccadfe19__0[0U] = (IData)((0x7300000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)
                                                            ? vlSelf->pc
                                                            : 
                                                           ((IData)(4U) 
                                                            + vlSelf->pc))))));
    __Vtemp_hccadfe19__0[1U] = ((((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                   ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                   : ((IData)(4U) + vlSelf->pc)) 
                                 << 7U) | (IData)((
                                                   (0x7300000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)
                                                                        ? vlSelf->pc
                                                                        : 
                                                                       ((IData)(4U) 
                                                                        + vlSelf->pc))))) 
                                                   >> 0x20U)));
    __Vtemp_hccadfe19__0[2U] = (0x3180U | ((0xffff8000U 
                                            & (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                               << 0xeU)) 
                                           | (((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__branch_taken)
                                                ? vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target
                                                : ((IData)(4U) 
                                                   + vlSelf->pc)) 
                                              >> 0x19U)));
    __Vtemp_hccadfe19__0[3U] = (0x19c000U | ((vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                              << 0x15U) 
                                             | (vlSelf->ysyx_25040109_top__DOT__mem_addr 
                                                >> 0x12U)));
    __Vtemp_hccadfe19__0[4U] = (0xde00000U | (vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target 
                                              >> 0xbU));
    bufp->fullWData(oldp+190,(__Vtemp_hccadfe19__0),156);
    __Vtemp_h239dd0a9__0[0U] = (IData)((0x300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out))));
    __Vtemp_h239dd0a9__0[1U] = ((((IData)(4U) + vlSelf->pc) 
                                 << 7U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out))) 
                                                   >> 0x20U)));
    __Vtemp_h239dd0a9__0[2U] = (0x3380U | ((((IData)(4U) 
                                             + vlSelf->pc) 
                                            << 0xeU) 
                                           | (((IData)(4U) 
                                               + vlSelf->pc) 
                                              >> 0x19U)));
    __Vtemp_h239dd0a9__0[3U] = (0x1bc000U | (((IData)(4U) 
                                              + vlSelf->pc) 
                                             >> 0x12U));
    bufp->fullWData(oldp+195,(__Vtemp_h239dd0a9__0),117);
    bufp->fullBit(oldp+199,(1U));
    bufp->fullIData(oldp+200,(3U),32);
    bufp->fullIData(oldp+201,(7U),32);
    bufp->fullIData(oldp+202,(0x20U),32);
    bufp->fullIData(oldp+203,(1U),32);
    bufp->fullIData(oldp+204,(0x27U),32);
    bufp->fullIData(oldp+205,(3U),32);
    bufp->fullIData(oldp+206,(4U),32);
    bufp->fullIData(oldp+207,(4U),32);
    bufp->fullIData(oldp+208,(0U),32);
    bufp->fullIData(oldp+209,(7U),32);
    bufp->fullIData(oldp+210,(0x80000000U),32);
    bufp->fullIData(oldp+211,(5U),32);
}
