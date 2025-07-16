module ysyx_25040109_top (
    input clk,
    input rst,
    output  [31:0]  inst,
    output [31:0] pc,
    output [31:0] a0_out
);
   
    wire [31:0] next_pc, inst_ifu, rs1_data, rs2_data, imm, result;
    wire inst_invalid;
    wire [2:0] funct3;
    wire [6:0] funct7;
    reg  [31:0] mem_data;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire step_en =1'b1;
    wire [6:0] opcode = inst_ifu[6:0];
        
   // reg [31:0] trap_pc;
   // reg [31:0] trap_cause;

   // reg load_stall;
    //reg load_data_ready;

    



    ysyx_25040109_Reg #(32, 32'h80000000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(next_pc),
        .dout(pc),
        .wen(step_en)
    );

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
        .inst_invalid(inst_invalid)
    );


 

    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_in(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc), 
        .opcode(opcode), // 暂停时可以传入 NOP 的 opcode
        .funct3(funct3),
        .funct7(funct7),
       // .mem_data(mem_data),
        .inst_invalid(inst_invalid),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc)
        

    );



        ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .pc(pc),
        .wdata(writeback_data),
        .waddr(rd_addr_exu),
        .wen(reg_write_en_exu && !inst_invalid),
        .raddr1(inst_ifu[19:15]),
        .raddr2(inst_ifu[24:20]),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out)

    );


    wire [31:0] writeback_data;
    reg  [31:0] load_result;

    assign writeback_data = is_load ? load_result  : result ;

   always @(*) begin
        if (is_load) begin // 加载指令
            verilog_pmem_read(mem_addr, mem_data);
            case (funct3)
                3'b000: load_result = {{24{mem_data[7]}}, mem_data[7:0]};   // LB - 符号扩展
                3'b001: load_result = {{16{mem_data[15]}}, mem_data[15:0]}; // LH - 符号扩展
                3'b010: load_result = mem_data;                             // LW - 直接使用
                3'b100: load_result = {24'b0, mem_data[7:0]};              // LBU - 零扩展
                3'b101: load_result = {16'b0, mem_data[15:0]};             // LHU - 零扩展
                default: load_result = 32'b0;
            endcase
        end else begin
            mem_data = 32'h0;
            load_result = 32'b0;
        end
    end
    

       /* function [31:0] pmem_read_data(input [31:0] addr);
        reg [31:0] data;
        begin
          if(is_load)begin  
            verilog_pmem_read(addr, data);
          end else begin
            data = 32'h0;
          end

        end
        return data;

    endfunction*/


   /* always @(*) begin
    if (is_load) begin
        // 只有当指令是Load时, 才调用DPI函数从内存读取数据
        verilog_pmem_read(mem_addr, mem_data);
    end else begin
        // 对于非Load指令, 赋予默认值，不进行任何内存读取操作
        mem_data = 32'b0; 
    end
end*/
    

    // assign mem_data = is_load ? pmem_read_data(mem_addr) : 32'b0;



    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    import "DPI-C" function void verilog_pmem_write(input int addr, input int data, input int len);
    import "DPI-C" function int printf_finish(input int inst);  
   // import "DPI-C" function void sdb_scan_mem(input int addr, output int value);
   // import "DPI-C" function void debug_exu(input int pc, input int inst, input int rs1_data, input int rd_addr, input int result);
    //import "DPI-C" function void mtrace_record(byte tp,int addr,int len,int  data);
    import "DPI-C" function void itrace_print( int pc, int instruction_word, int instr_len_bytes);
    import "DPI-C" function void trap_record(int pc,int cause);
   

   


    


   wire is_load =  (opcode == 7'b0000011) && 
                   (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010 || 
                    funct3 == 3'b100 || funct3 == 3'b101);
    wire is_store = (opcode == 7'b0100011) && 
                    (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010);



    wire [31:0] mem_addr = result;
    //wire addr_valid = (mem_addr >= 32'h80000000) && (mem_addr <= 32'h87FFFFFF)  && (mem_addr[1:0] == 2'b00);
   
    assign inst = inst_ifu;

      always @(posedge clk) begin
        if (!rst) begin
            // --- 同步写 (用于Store指令) ---
            if (is_store && !inst_invalid) begin
                case (funct3)
                    3'b000: verilog_pmem_write(mem_addr, rs2_data, 1); // SB
                    3'b001: verilog_pmem_write(mem_addr, rs2_data, 2); // SH
                    3'b010: verilog_pmem_write(mem_addr, rs2_data, 4); // SW
                    default: ;
                endcase
            end

            // --- 仿真跟踪与结束 ---
            itrace_print(pc, inst_ifu, 4);
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
            end
        end
    end




endmodule

      


