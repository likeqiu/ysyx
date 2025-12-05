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

    // 内部寄存器
    reg          full;      // 状态: 0=IDLE(空), 1=WAIT(满)
    reg [31:0]   inst_temp; // 内部缓冲

    // 握手"事务" (fire) 信号
    wire mem_fire = mem_valid && ifu_ready_to_mem;
    wire idu_fire = ifu_valid_to_idu && idu_ready;

    // ready：当为空，或者下游准备好取走当前指令
    assign ifu_ready_to_mem = !full || idu_ready;

    // valid：当有缓存，或者上游此拍给了数据（直通）
    assign ifu_valid_to_idu = full || (mem_valid && ifu_ready_to_mem);
    
    // 输出：优先用缓冲，否则直通上游数据
    assign inst_ifu = full ? inst_temp : imem_rdata;

    // 状态机
    always @(posedge clk) begin
        if (rst) begin
            full <= 1'b0;
        end else begin
            if (mem_fire && !idu_fire) begin
                full <= 1'b1; // 只有流入
            end else if (!mem_fire && idu_fire) begin
                full <= 1'b0; // 只有流出
            end
            // 其余保持
        end
    end

    // 数据缓冲
    always @(posedge clk) begin
        if (mem_fire) begin
            inst_temp <= imem_rdata;
        end
    end

endmodule

