module ysyx_25040109_hanshake (
    input           clk,
    input           rst,

    // 来自 MEM
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem,

    // 去往 IDU
    input           idu_ready,
    output [31:0]   inst_ifu,
    output          ifu_valid_to_idu
);

    // 内部寄存器
    reg          full;      // 0: 空, 1: 满
    reg [31:0]   inst_temp;

    // 握手 fire
    wire mem_fire = mem_valid && ifu_ready_to_mem;
    wire idu_fire = ifu_valid_to_idu && idu_ready;

    // ready: 空或即将变空
    assign ifu_ready_to_mem = !full || idu_ready;

    // valid: 满或直通
    assign ifu_valid_to_idu = full || (mem_valid && ifu_ready_to_mem);
    
    // 输出数据：满则缓冲，否则直通
    assign inst_ifu = full ? inst_temp : imem_rdata;      

    always @(posedge clk) begin
        if (rst) begin
            full <= 1'b0;
            inst_temp <= 32'b0;
        end else begin
            if (mem_fire && !idu_fire) begin
                full <= 1'b1;
            end else if (!mem_fire && idu_fire) begin
                full <= 1'b0;
            end
            if (mem_fire) begin
                inst_temp <= imem_rdata;
            end
        end
    end

endmodule
