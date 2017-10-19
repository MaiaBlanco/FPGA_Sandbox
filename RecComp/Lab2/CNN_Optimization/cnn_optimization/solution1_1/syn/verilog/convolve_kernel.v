// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.3
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="convolve_kernel,hls_ip_2017_3,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.353000,HLS_SYN_LAT=37942,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=5,HLS_SYN_FF=860,HLS_SYN_LUT=1412}" *)

module convolve_kernel (
        ap_clk,
        ap_rst_n,
        bufw_Addr_A,
        bufw_EN_A,
        bufw_WEN_A,
        bufw_Din_A,
        bufw_Dout_A,
        bufw_Clk_A,
        bufw_Rst_A,
        bufi_Addr_A,
        bufi_EN_A,
        bufi_WEN_A,
        bufi_Din_A,
        bufi_Dout_A,
        bufi_Clk_A,
        bufi_Rst_A,
        bufo_Addr_A,
        bufo_EN_A,
        bufo_WEN_A,
        bufo_Din_A,
        bufo_Dout_A,
        bufo_Clk_A,
        bufo_Rst_A,
        s_axi_control_AWVALID,
        s_axi_control_AWREADY,
        s_axi_control_AWADDR,
        s_axi_control_WVALID,
        s_axi_control_WREADY,
        s_axi_control_WDATA,
        s_axi_control_WSTRB,
        s_axi_control_ARVALID,
        s_axi_control_ARREADY,
        s_axi_control_ARADDR,
        s_axi_control_RVALID,
        s_axi_control_RREADY,
        s_axi_control_RDATA,
        s_axi_control_RRESP,
        s_axi_control_BVALID,
        s_axi_control_BREADY,
        s_axi_control_BRESP,
        interrupt
);

parameter    ap_ST_fsm_state1 = 26'd1;
parameter    ap_ST_fsm_state2 = 26'd2;
parameter    ap_ST_fsm_state3 = 26'd4;
parameter    ap_ST_fsm_state4 = 26'd8;
parameter    ap_ST_fsm_state5 = 26'd16;
parameter    ap_ST_fsm_state6 = 26'd32;
parameter    ap_ST_fsm_state7 = 26'd64;
parameter    ap_ST_fsm_state8 = 26'd128;
parameter    ap_ST_fsm_state9 = 26'd256;
parameter    ap_ST_fsm_state10 = 26'd512;
parameter    ap_ST_fsm_state11 = 26'd1024;
parameter    ap_ST_fsm_state12 = 26'd2048;
parameter    ap_ST_fsm_state13 = 26'd4096;
parameter    ap_ST_fsm_state14 = 26'd8192;
parameter    ap_ST_fsm_state15 = 26'd16384;
parameter    ap_ST_fsm_state16 = 26'd32768;
parameter    ap_ST_fsm_state17 = 26'd65536;
parameter    ap_ST_fsm_state18 = 26'd131072;
parameter    ap_ST_fsm_state19 = 26'd262144;
parameter    ap_ST_fsm_state20 = 26'd524288;
parameter    ap_ST_fsm_state21 = 26'd1048576;
parameter    ap_ST_fsm_state22 = 26'd2097152;
parameter    ap_ST_fsm_state23 = 26'd4194304;
parameter    ap_ST_fsm_state24 = 26'd8388608;
parameter    ap_ST_fsm_state25 = 26'd16777216;
parameter    ap_ST_fsm_state26 = 26'd33554432;
parameter    C_S_AXI_CONTROL_DATA_WIDTH = 32;
parameter    C_S_AXI_CONTROL_ADDR_WIDTH = 4;
parameter    C_S_AXI_DATA_WIDTH = 32;

parameter C_S_AXI_CONTROL_WSTRB_WIDTH = (32 / 8);
parameter C_S_AXI_WSTRB_WIDTH = (32 / 8);

