/* verilator lint_off UNUSEDSIGNAL */
module ysyx_25040109_IFU (
    input           clk,
    input [31:0]    next_pc,
    input           rst,
    
    output [31:0]   pc,
    output reg [31:0] inst_ifu,
    output          inst_valid
);

    reg [31:0] pc_reg;
    reg        inst_valid_reg;

    assign pc = pc_reg;
    assign inst_valid = inst_valid_reg;

    // PC register updates on the clock edge
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            pc_reg <= 32'h80000000;
        end else begin
            pc_reg <= next_pc;
        end
    end

    // Import the DPI-C function
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);

    // This wire will hold the data read from memory combinationally
    wire [31:0] pmem_data;
    wire        pc_is_valid;

    // Determine if the current PC is valid for a fetch
    assign pc_is_valid = (pc_reg >= 32'h80000000) && (pc_reg <= 32'h87FFFFFF) && (pc_reg[1:0] == 2'b00);

    // Use a combinational block to read from memory
    // This logic is active whenever pc_reg, rst, or pc_is_valid changes
    always_comb begin
        if (!rst && pc_is_valid) begin
            // Call the DPI-C task. It makes a blocking assignment to pmem_data.
            verilog_pmem_read(pc_reg, pmem_data);
        end else begin
            pmem_data = 32'b0; // Default value if not reading
        end
    end

    // Latch the instruction and its validity on the clock edge
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            inst_ifu <= 32'b0;
            inst_valid_reg <= 1'b0;
        end else begin
            // Latch the data that was read combinationally in the previous cycle
            inst_ifu <= pmem_data; 
            // The instruction being output is valid if the PC that fetched it was valid
            inst_valid_reg <= pc_is_valid;
        end
    end

endmodule
/* verilator lint_on UNUSEDSIGNAL */

