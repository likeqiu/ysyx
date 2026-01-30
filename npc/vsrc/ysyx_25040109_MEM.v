module ysyx_25040109_MEM (
    input clk,
    input rst,

    // imem
    input [31:0] imem_araddr,
    input        imem_arvalid,
    output       imem_arready,
    output reg [31:0] imem_rdata,
    output reg   imem_rvalid,
    input        imem_rready,
    output reg [1:0]  imem_rresp,

    /* verilator lint_off UNUSED */
    input [31:0] imem_awaddr,
    input        imem_awvalid,
    output       imem_awready,
    input [31:0] imem_wdata,
    input [3:0]  imem_wstr,
    output       imem_wready,
    input        imem_wvalid,
    input        imem_bready,
    output       imem_bvalid,
    output [1:0] imem_bresp,
    /* verilator lint_off UNUSED */


    

    // dmem read
    input [31:0] dmem_araddr,
    input        dmem_arvalid,
    output       dmem_arready,
    output reg [31:0] dmem_rdata,
    output reg   dmem_rvalid,
    input        dmem_rready,
    output reg [1:0] dmem_rresp,

    // dmem write
    input [31:0] dmem_awaddr,
    input        dmem_awvalid,
    output       dmem_awready,
    input [31:0] dmem_wdata,
    input [3:0]  dmem_wstrb,
    input        dmem_wen,
    input        dmem_wvalid,
    output       dmem_wready,



    output reg [1:0] dmem_bresp,
    output reg       dmem_bvalid,
    input            dmem_bready



`ifdef SYNTHESIS
    ,
    input [31:0] yosys_imem_rdata,
    input [31:0] yosys_dmem_rdata
`endif
);

    assign imem_awready = 1'b0;
    assign imem_wready  = 1'b0;
    assign imem_bvalid  = 1'b0;
    assign imem_bresp  = RESP_OKAY;



    always @(posedge clk) begin
        if(!rst)begin
            if(imem_awvalid)begin
                $fatal("imem AWVALID must stay 0");
            end

            if(imem_wvalid)begin
                $fatal("imem WVALID must stay 0");
            end
        end
    end



    localparam  [1:0] RESP_OKAY   = 2'b00;
    localparam  [1:0] RESP_SLVERR = 2'b10;



//这里很浪费，时刻都在调用
`ifdef SYNTHESIS
    wire imem_addr_ok  = 1'b1;
    wire dmem_raddr_ok = 1'b1;
    wire dmem_waddr_ok = 1'b1;
`else
    wire imem_addr_ok  = (pmem_read_ok(imem_araddr) != 0);
    wire dmem_raddr_ok = (pmem_read_ok(dmem_araddr) != 0);
    wire dmem_waddr_ok = (pmem_read_ok(dmem_waddr_use) != 0);
