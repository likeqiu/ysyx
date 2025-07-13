module ysyx_25040109_IFU (
    input [31:0] pc,          // 当前PC
    output [31:0] inst_ifu,   // 当前PC对应的指令
    output inst_valid
);
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF) && (pc[1:0] == 2'b00);
    
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
    
    reg [31:0] inst_from_mem;
    
    // 组合逻辑直接读取当前PC的指令
    always @(*) begin
        if (is_pc_valid) begin
            verilog_pmem_read(pc, inst_from_mem);
        end else begin
            inst_from_mem = 32'h00000013; // NOP
        end
    end
    
    // 直接输出，不延迟
    assign inst_ifu = inst_from_mem;
    assign inst_valid = is_pc_valid;
endmodule


