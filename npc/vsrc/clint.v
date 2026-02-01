
module clint #(
    parameter BASE_ADDR = 32'h1001_0000
) (
    input             clk,
    input             rst,

    // read 
    input             arvalid,
    output            arready,
    input      [31:0] araddr,
    output reg        rvalid,
    input             rready,
    output reg [31:0] rdata,
    output reg [1:0]  rresp,

    //  write  (ignored)
    input             awvalid,
    output            awready,
    input      [31:0] awaddr,
    input             wvalid,
    output            wready,
    input      [31:0] wdata,
    input      [3:0]  wstrb,
    output reg        bvalid,
    input             bready,
    output reg [1:0]  bresp
);

    localparam [1:0] RESP_OK    = 2'b00;
    localparam [1:0] RESP_SLVERR = 2'b10;

    /* verilator lint_off UNUSED */
    wire [31:0] awaddr_unused = awaddr;
    wire [31:0] wdata_unused  = wdata;
    wire [3:0]  wstrb_unused  = wstrb;
    /* verilator lint_on UNUSED */

    reg [63:0] mtime;
    reg        aw_seen;
    reg        w_seen;

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
        end else begin
            if (b_fire) begin
                bvalid <= 1'b0;
            end
            if (aw_fire) begin
                aw_seen <= 1'b1;
            end
            if (w_fire) begin
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

    // mtime counter
    always @(posedge clk) begin
        if (rst) begin
            mtime <= 64'b0;
        end else begin
            mtime <= mtime + 64'b1;
        end
    end

endmodule
