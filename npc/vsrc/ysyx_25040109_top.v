module ysyx_25040109_top (
    input clk,
    input rst,
    output  [31:0]  inst,
    output [31:0] pc,
    output [31:0] a0_out
);
    wire [31:0] next_pc, inst_ifu, rs1_data, rs2_data, imm, result;
    wire inst_valid,inst_invalid;
    wire [2:0] funct3;
    wire [6:0] funct7;
    reg  [31:0] mem_data;
    reg [31:0] mem_data_temp; 
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire step_en =1'b1;
    wire [6:0] opcode = inst_ifu[6:0];
        
    reg [31:0] trap_pc;
    reg [31:0] trap_cause;

    

    ysyx_25040109_Reg #(32, 32'h80000000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(next_pc),
        .dout(pc),
        .wen(step_en)
    );

    ysyx_25040109_IFU ifu (
        .rst(rst),
        .clk(clk),
        .next_pc(next_pc),
        .pc(pc),
        .inst_ifu(inst_ifu),
        .inst_valid(inst_valid)
    );



    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .funct3(funct3),
        .funct7(funct7),
        .inst_invalid(inst_invalid)
    );


    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc), 
        .opcode(opcode),
        .funct3(funct3),
        .funct7(funct7),
        .mem_data(mem_data),
        .inst_invalid(inst_invalid),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc)
        

    );

        ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .pc(pc),
        .wdata(result),
        .waddr(rd_addr_exu),
        .wen(reg_write_en_exu && step_en),
        .raddr1(inst_ifu[19:15]),
        .raddr2(inst_ifu[24:20]),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out)

    );




    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
    import "DPI-C" function int printf_finish(input int inst);  
   // import "DPI-C" function void sdb_scan_mem(input int addr, output int value);
   // import "DPI-C" function void debug_exu(input int pc, input int inst, input int rs1_data, input int rd_addr, input int result);
    //import "DPI-C" function void mtrace_record(byte tp,int addr,int len,int  data);
    import "DPI-C" function void itrace_print( int pc, int instruction_word, int instr_len_bytes);
    import "DPI-C" function void trap_record(int pc,int cause);
   

   




   wire is_load = (opcode == 7'b0000011) && 
                   (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010 || 
                    funct3 == 3'b100 || funct3 == 3'b101);
    wire is_store = (opcode == 7'b0100011) && 
                    (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010);

    wire [31:0] mem_addr = rs1_data+imm;
    wire addr_valid = (mem_addr >= 32'h80000000) && (mem_addr <= 32'h87FFFFFF)  && (mem_addr[1:0] == 2'b00);
   
    assign inst = inst_ifu;


    reg select_read;
     always @(posedge clk or posedge rst) begin
        if (rst) begin
            mem_data <= 32'b0;
            trap_pc <= 32'h80000000;
            trap_cause <= 32'h0;
        end else if (inst_valid && !inst_invalid && step_en) begin
            if (is_load && addr_valid) begin
                case (funct3)
                    3'b000: begin verilog_pmem_read(mem_addr, mem_data_temp); select_read<=1'b1;end // LB
                    3'b001: verilog_pmem_read(mem_addr, mem_data_temp); // LH
                    3'b010: verilog_pmem_read(mem_addr, mem_data_temp); // LW
                    3'b100: verilog_pmem_read(mem_addr, mem_data_temp); // LBU
                    3'b101: verilog_pmem_read(mem_addr, mem_data_temp); // LHU
                    default: mem_data_temp = 32'b0;
                endcase
                mem_data <= mem_data_temp; // 非阻塞赋值
            end else begin
                mem_data <= 32'b0; // 非阻塞赋值
            end
            if (is_store && addr_valid) begin
                case (funct3)
                    3'b000: verilog_pmem_write(mem_addr, rs2_data, 1); // SB
                    3'b001: verilog_pmem_write(mem_addr, rs2_data, 2); // SH
                    3'b010: verilog_pmem_write(mem_addr, rs2_data, 4); // SW
                    default: ; // 无操作
                endcase
            end
            itrace_print(pc, inst_ifu, 4);
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
                //trap_pc <= pc;
                //trap_cause <= 32'h00000001; // EBREAK
                //trap_record(trap_pc, trap_cause);
                
            end
        end else if (!inst_valid || inst_invalid) begin
            trap_pc <= pc;
            trap_cause <= inst_valid ? 32'h00000002 : 32'h00000003;
            trap_record(trap_pc, trap_cause);
            $finish;
        end
    end



    
endmodule

      


