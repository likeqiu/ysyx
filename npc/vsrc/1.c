module timer(

    input clk,
    input rst,

    input            arvalid,
    output           arready,
    input  [31:0]    araddr,
    output reg       rvalid,
    input            rready,
    output reg [31:0] rdata,
    output reg [1:0] rresp,

    input            awvalid,
    output           awready,
    input [31:0]     awaddr,

    input            wvalid,
    output           wready,
    input [31:0]     wdata,
    input [3:0]      wstrb,
 
    output reg       bvalid,
    input            bready,
    output reg [1:0] bresp
);

    localparam [1:0] RESP_OK = 2'b00;
localparam  [1:0] RESP_SLVERR = 2'b10;
    reg [63:0] clock;
    reg [63:0] clock_latched;
    reg [31:0] araddr_latched;
    reg aw_seen;
    reg w_seen;


    wire r_fire  = rvalid && rready;
    wire ar_fire = arvalid && arready;
    wire w_fire  = wvalid && wready;
    wire aw_fire = awvalid && awready;
    wire b_fire  = bvalid  && bready;


    assign arready = !rvalid;
    assign awready = !bvalid && !aw_seen;
    assign wready = !bvalid && !w_seen;

        
    import "DPI-C" function int pmem_read_ok(input int addr);
    
    wire dmem_raddr_ok = (pmem_read_ok(araddr) != 0); 


    always @(posedge clk) begin
        if(rst)begin
            rvalid <= 1'b0;
            rdata <= 32'b0;
            rresp <= RESP_OK;
            bvalid <= 1'b0;
            bresp  <= RESP_OK;
            aw_seen <= 1'b0;
            w_seen <= 1'b0;
            clock_latched <= 64'b0;
            araddr_latched<= 32'b0;
        end else begin
            if(r_fire) rvalid <= 1'b0;
            if(ar_fire) begin
                rvalid <=1'b1;
                if(araddr == 32'h10010000)begin
                    rdata <= clock[31:0];
                    clock_latched <= clock;

                end else if(araddr == 32'h10010004)begin
                    rdata <= clock[63:32];
                end
            end
            if(b_fire) bvalid <= 1'b0;
            if(aw_fire) begin
                aw_seen <= 1'b1;
            end
            if(w_fire)begin
                w_seen <= 1'b1;
            end
        end


        if(!bvalid && ((aw_seen || aw_fire) && (w_seen || w_fire)))begin
            bvalid <= 1'b1;
            bresp <= RESP_OK;
            aw_seen <= 1'b0;
            w_seen <= 1'b0;
        end

    end






    always @(posedge clk) begin
        if(rst) rresp <= RESP_OK;
        else if(ar_fire) rresp <= dmem_raddr_ok ? RESP_OK :  RESP_SLVERR;
    end



    always @(posedge clk) begin
        if(rst)begin
            clock <= 64'b0;
        end else begin
            clock <= clock + 64'b1;
        end
    end

    













endmodule