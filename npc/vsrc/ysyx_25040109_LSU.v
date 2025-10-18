module ysyx_25040109_LSU (
    input clk,
    input rst,
    input [31:0] addr,
    input [31:0] store_data,
    input [2:0] funct3,
    input is_load,
    input is_store,
    input inst_invalid,
    input stall,
    
    // dmem接口（连接到MEM模块）
    output dmem_ren,
    output [31:0] dmem_raddr,
    input [31:0] dmem_rdata,      // 从MEM读取的数据
    
    output dmem_wen,
    output [31:0] dmem_waddr,
    output [31:0] dmem_wdata,
    output [2:0] dmem_wlen,
    
    output reg [31:0] load_data,
    output store_enable
);

    wire store_valid = is_store && !inst_invalid && !stall;
    
    // dmem读接口
    assign dmem_ren = is_load;
    assign dmem_raddr = addr;
    
    // dmem写接口
    assign dmem_wen = store_valid;
    assign dmem_waddr = addr;
    assign dmem_wdata = store_data;
    assign dmem_wlen = (funct3 == 3'b000) ? 3'b001 :  // SB
                       (funct3 == 3'b001) ? 3'b010 :  // SH
                       (funct3 == 3'b010) ? 3'b100 :  // SW
                       3'b000;
    
    // load数据扩展（指令语义处理）
    always @(*) begin
        if (is_load) begin
            case (funct3)
                3'b000: load_data = {{24{dmem_rdata[7]}}, dmem_rdata[7:0]};   // LB
                3'b001: load_data = {{16{dmem_rdata[15]}}, dmem_rdata[15:0]}; // LH
                3'b010: load_data = dmem_rdata;                                // LW
                3'b100: load_data = {24'b0, dmem_rdata[7:0]};                 // LBU
                3'b101: load_data = {16'b0, dmem_rdata[15:0]};                // LHU
                default: load_data = 32'b0;
            endcase
        end else begin
            load_data = 32'b0;
        end
    end
    
    assign store_enable = store_valid;

endmodule
