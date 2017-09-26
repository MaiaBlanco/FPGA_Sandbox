// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

module matrix_mult_mul_8bkb_Mul5S_0(clk, ce, a, b, p);
input clk;
input ce;
input[8 - 1 : 0] a; // synthesis attribute keep a "true"
input[8 - 1 : 0] b; // synthesis attribute keep b "true"
output[16 - 1 : 0] p;

reg signed [8 - 1 : 0] a_reg0;
reg signed [8 - 1 : 0] b_reg0;
wire signed [16 - 1 : 0] tmp_product;
reg signed [16 - 1 : 0] buff0;
reg signed [16 - 1 : 0] buff1;
reg signed [16 - 1 : 0] buff2;

assign p = buff2;
assign tmp_product = a_reg0 * b_reg0;
always @ (posedge clk) begin
    if (ce) begin
        a_reg0 <= a;
        b_reg0 <= b;
        buff0 <= tmp_product;
        buff1 <= buff0;
        buff2 <= buff1;
    end
end
endmodule

`timescale 1 ns / 1 ps
module matrix_mult_mul_8bkb(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



matrix_mult_mul_8bkb_Mul5S_0 matrix_mult_mul_8bkb_Mul5S_0_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