`endif

    // 写地址缓冲
    reg [31:0] dmem_awaddr_latched;
    reg        dmem_awaddr_valid;
    wire       dmem_aw_fire = dmem_awvalid &&dmem_awready;
    wire       dmem_w_fire  = dmem_wvalid && dmem_wready;
    

`ifndef SYNTHESIS
    import "DPI-C" function int pmem_read(input int raddr);
    import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);
    import "DPI-C" function int pmem_read_ok(input int addr);


    reg [7:0]  dmem_wstrb_ext;
    reg [31:0] dmem_wdata_aligned;

    // 写掩码 + 对齐数据
    always @(*) begin
        dmem_wstrb_ext = {4'b0, dmem_wstrb};
        dmem_wdata_aligned = dmem_wdata << {dmem_waddr_use[1:0], 3'b000};
    end
`endif

    // 延迟模拟


    // imem 读
    reg [31:0] imem_rdata_buf;

    wire   imem_ar_fire = imem_arvalid && imem_arready;
    assign imem_arready = !imem_busy && !imem_rvalid;

    always @(*) begin
        if (imem_ar_fire) begin
`ifndef SYNTHESIS
            imem_rdata = imem_addr_ok ? pmem_read(imem_araddr) : 32'b0;
`else
            imem_rdata = yosys_imem_rdata;
`endif
        end else begin
            imem_rdata = imem_rdata_buf;
        end
    end

    always @(posedge clk) begin
        if (imem_ar_fire) begin
            imem_rdata_buf <= imem_rdata;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            imem_rvalid <= 1'b0;
            imem_busy <= 1'b0;
            imem_delay_cnt <= {{W{1'b0}}};
        end else begin
            if (imem_rvalid && imem_rready) begin
                imem_rvalid <= 1'b0;
            end else if (imem_ar_fire) begin
                imem_busy <= 1'b1;
                imem_delay_cnt <= imem_delay;
                imem_rvalid <= 1'b0;
            end else if (imem_busy) begin
                if (imem_delay_cnt > 0) begin
                    imem_delay_cnt <= imem_delay_cnt - 1;
                    imem_rvalid <= 1'b0;
                end else begin
                    imem_rvalid <= 1'b1;
                    imem_busy <= 1'b0;
                end
            end
        end
    end

    // dmem 读
    reg [31:0] dmem_rdata_buf;
    wire dmem_ar_fire = dmem_arvalid && dmem_arready;
    assign dmem_arready = !dmem_r_busy && !dmem_rvalid;

    always @(*) begin
        if (dmem_ar_fire) begin
`ifndef SYNTHESIS
            dmem_rdata = dmem_raddr_ok ? pmem_read(dmem_araddr) : 32'b0;
`else
            dmem_rdata = yosys_dmem_rdata;
`endif
        end else begin
            dmem_rdata = dmem_rdata_buf;
        end
    end

    always @(posedge clk) begin
        if (dmem_ar_fire) begin
            dmem_rdata_buf <= dmem_rdata;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            dmem_rvalid <= 1'b0;
            dmem_r_busy <= 1'b0;
            dmem_delay_cnt <= {{W{1'b0}}};
        end else begin
            if (dmem_rvalid && dmem_rready) begin
                dmem_rvalid <= 1'b0;
            end else if (dmem_ar_fire) begin
                dmem_r_busy <= 1'b1;
                dmem_delay_cnt <= dmem_delay;
                dmem_rvalid <= 1'b0;
            end else if (dmem_r_busy) begin
                if (dmem_delay_cnt > 0) begin
                    dmem_delay_cnt <= dmem_delay_cnt - 1;
                    dmem_rvalid <= 1'b0;
                end else begin
                    dmem_rvalid <= 1'b1;
                    dmem_r_busy <= 1'b0;
                end
            end
        end
    end

    // 保证只有一个未完成写响应
    assign dmem_awready = !dmem_awaddr_valid && !dmem_bvalid;
    assign dmem_wready  = (dmem_awaddr_valid  || dmem_aw_fire) && !dmem_bvalid;
    wire [31:0] dmem_waddr_use = dmem_awaddr_valid ? dmem_awaddr_latched : dmem_awaddr;

    always @(posedge clk) begin
        if (rst) begin
            dmem_awaddr_valid <= 1'b0;
            dmem_awaddr_latched <= 32'b0;
        end else begin
            if (dmem_aw_fire) begin
                dmem_awaddr_latched <= dmem_awaddr;
            end
            case ({dmem_aw_fire, dmem_w_fire})
                2'b10: dmem_awaddr_valid <= 1'b1;  // 仅地址握手
                2'b01: dmem_awaddr_valid <= 1'b0;  // 仅写数据握手
                2'b11: dmem_awaddr_valid <= 1'b0;  // 同周期完成
                default: dmem_awaddr_valid <= dmem_awaddr_valid;
            endcase
        end
    end

    always @(posedge clk) begin
        if (!rst) begin
            if (dmem_wvalid && dmem_wready && dmem_wen) begin
`ifndef SYNTHESIS
                if (dmem_waddr_ok &&  dmem_wstrb_ext != 8'b0) begin
                    pmem_write(dmem_waddr_use, dmem_wdata_aligned, dmem_wstrb_ext);
                end
`endif
            end
        end
    end

    always @(posedge clk) begin
        if(rst) imem_rresp <= RESP_OKAY;
        else if(imem_ar_fire) imem_rresp <= imem_addr_ok ? RESP_OKAY : RESP_SLVERR; 
    end
    
    always @(posedge clk) begin
        if(rst) dmem_rresp <= RESP_OKAY;
        else if(dmem_ar_fire) dmem_rresp <= dmem_raddr_ok ? RESP_OKAY : RESP_SLVERR;
    end

    always @(posedge clk) begin
        if(rst) begin
            dmem_bresp <= RESP_OKAY;
            dmem_bvalid <= 1'b0;
        end else begin
            if(dmem_bvalid && dmem_bready)begin
                dmem_bvalid <= 1'b0;
            end else if(dmem_w_fire)begin
                dmem_bvalid <= 1'b1;
                dmem_bresp <= dmem_waddr_ok ? RESP_OKAY : RESP_SLVERR;
                
            end
        end
    end
    
        

    localparam W = 5;
    reg       dmem_r_busy;
    reg       imem_busy;


    wire [W-1:0] imem_delay;
    wire [W-1:0] dmem_delay;
    wire      imem_delay_en;
    wire      dmem_delay_en;
    reg [W-1:0] imem_delay_cnt;
    reg [W-1:0] dmem_delay_cnt;

    assign imem_delay_en = 1'b1;
    assign dmem_delay_en = 1'b1;

    lfsr #(.W(W),.POLY(5'h12),.SEED(5'h1)) ifsr_imem(
        .rst(rst),
        .clk(clk),
        .en(imem_delay_en),
        .q(imem_delay)
    );

    lfsr #(.W(W),.POLY(5'h10),.SEED(5'h1)) ifsr_dmem(
        .rst(rst),
        .clk(clk),
        .en(dmem_delay_en),
        .q(dmem_delay)
    );



endmodule