input   ap_clk;
input   ap_rst_n;
output  [31:0] bufw_Addr_A;
output   bufw_EN_A;
output  [3:0] bufw_WEN_A;
output  [31:0] bufw_Din_A;
input  [31:0] bufw_Dout_A;
output   bufw_Clk_A;
output   bufw_Rst_A;
output  [31:0] bufi_Addr_A;
output   bufi_EN_A;
output  [3:0] bufi_WEN_A;
output  [31:0] bufi_Din_A;
input  [31:0] bufi_Dout_A;
output   bufi_Clk_A;
output   bufi_Rst_A;
output  [31:0] bufo_Addr_A;
output   bufo_EN_A;
output  [3:0] bufo_WEN_A;
output  [31:0] bufo_Din_A;
input  [31:0] bufo_Dout_A;
output   bufo_Clk_A;
output   bufo_Rst_A;
input   s_axi_control_AWVALID;
output   s_axi_control_AWREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_AWADDR;
input   s_axi_control_WVALID;
output   s_axi_control_WREADY;
input  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_WDATA;
input  [C_S_AXI_CONTROL_WSTRB_WIDTH - 1:0] s_axi_control_WSTRB;
input   s_axi_control_ARVALID;
output   s_axi_control_ARREADY;
input  [C_S_AXI_CONTROL_ADDR_WIDTH - 1:0] s_axi_control_ARADDR;
output   s_axi_control_RVALID;
input   s_axi_control_RREADY;
output  [C_S_AXI_CONTROL_DATA_WIDTH - 1:0] s_axi_control_RDATA;
output  [1:0] s_axi_control_RRESP;
output   s_axi_control_BVALID;
input   s_axi_control_BREADY;
output  [1:0] s_axi_control_BRESP;
output   interrupt;

reg bufw_EN_A;
reg bufi_EN_A;
reg bufo_EN_A;
reg[3:0] bufo_WEN_A;

