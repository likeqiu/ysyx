// LSU (Load/Store Unit) 模块
// 负责所有的访存操作：Load/Store

module ysyx_25040109_LSU (
    // 来自EXU的信号
    input [31:0] alu_result,      // 地址
    input [31:0] rs2_data,        // 要写入的数据
    input [6:0] opcode,           // 操作码
    input [2:0] funct3,           // funct3字段
    input inst_invalid,           // 指令是否无效
    
    // 访存使能信号
    output reg is_load,           // 是否是Load指令
    output reg is_store,          // 是否是Store指令
    
    // 内存接口
    output reg [31:0] mem_addr,   // 内存地址
    output reg [31:0] mem_wdata,  // 写数据
    output reg [1:0] mem_wstrb,   // 写使能（字节掩码）
    input [31:0] mem_rdata,       // 读数据
    
    // Load结果
    output reg [31:0] load_result // 经过符号扩展的Load结果
);

    // 识别Load指令
    wire is_load_op = (opcode == 7'b0000011) && 
                      (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010 || 
                       funct3 == 3'b100 || funct3 == 3'b101);

    // 识别Store指令
    wire is_store_op = (opcode == 7'b0100011) &&
                       (funct3 == 3'b000 || funct3 == 3'b001 || funct3 == 3'b010);

    // 更新访存使能标志
    always @(*) begin
        is_load = is_load_op && !inst_invalid;
        is_store = is_store_op && !inst_invalid;
    end

    // 计算内存地址和控制信号
    always @(*) begin
        mem_addr = alu_result;      // EXU已计算好地址
        mem_wdata = rs2_data;       // Store数据
        mem_wstrb = 2'b00;          // 默认不写入
        
        if (is_store_op && !inst_invalid) begin
            // Store指令：设置写使能
            case (funct3)
                3'b000: mem_wstrb = 2'b01;  // SB - 写1字节
                3'b001: mem_wstrb = 2'b11;  // SH - 写2字节
                3'b010: mem_wstrb = 2'b11;  // SW - 写4字节（两个16位）
                default: mem_wstrb = 2'b00;
            endcase
        end
    end

    // Load结果处理：符号扩展
    always @(*) begin
        if (is_load_op && !inst_invalid) begin
            case (funct3)
                3'b000: load_result = {{24{mem_rdata[7]}}, mem_rdata[7:0]};    // LB
                3'b001: load_result = {{16{mem_rdata[15]}}, mem_rdata[15:0]};  // LH
                3'b010: load_result = mem_rdata;                               // LW
                3'b100: load_result = {24'b0, mem_rdata[7:0]};                // LBU
                3'b101: load_result = {16'b0, mem_rdata[15:0]};               // LHU
                default: load_result = 32'b0;
            endcase
        end else begin
            load_result = 32'b0;
        end
    end

endmodule
