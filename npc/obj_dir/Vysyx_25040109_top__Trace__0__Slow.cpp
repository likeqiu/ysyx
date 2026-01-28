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
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+226,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+234,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+235,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+236,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_25040109_top ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+226,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+227,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+234,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+235,"dmem_raddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+235,"dmem_waddr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"imem_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"imem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_arvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"dmem_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"dmem_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dmem_rready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dmem_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_awaddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"dmem_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"dmem_wmask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+23,"dmem_wen",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"dmem_wready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+226,"p_count_number",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"imem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"dmem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dmem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"dmem_wmask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+227,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+228,"pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+230,"inst_wb_complete",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"is_load_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"is_store_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"is_ecall_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+234,"opcode_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+241,"S_NORMAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+242,"S_TRAP_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+243,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+244,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+245,"WB_LAT_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+245,"WB_LAT_MEM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+245,"WB_LAT_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+10,"pc_fetch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"pc_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,"stage_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"id_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+30,"id_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"id_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,"lsu_req_issued",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+33,"imem_req_pending",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+34,"inst_exe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"inst_ifu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"ifu_valid_to_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"idu_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+234,"opcode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+38,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+42,"rd_addr_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+43,"reg_write_en_idu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"inst_invalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"csr_addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+46,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"alu_a_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+48,"alu_b_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"result_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+50,"is_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"is_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"is_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"branch_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"csr_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+54,"is_mret",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"result",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"next_pc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rd_addr_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+57,"reg_write_en_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"csr_we_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"csr_wdata_from_exu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+60,"is_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"is_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"final_mem_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+62,"load_data_from_lsu",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"store_enable_unused",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"lsu_in_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"lsu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"lsu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"lsu_in_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"wb_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"wb_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"wb_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"ex_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"idu_out_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"idu_out_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"id_to_ex_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"id_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"wb_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+74,"writeback_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+75,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"csr_rdata_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"mepc_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"mtvec_from_regfile",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+80,"trap_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"is_stalled_by_trap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"is_ecall",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"final_gpr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"final_csr_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"final_csr_waddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+85,"final_csr_wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"fetch_allow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"imem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"imem_r_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"mem_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"mem_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+245,"wb_delay_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+69,"commit_cond",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"inst_wb_complete_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"lsu_in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"dbg_id_fire_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+93,"dbg_commit_cnt",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+75,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+94,"reg_write_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"reg_write_en_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+38,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+27,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"alu_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+48,"alu_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"result_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+50,"is_branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"is_jal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"is_jalr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"branch_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"csr_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+81,"is_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"is_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"rd_addr_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+56,"next_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"csr_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+58,"csr_we_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"csr_wdata_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"alu_a",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+97,"alu_b",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+98,"alu_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+99,"mul_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBus(c+246,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+247,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+248,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+249,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+250,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+251,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+252,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+253,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+254,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+255,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+256,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+257,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+258,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+259,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+260,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+261,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+262,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+241,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+242,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+262,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+262,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+101,"shift_amount",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+102,"pc_plus4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"jal_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+104,"jalr_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"branch_target",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+105,"branch_taken",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+34,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+28,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"rd_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+40,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"reg_write_en_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"funct3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+44,"inst_invalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+45,"csr_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+234,"opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+38,"rs1_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"rs2_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+60,"is_load",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"is_store",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"is_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+47,"alu_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+48,"alu_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"result_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+50,"is_branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"is_jal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"is_jalr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"branch_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+53,"csr_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+54,"is_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+106,"funct7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+246,"ALU_ADD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+247,"ALU_SUB",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+248,"ALU_SLL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+249,"ALU_SLT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+250,"ALU_SLTU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+251,"ALU_XOR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+252,"ALU_SRL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+253,"ALU_SRA",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+254,"ALU_OR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+255,"ALU_AND",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+256,"ALU_MUL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+257,"ALU_MULH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+258,"ALU_DIV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+259,"ALU_DIVU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+260,"ALU_REM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+261,"ALU_REMU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 4,0);
    tracep->declBus(c+262,"ALU_A_RS1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"ALU_A_PC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"ALU_A_ZERO",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+241,"ALU_B_RS2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+242,"ALU_B_IMM",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+262,"RES_ALU",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"RES_CSR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"RES_PC4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+262,"CSR_OP_NONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+263,"CSR_OP_CSRRW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+264,"CSR_OP_CSRRS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
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
    tracep->declBit(c+238,"valid_lui",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"valid_auipc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"valid_jal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"valid_jalr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"valid_load",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"valid_store",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"valid_branch",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"valid_i_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"valid_r_type",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"is_system_op",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+107,"funct12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+119,"valid_system",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"valid_csrrw",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"valid_csrrs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("imm_select ");
    tracep->declBus(c+265,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+266,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+267,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+40,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+234,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+268,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+122,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+265,"NR_KEY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+266,"KEY_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+267,"DATA_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+269,"HAS_DEFAULT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+40,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+234,"key",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+268,"default_out",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+122,"lut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 311,0);
    tracep->declBus(c+270,"PAIR_LEN",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+132+i*2,"pair_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"key_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+148+i*1,"data_list",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 31,0);
    }
    tracep->declBus(c+156,"lut_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+157,"hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+271,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("u_ifu_hanshake ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"mem_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"ifu_ready_to_mem",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"idu_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+35,"inst_ifu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+36,"ifu_valid_to_idu",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+159,"inst_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+160,"mem_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"idu_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"funct3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+60,"is_load",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"is_store",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"inst_invalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"out_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"dmem_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+18,"dmem_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"dmem_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dmem_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"dmem_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dmem_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+23,"dmem_wen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"dmem_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"dmem_wmask",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+26,"dmem_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+62,"load_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"store_enable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"in_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+272,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+273,"WAIT_AR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+274,"WAIT_R",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+275,"WAIT_AW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+276,"WAIT_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+277,"BUFFERED",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+161,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+162,"buffer_load_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,"buffer_funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+164,"buffer_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+165,"addr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,"store_data_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,"funct3_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+167,"load_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+168,"store_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"in_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"out_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"mem_read_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"mem_write_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"mem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"mem_aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"store_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+174,"current_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+175,"current_funct3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+176,"current_addr_offset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+177,"byte_shift",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+178,"shifted_rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+278,"ADDR_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+267,"DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+228,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+74,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+82,"wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+38,"raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+75,"rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"a0_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+83,"csr_we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"csr_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+85,"csr_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"mepc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"mtvec_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"csr_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+179+i*1,"rf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->declBus(c+211,"mstatus",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,"mepc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+212,"mcause",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,"mtvec",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,"CSR_MSTATUS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+280,"CSR_MTVEC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+243,"CSR_MEPC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->declBus(c+244,"CSR_MCAUSE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 11,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+9,"i",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mem ");
    tracep->declBit(c+224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"imem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+11,"imem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"imem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+13,"imem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"imem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"imem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+16,"dmem_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"dmem_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"dmem_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"dmem_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"dmem_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+235,"dmem_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"dmem_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"dmem_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"dmem_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"dmem_wmask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+23,"dmem_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"dmem_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"dmem_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+213,"dmem_awaddr_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+214,"dmem_awaddr_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"dmem_aw_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"dmem_w_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+215,"dmem_waddr_use",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+216,"dmem_wmask_ext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+217,"dmem_wdata_aligned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,"imem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+219,"imem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+220,"dmem_busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+221,"dmem_delay_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,"imem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+86,"imem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+223,"dmem_rdata_buf",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+172,"dmem_ar_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    VlWide<10>/*319:0*/ __Vtemp_hcccdb7e8__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_fetch),32);
    bufp->fullBit(oldp+11,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)) 
                                  & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid)) 
                                     & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending)))))));
    bufp->fullBit(oldp+12,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy)) 
                                  & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid))))));
    bufp->fullIData(oldp+13,(vlSelf->ysyx_25040109_top__DOT__imem_rdata),32);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_25040109_top__DOT__imem_rvalid));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem));
    bufp->fullBit(oldp+16,(((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched))));
    bufp->fullBit(oldp+17,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy)) 
                                  & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid))))));
    bufp->fullIData(oldp+18,(vlSelf->ysyx_25040109_top__DOT__dmem_rdata),32);
    bufp->fullBit(oldp+19,(vlSelf->ysyx_25040109_top__DOT__dmem_rvalid));
    bufp->fullBit(oldp+20,((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+21,(((3U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused))));
    bufp->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)))));
    bufp->fullBit(oldp+23,(((4U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused))));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched),32);
    bufp->fullCData(oldp+25,((0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                       ? ((IData)(1U) 
                                          << (3U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                       : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                           ? ((IData)(3U) 
                                              << (2U 
                                                  & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                           : ((2U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                               ? 0xfU
                                               : 0U))))),4);
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid) 
                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire))));
    bufp->fullIData(oldp+27,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe),32);
    bufp->fullBit(oldp+28,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid));
    bufp->fullBit(oldp+29,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_valid));
    bufp->fullIData(oldp+30,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_inst),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_pc),32);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_req_pending));
    bufp->fullIData(oldp+34,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_ifu),32);
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full) 
                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire))));
    bufp->fullBit(oldp+37,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu_ready));
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imm),32);
    bufp->fullCData(oldp+41,((7U & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                       >> 7U))),5);
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                            | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                     & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0)))))));
    bufp->fullBit(oldp+44,((1U & (~ (IData)(vlSelf->__VdfgTmp_h2aca818a__0)))));
    bufp->fullSData(oldp+45,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system)
                               ? (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                  >> 0x14U) : 0U)),12);
    bufp->fullCData(oldp+46,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_op),5);
    bufp->fullCData(oldp+47,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__alu_a_sel),2);
    bufp->fullBit(oldp+48,((1U & (~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type)))));
    bufp->fullCData(oldp+49,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result_sel),2);
    bufp->fullBit(oldp+50,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_jalr));
    bufp->fullCData(oldp+52,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op),3);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_op),2);
    bufp->fullBit(oldp+54,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h2014d746__0) 
                            & (0x302U == (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                          >> 0x14U)))));
    bufp->fullIData(oldp+55,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__result),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__next_pc),32);
    bufp->fullBit(oldp+57,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid)) 
                            & (((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                      | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                         & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                               & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid)))));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_we_from_exu));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_wdata_from_exu),32);
    bufp->fullBit(oldp+60,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_load));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_store));
    bufp->fullIData(oldp+62,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched) 
                               | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)))
                               ? ((4U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                   ? ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? 0U : ((1U 
                                                & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                                ? (0xffffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                                : (0xffU 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))
                                   : ((2U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                       ? ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? 0U : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)
                                       : ((1U & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                              >> 0xfU)))) 
                                               << 0x10U) 
                                              | (0xffffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata))
                                           : (((- (IData)(
                                                          (1U 
                                                           & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata 
                                                              >> 7U)))) 
                                               << 8U) 
                                              | (0xffU 
                                                 & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata)))))
                               : 0U)),32);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__store_enable_unused));
    bufp->fullBit(oldp+64,(((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_req_issued)) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op))));
    bufp->fullBit(oldp+65,(((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state)) 
                            | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__out_fire))));
    bufp->fullBit(oldp+66,((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))));
    bufp->fullBit(oldp+67,((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid) 
                            & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                               | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_fire));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ex_ready));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_to_ex_fire));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__id_fire));
    bufp->fullCData(oldp+73,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__wb_delay_cnt),4);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__writeback_data),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__csr_rdata_from_regfile),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mepc),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mtvec),32);
    bufp->fullBit(oldp+80,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__trap_state));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_gpr_we));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_we));
    bufp->fullSData(oldp+84,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_waddr),12);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__final_csr_wdata),32);
    bufp->fullBit(oldp+86,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__imem_ar_fire));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu_ready_to_mem) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__imem_rvalid))));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op));
    bufp->fullBit(oldp+89,((1U & ((~ (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__mem_op)) 
                                  | (5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))))));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_wb_complete_r));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu_in_fire));
    bufp->fullIData(oldp+92,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_id_fire_cnt),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__dbg_commit_cnt),32);
    bufp->fullBit(oldp+94,((((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_h831d9c42__0) 
                             | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type) 
                                | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type) 
                                   | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                                      & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT____VdfgTmp_he97d7b16__0))))) 
                            & (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__stage_valid))));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT____Vcellinp__exu__inst_invalid));
    bufp->fullIData(oldp+96,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_a),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out),32);
    bufp->fullQData(oldp+99,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__mul_temp),64);
    bufp->fullCData(oldp+101,((0x1fU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_b)),5);
    bufp->fullIData(oldp+102,(((IData)(4U) + vlSelf->ysyx_25040109_top__DOT__cpu__DOT__pc_exe)),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__jal_target),32);
    bufp->fullIData(oldp+104,((0xfffffffeU & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__exu__DOT__alu_out)),32);
    bufp->fullBit(oldp+105,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__is_branch) 
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
                                         | (((6U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                             & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                < vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data)) 
                                            | ((7U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__branch_op)) 
                                               & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs1_data 
                                                  >= vlSelf->ysyx_25040109_top__DOT__cpu__DOT__rs2_data))))))))));
    bufp->fullCData(oldp+106,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+107,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+108,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j),20);
    bufp->fullSData(oldp+110,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s),12);
    bufp->fullSData(oldp+111,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b),12);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext),32);
    bufp->fullIData(oldp+113,((0xfffff000U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)),32);
    bufp->fullIData(oldp+114,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0x15U) | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                             << 1U))),32);
    bufp->fullIData(oldp+115,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xcU) | (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s))),32);
    bufp->fullIData(oldp+116,((((- (IData)((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                            >> 0x1fU))) 
                                << 0xdU) | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                            << 1U))),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_i_type));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_r_type));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system));
    bufp->fullBit(oldp+120,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                             & (0x1000U == (0x7000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
    bufp->fullBit(oldp+121,(((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__valid_system) 
                             & (0x2000U == (0x7000U 
                                            & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe)))));
    __Vtemp_hcccdb7e8__0[0U] = (IData)((0x6300000000ULL 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                        >> 0x1fU))) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                              << 1U))))));
    __Vtemp_hcccdb7e8__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                             >> 0x1fU))) 
                                                 << 0x1cU) 
                                                | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                   << 8U))) 
                                | (IData)(((0x6300000000ULL 
                                            | (QData)((IData)(
                                                              (((- (IData)(
                                                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                            >> 0x1fU))) 
                                                                << 0xdU) 
                                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_b) 
                                                                  << 1U))))) 
                                           >> 0x20U)));
    __Vtemp_hcccdb7e8__0[2U] = (0x3780U | ((0xffffc000U 
                                            & (((- (IData)(
                                                           (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                            >> 0x1fU))) 
                                                << 0x1aU) 
                                               | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                  << 0xeU))) 
                                           | (0x7fU 
                                              & (((- (IData)(
                                                             (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                              >> 0x1fU))) 
                                                  >> 4U) 
                                                 | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_j 
                                                    >> 0x18U)))));
    __Vtemp_hcccdb7e8__0[3U] = (0x8c000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                             << 0x15U) 
                                            | (0x3fffU 
                                               & ((0x3fffU 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                                                  >> 0x1fU))) 
                                                      >> 6U)) 
                                                  | ((IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_s) 
                                                     >> 0x12U)))));
    __Vtemp_hcccdb7e8__0[4U] = (0xce00000U | ((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                               << 0x1cU) 
                                              | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                                 >> 0xbU)));
    __Vtemp_hcccdb7e8__0[5U] = (0x30000000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                               >> 4U));
    __Vtemp_hcccdb7e8__0[6U] = (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                << 3U);
    __Vtemp_hcccdb7e8__0[7U] = (0x98U | ((0xffc00000U 
                                          & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             << 0xaU)) 
                                         | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_i_ext 
                                            >> 0x1dU)));
    __Vtemp_hcccdb7e8__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                               << 0x11U)) 
                                           | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                              >> 0x16U)));
    __Vtemp_hcccdb7e8__0[9U] = (0x2e0000U | (vlSelf->ysyx_25040109_top__DOT__cpu__DOT__inst_exe 
                                             >> 0xfU));
    bufp->fullWData(oldp+122,(__Vtemp_hcccdb7e8__0),312);
    bufp->fullQData(oldp+132,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+134,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+136,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+138,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+140,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+142,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+144,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+146,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+148,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+149,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+150,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+151,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+152,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+153,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+154,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+157,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__idu__DOT__imm_select__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__full));
    bufp->fullIData(oldp+159,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__inst_temp),32);
    bufp->fullBit(oldp+160,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__ifu__DOT__u_ifu_hanshake__DOT__mem_fire));
    bufp->fullCData(oldp+161,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state),3);
    bufp->fullIData(oldp+162,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data),32);
    bufp->fullCData(oldp+163,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_funct3),3);
    bufp->fullCData(oldp+164,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset),2);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched),32);
    bufp->fullCData(oldp+166,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched),3);
    bufp->fullBit(oldp+167,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__load_latched));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_latched));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__out_fire));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_read_fire));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_write_fire));
    bufp->fullBit(oldp+172,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_ar_fire));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__mem_aw_fire));
    bufp->fullIData(oldp+174,(((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                ? vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_load_data
                                : vlSelf->ysyx_25040109_top__DOT__dmem_rdata)),32);
    bufp->fullCData(oldp+175,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__current_funct3),3);
    bufp->fullCData(oldp+176,((3U & ((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                      ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                      : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))),2);
    bufp->fullCData(oldp+177,((0x18U & (((5U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__state))
                                          ? (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__buffer_addr_offset)
                                          : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                        << 3U))),5);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__shifted_rdata),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[0]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[1]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[2]),32);
    bufp->fullIData(oldp+182,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[3]),32);
    bufp->fullIData(oldp+183,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[4]),32);
    bufp->fullIData(oldp+184,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[5]),32);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[6]),32);
    bufp->fullIData(oldp+186,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[7]),32);
    bufp->fullIData(oldp+187,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[8]),32);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[9]),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[10]),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[11]),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[12]),32);
    bufp->fullIData(oldp+192,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[13]),32);
    bufp->fullIData(oldp+193,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[14]),32);
    bufp->fullIData(oldp+194,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[15]),32);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[16]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[17]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[18]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[19]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[20]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[21]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[22]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[23]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[24]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[25]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[26]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[27]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[28]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[29]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[30]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__rf[31]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mstatus),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__regfile__DOT__mcause),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched),32);
    bufp->fullBit(oldp+214,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid));
    bufp->fullIData(oldp+215,(((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)
                                ? vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched
                                : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched)),32);
    bufp->fullCData(oldp+216,((0xfU & ((0U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                        ? ((IData)(1U) 
                                           << (3U & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                        : ((1U == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                            ? ((IData)(3U) 
                                               << (2U 
                                                   & vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched))
                                            : ((2U 
                                                == (IData)(vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__funct3_latched))
                                                ? 0xfU
                                                : 0U))))),8);
    bufp->fullIData(oldp+217,((vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__store_data_latched 
                               << (0x18U & (((IData)(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_valid)
                                              ? vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_awaddr_latched
                                              : vlSelf->ysyx_25040109_top__DOT__cpu__DOT__lsu__DOT__addr_latched) 
                                            << 3U)))),32);
    bufp->fullBit(oldp+218,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_busy));
    bufp->fullCData(oldp+219,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_delay_cnt),2);
    bufp->fullBit(oldp+220,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_busy));
    bufp->fullCData(oldp+221,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_delay_cnt),2);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__imem_rdata_buf),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_25040109_top__DOT__mem__DOT__dmem_rdata_buf),32);
    bufp->fullBit(oldp+224,(vlSelf->clk));
    bufp->fullBit(oldp+225,(vlSelf->rst));
    bufp->fullIData(oldp+226,(vlSelf->p_count_number),32);
    bufp->fullIData(oldp+227,(vlSelf->inst),32);
    bufp->fullIData(oldp+228,(vlSelf->pc),32);
    bufp->fullIData(oldp+229,(vlSelf->a0_out),32);
    bufp->fullBit(oldp+230,(vlSelf->inst_wb_complete));
    bufp->fullBit(oldp+231,(vlSelf->is_load_out));
    bufp->fullBit(oldp+232,(vlSelf->is_store_out));
    bufp->fullBit(oldp+233,(vlSelf->is_ecall_out));
    bufp->fullCData(oldp+234,(vlSelf->opcode_out),7);
    bufp->fullIData(oldp+235,(vlSelf->dmem_raddr_out),32);
    bufp->fullIData(oldp+236,(vlSelf->dmem_waddr_out),32);
    bufp->fullBit(oldp+237,((0x6fU == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+238,((0x37U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+239,((0x17U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+240,((0x73U == (IData)(vlSelf->opcode_out))));
    bufp->fullBit(oldp+241,(0U));
    bufp->fullBit(oldp+242,(1U));
    bufp->fullSData(oldp+243,(0x341U),12);
    bufp->fullSData(oldp+244,(0x342U),12);
    bufp->fullCData(oldp+245,(0U),4);
    bufp->fullCData(oldp+246,(0U),5);
    bufp->fullCData(oldp+247,(1U),5);
    bufp->fullCData(oldp+248,(2U),5);
    bufp->fullCData(oldp+249,(3U),5);
    bufp->fullCData(oldp+250,(4U),5);
    bufp->fullCData(oldp+251,(5U),5);
    bufp->fullCData(oldp+252,(6U),5);
    bufp->fullCData(oldp+253,(7U),5);
    bufp->fullCData(oldp+254,(8U),5);
    bufp->fullCData(oldp+255,(9U),5);
    bufp->fullCData(oldp+256,(0xaU),5);
    bufp->fullCData(oldp+257,(0xbU),5);
    bufp->fullCData(oldp+258,(0xcU),5);
    bufp->fullCData(oldp+259,(0xdU),5);
    bufp->fullCData(oldp+260,(0xeU),5);
    bufp->fullCData(oldp+261,(0xfU),5);
    bufp->fullCData(oldp+262,(0U),2);
    bufp->fullCData(oldp+263,(1U),2);
    bufp->fullCData(oldp+264,(2U),2);
    bufp->fullIData(oldp+265,(8U),32);
    bufp->fullIData(oldp+266,(7U),32);
    bufp->fullIData(oldp+267,(0x20U),32);
    bufp->fullIData(oldp+268,(0U),32);
    bufp->fullIData(oldp+269,(1U),32);
    bufp->fullIData(oldp+270,(0x27U),32);
    bufp->fullIData(oldp+271,(8U),32);
    bufp->fullCData(oldp+272,(0U),3);
    bufp->fullCData(oldp+273,(1U),3);
    bufp->fullCData(oldp+274,(2U),3);
    bufp->fullCData(oldp+275,(3U),3);
    bufp->fullCData(oldp+276,(4U),3);
    bufp->fullCData(oldp+277,(5U),3);
    bufp->fullIData(oldp+278,(5U),32);
    bufp->fullSData(oldp+279,(0x300U),12);
    bufp->fullSData(oldp+280,(0x305U),12);
}
