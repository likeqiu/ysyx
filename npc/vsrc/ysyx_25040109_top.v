// CPU顶层模块 - 集成IFU, IDU, EXU, LSU和RegisterFile
module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] p_count_number,
    output [31:0] inst,
    output [31:0] pc,
    output [31:0] a0_out
);

    // ==================== 信号声明 ====================
    
    // PC和指令
    wire [31:0] next_pc, inst_ifu, pc_val;
    wire [31:0] ifu_rdata;
    
    // 寄存器和数据
    wire [31:0] rs1_data, rs2_data, imm, result;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    
    // 指令字段
    wire [6:0] opcode = inst_ifu[6:0];
    wire [2:0] funct3_idu, funct3_wire;
    wire [6:0] funct7_idu, funct7_wire;
    wire [4:0] rs1_addr = inst_ifu[19:15];
    wire inst_invalid;
    
    // 使用IDU输出的funct3和funct7
    assign funct3_wire = funct3_idu;
    assign funct7_wire = funct7_idu;
    
    // CSR信号
    wire [11:0] csr_addr;
    wire [31:0] csr_rdata_from_regfile, csr_wdata_from_exu;
    wire csr_we_from_exu;
    wire [31:0] mepc_from_regfile, mtvec_from_regfile;
    
    // 异常处理
    reg trap_state;
    localparam S_NORMAL = 1'b0;
    localparam S_TRAP_MCAUSE = 1'b1;
    wire is_stalled_by_trap = (trap_state == S_TRAP_MCAUSE);
    
    // LSU相关
    wire is_load, is_store;
    wire [31:0] lsu_mem_addr, lsu_mem_wdata, lsu_load_result;
    wire [1:0] lsu_mem_wstrb;
    wire [31:0] mem_rdata;
    
    // ==================== 异常处理状态机 ====================
    
    always @(posedge clk) begin
        if (rst) begin
            trap_state <= S_NORMAL;
        end else begin
            case (trap_state)
                S_NORMAL: begin
                    if (is_ecall) begin
                        trap_state <= S_TRAP_MCAUSE;
                    end
                end
                S_TRAP_MCAUSE: begin
                    trap_state <= S_NORMAL;
                end
                default: trap_state <= S_NORMAL;
            endcase
        end
    end
    
    wire pc_wen = !is_stalled_by_trap;
    
    // ==================== PC寄存器（内联） ====================
    
    reg [31:0] pc_val_reg;
    
    always @(posedge clk) begin
        if (rst) begin
            pc_val_reg <= 32'h80000000;  // PC复位值
        end else if (pc_wen) begin
            pc_val_reg <= next_pc;
        end
    end
    
    assign pc_val = pc_val_reg;
    assign pc = pc_val;
    
    // ==================== 指令获取 (IFU + MEM) ====================
    
    ysyx_25040109_IFU ifu (
        .pc(pc_val),
        .inst_from_mem(ifu_rdata),
        .inst_ifu(inst_ifu)
    );
    
    // ==================== 指令解码 (IDU) ====================
    
    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en_idu(reg_write_en_idu),
        .funct3(funct3_idu),
        .funct7(funct7_idu),
        .inst_invalid(inst_invalid),
        .csr_addr(csr_addr)
    );
    
    // ==================== 执行单元 (EXU) ====================
    
    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_in(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc_val),
        .rs1_addr(rs1_addr),
        .opcode(opcode),
        .funct3(funct3_wire),
        .funct7(funct7_wire),
        .inst_invalid(inst_invalid),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc),
        .csr_addr(csr_addr),
        .csr_rdata(csr_rdata_from_regfile),
        .mepc(mepc_from_regfile),
        .mtvec(mtvec_from_regfile),
        .csr_we_out(csr_we_from_exu),
        .csr_wdata_out(csr_wdata_from_exu)
    );
    
    // ==================== 访存单元 (LSU) ====================
    
    ysyx_25040109_LSU lsu (
        .alu_result(result),
        .rs2_data(rs2_data),
        .opcode(opcode),
        .funct3(funct3_wire),
        .inst_invalid(inst_invalid),
        .is_load(is_load),
        .is_store(is_store),
        .mem_addr(lsu_mem_addr),
        .mem_wdata(lsu_mem_wdata),
        .mem_wstrb(lsu_mem_wstrb),
        .mem_rdata(mem_rdata),
        .load_result(lsu_load_result)
    );
    
    // ==================== 内存模块 ====================
    
    mem memory (
        .rst(rst),
        .ifu_addr(pc_val),
        .ifu_rdata(ifu_rdata),
        .dsu_addr(lsu_mem_addr),
        .dsu_wdata(lsu_mem_wdata),
        .dsu_wstrb(lsu_mem_wstrb),
        .dsu_rdata(mem_rdata),
        .dsu_valid(is_load || is_store)
    );
    
    // ==================== 控制逻辑 ====================
    
    wire is_ecall = (opcode == 7'b1110011) && (funct3_wire == 3'b000) && (csr_addr == 12'h000) && !inst_invalid;
    
    wire final_gpr_we = reg_write_en_exu && !is_stalled_by_trap;
    wire final_mem_we = is_store && !is_stalled_by_trap;
    
    // CSR写控制
    localparam CSR_MEPC = 12'h341;
    localparam CSR_MCAUSE = 12'h342;
    
    wire [11:0] final_csr_waddr;
    wire [31:0] final_csr_wdata;
    wire final_csr_we;
    
    assign final_csr_we = (is_stalled_by_trap) ? 1'b1 :
                          (is_ecall) ? 1'b1 :
                          csr_we_from_exu;
    
    assign final_csr_waddr = (is_stalled_by_trap) ? CSR_MCAUSE :
                             (is_ecall) ? CSR_MEPC :
                             csr_addr;
    
    assign final_csr_wdata = (is_stalled_by_trap) ? 32'd11 :
                             (is_ecall) ? pc_val :
                             csr_wdata_from_exu;
    
    // ==================== 回写数据选择 ====================
    
    wire [31:0] writeback_data = is_load ? lsu_load_result : result;
    
    // ==================== 寄存器文件 ====================
    
    ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .rst(rst),
        .pc(pc_val),
        .wdata(writeback_data),
        .waddr(rd_addr_exu),
        .wen(final_gpr_we),
        .raddr1(inst_ifu[19:15]),
        .raddr2(inst_ifu[24:20]),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out),
        .csr_we(final_csr_we),
        .csr_addr(final_csr_waddr),
        .csr_wdata(final_csr_wdata),
        .mepc_out(mepc_from_regfile),
        .mtvec_out(mtvec_from_regfile),
        .csr_rdata(csr_rdata_from_regfile)
    );
    
    // ==================== DPI-C接口 ====================
    
    `ifndef SYNTHESIS
    
    import "DPI-C" function void difftest_skip_ref();
    import "DPI-C" function int printf_finish(input int inst);
    import "DPI-C" function void itrace_print(int pc, int instruction_word, int instr_len_bytes, int p_count_number);
    import "DPI-C" function void trap_record(int pc, int cause);
    import "DPI-C" function void update_decode_state(int pc, int snpc, int dnpc, int inst);
    
    always @(*) begin
        update_decode_state(pc_val, pc_val + 32'd4, next_pc, inst_ifu);
    end
    
    always @(posedge clk) begin
        if (final_mem_we || is_load || is_ecall || is_stalled_by_trap || opcode == 7'b1110011) begin
            difftest_skip_ref();
        end
    end
    
    always @(posedge clk) begin
        if (!rst) begin
            itrace_print(pc_val, inst_ifu, 4, p_count_number);
            
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
            end
        end
    end
    
    `endif
    
    assign inst = inst_ifu;

endmodule
