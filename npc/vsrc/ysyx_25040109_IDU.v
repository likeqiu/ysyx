module ysyx_25040109_IDU (
    input [31:0] inst,
    output [4:0] rd_addr,
    output [31:0] imm,
    output reg_write_en
);
    wire [6:0] opcode = inst[6:0];
  //  wire [2:0] funct3 = inst[14:12];
    wire [11:0] imm_i = inst[31:20];
    wire [19:0] imm_u = inst[31:12];
    wire [20:1] imm_j = {inst[31], inst[19:12], inst[20], inst[30:21]};
    wire [11:0] imm_s = {inst[31:25], inst[11:7]};
    wire [12:1] imm_b = {inst[31], inst[7], inst[30:25], inst[11:8]};

    wire [31:0] imm_i_ext = {{20{imm_i[11]}}, imm_i};
    wire [31:0] imm_u_ext = {imm_u, 12'b0};
    wire [31:0] imm_j_ext = {{11{imm_j[20]}}, imm_j, 1'b0};
    wire [31:0] imm_s_ext = {{20{imm_s[11]}}, imm_s};
    wire [31:0] imm_b_ext = {{19{imm_b[12]}}, imm_b, 1'b0};

    ysyx_25040109_MuxKeyWithDefault #(7, 7, 32) imm_select
    (
        .out(imm),
        .key(opcode),
        .default_out(32'b0), 
        .lut({
            7'b0010111, imm_u_ext, 
            7'b0110111, imm_u_ext, 
            7'b0010011, imm_i_ext, 
            7'b0000011, imm_i_ext, 
            7'b0100011, imm_s_ext, 
            7'b1101111, imm_j_ext, 
            7'b1100011, imm_b_ext  
        })
    );

    assign rd_addr = inst[11:7];

    assign reg_write_en = (opcode == 7'b0110111) || 
                          (opcode == 7'b0010111) || 
                          (opcode == 7'b1101111) || 
                          (opcode == 7'b1100111) || 
                          (opcode == 7'b0000011) || 
                          (opcode == 7'b0010011) || 
                          (opcode == 7'b0110011);  

 

    

endmodule


