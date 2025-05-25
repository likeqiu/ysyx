module ysyx_25040109_top (
    input clk,
    input rst,
    input [3:0]  debug_cmd,
    input [31:0] debug_addr,
    output reg [31:0]  inst,
    output [31:0] pc,
    output [31:0] a0_out
);
    wire [31:0] next_pc, inst_ifu, rs1_data, rs2_data, imm, result, rs1_data_out, mem_data;
    wire [4:0] rd_addr_idu, rd_addr_exu;
    wire reg_write_en_idu, reg_write_en_exu;
    wire step_en = (debug_cmd == 4'd1);
    wire [6:0] opcode = inst_ifu[6:0];
    wire [2:0] funct3 = inst_ifu[14:12];

    ysyx_25040109_Reg #(32, 32'h80000000) pc_reg (
        .clk(clk),
        .rst(rst),
        .din(next_pc),
        .dout(pc),
        .wen(step_en)
    );

    ysyx_25040109_IFU ifu (
        .clk(clk),
        .pc(pc),
        .inst_ifu(inst_ifu)
    );



    ysyx_25040109_IDU idu (
        .inst(inst_ifu),
        .rd_addr(rd_addr_idu),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .rs1_data(rs1_data),
        .rs2_data(rs2_data),
        .rs1_data_out(rs1_data_out)
    );

    ysyx_25040109_EXU exu (
        .rs1_data(rs1_data_out),
        .rs2_data(rs2_data),
        .imm(imm),
        .reg_write_en(reg_write_en_idu),
        .rd_addr(rd_addr_idu),
        .pc(pc), 
        .opcode(opcode),
        .funct3(funct3),
        .mem_data(mem_data),
        .result(result),
        .rd_addr_out(rd_addr_exu),
        .reg_write_en_out(reg_write_en_exu),
        .next_pc(next_pc)
        

    );

        ysyx_25040109_RegisterFile #(5, 32) regfile (
        .clk(clk),
        .wdata(result),
        .waddr(rd_addr_exu),
        .wen(reg_write_en_exu && step_en),
        .raddr1(inst_ifu[19:15]),
        .raddr2(inst_ifu[24:20]),
        .rdata1(rs1_data),
        .rdata2(rs2_data),
        .a0_out(a0_out)

    );




    import "DPI-C" function void pmem_read(input int addr, output int data);
    import "DPI-C" function void pmem_write(input int addr, input int data, input int len);
    import "DPI-C" function int printf_finish(input int inst);
    import "DPI-C" function int monitor_pc(input int pc);
    import "DPI-C" function void sdb_read_reg(input int index, output int value);
    import "DPI-C" function void sdb_scan_mem(input int addr, output int value);
    import "DPI-C" function void step_complete();



    wire [3:0] debug_action;
    ysyx_25040109_MuxKeyWithDefault #(3, 4, 4) debug_mux (
        .out(debug_action),
        .key(debug_cmd),
        .default_out(4'd0),
        .lut({
            4'd1, 4'd1, // si
            4'd2, 4'd2, // info
            4'd3, 4'd3  // x
        })
    );


    wire is_sw =(opcode == 7'b0100011 && funct3==3'b010);
    wire is_lw =(opcode == 7'b0000011 && funct3==3'b010);
    wire [31:0] mem_addr = rs1_data_out+imm;
     wire addr_valid = (mem_addr >= 32'h80000000) && (mem_addr <= 32'h87FFFFFF);
    wire debug_addr_valid = (debug_addr >= 32'h80000000) && (debug_addr <= 32'h87FFFFFF);

    always @(posedge clk) begin
        if (step_en) begin
            inst <= inst_ifu;
        end
    end

    always @(posedge clk) begin
        if(step_en && is_sw)begin
            pmem_write(mem_addr,rs2_data,4);
            sdb_scan_mem(mem_addr,rs2_data);
        end

        if(step_en && is_lw)begin
            pmem_read(mem_addr,mem_data);
            sdb_scan_mem(mem_addr,mem_data);
        end

        if(debug_cmd==4'd3 )begin
            pmem_read(debug_addr,mem_data);
        end

        if(step_en)
        step_complete();
    end


    always @(posedge clk) begin
        if (!rst && debug_action==4'd1) begin
            $display("PC=0x%h, inst=0x%h,",pc, inst_ifu);
            
              if(printf_finish(inst) == 0 )
            $finish;

           // monitor_pc(pc);
        
        end

      

   if (!rst && debug_action == 4'd2) begin
            for (integer i = 0; i < 32; i = i + 1) begin
                sdb_read_reg(i, regfile.rf[i]);
            end
        end
    end

      
endmodule

