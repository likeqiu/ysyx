
import "DPI-C" function void mtrace_record(byte type,int  addr,int len,int  data);
module ysyx_25040109_top (
    input clk,
    input rst,
    output  [31:0]  inst,
    output [31:0] pc,
    output [31:0] a0_out
);
    wire [31:0] next_pc, inst_ifu, rs1_data, rs2_data, imm, result;
    reg  [31:0] mem_data;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire step_en =1'b1;
    wire [6:0] opcode = inst_ifu[6:0];
    wire [2:0] funct3 = inst_ifu[14:12];


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
        .pc(pc),
        .inst_ifu(inst_ifu)
    );



    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en(reg_write_en_idu)
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
        .mem_data(mem_data),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc)
        

    );

        ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .wdata(result),
        .waddr(rd_addr_exu),
        .wen(reg_write_en_exu && step_en),
        .raddr1(inst_ifu[19:15]),
        .raddr2(inst_ifu[24:20]),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out)

    );




    import "DPI-C" function void pmem_read(input int addr, output int data);
    import "DPI-C" function void pmem_write(input int addr, input int data, input int len);
    import "DPI-C" function int printf_finish(input int inst);  
    import "DPI-C" function void sdb_scan_mem(input int addr, output int value);
    import "DPI-C" function void debug_exu(input int pc, input int inst, input int rs1_data, input int rd_addr, input int result);
    

   




    wire is_sw =(opcode == 7'b0100011 && funct3==3'b010);
    wire is_lw =(opcode == 7'b0000011 && funct3==3'b010);
    wire [31:0] mem_addr = rs1_data+imm;
     wire addr_valid = (mem_addr >= 32'h80000000) && (mem_addr <= 32'h87FFFFFF);
   
    assign inst = inst_ifu;

    // 新增：为 lw 指令组合逻辑读取内存
    always @(*) begin
        mem_data = 32'bx; // 默认值，或 32'b0
        if (is_lw && addr_valid) begin
            pmem_read(mem_addr, mem_data); // DPI-C 调用，将结果写入 reg 型的 mem_data
        end
            // 修改：移除了 lw 的 pmem_read，但 sdb_scan_mem 可以保留用于观察
        if (step_en && is_lw && addr_valid ) begin
            // pmem_read(mem_addr, mem_data); // 此行已移至上面的 always@(*) 块
            sdb_scan_mem(mem_addr, mem_data); // 可选的调试扫描, mem_data是组合逻辑结果
        end
    end


    always @(posedge clk) begin
        if (step_en && is_sw && addr_valid ) begin
            pmem_write(mem_addr, rs2_data, 4);
            sdb_scan_mem(mem_addr, rs2_data);
        end
  
       
    end


    always @(posedge clk) begin
        if (!rst  ) begin
            $display("PC=0x%h, inst=0x%h", pc, inst_ifu);
            if (printf_finish(inst_ifu) == 0) begin
                $finish;
            end
 
        end
      
    end
endmodule

      


