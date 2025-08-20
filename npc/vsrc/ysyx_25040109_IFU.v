module ysyx_25040109_IFU (
    input [31:0] pc,          
    `ifdef SYNTHESIS
    input [31:0] yosys_inst_from_mem,        

    `endif 
    output [31:0] inst_ifu   // 当前PC对应的指令
);
    wire is_pc_valid = (pc >= 32'h80000000) && (pc <= 32'h87FFFFFF) ;
    
    
    
    reg [31:0] inst_from_mem;
    

`ifndef SYNTHESIS
    import "DPI-C" function void verilog_pmem_read(input int addr, output int data);
`endif 



    // 组合逻辑直接读取当前PC的指令
    always @(*) begin
        if (is_pc_valid) begin
            `ifndef SYNTHESIS
            verilog_pmem_read(pc, inst_from_mem);
            `else
            inst_from_mem = yosys_inst_from_mem;
            `endif 
        end else begin
            inst_from_mem = 32'h00000013; // NOP
        end
    end
    
 
    assign inst_ifu = inst_from_mem;

endmodule


