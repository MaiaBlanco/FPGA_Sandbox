// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module aesl_mux_load_7_3_x_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        empty_2_Addr_A,
        empty_2_EN_A,
        empty_2_WEN_A,
        empty_2_Din_A,
        empty_2_Dout_A,
        empty_3_Addr_A,
        empty_3_EN_A,
        empty_3_WEN_A,
        empty_3_Din_A,
        empty_3_Dout_A,
        empty_4_Addr_A,
        empty_4_EN_A,
        empty_4_WEN_A,
        empty_4_Din_A,
        empty_4_Dout_A,
        empty_5_Addr_A,
        empty_5_EN_A,
        empty_5_WEN_A,
        empty_5_Din_A,
        empty_5_Dout_A,
        empty_6_Addr_A,
        empty_6_EN_A,
        empty_6_WEN_A,
        empty_6_Din_A,
        empty_6_Dout_A,
        empty_7_Addr_A,
        empty_7_EN_A,
        empty_7_WEN_A,
        empty_7_Din_A,
        empty_7_Dout_A,
        empty_8_Addr_A,
        empty_8_EN_A,
        empty_8_WEN_A,
        empty_8_Din_A,
        empty_8_Dout_A,
        empty_9,
        empty_10,
        empty,
        ap_return
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] empty_2_Addr_A;
output   empty_2_EN_A;
output  [3:0] empty_2_WEN_A;
output  [31:0] empty_2_Din_A;
input  [31:0] empty_2_Dout_A;
output  [31:0] empty_3_Addr_A;
output   empty_3_EN_A;
output  [3:0] empty_3_WEN_A;
output  [31:0] empty_3_Din_A;
input  [31:0] empty_3_Dout_A;
output  [31:0] empty_4_Addr_A;
output   empty_4_EN_A;
output  [3:0] empty_4_WEN_A;
output  [31:0] empty_4_Din_A;
input  [31:0] empty_4_Dout_A;
output  [31:0] empty_5_Addr_A;
output   empty_5_EN_A;
output  [3:0] empty_5_WEN_A;
output  [31:0] empty_5_Din_A;
input  [31:0] empty_5_Dout_A;
output  [31:0] empty_6_Addr_A;
output   empty_6_EN_A;
output  [3:0] empty_6_WEN_A;
output  [31:0] empty_6_Din_A;
input  [31:0] empty_6_Dout_A;
output  [31:0] empty_7_Addr_A;
output   empty_7_EN_A;
output  [3:0] empty_7_WEN_A;
output  [31:0] empty_7_Din_A;
input  [31:0] empty_7_Dout_A;
output  [31:0] empty_8_Addr_A;
output   empty_8_EN_A;
output  [3:0] empty_8_WEN_A;
output  [31:0] empty_8_Din_A;
input  [31:0] empty_8_Dout_A;
input  [2:0] empty_9;
input  [1:0] empty_10;
input  [2:0] empty;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg empty_2_EN_A;
reg empty_3_EN_A;
reg empty_4_EN_A;
reg empty_5_EN_A;
reg empty_6_EN_A;
reg empty_7_EN_A;
reg empty_8_EN_A;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0_flag00000000;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
reg    ap_block_pp0_stage0_flag00011001;
reg   [2:0] tmp_15_reg_246;
reg   [2:0] ap_reg_pp0_iter1_tmp_15_reg_246;
reg   [2:0] ap_reg_pp0_iter2_tmp_15_reg_246;
wire   [31:0] tmp_22_fu_174_p2;
reg   [31:0] tmp_22_reg_256;
reg   [31:0] ap_reg_pp0_iter1_tmp_22_reg_256;
reg   [31:0] empty_21_reg_302;
reg   [31:0] empty_22_reg_307;
reg   [31:0] empty_23_reg_312;
reg   [31:0] empty_24_reg_317;
reg   [31:0] empty_25_reg_322;
reg   [31:0] empty_26_reg_327;
reg   [31:0] empty_27_reg_332;
wire   [31:0] sel_tmp3_fu_196_p3;
reg   [31:0] sel_tmp3_reg_337;
wire   [0:0] sel_tmp4_fu_203_p2;
reg   [0:0] sel_tmp4_reg_342;
wire   [0:0] sel_tmp6_fu_208_p2;
reg   [0:0] sel_tmp6_reg_347;
wire   [0:0] sel_tmp8_fu_213_p2;
reg   [0:0] sel_tmp8_reg_352;
wire   [0:0] sel_tmp10_fu_218_p2;
reg   [0:0] sel_tmp10_reg_357;
reg    ap_block_pp0_stage0_flag00011011;
wire   [4:0] tmp_fu_156_p3;
wire   [31:0] p_shl_fu_164_p1;
wire   [31:0] p_cast_fu_152_p1;
wire   [31:0] p_cast1_fu_148_p1;
wire   [31:0] tmp_21_fu_168_p2;
wire   [0:0] sel_tmp_fu_180_p2;
wire   [0:0] sel_tmp2_fu_191_p2;
wire   [31:0] sel_tmp1_fu_185_p3;
wire   [31:0] sel_tmp5_fu_223_p3;
wire   [31:0] sel_tmp7_fu_228_p3;
wire   [31:0] sel_tmp9_fu_234_p3;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to3;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011011 == 1'b0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((ap_block_pp0_stage0_flag00011011 == 1'b0)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((ap_block_pp0_stage0_flag00011011 == 1'b0)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((ap_block_pp0_stage0_flag00011011 == 1'b0)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0))) begin
        ap_reg_pp0_iter1_tmp_15_reg_246 <= tmp_15_reg_246;
        ap_reg_pp0_iter1_tmp_22_reg_256 <= tmp_22_reg_256;
        tmp_15_reg_246 <= empty_9;
        tmp_22_reg_256 <= tmp_22_fu_174_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_block_pp0_stage0_flag00011001 == 1'b0)) begin
        ap_reg_pp0_iter2_tmp_15_reg_246 <= ap_reg_pp0_iter1_tmp_15_reg_246;
        empty_21_reg_302 <= empty_8_Dout_A;
        empty_22_reg_307 <= empty_2_Dout_A;
        empty_23_reg_312 <= empty_3_Dout_A;
        empty_24_reg_317 <= empty_4_Dout_A;
        empty_25_reg_322 <= empty_5_Dout_A;
        empty_26_reg_327 <= empty_6_Dout_A;
        empty_27_reg_332 <= empty_7_Dout_A;
        sel_tmp10_reg_357 <= sel_tmp10_fu_218_p2;
        sel_tmp3_reg_337 <= sel_tmp3_fu_196_p3;
        sel_tmp4_reg_342 <= sel_tmp4_fu_203_p2;
        sel_tmp6_reg_347 <= sel_tmp6_fu_208_p2;
        sel_tmp8_reg_352 <= sel_tmp8_fu_213_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_start) & (ap_block_pp0_stage0_flag00000000 == 1'b0)) | ((ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter4)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_idle_pp0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_enable_reg_pp0_iter0) & (1'b0 == ap_enable_reg_pp0_iter1) & (1'b0 == ap_enable_reg_pp0_iter2) & (1'b0 == ap_enable_reg_pp0_iter3) & (1'b0 == ap_enable_reg_pp0_iter4))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_enable_reg_pp0_iter0) & (1'b0 == ap_enable_reg_pp0_iter1) & (1'b0 == ap_enable_reg_pp0_iter2) & (1'b0 == ap_enable_reg_pp0_iter3))) begin
        ap_idle_pp0_0to3 = 1'b1;
    end else begin
        ap_idle_pp0_0to3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_start) & (ap_block_pp0_stage0_flag00011001 == 1'b0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_idle_pp0_0to3))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        empty_2_EN_A = 1'b1;
    end else begin
        empty_2_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        empty_3_EN_A = 1'b1;
    end else begin
        empty_3_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        empty_4_EN_A = 1'b1;
    end else begin
        empty_4_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        empty_5_EN_A = 1'b1;
    end else begin
        empty_5_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        empty_6_EN_A = 1'b1;
    end else begin
        empty_6_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        empty_7_EN_A = 1'b1;
    end else begin
        empty_7_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_block_pp0_stage0_flag00011001 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        empty_8_EN_A = 1'b1;
    end else begin
        empty_8_EN_A = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0_flag00000000 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_flag00011001 = ((1'b0 == ap_start) & (1'b1 == ap_start));
end

always @ (*) begin
    ap_block_pp0_stage0_flag00011011 = ((1'b0 == ap_start) & (1'b1 == ap_start));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (1'b0 == ap_start);
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign ap_return = ((sel_tmp10_reg_357[0:0] === 1'b1) ? empty_27_reg_332 : sel_tmp9_fu_234_p3);

assign empty_2_Addr_A = tmp_22_reg_256 << 32'd2;

assign empty_2_Din_A = 32'd0;

assign empty_2_WEN_A = 4'd0;

assign empty_3_Addr_A = tmp_22_reg_256 << 32'd2;

assign empty_3_Din_A = 32'd0;

assign empty_3_WEN_A = 4'd0;

assign empty_4_Addr_A = ap_reg_pp0_iter1_tmp_22_reg_256 << 32'd2;

assign empty_4_Din_A = 32'd0;

assign empty_4_WEN_A = 4'd0;

assign empty_5_Addr_A = ap_reg_pp0_iter1_tmp_22_reg_256 << 32'd2;

assign empty_5_Din_A = 32'd0;

assign empty_5_WEN_A = 4'd0;

assign empty_6_Addr_A = ap_reg_pp0_iter1_tmp_22_reg_256 << 32'd2;

assign empty_6_Din_A = 32'd0;

assign empty_6_WEN_A = 4'd0;

assign empty_7_Addr_A = ap_reg_pp0_iter1_tmp_22_reg_256 << 32'd2;

assign empty_7_Din_A = 32'd0;

assign empty_7_WEN_A = 4'd0;

assign empty_8_Addr_A = tmp_22_reg_256 << 32'd2;

assign empty_8_Din_A = 32'd0;

assign empty_8_WEN_A = 4'd0;

assign p_cast1_fu_148_p1 = empty;

assign p_cast_fu_152_p1 = empty_10;

assign p_shl_fu_164_p1 = tmp_fu_156_p3;

assign sel_tmp10_fu_218_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd5) ? 1'b1 : 1'b0);

assign sel_tmp1_fu_185_p3 = ((sel_tmp_fu_180_p2[0:0] === 1'b1) ? empty_22_reg_307 : empty_21_reg_302);

assign sel_tmp2_fu_191_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd1) ? 1'b1 : 1'b0);

assign sel_tmp3_fu_196_p3 = ((sel_tmp2_fu_191_p2[0:0] === 1'b1) ? empty_23_reg_312 : sel_tmp1_fu_185_p3);

assign sel_tmp4_fu_203_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd2) ? 1'b1 : 1'b0);

assign sel_tmp5_fu_223_p3 = ((sel_tmp4_reg_342[0:0] === 1'b1) ? empty_24_reg_317 : sel_tmp3_reg_337);

assign sel_tmp6_fu_208_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd3) ? 1'b1 : 1'b0);

assign sel_tmp7_fu_228_p3 = ((sel_tmp6_reg_347[0:0] === 1'b1) ? empty_25_reg_322 : sel_tmp5_fu_223_p3);

assign sel_tmp8_fu_213_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd4) ? 1'b1 : 1'b0);

assign sel_tmp9_fu_234_p3 = ((sel_tmp8_reg_352[0:0] === 1'b1) ? empty_26_reg_327 : sel_tmp7_fu_228_p3);

assign sel_tmp_fu_180_p2 = ((ap_reg_pp0_iter2_tmp_15_reg_246 == 3'd0) ? 1'b1 : 1'b0);

assign tmp_21_fu_168_p2 = (p_shl_fu_164_p1 - p_cast_fu_152_p1);

assign tmp_22_fu_174_p2 = (p_cast1_fu_148_p1 + tmp_21_fu_168_p2);

assign tmp_fu_156_p3 = {{empty_10}, {3'd0}};

endmodule //aesl_mux_load_7_3_x_s
