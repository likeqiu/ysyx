// 仲裁器：IFU 只读 + LSU 读写 -> 单端口存储器
// 约束：单次只允许一个未完成事务
// 优先级：LSU 写 > LSU 读 > IFU 读

module arbiter (
    input  wire        clk,
    input  wire        rst,

    // IFU 读通道
    input  wire        imem_arvalid,
    output wire        imem_arready,
    input  wire [31:0] imem_araddr,
    output wire        imem_rvalid,
    input  wire        imem_rready,
    output wire [31:0] imem_rdata,
    output wire [1:0]  imem_rresp,

    // LSU 读通道
    input  wire        dmem_arvalid,
    output wire        dmem_arready,
    input  wire [31:0] dmem_araddr,
    output wire        dmem_rvalid,
    input  wire        dmem_rready,
    output wire [31:0] dmem_rdata,
    output wire [1:0]  dmem_rresp,

    // LSU 写通道
    input  wire        dmem_awvalid,
    output wire        dmem_awready,
    input  wire [31:0] dmem_awaddr,
    input  wire        dmem_wvalid,
    output wire        dmem_wready,
    input  wire [31:0] dmem_wdata,
    input  wire [3:0]  dmem_wstrb,
    output wire        dmem_bvalid,
    input  wire        dmem_bready,
    output wire [1:0]  dmem_bresp,

    // 存储器侧（单端口）
    output wire        mem_arvalid,
    input  wire        mem_arready,
    output wire [31:0] mem_araddr,
    input  wire        mem_rvalid,
    output wire        mem_rready,
    input  wire [31:0] mem_rdata,
    input  wire [1:0]  mem_rresp,

    output wire        mem_awvalid,
    input  wire        mem_awready,
    output wire [31:0] mem_awaddr,
    output wire        mem_wvalid,
    input  wire        mem_wready,
    output wire [31:0] mem_wdata,
    output wire [3:0]  mem_wstrb,
    input  wire        mem_bvalid,
    output wire        mem_bready,
    input  wire [1:0]  mem_bresp
);

    localparam ST_IDLE   = 3'd0;
    localparam ST_IFU_AR = 3'd1;
    localparam ST_IFU_R  = 3'd2;
    localparam ST_LSU_AR = 3'd3;
    localparam ST_LSU_R  = 3'd4;
    localparam ST_LSU_W  = 3'd5;
    localparam ST_LSU_B  = 3'd6;

    reg [2:0] state, state_n;
    reg       aw_done;
    reg       w_done;

    wire req_lsu_w = dmem_awvalid || dmem_wvalid;
    wire req_lsu_r = dmem_arvalid;
    wire req_ifu_r = imem_arvalid;

    wire ar_fire = mem_arvalid && mem_arready;
    wire r_fire  = mem_rvalid  && mem_rready;
    wire aw_fire = mem_awvalid && mem_awready;
    wire w_fire  = mem_wvalid  && mem_wready;
    wire b_fire  = mem_bvalid  && mem_bready;

    // 存储器请求路由
    assign mem_arvalid = (state == ST_IFU_AR) ? imem_arvalid :
                         (state == ST_LSU_AR) ? dmem_arvalid :
                         1'b0;
    assign mem_araddr  = (state == ST_IFU_AR) ? imem_araddr :
                         (state == ST_LSU_AR) ? dmem_araddr :
                         32'b0;

    assign mem_awvalid = (state == ST_LSU_W && !aw_done) ? dmem_awvalid : 1'b0;
    assign mem_awaddr  = (state == ST_LSU_W) ? dmem_awaddr : 32'b0;

    assign mem_wvalid  = (state == ST_LSU_W && !w_done) ? dmem_wvalid : 1'b0;
    assign mem_wdata   = (state == ST_LSU_W) ? dmem_wdata : 32'b0;
    assign mem_wstrb   = (state == ST_LSU_W) ? dmem_wstrb : 4'b0;

    // ready 回传给主端
    assign imem_arready = (state == ST_IFU_AR) ? mem_arready : 1'b0;
    assign dmem_arready = (state == ST_LSU_AR) ? mem_arready : 1'b0;
    assign dmem_awready = (state == ST_LSU_W && !aw_done) ? mem_awready : 1'b0;
    assign dmem_wready  = (state == ST_LSU_W && !w_done) ? mem_wready : 1'b0;

    // 读响应路由
    assign imem_rvalid = (state == ST_IFU_R) ? mem_rvalid : 1'b0;
    assign imem_rdata  = (state == ST_IFU_R) ? mem_rdata  : 32'b0;
    assign imem_rresp  = (state == ST_IFU_R) ? mem_rresp  : 2'b0;

    assign dmem_rvalid = (state == ST_LSU_R) ? mem_rvalid : 1'b0;
    assign dmem_rdata  = (state == ST_LSU_R) ? mem_rdata  : 32'b0;
    assign dmem_rresp  = (state == ST_LSU_R) ? mem_rresp  : 2'b0;

    assign mem_rready  = (state == ST_IFU_R) ? imem_rready :
                         (state == ST_LSU_R) ? dmem_rready :
                         1'b0;

    // 写响应路由
    assign dmem_bvalid = (state == ST_LSU_B) ? mem_bvalid : 1'b0;
    assign dmem_bresp  = (state == ST_LSU_B) ? mem_bresp  : 2'b0;
    assign mem_bready  = (state == ST_LSU_B) ? dmem_bready : 1'b0;

    // 状态机
    always @(*) begin
        state_n = state;
        case (state)
            ST_IDLE: begin
                if (req_lsu_w)      state_n = ST_LSU_W;
                else if (req_lsu_r) state_n = ST_LSU_AR;
                else if (req_ifu_r) state_n = ST_IFU_AR;
            end
            ST_IFU_AR: begin
                if (ar_fire) state_n = ST_IFU_R;
            end
            ST_IFU_R: begin
                if (r_fire) state_n = ST_IDLE;
            end
            ST_LSU_AR: begin
                if (ar_fire) state_n = ST_LSU_R;
            end
            ST_LSU_R: begin
                if (r_fire) state_n = ST_IDLE;
            end
            ST_LSU_W: begin
                if (aw_done && w_done) state_n = ST_LSU_B;
            end
            ST_LSU_B: begin
                if (b_fire) state_n = ST_IDLE;
            end
            default: state_n = ST_IDLE;
        endcase
    end

    always @(posedge clk) begin
        if (rst) begin
            state   <= ST_IDLE;
            aw_done <= 1'b0;
            w_done  <= 1'b0;
        end else begin
            state <= state_n;

            if (state != ST_LSU_W && state_n == ST_LSU_W) begin
                aw_done <= 1'b0;
                w_done  <= 1'b0;
            end else if (state == ST_LSU_W) begin
                if (aw_fire) aw_done <= 1'b1;
                if (w_fire)  w_done  <= 1'b1;
            end
        end
    end

endmodule
