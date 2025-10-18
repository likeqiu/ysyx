module ysyx_25040109_IFU (
    input clk,
    input rst,
    input [31:0] pc,
    
    // 向MEM发出取指请求（握手协议）
    output imem_valid,
    input imem_ready,
    
    // 从MEM接收指令（握手协议）
    input [31:0] imem_rdata,
    input imem_rdata_valid,
    output imem_rdata_ready,
    
    // 输出指令
    output reg [31:0] inst_ifu,
    output reg inst_valid          // 指令有效标志
);
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF);
    
    // 发出取指请求（组合逻辑）
    assign imem_valid = is_pc_valid;
    assign imem_rdata_ready = 1'b1;  // 总是准备好接收指令
    
    // 锁存指令和有效标志（时序逻辑）
    always @(posedge clk) begin
        if (rst) begin
            inst_ifu <= 32'h00000013;  // NOP指令
            inst_valid <= 1'b0;
        end else begin
            if (imem_rdata_valid && imem_rdata_ready) begin
                // 接收指令
                inst_ifu <= imem_rdata;
                inst_valid <= 1'b1;
            end else if (!imem_valid) begin
                // 无效地址，输出NOP
                inst_ifu <= 32'h00000013;
                inst_valid <= 1'b0;
            end
            // 否则保持当前指令
        end
    end

endmodule


