module ysyx_25040109_LSU(
    input clk,
    input rst,
/* verilator lint_off UNUSEDSIGNAL */
    // 来自 EXU
    input [31:0] addr,
    input [31:0] store_data,
    input [2:0] funct3,
    input is_load,
    input is_store,
    input inst_invalid,
    input in_valid,
    output out_ready,

    // dmem
    output dmem_arvalid,
    input dmem_arready,
    output [31:0] dmem_araddr,
    input [31:0] dmem_rdata,
    input dmem_rvalid,
    output dmem_rready,

    output dmem_awvalid,
    input dmem_awready,
    output [31:0] dmem_awaddr,
    output [3:0] dmem_awid,

    output dmem_wvalid,
    output [31:0] dmem_wdata,
    output [3:0] dmem_wstrb,
    output dmem_wlast,
    input dmem_wready,

    output [7:0] dmem_awlen,
    output [2:0] dmem_awsize,
    output [1:0] dmem_awburst,

    // 输出到 WB
    output reg [31:0] load_data,
    output store_enable,
    output out_valid,
    input in_ready,
    input [1:0] dmem_rresp,
    input       dmem_bvalid,
    input [1:0] dmem_bresp,
    input [3:0] dmem_bid,
    output      dmem_bready,
    output      resp_err,
    
    output [3:0] dmem_arid,
    input [3:0]  dmem_rid,
    input        dmem_rlast,
    output [7:0] dmem_arlen,
    output [2:0] dmem_arsize,
    output [1:0] dmem_arburst
    /* verilator lint_off UNUSEDSIGNAL */
);

    assign dmem_arid = 4'b0001;
    assign dmem_awid = 4'b0001;
    assign dmem_wlast = dmem_wvalid;
    /* verilator lint_off UNUSED */
    wire [3:0] dmem_bid_unused = dmem_bid;
    /* verilator lint_on UNUSED */
    assign dmem_arlen = 8'd0;
    assign dmem_arsize = 3'b010;
    assign dmem_arburst = 2'b01;
    assign dmem_awlen = 8'b0;
    assign dmem_awsize = 3'b010;
    assign dmem_awburst = 2'b01;



    // 状态机
    localparam IDLE      = 3'b000;  // 空闲状态
    localparam WAIT_AR   = 3'b001;  // 等待读地址握手
    localparam WAIT_R    = 3'b010;  // 等待读数据返回
    localparam WAIT_AW   = 3'b011;  // 等待写地址握手
    localparam WAIT_W    = 3'b100;  // 等待写数据握手
    localparam BUFFERED  = 3'b101;  // 数据已缓冲/写完成
    localparam WAIT_B    = 3'b110;

    localparam [1:0] RESP_OKAY = 2'b00;

    assign dmem_bready   = (state == WAIT_B);

    reg [2:0] state;
    reg [31:0] buffer_load_data;
    reg [2:0] buffer_funct3;
    reg [1:0] buffer_addr_offset;
    reg [31:0] addr_latched;
    reg [31:0] store_data_latched;
    reg [2:0]  funct3_latched;
    reg        load_latched;
    reg        store_latched;

    // 握手
    wire in_fire = in_valid && out_ready;
    wire out_fire = out_valid && in_ready;
    wire mem_read_fire = dmem_rvalid && dmem_rready && dmem_rlast;
    wire mem_write_fire = dmem_wvalid && dmem_wready && dmem_wlast;
    wire mem_ar_fire = dmem_arvalid && dmem_arready;
    wire mem_aw_fire = dmem_awvalid && dmem_awready;

    assign out_ready = (state == IDLE) || (state == BUFFERED && in_ready);

    assign out_valid = (state == BUFFERED);

    assign dmem_rready = (state == WAIT_R);

    // 内存接口
    wire store_valid = store_latched && !inst_invalid;

    assign dmem_arvalid = (state == WAIT_AR && load_latched);
    assign dmem_araddr  = addr_latched;

    assign dmem_awvalid = (state == WAIT_AW && store_valid);
    assign dmem_awaddr  = addr_latched;

    assign dmem_wvalid = (state == WAIT_W && store_valid);
    assign dmem_wdata  = store_data_latched;
    assign dmem_wstrb  = (funct3_latched == 3'b000) ? (4'b0001 << addr_latched[1:0]) : // SB
                         (funct3_latched == 3'b001) ? (4'b0011 << {addr_latched[1], 1'b0}) : // SH
                         (funct3_latched == 3'b010) ? 4'b1111 : // SW
                         4'b0000;

    assign store_enable = store_valid;

    // 状态机
    always @(posedge clk) begin
        if (rst) begin
            state <= IDLE;
            load_latched <= 1'b0;
            store_latched <= 1'b0;
        end else begin
            case (state)
                IDLE: begin
                    if (in_fire && is_load) begin
                        state <= WAIT_AR;
                    end else if (in_fire && is_store) begin
                        state <= WAIT_AW;
                    end
                end

                WAIT_AR: begin
                    if (mem_ar_fire) begin
                        state <= WAIT_R;
                    end
                end

                WAIT_R: begin
                    if (mem_read_fire) begin
                        state <= BUFFERED;
                    end
                end

                WAIT_AW: begin
                    if (mem_aw_fire) begin
                        state <= WAIT_W;
                    end
                end

                WAIT_W: begin
                    if (mem_write_fire) begin
                        state <= WAIT_B;
                    end
                end

                WAIT_B:begin
                    if(dmem_bvalid && dmem_bready)begin
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

    // 请求与数据缓冲
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

    always @(posedge clk) begin
        if (state == WAIT_R && mem_read_fire) begin
            buffer_load_data <= dmem_rdata;
            buffer_funct3 <= funct3_latched;
            buffer_addr_offset <= addr_latched[1:0];
        end
    end

    // load 数据扩展
    wire [31:0] current_rdata = (state == BUFFERED) ? buffer_load_data : dmem_rdata;
    wire [2:0] current_funct3 = (state == BUFFERED) ? buffer_funct3 : funct3_latched;
    wire [1:0] current_addr_offset = (state == BUFFERED) ? buffer_addr_offset : addr_latched[1:0];
    wire [4:0] byte_shift = {current_addr_offset, 3'b000};
    wire [31:0] shifted_rdata = current_rdata >> byte_shift;

    always @(*) begin
        if (load_latched || state == BUFFERED) begin
            case (current_funct3)
                3'b000: load_data = {{24{shifted_rdata[7]}}, shifted_rdata[7:0]};   // LB
                3'b001: load_data = {{16{shifted_rdata[15]}}, shifted_rdata[15:0]}; // LH
                3'b010: load_data = shifted_rdata;                                   // LW
                3'b100: load_data = {24'b0, shifted_rdata[7:0]};                    // LBU
                3'b101: load_data = {16'b0, shifted_rdata[15:0]};                   // LHU
                default: load_data = 32'b0;
            endcase
        end else begin
            load_data = 32'b0;
        end
    end


    reg [1:0] buffer_rresp;
    reg [1:0] buffer_bresp;

    wire b_fire = dmem_bvalid && dmem_bready;
    always @(posedge clk) begin
        if (rst) begin
            buffer_rresp <= RESP_OKAY;
            buffer_bresp <= RESP_OKAY;
        end else begin
            if (state == WAIT_R && mem_read_fire) begin
                buffer_rresp <= dmem_rresp;
            end
            if (state == WAIT_B && b_fire) begin
                buffer_bresp <= dmem_bresp;
            end
        end
    end

    assign resp_err = (state == BUFFERED) &&
                      ((load_latched && buffer_rresp != RESP_OKAY) ||
                       (store_latched && buffer_bresp != RESP_OKAY));


endmodule
