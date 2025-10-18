module ysyx_25040109_top (
    input clk,
    input rst,
    input [31:0] p_count_number,
    output  [31:0]  inst,
    output [31:0] pc,
    `ifdef SYNTHESIS
    input [31:0] yosys_store_load,
    `endif 
    output [31:0] a0_out


);
   
    wire [31:0] next_pc, inst_ifu, rs1_data, rs2_data, imm, result;
    wire inst_invalid;
    wire [2:0] funct3;
    wire [6:0] funct7;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire [6:0] opcode = inst_ifu[6:0];
        
    wire [11:0] csr_addr;
    wire [31:0] csr_rdata_from_regfile;
    wire [31:0] csr_wdata_from_exu;
    wire csr_we_from_exu;
    wire [31:0] mepc_from_regfile;
    wire [31:0] mtvec_from_regfile;
    wire [4:0] rs1_addr = inst_ifu[19:15];

    reg trap_state;
    localparam S_NORMAL = 1'b0;
    localparam S_TRAP_MCAUSE = 1'b1;
    wire is_stalled_by_trap = (trap_state == S_TRAP_MCAUSE);  



always @(posedge clk ) begin
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
    // PC寄存器（内联实现）
    reg [31:0] pc_reg;
    wire pc_wen = !is_stalled_by_trap;
    
    always @(posedge clk) begin
        if (rst) 
            pc_reg <= 32'h80000000;
        else if (pc_wen) 
            pc_reg <= next_pc;
    end
    
    assign pc = pc_reg;

    ysyx_25040109_IFU ifu (
        .pc(pc),
        .inst_ifu(inst_ifu)

    );



    
    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en_idu(reg_write_en_idu),
        .funct3(funct3),
        .funct7(funct7),
        .inst_invalid(inst_invalid),
        .csr_addr(csr_addr)
    );


 

    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_in(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc), 
        .rs1_addr(rs1_addr),
        .opcode(opcode), 
        .funct3(funct3),
        .funct7(funct7),
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


    wire is_ecall = (opcode == 7'b1110011) && (funct3 == 3'b000) && (csr_addr == 12'h000) && !inst_invalid;

    wire final_gpr_we = reg_write_en_exu && !is_stalled_by_trap;


    wire [11:0] final_csr_waddr;
    wire [31:0] final_csr_wdata;
    wire final_csr_we;



    localparam CSR_MEPC   = 12'h341;
    localparam CSR_MCAUSE = 12'h342;
    
    assign final_csr_we = (is_stalled_by_trap) ? 1'b1 :               
                          (is_ecall)           ? 1'b1 :               
                          csr_we_from_exu;                           

    assign final_csr_waddr = (is_stalled_by_trap) ? CSR_MCAUSE :        // 暂停时, 写mcause
                             (is_ecall)           ? CSR_MEPC   :        // ecall时, 写mepc
                             csr_addr;                                

    assign final_csr_wdata = (is_stalled_by_trap) ? 32'd11 :           
                             (is_ecall)           ? pc     :            
                             csr_wdata_from_exu;    



        ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .rst(rst),
        .pc(pc),
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



 

`ifndef SYNTHESIS

    import "DPI-C" function void difftest_skip_ref();
    import "DPI-C" function int printf_finish(input int inst);  
    import "DPI-C" function void itrace_print( int pc, int instruction_word, int instr_len_bytes,int p_count_number);
    import "DPI-C" function void trap_record(int pc,int cause);
    import "DPI-C"  function void  update_decode_state(int pc,int snpc,int dnpc,int inst);
    
`endif 

    // load/store控制信号
    wire is_load =  (opcode == 7'b0000011) && 
                    (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010 || 
                     funct3 == 3'b100 || funct3 == 3'b101);
    
    wire is_store = (opcode == 7'b0100011);
    wire final_mem_we = is_store && !inst_invalid && !is_stalled_by_trap;

    // LSU模块实例化
    wire [31:0] load_data_from_lsu;
    
    ysyx_25040109_LSU lsu (
        .clk(clk),
        .rst(rst),
        .addr(result),
        .store_data(rs2_data),
        .funct3(funct3),
        .is_load(is_load),
        .is_store(final_mem_we),
        .inst_invalid(inst_invalid),
        .stall(is_stalled_by_trap),
    `ifdef SYNTHESIS
        .yosys_store_load(yosys_store_load),
    `endif
        .load_data(load_data_from_lsu)
    );

    // 写回数据选择
    wire [31:0] writeback_data;
    assign writeback_data = is_load ? load_data_from_lsu : result;
    



    `ifndef SYNTHESIS
  
    always @(*) begin
        
        update_decode_state(pc,pc + 32'd4,next_pc,inst_ifu);
        
    end

    `endif 
   



    always @(posedge clk) begin
    if(final_mem_we || is_load || is_ecall || is_stalled_by_trap || opcode == 7'b1110011)begin
    difftest_skip_ref();
    end

end    
   

    assign inst = inst_ifu;

    // DPI-C监控和trace
    always @(posedge clk) begin
        if (!rst) begin
            `ifndef SYNTHESIS
            itrace_print(pc, inst_ifu, 4, p_count_number);
           
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
            end
            `endif
        end
    end




endmodule

      


