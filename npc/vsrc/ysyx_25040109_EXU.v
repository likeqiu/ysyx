module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    input reg_write_en,    
    input [4:0] rd_addr,   
    input [31:0] pc,
    input [6:0] opcode,
    input [2:0] funct3,
    input [6:0] funct7,    
    input [31:0] mem_data,
    input inst_invalid,  
    output [31:0] result,
    output [4:0] rd_addr_out, 
    output reg_write_en_out,  
    output [31:0] next_pc
);
   

    wire [31:0] alu_a, alu_b;
    reg [31:0] alu_out; 
    reg [63:0] mul_temp;

    
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) alu_a_select( 
        .out(alu_a),
        .key(opcode),
        .default_out(rs1_data), 
        .lut({
            7'b0010111, pc,    //AUIPC     
            7'b0110111, 32'b0, //LUI     
            7'b1101111, pc     //JAL     
        })
    );

    
    ysyx_25040109_MuxKeyWithDefault #(3,7,32) alu_b_select(
        .out(alu_b),
        .key(opcode),
        .default_out(imm),
        .lut({
            7'b0110011,rs2_data, // R型指令
            7'b1100011,rs2_data, //B型指令
            7'b0000011,imm
        })
    );
   
        wire [4:0] shift_amount = (opcode == 7'b0010011 && (funct3 == 3'b001 || funct3 == 3'b101)) ?   imm[4:0] : rs2_data[4:0];

    always @(*) begin
        if(inst_invalid)begin
            alu_out = 32'b0;
        end else begin
        casez({opcode,funct3,funct7})
                {7'b0010011, 3'b000, 7'b???????}: alu_out = alu_a + alu_b; // ADDI
                {7'b0010011, 3'b010, 7'b???????}: alu_out = ($signed(alu_a) < $signed(alu_b)) ? 1 : 0; // SLTI
                {7'b0010011, 3'b011, 7'b???????}: alu_out = (alu_a < alu_b) ? 1 : 0; // SLTIU
                {7'b0010011, 3'b100, 7'b???????}: alu_out = alu_a ^ alu_b; // XORI
                {7'b0010011, 3'b110, 7'b???????}: alu_out = alu_a | alu_b; // ORI
                {7'b0010011, 3'b111, 7'b???????}: alu_out = alu_a & alu_b; // ANDI
                {7'b0010011, 3'b001, 7'b0000000}: alu_out = alu_a <<shift_amount; // SLLI
                {7'b0010011, 3'b101, 7'b0000000}: alu_out = alu_a >> shift_amount; // SRLI
                {7'b0010011, 3'b101, 7'b0100000}: alu_out = $signed(alu_a) >>> shift_amount; // SRAI
                // R 型指令
                {7'b0110011, 3'b000, 7'b0000000}: alu_out = alu_a + alu_b; // ADD
                {7'b0110011, 3'b000, 7'b0100000}: alu_out = alu_a - alu_b; // SUB
                {7'b0110011, 3'b001, 7'b0000000}: alu_out = alu_a << shift_amount; // SLL
                {7'b0110011, 3'b010, 7'b0000000}: alu_out = ($signed(alu_a) < $signed(alu_b)) ? 1 : 0; // SLT
                {7'b0110011, 3'b011, 7'b0000000}: alu_out = (alu_a < alu_b) ? 1 : 0; // SLTU
                {7'b0110011, 3'b100, 7'b0000000}: alu_out = alu_a ^ alu_b; // XOR
                {7'b0110011, 3'b101, 7'b0000000}: alu_out = alu_a >> shift_amount; // SRL
                {7'b0110011, 3'b101, 7'b0100000}: alu_out = $signed(alu_a) >>> shift_amount; // SRA
                {7'b0110011, 3'b110, 7'b0000000}: alu_out = alu_a | alu_b; // OR
                {7'b0110011, 3'b111, 7'b0000000}: alu_out = alu_a & alu_b; // AND
                {7'b0110011, 3'b000, 7'b0000001}: begin
                    mul_temp = $signed(alu_a) * $signed(alu_b);
                    alu_out = mul_temp[31:0]; // MUL
                end
                {7'b0110011, 3'b001, 7'b0000001}: begin
                    mul_temp = $signed(alu_a) * $signed(alu_b);
                    alu_out = mul_temp[63:32]; // MULH
                end
                {7'b0110011, 3'b100, 7'b0000001}: alu_out = (alu_b == 0) ? -1 : 
                    ((alu_a == 32'h80000000 && alu_b == -1) ? 32'h80000000 : $signed(alu_a) / $signed(alu_b)); // DIV
                {7'b0110011, 3'b101, 7'b0000001}: alu_out = (alu_b == 0) ? 32'hFFFFFFFF : alu_a / alu_b; // DIVU
                {7'b0110011, 3'b110, 7'b0000001}: alu_out = (alu_b == 0) ? alu_a : 
                    ((alu_a == 32'h80000000 && alu_b == -1) ? 0 : $signed(alu_a) % $signed(alu_b)); // REM
                {7'b0110011, 3'b111, 7'b0000001}: alu_out = (alu_b == 0) ? alu_a : alu_a % alu_b; // REMU
                // 加载指令
                {7'b0000011, 3'b000, 7'b???????}: alu_out = {{24{mem_data[7]}}, mem_data[7:0]}; // LB
                {7'b0000011, 3'b001, 7'b???????}: alu_out = {{16{mem_data[15]}}, mem_data[15:0]}; // LH
                {7'b0000011, 3'b010, 7'b???????}: alu_out = mem_data; // LW
                {7'b0000011, 3'b100, 7'b???????}: alu_out = {24'b0, mem_data[7:0]}; // LBU
                {7'b0000011, 3'b101, 7'b???????}: alu_out = {16'b0, mem_data[15:0]}; // LHU
                default: alu_out = 32'b0; // 默认值，非法指令
            endcase
    end
end


    // 分支/跳转目标计算
    wire [31:0] jal_result      = pc + 4;
    wire [31:0] jal_target      = pc + imm;
    wire [31:0] jalr_target     = (rs1_data + imm) & ~32'h1; //低位清零
    wire [31:0] branch_target   = pc + imm;
        
    wire signed [31:0] rs1_signed = rs1_data; // 显式声明有符号
    wire signed [31:0] rs2_signed = rs2_data; // 显式声明有符号
    wire [31:0] rs1_unsigned = rs1_data;     // 显式声明无符号
    wire [31:0] rs2_unsigned = rs2_data;     // 显式声明无符号
  
    wire branch_taken = (opcode == 7'b1100011) && (
        (funct3 == 3'b000 && rs1_data == rs2_data) || // BEQ
        (funct3 == 3'b001 && rs1_data != rs2_data && rs2_data != 0) || // BNE
        (funct3 == 3'b100 && rs1_signed < rs2_signed) || // BLT
        (funct3 == 3'b101 && rs1_signed >= rs2_signed) || // BGE
        (funct3 == 3'b110 && rs1_unsigned < rs2_unsigned) || // BLTU
        (funct3 == 3'b111 && rs1_unsigned >= rs2_unsigned) || // BGEU
        (funct3 == 3'b001 && rs1_data != 0 && rs2_data == 0) // BNEZ
    );


    // 结果选择器
    ysyx_25040109_MuxKeyWithDefault #(3, 7, 32) result_select( 
        .out(result),
        .key(opcode),
        .default_out(alu_out),
        .lut({
            7'b1101111, jal_result, // JAL
            7'b1100111, jal_result, // JALR
            7'b0000011, alu_out     // LB, LH, LW, LBU, LHU
        })
    );

    // 下一 PC 的选择器
    ysyx_25040109_MuxKeyWithDefault #(4, 7, 32) next_pc_select(
        .out(next_pc),
        .key(opcode),
        .default_out(pc + 4),     
        .lut({
            7'b1101111, jal_target,    
            7'b1100111, jalr_target,   
            7'b1100011, branch_taken ? branch_target : (pc + 4),
             7'b1110011, inst_invalid ? pc : (pc + 4)
        })
    );

    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_en && !inst_invalid;

endmodule

