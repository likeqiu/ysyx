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
    tracep->declBit(c+191,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+191,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+195,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+21,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+22,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+25,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+25,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+26,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+29,"csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+30,"csr_rdata_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"csr_wdata_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"csr_we_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+33,"mepc_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"mtvec_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+36,"trap_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+197,"S_NORMAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+198,"S_TRAP_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+36,"is_stalled_by_trap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+37,"pc_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,"pc_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"final_gpr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"final_csr_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+42,"final_csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"final_csr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+199,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+200,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBit(c+44,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"final_mem_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"load_data_from_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"store_enable_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"writeback_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+18,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+20,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"reg_write_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+35,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+195,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"opcode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+23,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"funct7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+22,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+17,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+30,"csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+32,"csr_we_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"csr_wdata_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+53,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+55,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+56,"is_csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+57,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"is_mret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"jal_result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+62,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("alu_a_select ");
    tracep->declBus(c+201,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+18,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+63,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+50,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+18,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+63,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 116,0);
    tracep->declBus(c+205,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+67+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+73+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+76,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+206,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("alu_b_select ");
    tracep->declBus(c+207,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+51,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+20,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+78,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+207,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+51,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+20,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+78,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 155,0);
    tracep->declBus(c+205,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+83+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+4+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+95,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+208,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+194,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+20,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"reg_write_en_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+23,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+24,"funct7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+22,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+28,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+97,"imm_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+98,"imm_u",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 19,0);
    tracep->declBus(c+99,"imm_j",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 20,1);
    tracep->declBus(c+100,"imm_s",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+101,"imm_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,1);
    tracep->declBus(c+102,"imm_i_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"imm_u_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"imm_j_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+105,"imm_s_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+106,"imm_b_ext",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"valid_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"valid_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"valid_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"valid_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"valid_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"valid_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"valid_i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"valid_r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"is_system_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+97,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+116,"valid_system",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+209,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+20,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+210,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+117,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+209,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+204,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+20,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+210,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+117,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+205,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+127+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+8+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+143+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+151,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+152,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+211,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBus(c+195,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+194,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+153,"is_pc_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+154,"inst_from_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+191,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+23,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"is_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"is_store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"stall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"load_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+48,"store_enable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+155,"mem_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,"store_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+212,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+203,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+195,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+191,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+40,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+156,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+18,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+19,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+196,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"csr_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+42,"csr_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"mepc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"mtvec_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+157+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+189,"mstatus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,"mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,"CSR_MSTATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+214,"CSR_MTVEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+199,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+200,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+16,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
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
    VlWide<4>/*127:0*/ __Vtemp_hdbbb9c16__0;
    VlWide<5>/*159:0*/ __Vtemp_hf5e3f678__0;
    VlWide<10>/*319:0*/ __Vtemp_h9bdf6ee8__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_25040109_top__DOT__next_pc),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__rs1_data),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_25040109_top__DOT__rs2_data),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_25040109_top__DOT__imm),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_25040109_top__DOT__result),32);
    bufp->fullBit(oldp+22,(vlSelf->ysyx_25040109_top__DOT__inst_invalid));
    bufp->fullCData(oldp+23,((7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+24,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                       >> 7U))),5);
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                            | ((0x67U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                               | ((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                     | ((0x33U == (0x7fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                        | (0x73U == 
                                           (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)))))))));
    bufp->fullBit(oldp+27,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                            & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                               | ((0x67U == (0x7fU 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                  | ((3U == (0x7fU 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                     | ((0x13U == (0x7fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                        | ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                           | (0x73U 
                                              == (0x7fU 
                                                  & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))))))))));
    bufp->fullCData(oldp+28,((0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)),7);
    bufp->fullSData(oldp+29,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12),12);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__csr_rdata_from_regfile),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__csr_wdata_from_exu),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__csr_we_from_exu));
    bufp->fullIData(oldp+33,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mepc),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mtvec),32);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+36,(vlSelf->ysyx_25040109_top__DOT__trap_state));
    bufp->fullIData(oldp+37,(vlSelf->ysyx_25040109_top__DOT__pc_reg),32);
    bufp->fullBit(oldp+38,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)))));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_25040109_top__DOT__is_ecall));
    bufp->fullBit(oldp+40,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)) 
                            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                               & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hee48d914__0) 
                                  | ((0x67U == (0x7fU 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                     | ((3U == (0x7fU 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                        | ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                           | ((0x33U 
                                               == (0x7fU 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                              | (0x73U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)))))))))));
    bufp->fullSData(oldp+41,(vlSelf->ysyx_25040109_top__DOT__final_csr_waddr),12);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_25040109_top__DOT__final_csr_wdata),32);
    bufp->fullBit(oldp+43,(vlSelf->ysyx_25040109_top__DOT__final_csr_we));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_25040109_top__DOT__is_load));
    bufp->fullBit(oldp+45,((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    bufp->fullBit(oldp+46,(((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                               & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state))))));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__load_data_from_lsu),32);
    bufp->fullBit(oldp+48,(((~ ((IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid) 
                                | (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state))) 
                            & ((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                               & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__inst_invalid)) 
                                  & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__trap_state)))))));
    bufp->fullIData(oldp+49,(((IData)(vlSelf->ysyx_25040109_top__DOT__is_load)
                               ? vlSelf->ysyx_25040109_top__DOT__load_data_from_lsu
                               : vlSelf->ysyx_25040109_top__DOT__result)),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__shift_amount),5);
    bufp->fullBit(oldp+56,((0x73U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                            & (0U == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT____VdfgTmp_hd1c31b8f__0) 
                            & (0x302U == (IData)(vlSelf->ysyx_25040109_top__DOT__exu__DOT__funct12)))));
    bufp->fullIData(oldp+59,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__pc_reg)),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+61,((0xfffffffeU & (vlSelf->ysyx_25040109_top__DOT__imm 
                                             + vlSelf->ysyx_25040109_top__DOT__rs1_data))),32);
    bufp->fullBit(oldp+62,(((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                            & ((IData)(((0U == (0x7000U 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                        & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                           == vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                               | ((IData)(((0x1000U 
                                            == (0x7000U 
                                                & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                           & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                              != vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                  | ((IData)(((0x4000U 
                                               == (0x7000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                              & VL_LTS_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                     | ((IData)(((0x5000U 
                                                  == 
                                                  (0x7000U 
                                                   & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                 & VL_GTES_III(32, vlSelf->ysyx_25040109_top__DOT__rs1_data, vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                        | ((IData)(
                                                   ((0x6000U 
                                                     == 
                                                     (0x7000U 
                                                      & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                    & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                       < vlSelf->ysyx_25040109_top__DOT__rs2_data))) 
                                           | (IData)(
                                                     ((0x7000U 
                                                       == 
                                                       (0x7000U 
                                                        & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                                                      & (vlSelf->ysyx_25040109_top__DOT__rs1_data 
                                                         >= vlSelf->ysyx_25040109_top__DOT__rs2_data)))))))))));
    __Vtemp_hdbbb9c16__0[0U] = vlSelf->ysyx_25040109_top__DOT__pc_reg;
    __Vtemp_hdbbb9c16__0[1U] = 0x6fU;
    __Vtemp_hdbbb9c16__0[2U] = (0x1b80U | (vlSelf->ysyx_25040109_top__DOT__pc_reg 
                                           << 0xeU));
    __Vtemp_hdbbb9c16__0[3U] = (0x5c000U | (vlSelf->ysyx_25040109_top__DOT__pc_reg 
                                            >> 0x12U));
    bufp->fullWData(oldp+63,(__Vtemp_hdbbb9c16__0),117);
    bufp->fullQData(oldp+67,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+69,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+71,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+77,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_a_select__DOT__i0__DOT__hit));
    __Vtemp_hf5e3f678__0[0U] = (IData)((0x2300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))));
    __Vtemp_hf5e3f678__0[1U] = ((vlSelf->ysyx_25040109_top__DOT__imm 
                                 << 7U) | (IData)((
                                                   (0x2300000000ULL 
                                                    | (QData)((IData)(vlSelf->ysyx_25040109_top__DOT__imm))) 
                                                   >> 0x20U)));
    __Vtemp_hf5e3f678__0[2U] = (0x180U | ((vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                           << 0xeU) 
                                          | (vlSelf->ysyx_25040109_top__DOT__imm 
                                             >> 0x19U)));
    __Vtemp_hf5e3f678__0[3U] = (0x18c000U | ((vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                              << 0x15U) 
                                             | (vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                                >> 0x12U)));
    __Vtemp_hf5e3f678__0[4U] = (0x6600000U | (vlSelf->ysyx_25040109_top__DOT__rs2_data 
                                              >> 0xbU));
    bufp->fullWData(oldp+78,(__Vtemp_hf5e3f678__0),156);
    bufp->fullQData(oldp+83,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+87,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+89,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_25040109_top__DOT__exu__DOT__alu_b_select__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+97,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+98,((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                              >> 0xcU)),20);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+100,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+101,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+103,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)),32);
    bufp->fullIData(oldp+104,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+105,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+106,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+107,((0x37U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    bufp->fullBit(oldp+108,((0x17U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    bufp->fullBit(oldp+109,((0x6fU == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem))));
    bufp->fullBit(oldp+110,((IData)((0x67U == (0x707fU 
                                               & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)))));
    bufp->fullBit(oldp+111,(((3U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0) 
                                | (IData)(vlSelf->__VdfgTmp_h61070d84__0)))));
    bufp->fullBit(oldp+112,(((0x23U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                             & (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_hd1deae94__0))));
    bufp->fullBit(oldp+113,(((0x63U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                             & ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_he2c0485b__0) 
                                | ((5U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 0xcU))) 
                                   | ((4U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | ((6U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                         | (7U == (7U 
                                                   & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                      >> 0xcU))))))))));
    bufp->fullBit(oldp+114,(((0x13U == (0x7fU & vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem)) 
                             & ((0U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0xcU))) 
                                | ((2U == (7U & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                 >> 0xcU))) 
                                   | ((3U == (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                      | ((4U == (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                         | ((6U == 
                                             (7U & 
                                              (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               >> 0xcU))) 
                                            | ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                    >> 0xcU))) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h26e5c323__0) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5db903ec__0) 
                                                     | (IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT____VdfgTmp_h5f3f1c8d__0))))))))))));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_r_type));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__valid_system));
    __Vtemp_h9bdf6ee8__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_h9bdf6ee8__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_h9bdf6ee8__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_h9bdf6ee8__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_h9bdf6ee8__0[4U] = (0xce00000U | ((vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                               << 0x1cU) 
                                              | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                                 >> 0xbU)));
    __Vtemp_h9bdf6ee8__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_h9bdf6ee8__0[6U] = (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                << 3U);
    __Vtemp_h9bdf6ee8__0[7U] = (0x98U | ((0xffc00000U 
                                          & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             << 0xaU)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_i_ext 
                                            >> 0x1dU)));
    __Vtemp_h9bdf6ee8__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                               << 0x11U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                              >> 0x16U)));
    __Vtemp_h9bdf6ee8__0[9U] = (0x2e0000U | (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                             >> 0xfU));
    bufp->fullWData(oldp+117,(__Vtemp_h9bdf6ee8__0),312);
    bufp->fullQData(oldp+127,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+129,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+131,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+143,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+145,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+147,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+152,(vlSelf->ysyx_25040109_top__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+153,(((0x80000000U <= vlSelf->ysyx_25040109_top__DOT__pc_reg) 
                             & (0x87ffffffU >= vlSelf->ysyx_25040109_top__DOT__pc_reg))));
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__lsu__DOT__mem_data),32);
    bufp->fullCData(oldp+156,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__ifu__DOT__inst_from_mem 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+157,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+158,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+160,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__regfile__DOT__mcause),32);
    bufp->fullBit(oldp+191,(vlSelf->clk));
    bufp->fullBit(oldp+192,(vlSelf->rst));
    bufp->fullIData(oldp+193,(vlSelf->p_count_number),32);
    bufp->fullIData(oldp+194,(vlSelf->inst),32);
    bufp->fullIData(oldp+195,(vlSelf->pc),32);
    bufp->fullIData(oldp+196,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+197,(0U));
    bufp->fullBit(oldp+198,(1U));
    bufp->fullSData(oldp+199,(0x341U),12);
    bufp->fullSData(oldp+200,(0x342U),12);
    bufp->fullIData(oldp+201,(3U),32);
    bufp->fullIData(oldp+202,(7U),32);
    bufp->fullIData(oldp+203,(0x20U),32);
    bufp->fullIData(oldp+204,(1U),32);
    bufp->fullIData(oldp+205,(0x27U),32);
    bufp->fullIData(oldp+206,(3U),32);
    bufp->fullIData(oldp+207,(4U),32);
    bufp->fullIData(oldp+208,(4U),32);
    bufp->fullIData(oldp+209,(8U),32);
    bufp->fullIData(oldp+210,(0U),32);
    bufp->fullIData(oldp+211,(8U),32);
    bufp->fullIData(oldp+212,(5U),32);
    bufp->fullSData(oldp+213,(0x300U),12);
    bufp->fullSData(oldp+214,(0x305U),12);
}
