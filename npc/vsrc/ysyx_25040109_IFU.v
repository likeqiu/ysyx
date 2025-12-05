module ysyx_25040109_IFU (
    input           clk,
    input           rst,

    // 来自 Memory (上游)
    input  [31:0]   imem_rdata,
    input           mem_valid,
    output          ifu_ready_to_mem, // 告诉 Mem 我是否 ready

    // 去往 IDU (下游)
    input           idu_ready,
    output [31:0]   inst_ifu,         // 输出给下游的指令
    output          ifu_valid_to_idu  // valid 传给下游
);

    reg          full;      // 1 表示内部有缓冲数据
    reg [31:0]   inst_temp; // 缓冲指令

    // 握手判定
    wire mem_fire = mem_valid && ifu_ready_to_mem;
    wire idu_fire = ifu_valid_to_idu && idu_ready;

    // ready：仅在缓冲为空且下游准备好时拉取，避免执行期的地址抖动
    assign ifu_ready_to_mem = !full && idu_ready;
    // valid：已有缓冲或本周期直通
    assign ifu_valid_to_idu = full || (mem_valid && ifu_ready_to_mem);
    // 输出数据：有缓冲用缓冲，否则直通上游
    assign inst_ifu = full ? inst_temp : imem_rdata;

    // 状态机：跟踪缓冲是否占用
    always @(posedge clk) begin
        if (rst) begin
            full <= 1'b0;
        end else begin
            if (mem_fire && !idu_fire) begin
                full <= 1'b1;
            end else if (!mem_fire && idu_fire) begin
                full <= 1'b0;
            end
        end
    end

    // 数据缓冲
    always @(posedge clk) begin
        if (rst) begin
            inst_temp <= 32'b0;
        end else if (mem_fire) begin
            inst_temp <= imem_rdata;
        end
    end

endmodule
