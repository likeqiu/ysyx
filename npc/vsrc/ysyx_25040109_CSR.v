module ysyx_25040109_CSR (
    input clk,
    input rst,
    input csr_we,
    input [11:0] csr_addr,
    input [31:0] csr_wdata,
    output reg [31:0] csr_rdata,
    output reg [31:0] mstatus,
    output reg [31:0] mepc,
    output reg [31:0] mcause,
    output reg [31:0] mtvec
);

    localparam CSR_MSTATUS = 12'h300;
    localparam CSR_MTVEC   = 12'h305;
    localparam CSR_MEPC    = 12'h341;
    localparam CSR_MCAUSE  = 12'h342;

    always @(*) begin
        case (csr_addr)
            CSR_MSTATUS: csr_rdata = mstatus;
            CSR_MTVEC:   csr_rdata = mtvec;
            CSR_MEPC:    csr_rdata = mepc;
            CSR_MCAUSE:  csr_rdata = mcause;
            default:     csr_rdata = 32'h0;
        endcase
    end

    always @(posedge clk) begin
        if (rst) begin
            mstatus <= 32'h1800;
            mtvec   <= 32'h0;
            mepc    <= 32'h0;
            mcause  <= 32'h0;
        end else if (csr_we) begin
            case (csr_addr)
                CSR_MSTATUS: mstatus <= csr_wdata;
                CSR_MTVEC:   mtvec   <= csr_wdata;
                CSR_MEPC:    mepc    <= csr_wdata;
                CSR_MCAUSE:  mcause  <= csr_wdata;
                default: begin
                end
            endcase
        end
    end

endmodule
