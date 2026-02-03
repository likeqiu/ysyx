
module clint #(
    parameter BASE_ADDR = 32'h1001_0000
) (
    input             clk,
    input             rst,

    // read 
    input             arvalid,
    output            arready,
    input      [31:0] araddr,
    input      [7:0]  arlen,
    input      [2:0]  arsize,
    input      [1:0]  arburst,
    output reg        rvalid,
    input             rready,
    output reg [31:0] rdata,
    output reg [1:0]  rresp,
    input [3:0]       arid,
    output [3:0]      rid,
    output            rlast, 

    //  write  (ignored)
    input             awvalid,
    output            awready,
    input      [31:0] awaddr,
    input      [3:0]  awid,
    input      [7:0]  awlen,
    input      [2:0]  awsize,
    input      [1:0]  awburst,
    input             wvalid,
    output            wready,
    input      [31:0] wdata,
    input      [3:0]  wstrb,
    input             wlast,
    output reg        bvalid,
    input             bready,
    output reg [1:0]  bresp,
    output     [3:0]  bid
);


    reg [3:0] arid_latched;
    always @(posedge clk) begin
        if(rst) arid_latched <= 4'b0;
        else if (ar_fire)  arid_latched <= arid;
    end

    assign rid = arid_latched;
    assign rlast = rvalid;



    localparam [1:0] RESP_OK    = 2'b00;
    localparam [1:0] RESP_SLVERR = 2'b10;

    /* verilator lint_off UNUSED */
    wire [31:0] awaddr_unused = awaddr;
    wire [31:0] wdata_unused  = wdata;
    wire [3:0]  wstrb_unused  = wstrb;
    wire [7:0]  arlen_unused  = arlen;
    wire [2:0]  arsize_unused = arsize;
    wire [1:0]  arburst_unused = arburst;
    wire [7:0]  awlen_unused  = awlen;
    wire [2:0]  awsize_unused = awsize;
    wire [1:0]  awburst_unused = awburst;
    /* verilator lint_on UNUSED */

    reg [63:0] mtime;
    reg        aw_seen;
    reg        w_seen;
    reg [3:0]  awid_latched;

    wire ar_fire = arvalid && arready;
    wire r_fire  = rvalid && rready;
    wire aw_fire = awvalid && awready;
    wire w_fire  = wvalid && wready;
    wire b_fire  = bvalid && bready;

    wire hit_lo = (araddr == BASE_ADDR);
    wire hit_hi = (araddr == (BASE_ADDR + 32'h4));

    assign arready = !rvalid;
    assign awready = !bvalid && !aw_seen;
    assign wready  = !bvalid && !w_seen;

    // Read channel
    always @(posedge clk) begin
        if (rst) begin
            rvalid <= 1'b0;
            rdata  <= 32'b0;
            rresp  <= RESP_OK;
        end else begin
            if (r_fire) begin
                rvalid <= 1'b0;
            end
            if (ar_fire) begin
                rvalid <= 1'b1;
                if (hit_lo) begin
                    rdata <= mtime[31:0];
                    rresp <= RESP_OK;
                end else if (hit_hi) begin
                    rdata <= mtime[63:32];
                    rresp <= RESP_OK;
                end else begin
                    rdata <= 32'b0;
                    rresp <= RESP_SLVERR;
                end
            end
        end
    end

    // 忽略写
    always @(posedge clk) begin
        if (rst) begin
            bvalid <= 1'b0;
            bresp  <= RESP_OK;
            aw_seen <= 1'b0;
            w_seen  <= 1'b0;
            awid_latched <= 4'b0;
        end else begin
            if (b_fire) begin
                bvalid <= 1'b0;
            end
            if (aw_fire) begin
                aw_seen <= 1'b1;
                awid_latched <= awid;
            end
            if (w_fire && wlast) begin
                w_seen <= 1'b1;
            end
            if (!bvalid && ((aw_seen || aw_fire) && (w_seen || w_fire))) begin
                bvalid <= 1'b1;
                bresp  <= RESP_OK;
                aw_seen <= 1'b0;
                w_seen  <= 1'b0;
            end
        end
    end

    assign bid = awid_latched;

    // mtime counter
    always @(posedge clk) begin
        if (rst) begin
            mtime <= 64'b0;
        end else begin
            mtime <= mtime + 64'b1;
        end
    end

endmodule
