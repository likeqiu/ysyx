module ysyx_25040109_EXU (
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] imm,
    
    input reg_write_in,    
    output reg_write_en_out, 

    input [4:0] rd_addr,   
    input [4:0] rs1_addr, 
    input [31:0] pc,

    // 来自IDU的执行控制信号
    input [4:0] alu_op,
    input [1:0] alu_a_sel,
    input       alu_b_sel,
    input [1:0] result_sel,
    input       is_branch,
    input       is_jal,
    input       is_jalr,
    input [2:0] branch_op,
    input [1:0] csr_op,
    input       is_ecall,
    input       is_mret,

    input inst_invalid,  
    output [31:0] result,
    output [4:0] rd_addr_out,  
    output reg [31:0] next_pc,

    input [31:0] csr_rdata,
    input [31:0] mepc,
    input [31:0] mtvec,

    output reg csr_we_out,
    output reg [31:0] csr_wdata_out
);
   

    wire [31:0] alu_a, alu_b;
    reg [31:0] alu_out; 
    reg [63:0] mul_temp;

    // 控制编码需与IDU保持一致
    localparam [4:0] ALU_ADD  = 5'd0;
    localparam [4:0] ALU_SUB  = 5'd1;
    localparam [4:0] ALU_SLL  = 5'd2;
    localparam [4:0] ALU_SLT  = 5'd3;
    localparam [4:0] ALU_SLTU = 5'd4;
    localparam [4:0] ALU_XOR  = 5'd5;
    localparam [4:0] ALU_SRL  = 5'd6;
    localparam [4:0] ALU_SRA  = 5'd7;
    localparam [4:0] ALU_OR   = 5'd8;
    localparam [4:0] ALU_AND  = 5'd9;
    localparam [4:0] ALU_MUL  = 5'd10;
    localparam [4:0] ALU_MULH = 5'd11;
    localparam [4:0] ALU_DIV  = 5'd12;
    localparam [4:0] ALU_DIVU = 5'd13;
    localparam [4:0] ALU_REM  = 5'd14;
    localparam [4:0] ALU_REMU = 5'd15;

    localparam [1:0] ALU_A_RS1  = 2'b00;
    localparam [1:0] ALU_A_PC   = 2'b01;
    localparam [1:0] ALU_A_ZERO = 2'b10;

    localparam        ALU_B_RS2 = 1'b0;
    localparam        ALU_B_IMM = 1'b1;

    localparam [1:0] RES_ALU = 2'b00;
    localparam [1:0] RES_CSR = 2'b01;
    localparam [1:0] RES_PC4 = 2'b10;

    localparam [1:0] CSR_OP_NONE  = 2'b00;
    localparam [1:0] CSR_OP_CSRRW = 2'b01;
    localparam [1:0] CSR_OP_CSRRS = 2'b10;

    // 操作数选择
    assign alu_a = (alu_a_sel == ALU_A_PC)   ? pc :
                   (alu_a_sel == ALU_A_ZERO) ? 32'b0 :
                   (alu_a_sel == ALU_A_RS1)  ? rs1_data :
                   rs1_data;
    assign alu_b = (alu_b_sel == ALU_B_RS2) ? rs2_data :
                   (alu_b_sel == ALU_B_IMM) ? imm :
                   imm;

    wire [4:0] shift_amount = alu_b[4:0];

    always @(*) begin
        mul_temp = 64'b0;
        if(inst_invalid)begin
            alu_out = 32'b0;
        end else begin
        case (alu_op)
            ALU_ADD:  alu_out = alu_a + alu_b;
            ALU_SUB:  alu_out = alu_a - alu_b;
            ALU_SLL:  alu_out = alu_a << shift_amount;
            ALU_SLT:  alu_out = ($signed(alu_a) < $signed(alu_b)) ? 32'h1 : 32'h0;
            ALU_SLTU: alu_out = (alu_a < alu_b) ? 32'h1 : 32'h0;
            ALU_XOR:  alu_out = alu_a ^ alu_b;
            ALU_SRL:  alu_out = alu_a >> shift_amount;
            ALU_SRA:  alu_out = $signed(alu_a) >>> shift_amount;
            ALU_OR:   alu_out = alu_a | alu_b;
            ALU_AND:  alu_out = alu_a & alu_b;
            ALU_MUL: begin
                mul_temp = $signed(alu_a) * $signed(alu_b);
                alu_out = mul_temp[31:0];
            end
            ALU_MULH: begin
                mul_temp = $signed(alu_a) * $signed(alu_b);
                alu_out = mul_temp[63:32];
            end
            ALU_DIV: begin
                if (alu_b == 32'h0)
                    alu_out = 32'hFFFFFFFF;
                else if (alu_a == 32'h80000000 && alu_b == 32'hFFFFFFFF)
                    alu_out = 32'h80000000;
                else
                    alu_out = $signed(alu_a) / $signed(alu_b);
            end
            ALU_DIVU: begin
                if (alu_b == 32'h0)
                    alu_out = 32'hFFFFFFFF;
                else
                    alu_out = alu_a / alu_b;
            end
            ALU_REM: begin
                if (alu_b == 32'h0)
                    alu_out = alu_a;
                else if (alu_a == 32'h80000000 && alu_b == 32'hFFFFFFFF)
                    alu_out = 32'h0;
                else
                    alu_out = $signed(alu_a) % $signed(alu_b);
            end
            ALU_REMU: begin
                if (alu_b == 32'h0)
                    alu_out = alu_a;
                else
                    alu_out = alu_a % alu_b;
            end
            default: alu_out = 32'b0;
        endcase
        end
    end



    always @(*) begin
        csr_we_out = 1'b0;
        csr_wdata_out = 32'h0;

        if (!inst_invalid) begin
            case (csr_op)
                CSR_OP_CSRRW: begin
                    csr_we_out = 1'b1;
                    csr_wdata_out = rs1_data;
                end
                CSR_OP_CSRRS: begin
                    csr_we_out = (rs1_addr != 5'b0);
                    csr_wdata_out = csr_rdata | rs1_data;
                end
                CSR_OP_NONE: begin
                    csr_we_out = 1'b0;
                    csr_wdata_out = 32'h0;
                end
                default: begin
                    csr_we_out = 1'b0;
                    csr_wdata_out = 32'h0;
                end
            endcase
        end
    end


    wire [31:0] pc_plus4       = pc + 32'd4;
    wire [31:0] jal_target     = pc + imm;
    wire [31:0] jalr_target    = alu_out & 32'hFFFFFFFE; // 低位清零
    wire [31:0] branch_target  = pc + imm;

    // 写回结
    assign result = (result_sel == RES_CSR) ? csr_rdata :
                    (result_sel == RES_PC4) ? pc_plus4 :
                    (result_sel == RES_ALU) ? alu_out :
                    alu_out;

    wire branch_taken = is_branch && (
        (branch_op == 3'b000 && rs1_data == rs2_data) ||                     // BEQ
        (branch_op == 3'b001 && rs1_data != rs2_data) ||                     // BNE
        (branch_op == 3'b100 && $signed(rs1_data) < $signed(rs2_data)) ||    // BLT
        (branch_op == 3'b101 && $signed(rs1_data) >= $signed(rs2_data)) ||   // BGE
        (branch_op == 3'b110 && rs1_data < rs2_data) ||                      // BLTU
        (branch_op == 3'b111 && rs1_data >= rs2_data)                        // BGEU
    );

     always @(*) begin
        if (!inst_invalid) begin
            if (is_ecall) begin
                next_pc = mtvec; // ecall: 跳转到异常入口
            end else if (is_mret) begin
                next_pc = mepc;  // mret: 从异常返回
            end else if (is_jal) begin
                next_pc = jal_target;
            end else if (is_jalr) begin
                next_pc = jalr_target;
            end else if (branch_taken) begin
                next_pc = branch_target;
            end else begin
                next_pc = pc_plus4; 
            end
        end else begin
            next_pc = pc_plus4;
           $finish;
          $display(" hit bad trap :0x%08x:",pc);

        end
    end


    assign rd_addr_out = rd_addr;
    assign reg_write_en_out = reg_write_in && !inst_invalid;


endmodule
