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
    
    // dmem接口（连接到MEM模块）- 握手协议
    // Load请求通道
    output dmem_rvalid,
    input dmem_rready,
    output [31:0] dmem_raddr,
    // Load响应通道
    input [31:0] dmem_rdata,
    input dmem_rdata_valid,
    output dmem_rdata_ready,
    
    // Store请求通道
    output dmem_wvalid,
    input dmem_wready,
    output [31:0] dmem_waddr,
    output [31:0] dmem_wdata,
    output [2:0] dmem_wlen,
    
    output reg [31:0] load_data,
    output reg load_data_valid,   // Load数据有效标志
    output store_enable
);

    wire store_valid = is_store && !inst_invalid && !stall;
    wire load_valid = is_load && !inst_invalid && !stall;
    
    // Load请求通道（组合逻辑）
    assign dmem_rvalid = load_valid;
    assign dmem_raddr = addr;
    assign dmem_rdata_ready = 1'b1;  // 总是准备好接收Load数据
    
    // Store请求通道（组合逻辑）
    assign dmem_wvalid = store_valid;
    assign dmem_waddr = addr;
    assign dmem_wdata = store_data;
    assign dmem_wlen = (funct3 == 3'b000) ? 3'b001 :  // SB
                       (funct3 == 3'b001) ? 3'b010 :  // SH
                       (funct3 == 3'b010) ? 3'b100 :  // SW
                       3'b000;
    
    // Load数据处理（时序逻辑）
    reg [2:0] load_funct3;  // 保存Load类型
    
    always @(posedge clk) begin
        if (rst) begin
            load_data <= 32'b0;
            load_data_valid <= 1'b0;
            load_funct3 <= 3'b0;
        end else begin
            // 锁存Load类型（在发出请求时）
            if (dmem_rvalid && dmem_rready) begin
                load_funct3 <= funct3;
            end
            
            // 接收Load数据（在数据到达时）
            if (dmem_rdata_valid && dmem_rdata_ready) begin
                case (load_funct3)
                    3'b000: load_data <= {{24{dmem_rdata[7]}}, dmem_rdata[7:0]};   // LB
                    3'b001: load_data <= {{16{dmem_rdata[15]}}, dmem_rdata[15:0]}; // LH
                    3'b010: load_data <= dmem_rdata;                                // LW
                    3'b100: load_data <= {24'b0, dmem_rdata[7:0]};                 // LBU
                    3'b101: load_data <= {16'b0, dmem_rdata[15:0]};                // LHU
                    default: load_data <= 32'b0;
                endcase
                load_data_valid <= 1'b1;
            end else begin
                load_data_valid <= 1'b0;
            end
        end
    end
    
    assign store_enable = store_valid;

endmodule
