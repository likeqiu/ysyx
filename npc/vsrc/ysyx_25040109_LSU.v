module ysyx_25040109_LSU (
    input clk,
    input rst,

    // 输入通道（来自EXU）
    input [31:0] addr,
    input [31:0] store_data,
    input [2:0] funct3,
    input is_load,
    input is_store,
    input inst_invalid,
    input in_valid,              // 输入数据有效（握手协议）
    output out_ready,            // LSU准备好接收（握手协议）

    // dmem接口（连接到MEM模块，带握手）
    output dmem_ren,
    output [31:0] dmem_raddr,
    input [31:0] dmem_rdata,     // 从MEM读取的数据
    input dmem_rvalid,           // MEM读数据有效（握手协议）

    output dmem_wen,
    output [31:0] dmem_waddr,
    output [31:0] dmem_wdata,
    output [2:0] dmem_wlen,
    input dmem_wready,           // MEM写准备好（握手协议）

    // 输出通道（到WB）
    output reg [31:0] load_data,
    output store_enable,
    output out_valid,            // 输出数据有效（握手协议）
    input in_ready               // 下游准备好接收（握手协议）
);

    // ========================================
    // 状态机定义
    // ========================================
    localparam IDLE      = 2'b00;  // 空闲状态
    localparam WAIT_MEM  = 2'b01;  // 等待内存响应
    localparam BUFFERED  = 2'b10;  // 数据已缓冲

    reg [1:0] state;
    reg [31:0] buffer_load_data;   // 缓冲的load数据
    reg [2:0] buffer_funct3;       // 缓冲的funct3
    reg [31:0] addr_latched;
    reg [31:0] store_data_latched;
    reg [2:0]  funct3_latched;
    reg        load_latched;
    reg        store_latched;
    reg        mem_done;           // 当前请求是否完成

    // ========================================
    // 握手信号
    // ========================================
    wire in_fire = in_valid && out_ready;
    wire out_fire = out_valid && in_ready;
    wire mem_read_fire = dmem_ren && dmem_rvalid;
    wire mem_write_fire = dmem_wen && dmem_wready;

    // Ready信号：空闲或已缓冲且下游ready
    assign out_ready = (state == IDLE) || (state == BUFFERED && in_ready);

    // Valid信号：已缓冲或内存操作完成
    assign out_valid = (state == BUFFERED) || (state == WAIT_MEM && mem_done);

    // ========================================
    // 内存接口信号
    // ========================================
    wire store_valid = store_latched && !inst_invalid;

    // dmem读接口
    assign dmem_ren = (state == WAIT_MEM && load_latched && !mem_done);
    assign dmem_raddr = addr_latched;

    // dmem写接口
    assign dmem_wen = (state == WAIT_MEM && store_valid && !mem_done);
    assign dmem_waddr = addr_latched;
    assign dmem_wdata = store_data_latched;
    assign dmem_wlen = (funct3_latched == 3'b000) ? 3'b001 :  // SB
                       (funct3_latched == 3'b001) ? 3'b010 :  // SH
                       (funct3_latched == 3'b010) ? 3'b100 :  // SW
                       3'b000;

    assign store_enable = store_valid;

    // ========================================
    // 状态机转换
    // ========================================
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            mem_done <= 1'b0;
            load_latched <= 1'b0;
            store_latched <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    mem_done <= 1'b0;
                    if (in_fire && (is_load || is_store)) begin
                        state <= WAIT_MEM;
                    end
                end

                WAIT_MEM: begin
                    if (mem_read_fire || mem_write_fire) begin
                        mem_done <= 1'b1;
                    end
                    if (mem_done) begin
                        state <= BUFFERED;
                    end
                end

                BUFFERED: begin
                    if (out_fire) begin
                        state <= IDLE;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

    // ========================================
    // 请求与数据缓冲
    // ========================================
    always @(posedge clk) begin
        if (rst) begin
            addr_latched       <= 32'b0;
            store_data_latched <= 32'b0;
            funct3_latched     <= 3'b0;
            load_latched       <= 1'b0;
            store_latched      <= 1'b0;
        end else begin
            if (in_fire && (is_load || is_store)) begin
                addr_latched       <= addr;
                store_data_latched <= store_data;
                funct3_latched     <= funct3;
                load_latched       <= is_load;
                store_latched      <= is_store;
            end else if (out_fire) begin
                load_latched  <= 1'b0;
                store_latched <= 1'b0;
            end
        end
    end

    // 读返回数据缓冲
    always @(posedge clk) begin
        if (state == WAIT_MEM && mem_read_fire) begin
            buffer_load_data <= dmem_rdata;
            buffer_funct3 <= funct3_latched;
        end
    end

    // ========================================
    // load数据扩展（指令语义处理）
    // ========================================
    wire [31:0] current_rdata = (state == BUFFERED || mem_done) ? buffer_load_data : dmem_rdata;
    wire [2:0] current_funct3 = (state == BUFFERED || mem_done) ? buffer_funct3 : funct3_latched;

    always @(*) begin
        if (load_latched || state == BUFFERED || mem_done) begin
            case (current_funct3)
                3'b000: load_data = {{24{current_rdata[7]}}, current_rdata[7:0]};   // LB
                3'b001: load_data = {{16{current_rdata[15]}}, current_rdata[15:0]}; // LH
                3'b010: load_data = current_rdata;                                   // LW
                3'b100: load_data = {24'b0, current_rdata[7:0]};                    // LBU
                3'b101: load_data = {16'b0, current_rdata[15:0]};                   // LHU
                default: load_data = 32'b0;
            endcase
        end else begin
            load_data = 32'b0;
        end
    end

endmodule
