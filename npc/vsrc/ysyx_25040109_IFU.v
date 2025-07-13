module ysyx_25040109_IFU (
    input clk,
    input rst,
    input [31:0] pc,           
    output [31:0] inst_ifu,
    output inst_valid
);
    reg [31:0] inst_reg;
    reg inst_valid_reg;
    
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF) && (pc[1:0] == 2'b00);
    
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    
    reg [31:0] inst_from_mem;
    
    // 组合逻辑读取指令
    always @(*) begin
        if (is_pc_valid) begin
            verilog_pmem_read(pc, inst_from_mem);
        end else begin
            inst_from_mem = 32'h00000013; // NOP
        end
    end
    
    // 时序逻辑更新输出
    always @(posedge clk) begin
        if (rst) begin
            inst_reg <= 32'h00000013;
            inst_valid_reg <= 1'b0;
        end else begin
            inst_reg <= inst_from_mem;
            inst_valid_reg <= is_pc_valid;
        end
    end
    
    assign inst_ifu = inst_reg;
    assign inst_valid = inst_valid_reg;
endmodule