reg    ap_rst_n_inv;
wire    ap_start;
reg    ap_done;
reg    ap_idle;
(* fsm_encoding = "none" *) reg   [25:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    ap_ready;
wire   [5:0] row_b_cast6_cast_fu_164_p1;
reg   [5:0] row_b_cast6_cast_reg_454;
wire    ap_CS_fsm_state2;
wire   [2:0] row_b_cast_fu_168_p1;
reg   [2:0] row_b_cast_reg_459;
wire   [1:0] row_b_1_fu_178_p2;
reg   [1:0] row_b_1_reg_467;
wire   [5:0] col_b_cast5_cast_fu_184_p1;
reg   [5:0] col_b_cast5_cast_reg_472;
wire    ap_CS_fsm_state3;
wire   [2:0] col_b_cast_fu_188_p1;
reg   [2:0] col_b_cast_reg_477;
wire   [1:0] col_b_1_fu_198_p2;
reg   [1:0] col_b_1_reg_485;
wire  signed [5:0] tmp_10_cast_fu_226_p1;
reg  signed [5:0] tmp_10_cast_reg_490;
wire    ap_CS_fsm_state4;
wire   [5:0] tmp_11_fu_230_p2;
reg   [5:0] tmp_11_reg_495;
wire   [0:0] tmp_3_fu_235_p2;
reg   [0:0] tmp_3_reg_501;
wire   [1:0] to_b_1_fu_241_p2;
reg   [1:0] to_b_1_reg_505;
reg   [4:0] bufo_addr_reg_510;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_17_fu_292_p2;
reg   [63:0] tmp_17_reg_515;
wire    ap_CS_fsm_state6;
wire  signed [6:0] tmp_19_cast_fu_316_p1;
reg  signed [6:0] tmp_19_cast_reg_520;
wire   [1:0] ti_b_1_fu_326_p2;
reg   [1:0] ti_b_1_reg_528;
wire   [8:0] tmp_22_fu_357_p2;
reg   [8:0] tmp_22_reg_533;
wire    ap_CS_fsm_state7;
wire   [2:0] i_1_fu_369_p2;
reg   [2:0] i_1_reg_541;
wire   [2:0] tmp_9_fu_375_p2;
reg   [2:0] tmp_9_reg_546;
wire   [0:0] tmp_7_fu_363_p2;
wire   [8:0] tmp_25_fu_404_p2;
reg   [8:0] tmp_25_reg_551;
wire    ap_CS_fsm_state8;
reg   [7:0] bufw_addr_reg_556;
wire    ap_CS_fsm_state9;
wire   [2:0] j_1_fu_430_p2;
reg   [2:0] j_1_reg_564;
wire   [8:0] tmp_27_fu_445_p2;
reg   [8:0] tmp_27_reg_569;
wire   [0:0] tmp_s_fu_424_p2;
wire    ap_CS_fsm_state10;
reg   [31:0] bufw_load_reg_579;
wire    ap_CS_fsm_state11;
reg   [31:0] bufi_load_reg_584;
wire   [31:0] grp_fu_160_p2;
reg   [31:0] tmp_4_reg_589;
wire    ap_CS_fsm_state16;
reg   [31:0] bufo_load_reg_594;
wire   [31:0] grp_fu_156_p2;
reg   [31:0] tmp_6_reg_599;
wire    ap_CS_fsm_state25;
reg   [1:0] row_b_reg_90;
wire   [0:0] tmp_1_fu_192_p2;
reg   [1:0] col_b_reg_101;
wire   [0:0] tmp_fu_172_p2;
reg   [1:0] to_b_reg_112;
wire   [0:0] tmp_5_fu_320_p2;
reg   [1:0] ti_b_reg_123;
reg   [2:0] i_reg_134;
reg   [2:0] j_reg_145;
wire    ap_CS_fsm_state26;
wire   [63:0] tmp_14_cast_fu_262_p1;
wire   [63:0] tmp_26_cast_fu_419_p1;
wire   [63:0] tmp_27_cast_fu_450_p1;
wire   [31:0] bufw_Addr_A_orig;
wire   [31:0] bufi_Addr_A_orig;
wire    ap_CS_fsm_state15;
wire   [31:0] bufo_Addr_A_orig;
wire    ap_CS_fsm_state17;
wire    ap_CS_fsm_state12;
wire   [3:0] tmp_8_fu_208_p3;
wire   [4:0] p_shl1_cast_fu_216_p1;
wire   [4:0] to_b_cast4_cast_fu_204_p1;
wire   [4:0] tmp_10_fu_220_p2;
wire   [5:0] tmp_12_fu_247_p2;
wire   [5:0] tmp_13_fu_252_p2;
wire   [5:0] tmp_14_fu_257_p2;
wire   [5:0] ti_b_cast3_cast_fu_267_p1;
wire   [5:0] tmp_15_fu_271_p2;
wire   [7:0] tmp_16_fu_280_p3;
wire  signed [63:0] tmp_15_cast_fu_276_p1;
wire  signed [63:0] p_shl3_fu_288_p1;
wire   [4:0] tmp_18_fu_298_p3;
wire   [5:0] p_shl2_cast_fu_306_p1;
wire   [5:0] tmp_19_fu_310_p2;
wire   [63:0] i_cast2_fu_332_p1;
wire   [63:0] tmp_20_fu_336_p2;
wire   [6:0] tmp_24_fu_345_p1;
wire   [8:0] tmp_21_fu_341_p1;
wire   [8:0] p_shl4_cast_fu_349_p3;
wire   [6:0] tmp_9_cast_cast_fu_380_p1;
wire   [6:0] tmp_23_fu_383_p2;
wire   [5:0] tmp_28_fu_392_p1;
wire   [8:0] p_shl5_cast_fu_396_p3;
wire  signed [8:0] tmp_23_cast_fu_388_p1;
wire   [8:0] j_cast1_cast_fu_410_p1;
wire   [8:0] tmp_26_fu_414_p2;
wire   [2:0] tmp_2_fu_436_p2;
wire   [8:0] tmp_2_cast_cast_fu_441_p1;
reg   [25:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 26'd1;
end

convolve_kernel_control_s_axi #(
    .C_S_AXI_ADDR_WIDTH( C_S_AXI_CONTROL_ADDR_WIDTH ),
    .C_S_AXI_DATA_WIDTH( C_S_AXI_CONTROL_DATA_WIDTH ))
convolve_kernel_control_s_axi_U(
    .AWVALID(s_axi_control_AWVALID),
    .AWREADY(s_axi_control_AWREADY),
    .AWADDR(s_axi_control_AWADDR),
    .WVALID(s_axi_control_WVALID),
    .WREADY(s_axi_control_WREADY),
    .WDATA(s_axi_control_WDATA),
    .WSTRB(s_axi_control_WSTRB),
    .ARVALID(s_axi_control_ARVALID),
    .ARREADY(s_axi_control_ARREADY),
    .ARADDR(s_axi_control_ARADDR),
    .RVALID(s_axi_control_RVALID),
    .RREADY(s_axi_control_RREADY),
    .RDATA(s_axi_control_RDATA),
    .RRESP(s_axi_control_RRESP),
    .BVALID(s_axi_control_BVALID),
    .BREADY(s_axi_control_BREADY),
    .BRESP(s_axi_control_BRESP),
    .ACLK(ap_clk),
    .ARESET(ap_rst_n_inv),
    .ACLK_EN(1'b1),
    .ap_start(ap_start),
    .interrupt(interrupt),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_idle(ap_idle)
);

convolve_kernel_fbkb #(
    .ID( 1 ),
    .NUM_STAGE( 9 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
convolve_kernel_fbkb_U1(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .din0(bufo_load_reg_594),
    .din1(tmp_4_reg_589),
    .ce(1'b1),
    .dout(grp_fu_156_p2)
);

convolve_kernel_fcud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
convolve_kernel_fcud_U2(
    .clk(ap_clk),
    .reset(ap_rst_n_inv),
    .din0(bufw_load_reg_579),
    .din1(bufi_load_reg_584),
    .ce(1'b1),
    .dout(grp_fu_160_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst_n_inv == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'd0 == tmp_fu_172_p2))) begin
        col_b_reg_101 <= 2'd0;
    end else if (((1'b1 == ap_CS_fsm_state5) & (tmp_3_reg_501 == 1'd1))) begin
        col_b_reg_101 <= col_b_1_reg_485;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state6) & (1'd0 == tmp_5_fu_320_p2))) begin
        i_reg_134 <= 3'd0;
    end else if (((tmp_s_fu_424_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        i_reg_134 <= i_1_reg_541;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        j_reg_145 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state26)) begin
        j_reg_145 <= j_1_reg_564;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_1_fu_192_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        row_b_reg_90 <= row_b_1_reg_467;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        row_b_reg_90 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (tmp_3_reg_501 == 1'd0))) begin
        ti_b_reg_123 <= 2'd0;
    end else if (((1'b1 == ap_CS_fsm_state7) & (tmp_7_fu_363_p2 == 1'd1))) begin
        ti_b_reg_123 <= ti_b_1_reg_528;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (1'd0 == tmp_1_fu_192_p2))) begin
        to_b_reg_112 <= 2'd0;
    end else if (((1'd1 == tmp_5_fu_320_p2) & (1'b1 == ap_CS_fsm_state6))) begin
        to_b_reg_112 <= to_b_1_reg_505;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        bufi_load_reg_584 <= bufi_Dout_A;
        bufw_load_reg_579 <= bufw_Dout_A;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        bufo_addr_reg_510 <= tmp_14_cast_fu_262_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        bufo_load_reg_594 <= bufo_Dout_A;
        tmp_4_reg_589 <= grp_fu_160_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        bufw_addr_reg_556 <= tmp_26_cast_fu_419_p1;
        j_1_reg_564 <= j_1_fu_430_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        col_b_1_reg_485 <= col_b_1_fu_198_p2;
        col_b_cast5_cast_reg_472[1 : 0] <= col_b_cast5_cast_fu_184_p1[1 : 0];
        col_b_cast_reg_477[1 : 0] <= col_b_cast_fu_188_p1[1 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_1_reg_541 <= i_1_fu_369_p2;
        tmp_22_reg_533 <= tmp_22_fu_357_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        row_b_1_reg_467 <= row_b_1_fu_178_p2;
        row_b_cast6_cast_reg_454[1 : 0] <= row_b_cast6_cast_fu_164_p1[1 : 0];
        row_b_cast_reg_459[1 : 0] <= row_b_cast_fu_168_p1[1 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ti_b_1_reg_528 <= ti_b_1_fu_326_p2;
        tmp_17_reg_515 <= tmp_17_fu_292_p2;
        tmp_19_cast_reg_520 <= tmp_19_cast_fu_316_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        tmp_10_cast_reg_490 <= tmp_10_cast_fu_226_p1;
        tmp_11_reg_495 <= tmp_11_fu_230_p2;
        tmp_3_reg_501 <= tmp_3_fu_235_p2;
        to_b_1_reg_505 <= to_b_1_fu_241_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        tmp_25_reg_551 <= tmp_25_fu_404_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (1'd0 == tmp_s_fu_424_p2))) begin
        tmp_27_reg_569 <= tmp_27_fu_445_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state25)) begin
        tmp_6_reg_599 <= grp_fu_156_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (tmp_7_fu_363_p2 == 1'd0))) begin
        tmp_9_reg_546 <= tmp_9_fu_375_p2;
    end
end

always @ (*) begin
    if (((1'd1 == tmp_fu_172_p2) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'd1 == tmp_fu_172_p2) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        bufi_EN_A = 1'b1;
    end else begin
        bufi_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state26))) begin
        bufo_EN_A = 1'b1;
    end else begin
        bufo_EN_A = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state26)) begin
        bufo_WEN_A = 4'd15;
    end else begin
        bufo_WEN_A = 4'd0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        bufw_EN_A = 1'b1;
    end else begin
        bufw_EN_A = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'd1 == tmp_fu_172_p2) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((tmp_1_fu_192_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (tmp_3_reg_501 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((1'd1 == tmp_5_fu_320_p2) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((1'b1 == ap_CS_fsm_state7) & (tmp_7_fu_363_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            if (((tmp_s_fu_424_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_rst_n_inv = ~ap_rst_n;
end

assign bufi_Addr_A = bufi_Addr_A_orig << 32'd2;

assign bufi_Addr_A_orig = tmp_27_cast_fu_450_p1;

assign bufi_Clk_A = ap_clk;

assign bufi_Din_A = 32'd0;

assign bufi_Rst_A = ap_rst_n_inv;

assign bufi_WEN_A = 4'd0;

assign bufo_Addr_A = bufo_Addr_A_orig << 32'd2;

assign bufo_Addr_A_orig = bufo_addr_reg_510;

assign bufo_Clk_A = ap_clk;

assign bufo_Din_A = tmp_6_reg_599;

assign bufo_Rst_A = ap_rst_n_inv;

assign bufw_Addr_A = bufw_Addr_A_orig << 32'd2;

assign bufw_Addr_A_orig = bufw_addr_reg_556;

assign bufw_Clk_A = ap_clk;

assign bufw_Din_A = 32'd0;

assign bufw_Rst_A = ap_rst_n_inv;

assign bufw_WEN_A = 4'd0;

assign col_b_1_fu_198_p2 = (col_b_reg_101 + 2'd1);

assign col_b_cast5_cast_fu_184_p1 = col_b_reg_101;

assign col_b_cast_fu_188_p1 = col_b_reg_101;

assign i_1_fu_369_p2 = (3'd1 + i_reg_134);

assign i_cast2_fu_332_p1 = i_reg_134;

assign j_1_fu_430_p2 = (j_reg_145 + 3'd1);

assign j_cast1_cast_fu_410_p1 = j_reg_145;

assign p_shl1_cast_fu_216_p1 = tmp_8_fu_208_p3;

assign p_shl2_cast_fu_306_p1 = tmp_18_fu_298_p3;

assign p_shl3_fu_288_p1 = $signed(tmp_16_fu_280_p3);

assign p_shl4_cast_fu_349_p3 = {{tmp_24_fu_345_p1}, {2'd0}};

assign p_shl5_cast_fu_396_p3 = {{tmp_28_fu_392_p1}, {3'd0}};

assign row_b_1_fu_178_p2 = (row_b_reg_90 + 2'd1);

assign row_b_cast6_cast_fu_164_p1 = row_b_reg_90;

assign row_b_cast_fu_168_p1 = row_b_reg_90;

assign ti_b_1_fu_326_p2 = (ti_b_reg_123 + 2'd1);

assign ti_b_cast3_cast_fu_267_p1 = ti_b_reg_123;

assign tmp_10_cast_fu_226_p1 = $signed(tmp_10_fu_220_p2);

assign tmp_10_fu_220_p2 = (p_shl1_cast_fu_216_p1 - to_b_cast4_cast_fu_204_p1);

assign tmp_11_fu_230_p2 = ($signed(row_b_cast6_cast_reg_454) + $signed(tmp_10_cast_fu_226_p1));

assign tmp_12_fu_247_p2 = tmp_11_reg_495 << 6'd2;

assign tmp_13_fu_252_p2 = (tmp_12_fu_247_p2 - tmp_11_reg_495);

assign tmp_14_cast_fu_262_p1 = tmp_14_fu_257_p2;

assign tmp_14_fu_257_p2 = (col_b_cast5_cast_reg_472 + tmp_13_fu_252_p2);

assign tmp_15_cast_fu_276_p1 = $signed(tmp_15_fu_271_p2);

assign tmp_15_fu_271_p2 = ($signed(tmp_10_cast_reg_490) + $signed(ti_b_cast3_cast_fu_267_p1));

assign tmp_16_fu_280_p3 = {{tmp_15_fu_271_p2}, {2'd0}};

assign tmp_17_fu_292_p2 = ($signed(tmp_15_cast_fu_276_p1) + $signed(p_shl3_fu_288_p1));

assign tmp_18_fu_298_p3 = {{ti_b_reg_123}, {3'd0}};

assign tmp_19_cast_fu_316_p1 = $signed(tmp_19_fu_310_p2);

assign tmp_19_fu_310_p2 = (p_shl2_cast_fu_306_p1 - ti_b_cast3_cast_fu_267_p1);

assign tmp_1_fu_192_p2 = ((col_b_reg_101 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_20_fu_336_p2 = (tmp_17_reg_515 + i_cast2_fu_332_p1);

assign tmp_21_fu_341_p1 = tmp_20_fu_336_p2[8:0];

assign tmp_22_fu_357_p2 = (tmp_21_fu_341_p1 + p_shl4_cast_fu_349_p3);

assign tmp_23_cast_fu_388_p1 = $signed(tmp_23_fu_383_p2);

assign tmp_23_fu_383_p2 = ($signed(tmp_9_cast_cast_fu_380_p1) + $signed(tmp_19_cast_reg_520));

assign tmp_24_fu_345_p1 = tmp_20_fu_336_p2[6:0];

assign tmp_25_fu_404_p2 = ($signed(p_shl5_cast_fu_396_p3) - $signed(tmp_23_cast_fu_388_p1));

assign tmp_26_cast_fu_419_p1 = tmp_26_fu_414_p2;

assign tmp_26_fu_414_p2 = (tmp_22_reg_533 + j_cast1_cast_fu_410_p1);

assign tmp_27_cast_fu_450_p1 = tmp_27_reg_569;

assign tmp_27_fu_445_p2 = (tmp_25_reg_551 + tmp_2_cast_cast_fu_441_p1);

assign tmp_28_fu_392_p1 = tmp_23_fu_383_p2[5:0];

assign tmp_2_cast_cast_fu_441_p1 = tmp_2_fu_436_p2;

assign tmp_2_fu_436_p2 = (col_b_cast_reg_477 + j_reg_145);

assign tmp_3_fu_235_p2 = ((to_b_reg_112 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_5_fu_320_p2 = ((ti_b_reg_123 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_7_fu_363_p2 = ((i_reg_134 == 3'd5) ? 1'b1 : 1'b0);

assign tmp_8_fu_208_p3 = {{to_b_reg_112}, {2'd0}};

assign tmp_9_cast_cast_fu_380_p1 = tmp_9_reg_546;

assign tmp_9_fu_375_p2 = (i_reg_134 + row_b_cast_reg_459);

assign tmp_fu_172_p2 = ((row_b_reg_90 == 2'd3) ? 1'b1 : 1'b0);

assign tmp_s_fu_424_p2 = ((j_reg_145 == 3'd5) ? 1'b1 : 1'b0);

assign to_b_1_fu_241_p2 = (2'd1 + to_b_reg_112);

assign to_b_cast4_cast_fu_204_p1 = to_b_reg_112;

always @ (posedge ap_clk) begin
    row_b_cast6_cast_reg_454[5:2] <= 4'b0000;
    row_b_cast_reg_459[2] <= 1'b0;
    col_b_cast5_cast_reg_472[5:2] <= 4'b0000;
    col_b_cast_reg_477[2] <= 1'b0;
end

endmodule //convolve_kernel
