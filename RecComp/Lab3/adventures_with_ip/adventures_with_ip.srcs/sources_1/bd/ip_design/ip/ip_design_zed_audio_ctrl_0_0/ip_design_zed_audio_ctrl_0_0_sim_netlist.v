// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
// Date        : Tue Oct 17 19:49:32 2017
// Host        : TacitMonolith running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode funcsim
//               /home/mark/Documents/Repos/FPGA_Sandbox/RecComp/Lab3/adventures_with_ip/adventures_with_ip.srcs/sources_1/bd/ip_design/ip/ip_design_zed_audio_ctrl_0_0/ip_design_zed_audio_ctrl_0_0_sim_netlist.v
// Design      : ip_design_zed_audio_ctrl_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "ip_design_zed_audio_ctrl_0_0,i2s_ctrl,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "i2s_ctrl,Vivado 2017.3" *) 
(* NotValidForBitStream *)
module ip_design_zed_audio_ctrl_0_0
   (BCLK,
    LRCLK,
    SDATA_I,
    SDATA_O,
    S_AXI_ACLK,
    S_AXI_ARESETN,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_WDATA,
    S_AXI_WSTRB,
    S_AXI_WVALID,
    S_AXI_BREADY,
    S_AXI_ARADDR,
    S_AXI_ARVALID,
    S_AXI_RREADY,
    S_AXI_ARREADY,
    S_AXI_RDATA,
    S_AXI_RRESP,
    S_AXI_RVALID,
    S_AXI_WREADY,
    S_AXI_BRESP,
    S_AXI_BVALID,
    S_AXI_AWREADY);
  output BCLK;
  output LRCLK;
  input SDATA_I;
  output SDATA_O;
  (* max_fanout = "10000" *) (* sigis = "Clk" *) (* x_interface_info = "xilinx.com:signal:clock:1.0 S_AXI_signal_clock CLK" *) 
  (* x_interface_parameter = "XIL_INTERFACENAME S_AXI_signal_clock, ASSOCIATED_BUSIF S_AXI, ASSOCIATED_RESET S_AXI_ARESETN, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0" *) input S_AXI_ACLK;
  (* max_fanout = "10000" *) (* sigis = "Rst" *) (* x_interface_info = "xilinx.com:signal:reset:1.0 S_AXI_signal_reset RST" *) 
  (* x_interface_parameter = "XIL_INTERFACENAME S_AXI_signal_reset, POLARITY ACTIVE_LOW" *) input S_AXI_ARESETN;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI AWADDR" *) (* x_interface_parameter = "XIL_INTERFACENAME S_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 100000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0" *) input [31:0]S_AXI_AWADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI AWVALID" *) input S_AXI_AWVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI WDATA" *) input [31:0]S_AXI_WDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI WSTRB" *) input [3:0]S_AXI_WSTRB;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI WVALID" *) input S_AXI_WVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI BREADY" *) input S_AXI_BREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI ARADDR" *) input [31:0]S_AXI_ARADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI ARVALID" *) input S_AXI_ARVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI RREADY" *) input S_AXI_RREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI ARREADY" *) output S_AXI_ARREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI RDATA" *) output [31:0]S_AXI_RDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI RRESP" *) output [1:0]S_AXI_RRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI RVALID" *) output S_AXI_RVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI WREADY" *) output S_AXI_WREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI BRESP" *) output [1:0]S_AXI_BRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI BVALID" *) output S_AXI_BVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 S_AXI AWREADY" *) output S_AXI_AWREADY;

  wire \<const0> ;
  wire BCLK;
  wire LRCLK;
  wire SDATA_I;
  wire SDATA_O;
  (* MAX_FANOUT = "10000" *) (* RTL_MAX_FANOUT = "found" *) (* sigis = "Clk" *) wire S_AXI_ACLK;
  wire [31:0]S_AXI_ARADDR;
  (* MAX_FANOUT = "10000" *) (* RTL_MAX_FANOUT = "found" *) (* sigis = "Rst" *) wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARVALID;
  wire [31:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire [31:0]S_AXI_RDATA;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire [31:0]S_AXI_WDATA;
  wire S_AXI_WVALID;

  assign S_AXI_BRESP[1] = \<const0> ;
  assign S_AXI_BRESP[0] = \<const0> ;
  assign S_AXI_RRESP[1] = \<const0> ;
  assign S_AXI_RRESP[0] = \<const0> ;
  assign S_AXI_WREADY = S_AXI_AWREADY;
  GND GND
       (.G(\<const0> ));
  ip_design_zed_audio_ctrl_0_0_i2s_ctrl U0
       (.SDATA_I(SDATA_I),
        .SDATA_O(SDATA_O),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARADDR(S_AXI_ARADDR[4:2]),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_AWADDR(S_AXI_AWADDR[4:2]),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_WDATA(S_AXI_WDATA),
        .S_AXI_WVALID(S_AXI_WVALID),
        .out({LRCLK,BCLK}));
endmodule

(* ORIG_REF_NAME = "address_decoder" *) 
module ip_design_zed_audio_ctrl_0_0_address_decoder
   (\DataTx_R_reg[0] ,
    \DataTx_R_reg[0]_0 ,
    \DataTx_R_reg[0]_1 ,
    \DataTx_R_reg[0]_2 ,
    \DataTx_R_reg[0]_3 ,
    \DataTx_R_reg[0]_4 ,
    data_rdy_bit_reg,
    D,
    S_AXI_AWREADY,
    S_AXI_ARREADY,
    E,
    \DataTx_L_reg[0] ,
    data_rdy_bit_reg_0,
    \s_axi_rdata_i_reg[31] ,
    s_axi_rvalid_i_reg,
    s_axi_bvalid_i_reg,
    S_AXI_ACLK,
    Q,
    S_AXI_ARVALID,
    s_axi_bvalid_i_reg_0,
    \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ,
    S_AXI_WVALID_0,
    \state_reg[1] ,
    S_AXI_ARESETN,
    S_AXI_ARADDR,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_WVALID,
    data_rdy_bit,
    \DataTx_R_reg[31] ,
    \DataTx_L_reg[31] ,
    \DataRx_R_reg[23] ,
    \DataRx_L_reg[23] ,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ,
    S_AXI_RREADY,
    s_axi_rvalid_i_reg_0,
    S_AXI_BREADY,
    s_axi_bvalid_i_reg_1);
  output \DataTx_R_reg[0] ;
  output \DataTx_R_reg[0]_0 ;
  output \DataTx_R_reg[0]_1 ;
  output \DataTx_R_reg[0]_2 ;
  output \DataTx_R_reg[0]_3 ;
  output \DataTx_R_reg[0]_4 ;
  output data_rdy_bit_reg;
  output [1:0]D;
  output S_AXI_AWREADY;
  output S_AXI_ARREADY;
  output [0:0]E;
  output [0:0]\DataTx_L_reg[0] ;
  output data_rdy_bit_reg_0;
  output [31:0]\s_axi_rdata_i_reg[31] ;
  output s_axi_rvalid_i_reg;
  output s_axi_bvalid_i_reg;
  input S_AXI_ACLK;
  input [1:0]Q;
  input S_AXI_ARVALID;
  input s_axi_bvalid_i_reg_0;
  input [0:0]\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ;
  input S_AXI_WVALID_0;
  input \state_reg[1] ;
  input S_AXI_ARESETN;
  input [2:0]S_AXI_ARADDR;
  input [2:0]S_AXI_AWADDR;
  input S_AXI_AWVALID;
  input S_AXI_WVALID;
  input data_rdy_bit;
  input [31:0]\DataTx_R_reg[31] ;
  input [31:0]\DataTx_L_reg[31] ;
  input [23:0]\DataRx_R_reg[23] ;
  input [23:0]\DataRx_L_reg[23] ;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ;
  input S_AXI_RREADY;
  input s_axi_rvalid_i_reg_0;
  input S_AXI_BREADY;
  input s_axi_bvalid_i_reg_1;

  wire Bus_RNW_reg_i_1_n_0;
  wire [1:0]D;
  wire [23:0]\DataRx_L_reg[23] ;
  wire [23:0]\DataRx_R_reg[23] ;
  wire [0:0]\DataTx_L_reg[0] ;
  wire [31:0]\DataTx_L_reg[31] ;
  wire \DataTx_R_reg[0] ;
  wire \DataTx_R_reg[0]_0 ;
  wire \DataTx_R_reg[0]_1 ;
  wire \DataTx_R_reg[0]_2 ;
  wire \DataTx_R_reg[0]_3 ;
  wire \DataTx_R_reg[0]_4 ;
  wire [31:0]\DataTx_R_reg[31] ;
  wire [0:0]E;
  wire \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ;
  wire \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0 ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0 ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ;
  wire [0:0]\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ;
  wire [1:0]Q;
  wire S_AXI_ACLK;
  wire [2:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARREADY_INST_0_i_1_n_0;
  wire S_AXI_ARVALID;
  wire [2:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_RREADY;
  wire S_AXI_WVALID;
  wire S_AXI_WVALID_0;
  wire ce_expnd_i_0;
  wire ce_expnd_i_1;
  wire ce_expnd_i_2;
  wire ce_expnd_i_3;
  wire ce_expnd_i_4;
  wire cs_ce_clr;
  wire data_rdy_bit;
  wire data_rdy_bit_reg;
  wire data_rdy_bit_reg_0;
  wire s_axi_bvalid_i0;
  wire s_axi_bvalid_i_reg;
  wire s_axi_bvalid_i_reg_0;
  wire s_axi_bvalid_i_reg_1;
  wire \s_axi_rdata_i[0]_i_2_n_0 ;
  wire \s_axi_rdata_i[0]_i_3_n_0 ;
  wire \s_axi_rdata_i[0]_i_4_n_0 ;
  wire \s_axi_rdata_i[10]_i_2_n_0 ;
  wire \s_axi_rdata_i[11]_i_2_n_0 ;
  wire \s_axi_rdata_i[12]_i_2_n_0 ;
  wire \s_axi_rdata_i[13]_i_2_n_0 ;
  wire \s_axi_rdata_i[14]_i_2_n_0 ;
  wire \s_axi_rdata_i[15]_i_2_n_0 ;
  wire \s_axi_rdata_i[16]_i_2_n_0 ;
  wire \s_axi_rdata_i[17]_i_2_n_0 ;
  wire \s_axi_rdata_i[18]_i_2_n_0 ;
  wire \s_axi_rdata_i[19]_i_2_n_0 ;
  wire \s_axi_rdata_i[1]_i_2_n_0 ;
  wire \s_axi_rdata_i[20]_i_2_n_0 ;
  wire \s_axi_rdata_i[21]_i_2_n_0 ;
  wire \s_axi_rdata_i[22]_i_2_n_0 ;
  wire \s_axi_rdata_i[23]_i_2_n_0 ;
  wire \s_axi_rdata_i[23]_i_3_n_0 ;
  wire \s_axi_rdata_i[23]_i_4_n_0 ;
  wire \s_axi_rdata_i[2]_i_2_n_0 ;
  wire \s_axi_rdata_i[3]_i_2_n_0 ;
  wire \s_axi_rdata_i[4]_i_2_n_0 ;
  wire \s_axi_rdata_i[5]_i_2_n_0 ;
  wire \s_axi_rdata_i[6]_i_2_n_0 ;
  wire \s_axi_rdata_i[7]_i_2_n_0 ;
  wire \s_axi_rdata_i[8]_i_2_n_0 ;
  wire \s_axi_rdata_i[9]_i_2_n_0 ;
  wire [31:0]\s_axi_rdata_i_reg[31] ;
  wire s_axi_rvalid_i0;
  wire s_axi_rvalid_i_reg;
  wire s_axi_rvalid_i_reg_0;
  wire start;
  wire \state_reg[1] ;

  LUT6 #(
    .INIT(64'hFEFFFFFF02020202)) 
    Bus_RNW_reg_i_1
       (.I0(S_AXI_ARVALID),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(S_AXI_AWVALID),
        .I4(S_AXI_WVALID),
        .I5(\DataTx_R_reg[0]_4 ),
        .O(Bus_RNW_reg_i_1_n_0));
  FDRE Bus_RNW_reg_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(Bus_RNW_reg_i_1_n_0),
        .Q(\DataTx_R_reg[0]_4 ),
        .R(1'b0));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \DataTx_L[31]_i_1 
       (.I0(\DataTx_R_reg[0]_0 ),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[0]_4 ),
        .I3(\DataTx_R_reg[0]_2 ),
        .I4(\DataTx_R_reg[0]_3 ),
        .I5(\DataTx_R_reg[0] ),
        .O(\DataTx_L_reg[0] ));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \DataTx_R[31]_i_1 
       (.I0(\DataTx_R_reg[0]_1 ),
        .I1(\DataTx_R_reg[0]_0 ),
        .I2(\DataTx_R_reg[0]_4 ),
        .I3(\DataTx_R_reg[0]_2 ),
        .I4(\DataTx_R_reg[0]_3 ),
        .I5(\DataTx_R_reg[0] ),
        .O(E));
  LUT6 #(
    .INIT(64'h020202020202FF02)) 
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i[0]_i_1 
       (.I0(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ),
        .I1(S_AXI_ARADDR[0]),
        .I2(S_AXI_ARADDR[1]),
        .I3(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ),
        .I4(S_AXI_AWADDR[0]),
        .I5(S_AXI_AWADDR[1]),
        .O(ce_expnd_i_4));
  FDRE \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(start),
        .D(ce_expnd_i_4),
        .Q(\DataTx_R_reg[0]_3 ),
        .R(cs_ce_clr));
  LUT6 #(
    .INIT(64'h08080808FF080808)) 
    \GEN_BKEND_CE_REGISTERS[1].ce_out_i[1]_i_1 
       (.I0(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ),
        .I1(S_AXI_ARADDR[0]),
        .I2(S_AXI_ARADDR[1]),
        .I3(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ),
        .I4(S_AXI_AWADDR[0]),
        .I5(S_AXI_AWADDR[1]),
        .O(ce_expnd_i_3));
  FDRE \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(start),
        .D(ce_expnd_i_3),
        .Q(\DataTx_R_reg[0]_2 ),
        .R(cs_ce_clr));
  LUT6 #(
    .INIT(64'h08080808FF080808)) 
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i[2]_i_1 
       (.I0(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ),
        .I1(S_AXI_ARADDR[1]),
        .I2(S_AXI_ARADDR[0]),
        .I3(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ),
        .I4(S_AXI_AWADDR[1]),
        .I5(S_AXI_AWADDR[0]),
        .O(ce_expnd_i_2));
  FDRE \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(start),
        .D(ce_expnd_i_2),
        .Q(\DataTx_R_reg[0]_1 ),
        .R(cs_ce_clr));
  LUT6 #(
    .INIT(64'hFF80808080808080)) 
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_1 
       (.I0(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ),
        .I1(S_AXI_ARADDR[0]),
        .I2(S_AXI_ARADDR[1]),
        .I3(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ),
        .I4(S_AXI_AWADDR[0]),
        .I5(S_AXI_AWADDR[1]),
        .O(ce_expnd_i_1));
  LUT4 #(
    .INIT(16'h0002)) 
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2 
       (.I0(S_AXI_ARVALID),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(S_AXI_ARADDR[2]),
        .O(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000040)) 
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3 
       (.I0(S_AXI_ARVALID),
        .I1(S_AXI_WVALID),
        .I2(S_AXI_AWVALID),
        .I3(Q[1]),
        .I4(Q[0]),
        .I5(S_AXI_AWADDR[2]),
        .O(\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0 ));
  FDRE \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(start),
        .D(ce_expnd_i_1),
        .Q(\DataTx_R_reg[0]_0 ),
        .R(cs_ce_clr));
  LUT3 #(
    .INIT(8'hFD)) 
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_1 
       (.I0(S_AXI_ARESETN),
        .I1(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ),
        .I2(S_AXI_ARREADY_INST_0_i_1_n_0),
        .O(cs_ce_clr));
  LUT5 #(
    .INIT(32'h03020202)) 
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_2 
       (.I0(S_AXI_ARVALID),
        .I1(Q[0]),
        .I2(Q[1]),
        .I3(S_AXI_AWVALID),
        .I4(S_AXI_WVALID),
        .O(start));
  LUT5 #(
    .INIT(32'hAAAAAEAA)) 
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_3 
       (.I0(\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0 ),
        .I1(\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0 ),
        .I2(S_AXI_AWADDR[1]),
        .I3(S_AXI_AWADDR[2]),
        .I4(S_AXI_AWADDR[0]),
        .O(ce_expnd_i_0));
  LUT6 #(
    .INIT(64'h0000000000000400)) 
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4 
       (.I0(S_AXI_ARADDR[0]),
        .I1(S_AXI_ARADDR[2]),
        .I2(S_AXI_ARADDR[1]),
        .I3(S_AXI_ARVALID),
        .I4(Q[0]),
        .I5(Q[1]),
        .O(\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0 ));
  LUT5 #(
    .INIT(32'h00001000)) 
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5 
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(S_AXI_AWVALID),
        .I3(S_AXI_WVALID),
        .I4(S_AXI_ARVALID),
        .O(\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0 ));
  FDRE \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(start),
        .D(ce_expnd_i_0),
        .Q(\DataTx_R_reg[0] ),
        .R(cs_ce_clr));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hF8)) 
    S_AXI_ARREADY_INST_0
       (.I0(\DataTx_R_reg[0]_4 ),
        .I1(S_AXI_ARREADY_INST_0_i_1_n_0),
        .I2(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ),
        .O(S_AXI_ARREADY));
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    S_AXI_ARREADY_INST_0_i_1
       (.I0(\DataTx_R_reg[0] ),
        .I1(\DataTx_R_reg[0]_3 ),
        .I2(\DataTx_R_reg[0]_2 ),
        .I3(\DataTx_R_reg[0]_0 ),
        .I4(\DataTx_R_reg[0]_1 ),
        .O(S_AXI_ARREADY_INST_0_i_1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT3 #(
    .INIT(8'hF4)) 
    S_AXI_AWREADY_INST_0
       (.I0(\DataTx_R_reg[0]_4 ),
        .I1(S_AXI_ARREADY_INST_0_i_1_n_0),
        .I2(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ),
        .O(S_AXI_AWREADY));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    data_rdy_bit_i_2
       (.I0(\DataTx_R_reg[0] ),
        .I1(\DataTx_R_reg[0]_3 ),
        .I2(\DataTx_R_reg[0]_2 ),
        .I3(\DataTx_R_reg[0]_4 ),
        .O(data_rdy_bit_reg_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFEFFFF)) 
    data_rdy_bit_i_3
       (.I0(\DataTx_R_reg[0]_3 ),
        .I1(\DataTx_R_reg[0]_2 ),
        .I2(\DataTx_R_reg[0]_1 ),
        .I3(\DataTx_R_reg[0]_0 ),
        .I4(\DataTx_R_reg[0] ),
        .I5(\DataTx_R_reg[0]_4 ),
        .O(data_rdy_bit_reg));
  LUT3 #(
    .INIT(8'hBA)) 
    s_axi_bvalid_i_i_1
       (.I0(s_axi_bvalid_i0),
        .I1(S_AXI_BREADY),
        .I2(s_axi_bvalid_i_reg_1),
        .O(s_axi_bvalid_i_reg));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h0000AE00)) 
    s_axi_bvalid_i_i_2
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ),
        .I1(S_AXI_ARREADY_INST_0_i_1_n_0),
        .I2(\DataTx_R_reg[0]_4 ),
        .I3(Q[1]),
        .I4(Q[0]),
        .O(s_axi_bvalid_i0));
  LUT6 #(
    .INIT(64'hFFAAEAAAEAAAEAAA)) 
    \s_axi_rdata_i[0]_i_1 
       (.I0(\s_axi_rdata_i[0]_i_2_n_0 ),
        .I1(data_rdy_bit),
        .I2(\DataTx_R_reg[0] ),
        .I3(\s_axi_rdata_i[0]_i_3_n_0 ),
        .I4(\DataTx_R_reg[0]_0 ),
        .I5(\DataTx_R_reg[31] [0]),
        .O(\s_axi_rdata_i_reg[31] [0]));
  LUT6 #(
    .INIT(64'hFFFFF888F888F888)) 
    \s_axi_rdata_i[0]_i_2 
       (.I0(\s_axi_rdata_i[0]_i_4_n_0 ),
        .I1(\DataTx_L_reg[31] [0]),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [0]),
        .I4(\DataRx_L_reg[23] [0]),
        .I5(\s_axi_rdata_i[23]_i_2_n_0 ),
        .O(\s_axi_rdata_i[0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \s_axi_rdata_i[0]_i_3 
       (.I0(\DataTx_R_reg[0]_4 ),
        .I1(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .O(\s_axi_rdata_i[0]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h80)) 
    \s_axi_rdata_i[0]_i_4 
       (.I0(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I1(\DataTx_R_reg[0]_4 ),
        .I2(\DataTx_R_reg[0]_1 ),
        .O(\s_axi_rdata_i[0]_i_4_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[10]_i_1 
       (.I0(\DataRx_L_reg[23] [10]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [10]),
        .I4(\s_axi_rdata_i[10]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [10]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[10]_i_2 
       (.I0(\DataTx_L_reg[31] [10]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [10]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[10]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[11]_i_1 
       (.I0(\DataRx_L_reg[23] [11]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [11]),
        .I4(\s_axi_rdata_i[11]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [11]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[11]_i_2 
       (.I0(\DataTx_L_reg[31] [11]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [11]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[11]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[12]_i_1 
       (.I0(\DataRx_L_reg[23] [12]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [12]),
        .I4(\s_axi_rdata_i[12]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [12]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[12]_i_2 
       (.I0(\DataTx_L_reg[31] [12]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [12]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[12]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[13]_i_1 
       (.I0(\DataRx_L_reg[23] [13]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [13]),
        .I4(\s_axi_rdata_i[13]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [13]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[13]_i_2 
       (.I0(\DataTx_L_reg[31] [13]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [13]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[13]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[14]_i_1 
       (.I0(\DataRx_L_reg[23] [14]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [14]),
        .I4(\s_axi_rdata_i[14]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [14]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[14]_i_2 
       (.I0(\DataTx_L_reg[31] [14]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [14]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[14]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[15]_i_1 
       (.I0(\DataRx_L_reg[23] [15]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [15]),
        .I4(\s_axi_rdata_i[15]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [15]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[15]_i_2 
       (.I0(\DataTx_L_reg[31] [15]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [15]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[15]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[16]_i_1 
       (.I0(\DataRx_L_reg[23] [16]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [16]),
        .I4(\s_axi_rdata_i[16]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [16]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[16]_i_2 
       (.I0(\DataTx_L_reg[31] [16]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [16]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[16]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[17]_i_1 
       (.I0(\DataRx_L_reg[23] [17]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [17]),
        .I4(\s_axi_rdata_i[17]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [17]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[17]_i_2 
       (.I0(\DataTx_L_reg[31] [17]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [17]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[17]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[18]_i_1 
       (.I0(\DataRx_L_reg[23] [18]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [18]),
        .I4(\s_axi_rdata_i[18]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [18]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[18]_i_2 
       (.I0(\DataTx_L_reg[31] [18]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [18]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[18]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[19]_i_1 
       (.I0(\DataRx_L_reg[23] [19]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [19]),
        .I4(\s_axi_rdata_i[19]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [19]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[19]_i_2 
       (.I0(\DataTx_L_reg[31] [19]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [19]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[19]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[1]_i_1 
       (.I0(\DataRx_L_reg[23] [1]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [1]),
        .I4(\s_axi_rdata_i[1]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [1]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[1]_i_2 
       (.I0(\DataTx_L_reg[31] [1]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [1]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[1]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[20]_i_1 
       (.I0(\DataRx_L_reg[23] [20]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [20]),
        .I4(\s_axi_rdata_i[20]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [20]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[20]_i_2 
       (.I0(\DataTx_L_reg[31] [20]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [20]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[20]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[21]_i_1 
       (.I0(\DataRx_L_reg[23] [21]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [21]),
        .I4(\s_axi_rdata_i[21]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [21]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[21]_i_2 
       (.I0(\DataTx_L_reg[31] [21]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [21]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[21]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[22]_i_1 
       (.I0(\DataRx_L_reg[23] [22]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [22]),
        .I4(\s_axi_rdata_i[22]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [22]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[22]_i_2 
       (.I0(\DataTx_L_reg[31] [22]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [22]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[22]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[23]_i_1 
       (.I0(\DataRx_L_reg[23] [23]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [23]),
        .I4(\s_axi_rdata_i[23]_i_4_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [23]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'h80)) 
    \s_axi_rdata_i[23]_i_2 
       (.I0(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I1(\DataTx_R_reg[0]_4 ),
        .I2(\DataTx_R_reg[0]_3 ),
        .O(\s_axi_rdata_i[23]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h80)) 
    \s_axi_rdata_i[23]_i_3 
       (.I0(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I1(\DataTx_R_reg[0]_4 ),
        .I2(\DataTx_R_reg[0]_2 ),
        .O(\s_axi_rdata_i[23]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[23]_i_4 
       (.I0(\DataTx_L_reg[31] [23]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [23]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[23]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[24]_i_1 
       (.I0(\DataTx_L_reg[31] [24]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [24]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [24]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[25]_i_1 
       (.I0(\DataTx_L_reg[31] [25]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [25]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [25]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[26]_i_1 
       (.I0(\DataTx_L_reg[31] [26]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [26]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [26]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[27]_i_1 
       (.I0(\DataTx_L_reg[31] [27]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [27]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [27]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[28]_i_1 
       (.I0(\DataTx_L_reg[31] [28]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [28]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [28]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[29]_i_1 
       (.I0(\DataTx_L_reg[31] [29]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [29]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [29]));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[2]_i_1 
       (.I0(\DataRx_L_reg[23] [2]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [2]),
        .I4(\s_axi_rdata_i[2]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [2]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[2]_i_2 
       (.I0(\DataTx_L_reg[31] [2]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [2]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[2]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[30]_i_1 
       (.I0(\DataTx_L_reg[31] [30]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [30]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [30]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[31]_i_2 
       (.I0(\DataTx_L_reg[31] [31]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [31]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i_reg[31] [31]));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[3]_i_1 
       (.I0(\DataRx_L_reg[23] [3]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [3]),
        .I4(\s_axi_rdata_i[3]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [3]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[3]_i_2 
       (.I0(\DataTx_L_reg[31] [3]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [3]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[3]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[4]_i_1 
       (.I0(\DataRx_L_reg[23] [4]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [4]),
        .I4(\s_axi_rdata_i[4]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [4]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[4]_i_2 
       (.I0(\DataTx_L_reg[31] [4]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [4]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[4]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[5]_i_1 
       (.I0(\DataRx_L_reg[23] [5]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [5]),
        .I4(\s_axi_rdata_i[5]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [5]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[5]_i_2 
       (.I0(\DataTx_L_reg[31] [5]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [5]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[5]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[6]_i_1 
       (.I0(\DataRx_L_reg[23] [6]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [6]),
        .I4(\s_axi_rdata_i[6]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [6]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[6]_i_2 
       (.I0(\DataTx_L_reg[31] [6]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [6]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[6]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[7]_i_1 
       (.I0(\DataRx_L_reg[23] [7]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [7]),
        .I4(\s_axi_rdata_i[7]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [7]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[7]_i_2 
       (.I0(\DataTx_L_reg[31] [7]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [7]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[7]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[8]_i_1 
       (.I0(\DataRx_L_reg[23] [8]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [8]),
        .I4(\s_axi_rdata_i[8]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [8]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[8]_i_2 
       (.I0(\DataTx_L_reg[31] [8]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [8]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[8]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'hFFFFF888)) 
    \s_axi_rdata_i[9]_i_1 
       (.I0(\DataRx_L_reg[23] [9]),
        .I1(\s_axi_rdata_i[23]_i_2_n_0 ),
        .I2(\s_axi_rdata_i[23]_i_3_n_0 ),
        .I3(\DataRx_R_reg[23] [9]),
        .I4(\s_axi_rdata_i[9]_i_2_n_0 ),
        .O(\s_axi_rdata_i_reg[31] [9]));
  LUT6 #(
    .INIT(64'hF800000088000000)) 
    \s_axi_rdata_i[9]_i_2 
       (.I0(\DataTx_L_reg[31] [9]),
        .I1(\DataTx_R_reg[0]_1 ),
        .I2(\DataTx_R_reg[31] [9]),
        .I3(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 ),
        .I4(\DataTx_R_reg[0]_4 ),
        .I5(\DataTx_R_reg[0]_0 ),
        .O(\s_axi_rdata_i[9]_i_2_n_0 ));
  LUT3 #(
    .INIT(8'hBA)) 
    s_axi_rvalid_i_i_1
       (.I0(s_axi_rvalid_i0),
        .I1(S_AXI_RREADY),
        .I2(s_axi_rvalid_i_reg_0),
        .O(s_axi_rvalid_i_reg));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h0000EA00)) 
    s_axi_rvalid_i_i_2
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] ),
        .I1(S_AXI_ARREADY_INST_0_i_1_n_0),
        .I2(\DataTx_R_reg[0]_4 ),
        .I3(Q[0]),
        .I4(Q[1]),
        .O(s_axi_rvalid_i0));
  LUT4 #(
    .INIT(16'hFFF4)) 
    \state[0]_i_1 
       (.I0(Q[1]),
        .I1(S_AXI_ARVALID),
        .I2(s_axi_bvalid_i0),
        .I3(s_axi_bvalid_i_reg_0),
        .O(D[0]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4454)) 
    \state[1]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(S_AXI_WVALID_0),
        .I3(S_AXI_ARVALID),
        .I4(\state_reg[1] ),
        .I5(s_axi_rvalid_i0),
        .O(D[1]));
endmodule

(* ORIG_REF_NAME = "axi_lite_ipif" *) 
module ip_design_zed_audio_ctrl_0_0_axi_lite_ipif
   (\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ,
    Bus_RNW_reg,
    S_AXI_RVALID,
    S_AXI_BVALID,
    data_rdy_bit_reg,
    S_AXI_AWREADY,
    S_AXI_ARREADY,
    E,
    \DataTx_L_reg[0] ,
    data_rdy_bit_reg_0,
    S_AXI_RDATA,
    S_AXI_ACLK,
    SR,
    S_AXI_ARVALID,
    S_AXI_ARESETN,
    S_AXI_BREADY,
    S_AXI_RREADY,
    S_AXI_ARADDR,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_WVALID,
    data_rdy_bit,
    Q,
    \DataTx_L_reg[31] ,
    \DataRx_R_reg[23] ,
    \DataRx_L_reg[23] ,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] );
  output \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ;
  output \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  output \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  output \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ;
  output \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ;
  output Bus_RNW_reg;
  output S_AXI_RVALID;
  output S_AXI_BVALID;
  output data_rdy_bit_reg;
  output S_AXI_AWREADY;
  output S_AXI_ARREADY;
  output [0:0]E;
  output [0:0]\DataTx_L_reg[0] ;
  output data_rdy_bit_reg_0;
  output [31:0]S_AXI_RDATA;
  input S_AXI_ACLK;
  input [0:0]SR;
  input S_AXI_ARVALID;
  input S_AXI_ARESETN;
  input S_AXI_BREADY;
  input S_AXI_RREADY;
  input [2:0]S_AXI_ARADDR;
  input [2:0]S_AXI_AWADDR;
  input S_AXI_AWVALID;
  input S_AXI_WVALID;
  input data_rdy_bit;
  input [31:0]Q;
  input [31:0]\DataTx_L_reg[31] ;
  input [23:0]\DataRx_R_reg[23] ;
  input [23:0]\DataRx_L_reg[23] ;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;

  wire Bus_RNW_reg;
  wire [23:0]\DataRx_L_reg[23] ;
  wire [23:0]\DataRx_R_reg[23] ;
  wire [0:0]\DataTx_L_reg[0] ;
  wire [31:0]\DataTx_L_reg[31] ;
  wire [0:0]E;
  wire \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  wire [31:0]Q;
  wire [0:0]SR;
  wire S_AXI_ACLK;
  wire [2:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARVALID;
  wire [2:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire [31:0]S_AXI_RDATA;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire S_AXI_WVALID;
  wire data_rdy_bit;
  wire data_rdy_bit_reg;
  wire data_rdy_bit_reg_0;

  ip_design_zed_audio_ctrl_0_0_slave_attachment I_SLAVE_ATTACHMENT
       (.\DataRx_L_reg[23] (\DataRx_L_reg[23] ),
        .\DataRx_R_reg[23] (\DataRx_R_reg[23] ),
        .\DataTx_L_reg[0] (\DataTx_L_reg[0] ),
        .\DataTx_L_reg[31] (\DataTx_L_reg[31] ),
        .\DataTx_R_reg[0] (\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ),
        .\DataTx_R_reg[0]_0 (\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .\DataTx_R_reg[0]_1 (\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .\DataTx_R_reg[0]_2 (\GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ),
        .\DataTx_R_reg[0]_3 (\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ),
        .\DataTx_R_reg[0]_4 (Bus_RNW_reg),
        .E(E),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] (\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ),
        .Q(Q),
        .SR(SR),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_WVALID(S_AXI_WVALID),
        .data_rdy_bit(data_rdy_bit),
        .data_rdy_bit_reg(data_rdy_bit_reg),
        .data_rdy_bit_reg_0(data_rdy_bit_reg_0));
endmodule

(* ORIG_REF_NAME = "i2s_ctrl" *) 
module ip_design_zed_audio_ctrl_0_0_i2s_ctrl
   (out,
    S_AXI_RDATA,
    S_AXI_AWREADY,
    S_AXI_ARREADY,
    S_AXI_BVALID,
    S_AXI_RVALID,
    SDATA_O,
    S_AXI_ACLK,
    SDATA_I,
    S_AXI_WDATA,
    S_AXI_ARVALID,
    S_AXI_ARESETN,
    S_AXI_BREADY,
    S_AXI_RREADY,
    S_AXI_ARADDR,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_WVALID);
  output [1:0]out;
  output [31:0]S_AXI_RDATA;
  output S_AXI_AWREADY;
  output S_AXI_ARREADY;
  output S_AXI_BVALID;
  output S_AXI_RVALID;
  output SDATA_O;
  input S_AXI_ACLK;
  input SDATA_I;
  input [31:0]S_AXI_WDATA;
  input S_AXI_ARVALID;
  input S_AXI_ARESETN;
  input S_AXI_BREADY;
  input S_AXI_RREADY;
  input [2:0]S_AXI_ARADDR;
  input [2:0]S_AXI_AWADDR;
  input S_AXI_AWVALID;
  input S_AXI_WVALID;

  wire AXI_LITE_IPIF_I_n_11;
  wire AXI_LITE_IPIF_I_n_12;
  wire AXI_LITE_IPIF_I_n_13;
  wire AXI_LITE_IPIF_I_n_8;
  wire [23:0]DataRx_L;
  wire [23:0]DataRx_R;
  wire [31:0]DataTx_L;
  wire [31:0]DataTx_R;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg ;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  wire \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ;
  wire SDATA_I;
  wire SDATA_O;
  wire S_AXI_ACLK;
  wire [2:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARVALID;
  wire [2:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire [31:0]S_AXI_RDATA;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire [31:0]S_AXI_WDATA;
  wire S_AXI_WVALID;
  wire USER_LOGIC_I_n_0;
  wire USER_LOGIC_I_n_69;
  wire data_rdy_bit;
  wire [1:0]out;

  ip_design_zed_audio_ctrl_0_0_axi_lite_ipif AXI_LITE_IPIF_I
       (.Bus_RNW_reg(\I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg ),
        .\DataRx_L_reg[23] (DataRx_L),
        .\DataRx_R_reg[23] (DataRx_R),
        .\DataTx_L_reg[0] (AXI_LITE_IPIF_I_n_12),
        .\DataTx_L_reg[31] (DataTx_L),
        .E(AXI_LITE_IPIF_I_n_11),
        .\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] (USER_LOGIC_I_n_0),
        .Q(DataTx_R),
        .SR(USER_LOGIC_I_n_69),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_RDATA(S_AXI_RDATA),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_WVALID(S_AXI_WVALID),
        .data_rdy_bit(data_rdy_bit),
        .data_rdy_bit_reg(AXI_LITE_IPIF_I_n_8),
        .data_rdy_bit_reg_0(AXI_LITE_IPIF_I_n_13));
  ip_design_zed_audio_ctrl_0_0_user_logic USER_LOGIC_I
       (.Bus_RNW_reg(\I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg ),
        .E(AXI_LITE_IPIF_I_n_12),
        .\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] (AXI_LITE_IPIF_I_n_8),
        .\GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] (AXI_LITE_IPIF_I_n_11),
        .\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg (\I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] (AXI_LITE_IPIF_I_n_13),
        .Q(out),
        .SDATA_I(SDATA_I),
        .SDATA_O(SDATA_O),
        .SR(USER_LOGIC_I_n_69),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_WDATA(S_AXI_WDATA),
        .data_rdy_bit(data_rdy_bit),
        .\s_axi_rdata_i_reg[23] (DataRx_L),
        .\s_axi_rdata_i_reg[23]_0 (DataRx_R),
        .\s_axi_rdata_i_reg[24] (USER_LOGIC_I_n_0),
        .\s_axi_rdata_i_reg[31] (DataTx_L),
        .\s_axi_rdata_i_reg[31]_0 (DataTx_R));
endmodule

(* ORIG_REF_NAME = "iis_deser" *) 
module ip_design_zed_audio_ctrl_0_0_iis_deser
   (lrclk_d1,
    sclk_d1,
    E,
    \rdata_reg_reg[23]_0 ,
    \bit_cntr_reg[4]_0 ,
    sdata_reg_reg,
    \FSM_onehot_iis_state_reg[0] ,
    data_rdy_bit_reg,
    \FSM_onehot_iis_state_reg[0]_0 ,
    \DataRx_L_reg[23] ,
    \DataRx_R_reg[23] ,
    Q,
    S_AXI_ACLK,
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ,
    out,
    data_rdy_bit,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ,
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ,
    S_AXI_ARESETN,
    SDATA_I);
  output lrclk_d1;
  output sclk_d1;
  output [0:0]E;
  output [0:0]\rdata_reg_reg[23]_0 ;
  output [0:0]\bit_cntr_reg[4]_0 ;
  output sdata_reg_reg;
  output \FSM_onehot_iis_state_reg[0] ;
  output data_rdy_bit_reg;
  output \FSM_onehot_iis_state_reg[0]_0 ;
  output [23:0]\DataRx_L_reg[23] ;
  output [23:0]\DataRx_R_reg[23] ;
  input [1:0]Q;
  input S_AXI_ACLK;
  input \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  input \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  input [2:0]out;
  input data_rdy_bit;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  input \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ;
  input S_AXI_ARESETN;
  input SDATA_I;

  wire [23:0]\DataRx_L_reg[23] ;
  wire [23:0]\DataRx_R_reg[23] ;
  wire [0:0]E;
  wire \FSM_onehot_iis_state_reg[0] ;
  wire \FSM_onehot_iis_state_reg[0]_0 ;
  wire \FSM_sequential_iis_state[0]_i_1_n_0 ;
  wire \FSM_sequential_iis_state[1]_i_1_n_0 ;
  wire \FSM_sequential_iis_state[2]_i_1_n_0 ;
  wire \FSM_sequential_iis_state[2]_i_2_n_0 ;
  wire \FSM_sequential_iis_state[2]_i_3_n_0 ;
  wire \FSM_sequential_iis_state[2]_i_4_n_0 ;
  wire \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ;
  wire \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  wire [1:0]Q;
  wire SDATA_I;
  wire S_AXI_ACLK;
  wire S_AXI_ARESETN;
  wire \bit_cntr[4]_i_1_n_0 ;
  wire [0:0]\bit_cntr_reg[4]_0 ;
  wire [4:0]bit_cntr_reg__0;
  wire bit_rdy;
  wire data_rdy_bit;
  wire data_rdy_bit_i_4_n_0;
  wire data_rdy_bit_reg;
  wire eqOp;
  (* RTL_KEEP = "yes" *) wire [2:0]iis_state;
  wire ldata_reg;
  wire ldata_reg0;
  wire lrclk_d1;
  wire [2:0]out;
  wire [4:0]plusOp__1;
  wire rdata_reg0;
  wire [0:0]\rdata_reg_reg[23]_0 ;
  wire sclk_d1;
  wire sdata_reg_reg;

  LUT4 #(
    .INIT(16'h0080)) 
    \DataRx_L[23]_i_1 
       (.I0(eqOp),
        .I1(iis_state[2]),
        .I2(iis_state[1]),
        .I3(iis_state[0]),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'h00000020)) 
    \DataRx_L[23]_i_2 
       (.I0(bit_cntr_reg__0[3]),
        .I1(bit_cntr_reg__0[0]),
        .I2(bit_cntr_reg__0[4]),
        .I3(bit_cntr_reg__0[1]),
        .I4(bit_cntr_reg__0[2]),
        .O(eqOp));
  LUT3 #(
    .INIT(8'h40)) 
    \FSM_onehot_iis_state[4]_i_3 
       (.I0(lrclk_d1),
        .I1(Q[1]),
        .I2(out[1]),
        .O(\FSM_onehot_iis_state_reg[0]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hDF)) 
    \FSM_onehot_iis_state[4]_i_5 
       (.I0(lrclk_d1),
        .I1(Q[1]),
        .I2(out[0]),
        .O(\FSM_onehot_iis_state_reg[0] ));
  LUT6 #(
    .INIT(64'h75777F7745444044)) 
    \FSM_sequential_iis_state[0]_i_1 
       (.I0(iis_state[0]),
        .I1(\FSM_sequential_iis_state[2]_i_2_n_0 ),
        .I2(iis_state[1]),
        .I3(iis_state[2]),
        .I4(\FSM_sequential_iis_state[2]_i_3_n_0 ),
        .I5(iis_state[0]),
        .O(\FSM_sequential_iis_state[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h3A7B3F7B0A480048)) 
    \FSM_sequential_iis_state[1]_i_1 
       (.I0(iis_state[0]),
        .I1(\FSM_sequential_iis_state[2]_i_2_n_0 ),
        .I2(iis_state[1]),
        .I3(iis_state[2]),
        .I4(\FSM_sequential_iis_state[2]_i_3_n_0 ),
        .I5(iis_state[1]),
        .O(\FSM_sequential_iis_state[1]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h3FB33FB30F800080)) 
    \FSM_sequential_iis_state[2]_i_1 
       (.I0(iis_state[0]),
        .I1(\FSM_sequential_iis_state[2]_i_2_n_0 ),
        .I2(iis_state[1]),
        .I3(iis_state[2]),
        .I4(\FSM_sequential_iis_state[2]_i_3_n_0 ),
        .I5(iis_state[2]),
        .O(\FSM_sequential_iis_state[2]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFA33FF000A330F)) 
    \FSM_sequential_iis_state[2]_i_2 
       (.I0(bit_rdy),
        .I1(\FSM_sequential_iis_state[2]_i_4_n_0 ),
        .I2(iis_state[2]),
        .I3(iis_state[0]),
        .I4(iis_state[1]),
        .I5(eqOp),
        .O(\FSM_sequential_iis_state[2]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h22A222A2EEAE22A2)) 
    \FSM_sequential_iis_state[2]_i_3 
       (.I0(bit_rdy),
        .I1(iis_state[2]),
        .I2(iis_state[0]),
        .I3(iis_state[1]),
        .I4(Q[1]),
        .I5(lrclk_d1),
        .O(\FSM_sequential_iis_state[2]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \FSM_sequential_iis_state[2]_i_4 
       (.I0(Q[1]),
        .I1(lrclk_d1),
        .O(\FSM_sequential_iis_state[2]_i_4_n_0 ));
  (* FSM_ENCODED_STATES = "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_sequential_iis_state_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(\FSM_sequential_iis_state[0]_i_1_n_0 ),
        .Q(iis_state[0]),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_sequential_iis_state_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(\FSM_sequential_iis_state[1]_i_1_n_0 ),
        .Q(iis_state[1]),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_sequential_iis_state_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(\FSM_sequential_iis_state[2]_i_1_n_0 ),
        .Q(iis_state[2]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \bit_cntr[0]_i_1 
       (.I0(bit_cntr_reg__0[0]),
        .O(plusOp__1[0]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \bit_cntr[1]_i_1 
       (.I0(bit_cntr_reg__0[0]),
        .I1(bit_cntr_reg__0[1]),
        .O(plusOp__1[1]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \bit_cntr[2]_i_1 
       (.I0(bit_cntr_reg__0[1]),
        .I1(bit_cntr_reg__0[0]),
        .I2(bit_cntr_reg__0[2]),
        .O(plusOp__1[2]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT4 #(
    .INIT(16'h6CCC)) 
    \bit_cntr[3]_i_1 
       (.I0(bit_cntr_reg__0[1]),
        .I1(bit_cntr_reg__0[3]),
        .I2(bit_cntr_reg__0[0]),
        .I3(bit_cntr_reg__0[2]),
        .O(plusOp__1[3]));
  LUT3 #(
    .INIT(8'hD7)) 
    \bit_cntr[4]_i_1 
       (.I0(iis_state[1]),
        .I1(iis_state[0]),
        .I2(iis_state[2]),
        .O(\bit_cntr[4]_i_1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \bit_cntr[4]_i_2 
       (.I0(Q[0]),
        .I1(sclk_d1),
        .O(bit_rdy));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \bit_cntr[4]_i_2__0 
       (.I0(sclk_d1),
        .I1(Q[0]),
        .O(\bit_cntr_reg[4]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'h78F0F0F0)) 
    \bit_cntr[4]_i_3 
       (.I0(bit_cntr_reg__0[3]),
        .I1(bit_cntr_reg__0[2]),
        .I2(bit_cntr_reg__0[4]),
        .I3(bit_cntr_reg__0[1]),
        .I4(bit_cntr_reg__0[0]),
        .O(plusOp__1[4]));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(bit_rdy),
        .D(plusOp__1[0]),
        .Q(bit_cntr_reg__0[0]),
        .R(\bit_cntr[4]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(bit_rdy),
        .D(plusOp__1[1]),
        .Q(bit_cntr_reg__0[1]),
        .R(\bit_cntr[4]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(bit_rdy),
        .D(plusOp__1[2]),
        .Q(bit_cntr_reg__0[2]),
        .R(\bit_cntr[4]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(bit_rdy),
        .D(plusOp__1[3]),
        .Q(bit_cntr_reg__0[3]),
        .R(\bit_cntr[4]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(bit_rdy),
        .D(plusOp__1[4]),
        .Q(bit_cntr_reg__0[4]),
        .R(\bit_cntr[4]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hCC00EA0000000000)) 
    data_rdy_bit_i_1
       (.I0(data_rdy_bit),
        .I1(E),
        .I2(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ),
        .I3(\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ),
        .I4(data_rdy_bit_i_4_n_0),
        .I5(S_AXI_ARESETN),
        .O(data_rdy_bit_reg));
  LUT6 #(
    .INIT(64'h0000000090000000)) 
    data_rdy_bit_i_4
       (.I0(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .I1(\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .I2(eqOp),
        .I3(iis_state[2]),
        .I4(iis_state[1]),
        .I5(iis_state[0]),
        .O(data_rdy_bit_i_4_n_0));
  LUT3 #(
    .INIT(8'h01)) 
    \ldata_reg[23]_i_1 
       (.I0(iis_state[1]),
        .I1(iis_state[0]),
        .I2(iis_state[2]),
        .O(ldata_reg));
  LUT5 #(
    .INIT(32'h00004000)) 
    \ldata_reg[23]_i_2 
       (.I0(iis_state[2]),
        .I1(iis_state[0]),
        .I2(iis_state[1]),
        .I3(Q[0]),
        .I4(sclk_d1),
        .O(ldata_reg0));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(SDATA_I),
        .Q(\DataRx_L_reg[23] [0]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [9]),
        .Q(\DataRx_L_reg[23] [10]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [10]),
        .Q(\DataRx_L_reg[23] [11]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [11]),
        .Q(\DataRx_L_reg[23] [12]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [12]),
        .Q(\DataRx_L_reg[23] [13]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [13]),
        .Q(\DataRx_L_reg[23] [14]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [14]),
        .Q(\DataRx_L_reg[23] [15]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [15]),
        .Q(\DataRx_L_reg[23] [16]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [16]),
        .Q(\DataRx_L_reg[23] [17]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [17]),
        .Q(\DataRx_L_reg[23] [18]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [18]),
        .Q(\DataRx_L_reg[23] [19]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [0]),
        .Q(\DataRx_L_reg[23] [1]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [19]),
        .Q(\DataRx_L_reg[23] [20]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [20]),
        .Q(\DataRx_L_reg[23] [21]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [21]),
        .Q(\DataRx_L_reg[23] [22]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [22]),
        .Q(\DataRx_L_reg[23] [23]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [1]),
        .Q(\DataRx_L_reg[23] [2]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [2]),
        .Q(\DataRx_L_reg[23] [3]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [3]),
        .Q(\DataRx_L_reg[23] [4]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [4]),
        .Q(\DataRx_L_reg[23] [5]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [5]),
        .Q(\DataRx_L_reg[23] [6]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [6]),
        .Q(\DataRx_L_reg[23] [7]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [7]),
        .Q(\DataRx_L_reg[23] [8]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(ldata_reg0),
        .D(\DataRx_L_reg[23] [8]),
        .Q(\DataRx_L_reg[23] [9]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    lrclk_d1_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(Q[1]),
        .Q(lrclk_d1),
        .R(1'b0));
  LUT5 #(
    .INIT(32'h00004000)) 
    \rdata_reg[23]_i_1 
       (.I0(iis_state[0]),
        .I1(iis_state[1]),
        .I2(iis_state[2]),
        .I3(Q[0]),
        .I4(sclk_d1),
        .O(rdata_reg0));
  LUT6 #(
    .INIT(64'h4040FF4040404040)) 
    \rdata_reg[23]_i_1__0 
       (.I0(Q[0]),
        .I1(sclk_d1),
        .I2(out[2]),
        .I3(out[0]),
        .I4(Q[1]),
        .I5(lrclk_d1),
        .O(\rdata_reg_reg[23]_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(SDATA_I),
        .Q(\DataRx_R_reg[23] [0]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [9]),
        .Q(\DataRx_R_reg[23] [10]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [10]),
        .Q(\DataRx_R_reg[23] [11]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [11]),
        .Q(\DataRx_R_reg[23] [12]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [12]),
        .Q(\DataRx_R_reg[23] [13]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [13]),
        .Q(\DataRx_R_reg[23] [14]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [14]),
        .Q(\DataRx_R_reg[23] [15]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [15]),
        .Q(\DataRx_R_reg[23] [16]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [16]),
        .Q(\DataRx_R_reg[23] [17]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [17]),
        .Q(\DataRx_R_reg[23] [18]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [18]),
        .Q(\DataRx_R_reg[23] [19]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [0]),
        .Q(\DataRx_R_reg[23] [1]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [19]),
        .Q(\DataRx_R_reg[23] [20]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [20]),
        .Q(\DataRx_R_reg[23] [21]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [21]),
        .Q(\DataRx_R_reg[23] [22]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [22]),
        .Q(\DataRx_R_reg[23] [23]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [1]),
        .Q(\DataRx_R_reg[23] [2]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [2]),
        .Q(\DataRx_R_reg[23] [3]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [3]),
        .Q(\DataRx_R_reg[23] [4]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [4]),
        .Q(\DataRx_R_reg[23] [5]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [5]),
        .Q(\DataRx_R_reg[23] [6]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [6]),
        .Q(\DataRx_R_reg[23] [7]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [7]),
        .Q(\DataRx_R_reg[23] [8]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(rdata_reg0),
        .D(\DataRx_R_reg[23] [8]),
        .Q(\DataRx_R_reg[23] [9]),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    sclk_d1_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(Q[0]),
        .Q(sclk_d1),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT2 #(
    .INIT(4'hB)) 
    sdata_reg_i_2
       (.I0(Q[0]),
        .I1(sclk_d1),
        .O(sdata_reg_reg));
endmodule

(* ORIG_REF_NAME = "iis_ser" *) 
module ip_design_zed_audio_ctrl_0_0_iis_ser
   (SDATA_O,
    out,
    S_AXI_ACLK,
    Q,
    sclk_d1,
    lrclk_d1,
    \DataTx_L_reg[23] ,
    \DataTx_R_reg[23] ,
    \clk_cntr_reg[4] ,
    lrclk_d1_reg,
    lrclk_d1_reg_0,
    E,
    sclk_d1_reg);
  output SDATA_O;
  output [2:0]out;
  input S_AXI_ACLK;
  input [1:0]Q;
  input sclk_d1;
  input lrclk_d1;
  input [23:0]\DataTx_L_reg[23] ;
  input [23:0]\DataTx_R_reg[23] ;
  input \clk_cntr_reg[4] ;
  input lrclk_d1_reg;
  input lrclk_d1_reg_0;
  input [0:0]E;
  input [0:0]sclk_d1_reg;

  wire [23:0]\DataTx_L_reg[23] ;
  wire [23:0]\DataTx_R_reg[23] ;
  wire [0:0]E;
  wire \FSM_onehot_iis_state[1]_i_1_n_0 ;
  wire \FSM_onehot_iis_state[2]_i_1_n_0 ;
  wire \FSM_onehot_iis_state[3]_i_1_n_0 ;
  wire \FSM_onehot_iis_state[4]_i_1_n_0 ;
  wire \FSM_onehot_iis_state[4]_i_2_n_0 ;
  wire [1:0]Q;
  wire SDATA_O;
  wire S_AXI_ACLK;
  wire \bit_cntr[4]_i_1__0_n_0 ;
  wire [4:0]bit_cntr_reg__0;
  wire \clk_cntr_reg[4] ;
  wire eqOp;
  (* RTL_KEEP = "yes" *) wire ldata_reg;
  wire \ldata_reg[0]_i_1_n_0 ;
  wire \ldata_reg[10]_i_1_n_0 ;
  wire \ldata_reg[11]_i_1_n_0 ;
  wire \ldata_reg[12]_i_1_n_0 ;
  wire \ldata_reg[13]_i_1_n_0 ;
  wire \ldata_reg[14]_i_1_n_0 ;
  wire \ldata_reg[15]_i_1_n_0 ;
  wire \ldata_reg[16]_i_1_n_0 ;
  wire \ldata_reg[17]_i_1_n_0 ;
  wire \ldata_reg[18]_i_1_n_0 ;
  wire \ldata_reg[19]_i_1_n_0 ;
  wire \ldata_reg[1]_i_1_n_0 ;
  wire \ldata_reg[20]_i_1_n_0 ;
  wire \ldata_reg[21]_i_1_n_0 ;
  wire \ldata_reg[22]_i_1_n_0 ;
  wire \ldata_reg[23]_i_1__0_n_0 ;
  wire \ldata_reg[23]_i_2__0_n_0 ;
  wire \ldata_reg[2]_i_1_n_0 ;
  wire \ldata_reg[3]_i_1_n_0 ;
  wire \ldata_reg[4]_i_1_n_0 ;
  wire \ldata_reg[5]_i_1_n_0 ;
  wire \ldata_reg[6]_i_1_n_0 ;
  wire \ldata_reg[7]_i_1_n_0 ;
  wire \ldata_reg[8]_i_1_n_0 ;
  wire \ldata_reg[9]_i_1_n_0 ;
  wire \ldata_reg_reg_n_0_[0] ;
  wire \ldata_reg_reg_n_0_[10] ;
  wire \ldata_reg_reg_n_0_[11] ;
  wire \ldata_reg_reg_n_0_[12] ;
  wire \ldata_reg_reg_n_0_[13] ;
  wire \ldata_reg_reg_n_0_[14] ;
  wire \ldata_reg_reg_n_0_[15] ;
  wire \ldata_reg_reg_n_0_[16] ;
  wire \ldata_reg_reg_n_0_[17] ;
  wire \ldata_reg_reg_n_0_[18] ;
  wire \ldata_reg_reg_n_0_[19] ;
  wire \ldata_reg_reg_n_0_[1] ;
  wire \ldata_reg_reg_n_0_[20] ;
  wire \ldata_reg_reg_n_0_[21] ;
  wire \ldata_reg_reg_n_0_[22] ;
  wire \ldata_reg_reg_n_0_[2] ;
  wire \ldata_reg_reg_n_0_[3] ;
  wire \ldata_reg_reg_n_0_[4] ;
  wire \ldata_reg_reg_n_0_[5] ;
  wire \ldata_reg_reg_n_0_[6] ;
  wire \ldata_reg_reg_n_0_[7] ;
  wire \ldata_reg_reg_n_0_[8] ;
  wire \ldata_reg_reg_n_0_[9] ;
  wire lrclk_d1;
  wire lrclk_d1_reg;
  wire lrclk_d1_reg_0;
  (* RTL_KEEP = "yes" *) wire [2:0]out;
  (* RTL_KEEP = "yes" *) wire p_0_in2_in;
  wire [23:0]p_1_in;
  wire p_2_in;
  wire [4:0]plusOp__2;
  wire \rdata_reg_reg_n_0_[0] ;
  wire \rdata_reg_reg_n_0_[10] ;
  wire \rdata_reg_reg_n_0_[11] ;
  wire \rdata_reg_reg_n_0_[12] ;
  wire \rdata_reg_reg_n_0_[13] ;
  wire \rdata_reg_reg_n_0_[14] ;
  wire \rdata_reg_reg_n_0_[15] ;
  wire \rdata_reg_reg_n_0_[16] ;
  wire \rdata_reg_reg_n_0_[17] ;
  wire \rdata_reg_reg_n_0_[18] ;
  wire \rdata_reg_reg_n_0_[19] ;
  wire \rdata_reg_reg_n_0_[1] ;
  wire \rdata_reg_reg_n_0_[20] ;
  wire \rdata_reg_reg_n_0_[21] ;
  wire \rdata_reg_reg_n_0_[22] ;
  wire \rdata_reg_reg_n_0_[23] ;
  wire \rdata_reg_reg_n_0_[2] ;
  wire \rdata_reg_reg_n_0_[3] ;
  wire \rdata_reg_reg_n_0_[4] ;
  wire \rdata_reg_reg_n_0_[5] ;
  wire \rdata_reg_reg_n_0_[6] ;
  wire \rdata_reg_reg_n_0_[7] ;
  wire \rdata_reg_reg_n_0_[8] ;
  wire \rdata_reg_reg_n_0_[9] ;
  wire sclk_d1;
  wire [0:0]sclk_d1_reg;
  wire sdata_reg_i_1_n_0;

  LUT5 #(
    .INIT(32'hAAAAAABA)) 
    \FSM_onehot_iis_state[1]_i_1 
       (.I0(ldata_reg),
        .I1(p_0_in2_in),
        .I2(out[2]),
        .I3(out[1]),
        .I4(out[0]),
        .O(\FSM_onehot_iis_state[1]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h0ACA)) 
    \FSM_onehot_iis_state[2]_i_1 
       (.I0(p_0_in2_in),
        .I1(out[0]),
        .I2(\FSM_onehot_iis_state[4]_i_1_n_0 ),
        .I3(ldata_reg),
        .O(\FSM_onehot_iis_state[2]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h02)) 
    \FSM_onehot_iis_state[3]_i_1 
       (.I0(p_0_in2_in),
        .I1(ldata_reg),
        .I2(out[0]),
        .O(\FSM_onehot_iis_state[3]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFFEEFFFFFEEEFFFF)) 
    \FSM_onehot_iis_state[4]_i_1 
       (.I0(ldata_reg),
        .I1(lrclk_d1_reg),
        .I2(out[2]),
        .I3(eqOp),
        .I4(lrclk_d1_reg_0),
        .I5(p_0_in2_in),
        .O(\FSM_onehot_iis_state[4]_i_1_n_0 ));
  LUT4 #(
    .INIT(16'h0010)) 
    \FSM_onehot_iis_state[4]_i_2 
       (.I0(ldata_reg),
        .I1(p_0_in2_in),
        .I2(out[1]),
        .I3(out[0]),
        .O(\FSM_onehot_iis_state[4]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT5 #(
    .INIT(32'h02000000)) 
    \FSM_onehot_iis_state[4]_i_4 
       (.I0(bit_cntr_reg__0[0]),
        .I1(bit_cntr_reg__0[1]),
        .I2(bit_cntr_reg__0[2]),
        .I3(bit_cntr_reg__0[4]),
        .I4(bit_cntr_reg__0[3]),
        .O(eqOp));
  (* FSM_ENCODED_STATES = "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b1)) 
    \FSM_onehot_iis_state_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\FSM_onehot_iis_state[4]_i_1_n_0 ),
        .D(1'b0),
        .Q(ldata_reg),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_iis_state_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\FSM_onehot_iis_state[4]_i_1_n_0 ),
        .D(\FSM_onehot_iis_state[1]_i_1_n_0 ),
        .Q(out[0]),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_iis_state_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(\FSM_onehot_iis_state[2]_i_1_n_0 ),
        .Q(p_0_in2_in),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_iis_state_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\FSM_onehot_iis_state[4]_i_1_n_0 ),
        .D(\FSM_onehot_iis_state[3]_i_1_n_0 ),
        .Q(out[1]),
        .R(1'b0));
  (* FSM_ENCODED_STATES = "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000" *) 
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_iis_state_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(\FSM_onehot_iis_state[4]_i_1_n_0 ),
        .D(\FSM_onehot_iis_state[4]_i_2_n_0 ),
        .Q(out[2]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \bit_cntr[0]_i_1__0 
       (.I0(bit_cntr_reg__0[0]),
        .O(plusOp__2[0]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \bit_cntr[1]_i_1__0 
       (.I0(bit_cntr_reg__0[0]),
        .I1(bit_cntr_reg__0[1]),
        .O(plusOp__2[1]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \bit_cntr[2]_i_1__0 
       (.I0(bit_cntr_reg__0[1]),
        .I1(bit_cntr_reg__0[0]),
        .I2(bit_cntr_reg__0[2]),
        .O(plusOp__2[2]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \bit_cntr[3]_i_1__0 
       (.I0(bit_cntr_reg__0[2]),
        .I1(bit_cntr_reg__0[0]),
        .I2(bit_cntr_reg__0[1]),
        .I3(bit_cntr_reg__0[3]),
        .O(plusOp__2[3]));
  LUT2 #(
    .INIT(4'h1)) 
    \bit_cntr[4]_i_1__0 
       (.I0(out[2]),
        .I1(p_0_in2_in),
        .O(\bit_cntr[4]_i_1__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT5 #(
    .INIT(32'h7FFF8000)) 
    \bit_cntr[4]_i_3__0 
       (.I0(bit_cntr_reg__0[3]),
        .I1(bit_cntr_reg__0[1]),
        .I2(bit_cntr_reg__0[0]),
        .I3(bit_cntr_reg__0[2]),
        .I4(bit_cntr_reg__0[4]),
        .O(plusOp__2[4]));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(sclk_d1_reg),
        .D(plusOp__2[0]),
        .Q(bit_cntr_reg__0[0]),
        .R(\bit_cntr[4]_i_1__0_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(sclk_d1_reg),
        .D(plusOp__2[1]),
        .Q(bit_cntr_reg__0[1]),
        .R(\bit_cntr[4]_i_1__0_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(sclk_d1_reg),
        .D(plusOp__2[2]),
        .Q(bit_cntr_reg__0[2]),
        .R(\bit_cntr[4]_i_1__0_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(sclk_d1_reg),
        .D(plusOp__2[3]),
        .Q(bit_cntr_reg__0[3]),
        .R(\bit_cntr[4]_i_1__0_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \bit_cntr_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(sclk_d1_reg),
        .D(plusOp__2[4]),
        .Q(bit_cntr_reg__0[4]),
        .R(\bit_cntr[4]_i_1__0_n_0 ));
  LUT4 #(
    .INIT(16'h0800)) 
    \ldata_reg[0]_i_1 
       (.I0(\DataTx_L_reg[23] [0]),
        .I1(out[0]),
        .I2(Q[1]),
        .I3(lrclk_d1),
        .O(\ldata_reg[0]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[10]_i_1 
       (.I0(\ldata_reg_reg_n_0_[9] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [10]),
        .O(\ldata_reg[10]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[11]_i_1 
       (.I0(\ldata_reg_reg_n_0_[10] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [11]),
        .O(\ldata_reg[11]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[12]_i_1 
       (.I0(\ldata_reg_reg_n_0_[11] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [12]),
        .O(\ldata_reg[12]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[13]_i_1 
       (.I0(\ldata_reg_reg_n_0_[12] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [13]),
        .O(\ldata_reg[13]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[14]_i_1 
       (.I0(\ldata_reg_reg_n_0_[13] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [14]),
        .O(\ldata_reg[14]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[15]_i_1 
       (.I0(\ldata_reg_reg_n_0_[14] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [15]),
        .O(\ldata_reg[15]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[16]_i_1 
       (.I0(\ldata_reg_reg_n_0_[15] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [16]),
        .O(\ldata_reg[16]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[17]_i_1 
       (.I0(\ldata_reg_reg_n_0_[16] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [17]),
        .O(\ldata_reg[17]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[18]_i_1 
       (.I0(\ldata_reg_reg_n_0_[17] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [18]),
        .O(\ldata_reg[18]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[19]_i_1 
       (.I0(\ldata_reg_reg_n_0_[18] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [19]),
        .O(\ldata_reg[19]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[1]_i_1 
       (.I0(\ldata_reg_reg_n_0_[0] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [1]),
        .O(\ldata_reg[1]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[20]_i_1 
       (.I0(\ldata_reg_reg_n_0_[19] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [20]),
        .O(\ldata_reg[20]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[21]_i_1 
       (.I0(\ldata_reg_reg_n_0_[20] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [21]),
        .O(\ldata_reg[21]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[22]_i_1 
       (.I0(\ldata_reg_reg_n_0_[21] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [22]),
        .O(\ldata_reg[22]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'h2020FF2020202020)) 
    \ldata_reg[23]_i_1__0 
       (.I0(p_0_in2_in),
        .I1(Q[0]),
        .I2(sclk_d1),
        .I3(out[0]),
        .I4(Q[1]),
        .I5(lrclk_d1),
        .O(\ldata_reg[23]_i_1__0_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[23]_i_2__0 
       (.I0(\ldata_reg_reg_n_0_[22] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [23]),
        .O(\ldata_reg[23]_i_2__0_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[2]_i_1 
       (.I0(\ldata_reg_reg_n_0_[1] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [2]),
        .O(\ldata_reg[2]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[3]_i_1 
       (.I0(\ldata_reg_reg_n_0_[2] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [3]),
        .O(\ldata_reg[3]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[4]_i_1 
       (.I0(\ldata_reg_reg_n_0_[3] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [4]),
        .O(\ldata_reg[4]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[5]_i_1 
       (.I0(\ldata_reg_reg_n_0_[4] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [5]),
        .O(\ldata_reg[5]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[6]_i_1 
       (.I0(\ldata_reg_reg_n_0_[5] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [6]),
        .O(\ldata_reg[6]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[7]_i_1 
       (.I0(\ldata_reg_reg_n_0_[6] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [7]),
        .O(\ldata_reg[7]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[8]_i_1 
       (.I0(\ldata_reg_reg_n_0_[7] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [8]),
        .O(\ldata_reg[8]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \ldata_reg[9]_i_1 
       (.I0(\ldata_reg_reg_n_0_[8] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_L_reg[23] [9]),
        .O(\ldata_reg[9]_i_1_n_0 ));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[0]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[0] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[10]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[10] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[11]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[11] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[12]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[12] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[13]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[13] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[14]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[14] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[15]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[15] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[16]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[16] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[17]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[17] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[18]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[18] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[19]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[19] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[1]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[1] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[20]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[20] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[21]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[21] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[22]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[22] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[23]_i_2__0_n_0 ),
        .Q(p_2_in),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[2]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[2] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[3]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[3] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[4]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[4] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[5]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[5] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[6]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[6] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[7]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[7] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[8]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[8] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \ldata_reg_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(\ldata_reg[23]_i_1__0_n_0 ),
        .D(\ldata_reg[9]_i_1_n_0 ),
        .Q(\ldata_reg_reg_n_0_[9] ),
        .R(ldata_reg));
  LUT4 #(
    .INIT(16'h0800)) 
    \rdata_reg[0]_i_1 
       (.I0(\DataTx_R_reg[23] [0]),
        .I1(out[0]),
        .I2(Q[1]),
        .I3(lrclk_d1),
        .O(p_1_in[0]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[10]_i_1 
       (.I0(\rdata_reg_reg_n_0_[9] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [10]),
        .O(p_1_in[10]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[11]_i_1 
       (.I0(\rdata_reg_reg_n_0_[10] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [11]),
        .O(p_1_in[11]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[12]_i_1 
       (.I0(\rdata_reg_reg_n_0_[11] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [12]),
        .O(p_1_in[12]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[13]_i_1 
       (.I0(\rdata_reg_reg_n_0_[12] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [13]),
        .O(p_1_in[13]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[14]_i_1 
       (.I0(\rdata_reg_reg_n_0_[13] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [14]),
        .O(p_1_in[14]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[15]_i_1 
       (.I0(\rdata_reg_reg_n_0_[14] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [15]),
        .O(p_1_in[15]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[16]_i_1 
       (.I0(\rdata_reg_reg_n_0_[15] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [16]),
        .O(p_1_in[16]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[17]_i_1 
       (.I0(\rdata_reg_reg_n_0_[16] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [17]),
        .O(p_1_in[17]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[18]_i_1 
       (.I0(\rdata_reg_reg_n_0_[17] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [18]),
        .O(p_1_in[18]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[19]_i_1 
       (.I0(\rdata_reg_reg_n_0_[18] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [19]),
        .O(p_1_in[19]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[1]_i_1 
       (.I0(\rdata_reg_reg_n_0_[0] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [1]),
        .O(p_1_in[1]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[20]_i_1 
       (.I0(\rdata_reg_reg_n_0_[19] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [20]),
        .O(p_1_in[20]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[21]_i_1 
       (.I0(\rdata_reg_reg_n_0_[20] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [21]),
        .O(p_1_in[21]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[22]_i_1 
       (.I0(\rdata_reg_reg_n_0_[21] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [22]),
        .O(p_1_in[22]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[23]_i_2 
       (.I0(\rdata_reg_reg_n_0_[22] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [23]),
        .O(p_1_in[23]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[2]_i_1 
       (.I0(\rdata_reg_reg_n_0_[1] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [2]),
        .O(p_1_in[2]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[3]_i_1 
       (.I0(\rdata_reg_reg_n_0_[2] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [3]),
        .O(p_1_in[3]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[4]_i_1 
       (.I0(\rdata_reg_reg_n_0_[3] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [4]),
        .O(p_1_in[4]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[5]_i_1 
       (.I0(\rdata_reg_reg_n_0_[4] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [5]),
        .O(p_1_in[5]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[6]_i_1 
       (.I0(\rdata_reg_reg_n_0_[5] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [6]),
        .O(p_1_in[6]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[7]_i_1 
       (.I0(\rdata_reg_reg_n_0_[6] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [7]),
        .O(p_1_in[7]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[8]_i_1 
       (.I0(\rdata_reg_reg_n_0_[7] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [8]),
        .O(p_1_in[8]));
  LUT5 #(
    .INIT(32'hAEAAA2AA)) 
    \rdata_reg[9]_i_1 
       (.I0(\rdata_reg_reg_n_0_[8] ),
        .I1(lrclk_d1),
        .I2(Q[1]),
        .I3(out[0]),
        .I4(\DataTx_R_reg[23] [9]),
        .O(p_1_in[9]));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[0]),
        .Q(\rdata_reg_reg_n_0_[0] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[10]),
        .Q(\rdata_reg_reg_n_0_[10] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[11]),
        .Q(\rdata_reg_reg_n_0_[11] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[12]),
        .Q(\rdata_reg_reg_n_0_[12] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[13]),
        .Q(\rdata_reg_reg_n_0_[13] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[14]),
        .Q(\rdata_reg_reg_n_0_[14] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[15]),
        .Q(\rdata_reg_reg_n_0_[15] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[16]),
        .Q(\rdata_reg_reg_n_0_[16] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[17]),
        .Q(\rdata_reg_reg_n_0_[17] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[18]),
        .Q(\rdata_reg_reg_n_0_[18] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[19]),
        .Q(\rdata_reg_reg_n_0_[19] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[1]),
        .Q(\rdata_reg_reg_n_0_[1] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[20]),
        .Q(\rdata_reg_reg_n_0_[20] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[21]),
        .Q(\rdata_reg_reg_n_0_[21] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[22]),
        .Q(\rdata_reg_reg_n_0_[22] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[23]),
        .Q(\rdata_reg_reg_n_0_[23] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[2]),
        .Q(\rdata_reg_reg_n_0_[2] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[3]),
        .Q(\rdata_reg_reg_n_0_[3] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[4]),
        .Q(\rdata_reg_reg_n_0_[4] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[5]),
        .Q(\rdata_reg_reg_n_0_[5] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[6]),
        .Q(\rdata_reg_reg_n_0_[6] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[7]),
        .Q(\rdata_reg_reg_n_0_[7] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[8]),
        .Q(\rdata_reg_reg_n_0_[8] ),
        .R(ldata_reg));
  FDRE #(
    .INIT(1'b0)) 
    \rdata_reg_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(p_1_in[9]),
        .Q(\rdata_reg_reg_n_0_[9] ),
        .R(ldata_reg));
  LUT6 #(
    .INIT(64'hFFFFCCAF0000CCA0)) 
    sdata_reg_i_1
       (.I0(\rdata_reg_reg_n_0_[23] ),
        .I1(p_2_in),
        .I2(out[2]),
        .I3(p_0_in2_in),
        .I4(\clk_cntr_reg[4] ),
        .I5(SDATA_O),
        .O(sdata_reg_i_1_n_0));
  FDRE #(
    .INIT(1'b0)) 
    sdata_reg_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(sdata_reg_i_1_n_0),
        .Q(SDATA_O),
        .R(ldata_reg));
endmodule

(* ORIG_REF_NAME = "slave_attachment" *) 
module ip_design_zed_audio_ctrl_0_0_slave_attachment
   (\DataTx_R_reg[0] ,
    \DataTx_R_reg[0]_0 ,
    \DataTx_R_reg[0]_1 ,
    \DataTx_R_reg[0]_2 ,
    \DataTx_R_reg[0]_3 ,
    \DataTx_R_reg[0]_4 ,
    S_AXI_RVALID,
    S_AXI_BVALID,
    data_rdy_bit_reg,
    S_AXI_AWREADY,
    S_AXI_ARREADY,
    E,
    \DataTx_L_reg[0] ,
    data_rdy_bit_reg_0,
    S_AXI_RDATA,
    S_AXI_ACLK,
    SR,
    S_AXI_ARVALID,
    S_AXI_ARESETN,
    S_AXI_BREADY,
    S_AXI_RREADY,
    S_AXI_ARADDR,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_WVALID,
    data_rdy_bit,
    Q,
    \DataTx_L_reg[31] ,
    \DataRx_R_reg[23] ,
    \DataRx_L_reg[23] ,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] );
  output \DataTx_R_reg[0] ;
  output \DataTx_R_reg[0]_0 ;
  output \DataTx_R_reg[0]_1 ;
  output \DataTx_R_reg[0]_2 ;
  output \DataTx_R_reg[0]_3 ;
  output \DataTx_R_reg[0]_4 ;
  output S_AXI_RVALID;
  output S_AXI_BVALID;
  output data_rdy_bit_reg;
  output S_AXI_AWREADY;
  output S_AXI_ARREADY;
  output [0:0]E;
  output [0:0]\DataTx_L_reg[0] ;
  output data_rdy_bit_reg_0;
  output [31:0]S_AXI_RDATA;
  input S_AXI_ACLK;
  input [0:0]SR;
  input S_AXI_ARVALID;
  input S_AXI_ARESETN;
  input S_AXI_BREADY;
  input S_AXI_RREADY;
  input [2:0]S_AXI_ARADDR;
  input [2:0]S_AXI_AWADDR;
  input S_AXI_AWVALID;
  input S_AXI_WVALID;
  input data_rdy_bit;
  input [31:0]Q;
  input [31:0]\DataTx_L_reg[31] ;
  input [23:0]\DataRx_R_reg[23] ;
  input [23:0]\DataRx_L_reg[23] ;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;

  wire [23:0]\DataRx_L_reg[23] ;
  wire [23:0]\DataRx_R_reg[23] ;
  wire [0:0]\DataTx_L_reg[0] ;
  wire [31:0]\DataTx_L_reg[31] ;
  wire \DataTx_R_reg[0] ;
  wire \DataTx_R_reg[0]_0 ;
  wire \DataTx_R_reg[0]_1 ;
  wire \DataTx_R_reg[0]_2 ;
  wire \DataTx_R_reg[0]_3 ;
  wire \DataTx_R_reg[0]_4 ;
  wire [0:0]E;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  wire \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ;
  wire \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1] ;
  wire \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2] ;
  wire [31:0]IP2Bus_Data;
  wire I_DECODER_n_46;
  wire I_DECODER_n_47;
  wire I_DECODER_n_7;
  wire I_DECODER_n_8;
  wire [31:0]Q;
  wire [0:0]SR;
  wire S_AXI_ACLK;
  wire [2:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARVALID;
  wire [2:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire [31:0]S_AXI_RDATA;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire S_AXI_WVALID;
  wire data_rdy_bit;
  wire data_rdy_bit_reg;
  wire data_rdy_bit_reg_0;
  wire p_2_out;
  wire [3:0]plusOp;
  wire rst;
  wire s_axi_rdata_i;
  wire [1:0]state;
  wire \state[0]_i_2_n_0 ;
  wire \state[1]_i_2_n_0 ;
  wire \state[1]_i_3_n_0 ;
  wire timeout;

  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \INCLUDE_DPHASE_TIMER.dpto_cnt[0]_i_1 
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ),
        .O(plusOp[0]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \INCLUDE_DPHASE_TIMER.dpto_cnt[1]_i_1 
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ),
        .I1(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1] ),
        .O(plusOp[1]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \INCLUDE_DPHASE_TIMER.dpto_cnt[2]_i_1 
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1] ),
        .I1(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ),
        .I2(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2] ),
        .O(plusOp[2]));
  LUT2 #(
    .INIT(4'h9)) 
    \INCLUDE_DPHASE_TIMER.dpto_cnt[3]_i_1 
       (.I0(state[1]),
        .I1(state[0]),
        .O(p_2_out));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \INCLUDE_DPHASE_TIMER.dpto_cnt[3]_i_2 
       (.I0(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2] ),
        .I1(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ),
        .I2(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1] ),
        .I3(timeout),
        .O(plusOp[3]));
  FDRE \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp[0]),
        .Q(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0] ),
        .R(p_2_out));
  FDRE \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp[1]),
        .Q(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1] ),
        .R(p_2_out));
  FDRE \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp[2]),
        .Q(\INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2] ),
        .R(p_2_out));
  FDRE \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp[3]),
        .Q(timeout),
        .R(p_2_out));
  ip_design_zed_audio_ctrl_0_0_address_decoder I_DECODER
       (.D({I_DECODER_n_7,I_DECODER_n_8}),
        .\DataRx_L_reg[23] (\DataRx_L_reg[23] ),
        .\DataRx_R_reg[23] (\DataRx_R_reg[23] ),
        .\DataTx_L_reg[0] (\DataTx_L_reg[0] ),
        .\DataTx_L_reg[31] (\DataTx_L_reg[31] ),
        .\DataTx_R_reg[0] (\DataTx_R_reg[0] ),
        .\DataTx_R_reg[0]_0 (\DataTx_R_reg[0]_0 ),
        .\DataTx_R_reg[0]_1 (\DataTx_R_reg[0]_1 ),
        .\DataTx_R_reg[0]_2 (\DataTx_R_reg[0]_2 ),
        .\DataTx_R_reg[0]_3 (\DataTx_R_reg[0]_3 ),
        .\DataTx_R_reg[0]_4 (\DataTx_R_reg[0]_4 ),
        .\DataTx_R_reg[31] (Q),
        .E(E),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0 (\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ),
        .\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3] (timeout),
        .Q(state),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARADDR(S_AXI_ARADDR),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_AWADDR(S_AXI_AWADDR),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_WVALID(S_AXI_WVALID),
        .S_AXI_WVALID_0(\state[1]_i_2_n_0 ),
        .data_rdy_bit(data_rdy_bit),
        .data_rdy_bit_reg(data_rdy_bit_reg),
        .data_rdy_bit_reg_0(data_rdy_bit_reg_0),
        .s_axi_bvalid_i_reg(I_DECODER_n_47),
        .s_axi_bvalid_i_reg_0(\state[0]_i_2_n_0 ),
        .s_axi_bvalid_i_reg_1(S_AXI_BVALID),
        .\s_axi_rdata_i_reg[31] (IP2Bus_Data),
        .s_axi_rvalid_i_reg(I_DECODER_n_46),
        .s_axi_rvalid_i_reg_0(S_AXI_RVALID),
        .\state_reg[1] (\state[1]_i_3_n_0 ));
  FDRE rst_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(SR),
        .Q(rst),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    s_axi_bvalid_i_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(I_DECODER_n_47),
        .Q(S_AXI_BVALID),
        .R(rst));
  LUT2 #(
    .INIT(4'h2)) 
    \s_axi_rdata_i[31]_i_1 
       (.I0(state[0]),
        .I1(state[1]),
        .O(s_axi_rdata_i));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[0]),
        .Q(S_AXI_RDATA[0]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[10]),
        .Q(S_AXI_RDATA[10]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[11]),
        .Q(S_AXI_RDATA[11]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[12]),
        .Q(S_AXI_RDATA[12]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[13]),
        .Q(S_AXI_RDATA[13]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[14]),
        .Q(S_AXI_RDATA[14]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[15]),
        .Q(S_AXI_RDATA[15]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[16]),
        .Q(S_AXI_RDATA[16]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[17]),
        .Q(S_AXI_RDATA[17]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[18]),
        .Q(S_AXI_RDATA[18]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[19]),
        .Q(S_AXI_RDATA[19]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[1]),
        .Q(S_AXI_RDATA[1]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[20]),
        .Q(S_AXI_RDATA[20]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[21]),
        .Q(S_AXI_RDATA[21]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[22]),
        .Q(S_AXI_RDATA[22]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[23]),
        .Q(S_AXI_RDATA[23]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[24] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[24]),
        .Q(S_AXI_RDATA[24]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[25] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[25]),
        .Q(S_AXI_RDATA[25]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[26] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[26]),
        .Q(S_AXI_RDATA[26]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[27] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[27]),
        .Q(S_AXI_RDATA[27]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[28] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[28]),
        .Q(S_AXI_RDATA[28]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[29] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[29]),
        .Q(S_AXI_RDATA[29]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[2]),
        .Q(S_AXI_RDATA[2]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[30] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[30]),
        .Q(S_AXI_RDATA[30]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[31] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[31]),
        .Q(S_AXI_RDATA[31]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[3]),
        .Q(S_AXI_RDATA[3]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[4]),
        .Q(S_AXI_RDATA[4]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[5]),
        .Q(S_AXI_RDATA[5]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[6]),
        .Q(S_AXI_RDATA[6]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[7]),
        .Q(S_AXI_RDATA[7]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[8]),
        .Q(S_AXI_RDATA[8]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    \s_axi_rdata_i_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(s_axi_rdata_i),
        .D(IP2Bus_Data[9]),
        .Q(S_AXI_RDATA[9]),
        .R(rst));
  FDRE #(
    .INIT(1'b0)) 
    s_axi_rvalid_i_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(I_DECODER_n_46),
        .Q(S_AXI_RVALID),
        .R(rst));
  LUT6 #(
    .INIT(64'h07770000FFFF0000)) 
    \state[0]_i_2 
       (.I0(S_AXI_BVALID),
        .I1(S_AXI_BREADY),
        .I2(S_AXI_RREADY),
        .I3(S_AXI_RVALID),
        .I4(state[0]),
        .I5(state[1]),
        .O(\state[0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h8)) 
    \state[1]_i_2 
       (.I0(S_AXI_AWVALID),
        .I1(S_AXI_WVALID),
        .O(\state[1]_i_2_n_0 ));
  LUT5 #(
    .INIT(32'h002A2A2A)) 
    \state[1]_i_3 
       (.I0(state[1]),
        .I1(S_AXI_RVALID),
        .I2(S_AXI_RREADY),
        .I3(S_AXI_BREADY),
        .I4(S_AXI_BVALID),
        .O(\state[1]_i_3_n_0 ));
  FDRE \state_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(I_DECODER_n_8),
        .Q(state[0]),
        .R(rst));
  FDRE \state_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(I_DECODER_n_7),
        .Q(state[1]),
        .R(rst));
endmodule

(* ORIG_REF_NAME = "user_logic" *) 
module ip_design_zed_audio_ctrl_0_0_user_logic
   (\s_axi_rdata_i_reg[24] ,
    Q,
    data_rdy_bit,
    SDATA_O,
    \s_axi_rdata_i_reg[31] ,
    \s_axi_rdata_i_reg[31]_0 ,
    SR,
    \s_axi_rdata_i_reg[23] ,
    \s_axi_rdata_i_reg[23]_0 ,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ,
    Bus_RNW_reg,
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ,
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ,
    S_AXI_ACLK,
    S_AXI_ARESETN,
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ,
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ,
    SDATA_I,
    E,
    S_AXI_WDATA,
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] );
  output \s_axi_rdata_i_reg[24] ;
  output [1:0]Q;
  output data_rdy_bit;
  output SDATA_O;
  output [31:0]\s_axi_rdata_i_reg[31] ;
  output [31:0]\s_axi_rdata_i_reg[31]_0 ;
  output [0:0]SR;
  output [23:0]\s_axi_rdata_i_reg[23] ;
  output [23:0]\s_axi_rdata_i_reg[23]_0 ;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ;
  input Bus_RNW_reg;
  input \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  input \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  input \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ;
  input \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ;
  input S_AXI_ACLK;
  input S_AXI_ARESETN;
  input \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  input \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ;
  input SDATA_I;
  input [0:0]E;
  input [31:0]S_AXI_WDATA;
  input [0:0]\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ;

  wire Bus_RNW_reg;
  wire [0:0]E;
  wire \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ;
  wire \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ;
  wire [0:0]\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ;
  wire \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ;
  wire \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ;
  wire Inst_iis_deser_n_3;
  wire Inst_iis_deser_n_33;
  wire Inst_iis_deser_n_34;
  wire Inst_iis_deser_n_35;
  wire Inst_iis_deser_n_36;
  wire Inst_iis_deser_n_37;
  wire Inst_iis_deser_n_38;
  wire Inst_iis_deser_n_39;
  wire Inst_iis_deser_n_40;
  wire Inst_iis_deser_n_41;
  wire Inst_iis_deser_n_42;
  wire Inst_iis_deser_n_43;
  wire Inst_iis_deser_n_44;
  wire Inst_iis_deser_n_45;
  wire Inst_iis_deser_n_46;
  wire Inst_iis_deser_n_47;
  wire Inst_iis_deser_n_48;
  wire Inst_iis_deser_n_49;
  wire Inst_iis_deser_n_5;
  wire Inst_iis_deser_n_50;
  wire Inst_iis_deser_n_51;
  wire Inst_iis_deser_n_52;
  wire Inst_iis_deser_n_53;
  wire Inst_iis_deser_n_54;
  wire Inst_iis_deser_n_55;
  wire Inst_iis_deser_n_56;
  wire Inst_iis_deser_n_6;
  wire Inst_iis_deser_n_7;
  wire Inst_iis_deser_n_8;
  wire Inst_iis_ser_n_1;
  wire Inst_iis_ser_n_2;
  wire [1:0]Q;
  wire SDATA_I;
  wire SDATA_O;
  wire [0:0]SR;
  wire S_AXI_ACLK;
  wire S_AXI_ARESETN;
  wire [31:0]S_AXI_WDATA;
  wire \clk_cntr[10]_i_2_n_0 ;
  wire \clk_cntr_reg_n_0_[0] ;
  wire \clk_cntr_reg_n_0_[1] ;
  wire \clk_cntr_reg_n_0_[2] ;
  wire \clk_cntr_reg_n_0_[3] ;
  wire \clk_cntr_reg_n_0_[5] ;
  wire \clk_cntr_reg_n_0_[6] ;
  wire \clk_cntr_reg_n_0_[7] ;
  wire \clk_cntr_reg_n_0_[8] ;
  wire \clk_cntr_reg_n_0_[9] ;
  wire data_rdy;
  wire data_rdy_bit;
  wire [23:0]ldata_reg;
  wire lrclk_d1;
  wire p_0_in4_in;
  wire [10:0]plusOp__0;
  wire [23:0]\s_axi_rdata_i_reg[23] ;
  wire [23:0]\s_axi_rdata_i_reg[23]_0 ;
  wire \s_axi_rdata_i_reg[24] ;
  wire [31:0]\s_axi_rdata_i_reg[31] ;
  wire [31:0]\s_axi_rdata_i_reg[31]_0 ;
  wire sclk_d1;
  wire write_bit;

  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[0]),
        .Q(\s_axi_rdata_i_reg[23] [0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[10]),
        .Q(\s_axi_rdata_i_reg[23] [10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[11]),
        .Q(\s_axi_rdata_i_reg[23] [11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[12]),
        .Q(\s_axi_rdata_i_reg[23] [12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[13]),
        .Q(\s_axi_rdata_i_reg[23] [13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[14]),
        .Q(\s_axi_rdata_i_reg[23] [14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[15]),
        .Q(\s_axi_rdata_i_reg[23] [15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[16]),
        .Q(\s_axi_rdata_i_reg[23] [16]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[17]),
        .Q(\s_axi_rdata_i_reg[23] [17]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[18]),
        .Q(\s_axi_rdata_i_reg[23] [18]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[19]),
        .Q(\s_axi_rdata_i_reg[23] [19]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[1]),
        .Q(\s_axi_rdata_i_reg[23] [1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[20]),
        .Q(\s_axi_rdata_i_reg[23] [20]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[21]),
        .Q(\s_axi_rdata_i_reg[23] [21]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[22]),
        .Q(\s_axi_rdata_i_reg[23] [22]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[23]),
        .Q(\s_axi_rdata_i_reg[23] [23]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[2]),
        .Q(\s_axi_rdata_i_reg[23] [2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[3]),
        .Q(\s_axi_rdata_i_reg[23] [3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[4]),
        .Q(\s_axi_rdata_i_reg[23] [4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[5]),
        .Q(\s_axi_rdata_i_reg[23] [5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[6]),
        .Q(\s_axi_rdata_i_reg[23] [6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[7]),
        .Q(\s_axi_rdata_i_reg[23] [7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[8]),
        .Q(\s_axi_rdata_i_reg[23] [8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_L_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(ldata_reg[9]),
        .Q(\s_axi_rdata_i_reg[23] [9]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_56),
        .Q(\s_axi_rdata_i_reg[23]_0 [0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_46),
        .Q(\s_axi_rdata_i_reg[23]_0 [10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_45),
        .Q(\s_axi_rdata_i_reg[23]_0 [11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_44),
        .Q(\s_axi_rdata_i_reg[23]_0 [12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_43),
        .Q(\s_axi_rdata_i_reg[23]_0 [13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_42),
        .Q(\s_axi_rdata_i_reg[23]_0 [14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_41),
        .Q(\s_axi_rdata_i_reg[23]_0 [15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_40),
        .Q(\s_axi_rdata_i_reg[23]_0 [16]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_39),
        .Q(\s_axi_rdata_i_reg[23]_0 [17]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_38),
        .Q(\s_axi_rdata_i_reg[23]_0 [18]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_37),
        .Q(\s_axi_rdata_i_reg[23]_0 [19]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_55),
        .Q(\s_axi_rdata_i_reg[23]_0 [1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_36),
        .Q(\s_axi_rdata_i_reg[23]_0 [20]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_35),
        .Q(\s_axi_rdata_i_reg[23]_0 [21]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_34),
        .Q(\s_axi_rdata_i_reg[23]_0 [22]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_33),
        .Q(\s_axi_rdata_i_reg[23]_0 [23]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_54),
        .Q(\s_axi_rdata_i_reg[23]_0 [2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_53),
        .Q(\s_axi_rdata_i_reg[23]_0 [3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_52),
        .Q(\s_axi_rdata_i_reg[23]_0 [4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_51),
        .Q(\s_axi_rdata_i_reg[23]_0 [5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_50),
        .Q(\s_axi_rdata_i_reg[23]_0 [6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_49),
        .Q(\s_axi_rdata_i_reg[23]_0 [7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_48),
        .Q(\s_axi_rdata_i_reg[23]_0 [8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataRx_R_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(data_rdy),
        .D(Inst_iis_deser_n_47),
        .Q(\s_axi_rdata_i_reg[23]_0 [9]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[0]),
        .Q(\s_axi_rdata_i_reg[31] [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[10]),
        .Q(\s_axi_rdata_i_reg[31] [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[11]),
        .Q(\s_axi_rdata_i_reg[31] [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[12]),
        .Q(\s_axi_rdata_i_reg[31] [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[13]),
        .Q(\s_axi_rdata_i_reg[31] [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[14]),
        .Q(\s_axi_rdata_i_reg[31] [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[15]),
        .Q(\s_axi_rdata_i_reg[31] [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[16]),
        .Q(\s_axi_rdata_i_reg[31] [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[17]),
        .Q(\s_axi_rdata_i_reg[31] [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[18]),
        .Q(\s_axi_rdata_i_reg[31] [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[19]),
        .Q(\s_axi_rdata_i_reg[31] [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[1]),
        .Q(\s_axi_rdata_i_reg[31] [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[20]),
        .Q(\s_axi_rdata_i_reg[31] [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[21]),
        .Q(\s_axi_rdata_i_reg[31] [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[22]),
        .Q(\s_axi_rdata_i_reg[31] [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[23]),
        .Q(\s_axi_rdata_i_reg[31] [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[24] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[24]),
        .Q(\s_axi_rdata_i_reg[31] [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[25] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[25]),
        .Q(\s_axi_rdata_i_reg[31] [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[26] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[26]),
        .Q(\s_axi_rdata_i_reg[31] [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[27] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[27]),
        .Q(\s_axi_rdata_i_reg[31] [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[28] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[28]),
        .Q(\s_axi_rdata_i_reg[31] [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[29] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[29]),
        .Q(\s_axi_rdata_i_reg[31] [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[2]),
        .Q(\s_axi_rdata_i_reg[31] [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[30] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[30]),
        .Q(\s_axi_rdata_i_reg[31] [30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[31] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[31]),
        .Q(\s_axi_rdata_i_reg[31] [31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[3]),
        .Q(\s_axi_rdata_i_reg[31] [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[4]),
        .Q(\s_axi_rdata_i_reg[31] [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[5]),
        .Q(\s_axi_rdata_i_reg[31] [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[6]),
        .Q(\s_axi_rdata_i_reg[31] [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[7]),
        .Q(\s_axi_rdata_i_reg[31] [7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[8]),
        .Q(\s_axi_rdata_i_reg[31] [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_L_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .D(S_AXI_WDATA[9]),
        .Q(\s_axi_rdata_i_reg[31] [9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[0]),
        .Q(\s_axi_rdata_i_reg[31]_0 [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[10]),
        .Q(\s_axi_rdata_i_reg[31]_0 [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[11] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[11]),
        .Q(\s_axi_rdata_i_reg[31]_0 [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[12] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[12]),
        .Q(\s_axi_rdata_i_reg[31]_0 [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[13] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[13]),
        .Q(\s_axi_rdata_i_reg[31]_0 [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[14] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[14]),
        .Q(\s_axi_rdata_i_reg[31]_0 [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[15] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[15]),
        .Q(\s_axi_rdata_i_reg[31]_0 [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[16] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[16]),
        .Q(\s_axi_rdata_i_reg[31]_0 [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[17] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[17]),
        .Q(\s_axi_rdata_i_reg[31]_0 [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[18] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[18]),
        .Q(\s_axi_rdata_i_reg[31]_0 [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[19] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[19]),
        .Q(\s_axi_rdata_i_reg[31]_0 [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[1]),
        .Q(\s_axi_rdata_i_reg[31]_0 [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[20] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[20]),
        .Q(\s_axi_rdata_i_reg[31]_0 [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[21] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[21]),
        .Q(\s_axi_rdata_i_reg[31]_0 [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[22] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[22]),
        .Q(\s_axi_rdata_i_reg[31]_0 [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[23] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[23]),
        .Q(\s_axi_rdata_i_reg[31]_0 [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[24] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[24]),
        .Q(\s_axi_rdata_i_reg[31]_0 [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[25] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[25]),
        .Q(\s_axi_rdata_i_reg[31]_0 [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[26] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[26]),
        .Q(\s_axi_rdata_i_reg[31]_0 [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[27] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[27]),
        .Q(\s_axi_rdata_i_reg[31]_0 [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[28] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[28]),
        .Q(\s_axi_rdata_i_reg[31]_0 [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[29] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[29]),
        .Q(\s_axi_rdata_i_reg[31]_0 [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[2]),
        .Q(\s_axi_rdata_i_reg[31]_0 [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[30] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[30]),
        .Q(\s_axi_rdata_i_reg[31]_0 [30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[31] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[31]),
        .Q(\s_axi_rdata_i_reg[31]_0 [31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[3]),
        .Q(\s_axi_rdata_i_reg[31]_0 [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[4]),
        .Q(\s_axi_rdata_i_reg[31]_0 [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[5]),
        .Q(\s_axi_rdata_i_reg[31]_0 [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[6]),
        .Q(\s_axi_rdata_i_reg[31]_0 [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[7]),
        .Q(\s_axi_rdata_i_reg[31]_0 [7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[8]),
        .Q(\s_axi_rdata_i_reg[31]_0 [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \DataTx_R_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2] ),
        .D(S_AXI_WDATA[9]),
        .Q(\s_axi_rdata_i_reg[31]_0 [9]),
        .R(SR));
  ip_design_zed_audio_ctrl_0_0_iis_deser Inst_iis_deser
       (.\DataRx_L_reg[23] (ldata_reg),
        .\DataRx_R_reg[23] ({Inst_iis_deser_n_33,Inst_iis_deser_n_34,Inst_iis_deser_n_35,Inst_iis_deser_n_36,Inst_iis_deser_n_37,Inst_iis_deser_n_38,Inst_iis_deser_n_39,Inst_iis_deser_n_40,Inst_iis_deser_n_41,Inst_iis_deser_n_42,Inst_iis_deser_n_43,Inst_iis_deser_n_44,Inst_iis_deser_n_45,Inst_iis_deser_n_46,Inst_iis_deser_n_47,Inst_iis_deser_n_48,Inst_iis_deser_n_49,Inst_iis_deser_n_50,Inst_iis_deser_n_51,Inst_iis_deser_n_52,Inst_iis_deser_n_53,Inst_iis_deser_n_54,Inst_iis_deser_n_55,Inst_iis_deser_n_56}),
        .E(data_rdy),
        .\FSM_onehot_iis_state_reg[0] (Inst_iis_deser_n_6),
        .\FSM_onehot_iis_state_reg[0]_0 (Inst_iis_deser_n_8),
        .\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] (\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0] ),
        .\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg (\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg (\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] (\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4] ),
        .Q(Q),
        .SDATA_I(SDATA_I),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .\bit_cntr_reg[4]_0 (write_bit),
        .data_rdy_bit(data_rdy_bit),
        .data_rdy_bit_reg(Inst_iis_deser_n_7),
        .lrclk_d1(lrclk_d1),
        .out({Inst_iis_ser_n_1,Inst_iis_ser_n_2,p_0_in4_in}),
        .\rdata_reg_reg[23]_0 (Inst_iis_deser_n_3),
        .sclk_d1(sclk_d1),
        .sdata_reg_reg(Inst_iis_deser_n_5));
  ip_design_zed_audio_ctrl_0_0_iis_ser Inst_iis_ser
       (.\DataTx_L_reg[23] (\s_axi_rdata_i_reg[31] [23:0]),
        .\DataTx_R_reg[23] (\s_axi_rdata_i_reg[31]_0 [23:0]),
        .E(Inst_iis_deser_n_3),
        .Q(Q),
        .SDATA_O(SDATA_O),
        .S_AXI_ACLK(S_AXI_ACLK),
        .\clk_cntr_reg[4] (Inst_iis_deser_n_5),
        .lrclk_d1(lrclk_d1),
        .lrclk_d1_reg(Inst_iis_deser_n_8),
        .lrclk_d1_reg_0(Inst_iis_deser_n_6),
        .out({Inst_iis_ser_n_1,Inst_iis_ser_n_2,p_0_in4_in}),
        .sclk_d1(sclk_d1),
        .sclk_d1_reg(write_bit));
  LUT1 #(
    .INIT(2'h1)) 
    \clk_cntr[0]_i_1 
       (.I0(\clk_cntr_reg_n_0_[0] ),
        .O(plusOp__0[0]));
  LUT6 #(
    .INIT(64'hF7FFFFFF08000000)) 
    \clk_cntr[10]_i_1 
       (.I0(\clk_cntr_reg_n_0_[9] ),
        .I1(\clk_cntr_reg_n_0_[7] ),
        .I2(\clk_cntr[10]_i_2_n_0 ),
        .I3(\clk_cntr_reg_n_0_[6] ),
        .I4(\clk_cntr_reg_n_0_[8] ),
        .I5(Q[1]),
        .O(plusOp__0[10]));
  LUT6 #(
    .INIT(64'h7FFFFFFFFFFFFFFF)) 
    \clk_cntr[10]_i_2 
       (.I0(Q[0]),
        .I1(\clk_cntr_reg_n_0_[2] ),
        .I2(\clk_cntr_reg_n_0_[0] ),
        .I3(\clk_cntr_reg_n_0_[1] ),
        .I4(\clk_cntr_reg_n_0_[3] ),
        .I5(\clk_cntr_reg_n_0_[5] ),
        .O(\clk_cntr[10]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \clk_cntr[1]_i_1 
       (.I0(\clk_cntr_reg_n_0_[0] ),
        .I1(\clk_cntr_reg_n_0_[1] ),
        .O(plusOp__0[1]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \clk_cntr[2]_i_1 
       (.I0(\clk_cntr_reg_n_0_[1] ),
        .I1(\clk_cntr_reg_n_0_[0] ),
        .I2(\clk_cntr_reg_n_0_[2] ),
        .O(plusOp__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \clk_cntr[3]_i_1 
       (.I0(\clk_cntr_reg_n_0_[2] ),
        .I1(\clk_cntr_reg_n_0_[0] ),
        .I2(\clk_cntr_reg_n_0_[1] ),
        .I3(\clk_cntr_reg_n_0_[3] ),
        .O(plusOp__0[3]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT5 #(
    .INIT(32'h7FFF8000)) 
    \clk_cntr[4]_i_1 
       (.I0(\clk_cntr_reg_n_0_[3] ),
        .I1(\clk_cntr_reg_n_0_[1] ),
        .I2(\clk_cntr_reg_n_0_[0] ),
        .I3(\clk_cntr_reg_n_0_[2] ),
        .I4(Q[0]),
        .O(plusOp__0[4]));
  LUT6 #(
    .INIT(64'h7FFFFFFF80000000)) 
    \clk_cntr[5]_i_1 
       (.I0(Q[0]),
        .I1(\clk_cntr_reg_n_0_[2] ),
        .I2(\clk_cntr_reg_n_0_[0] ),
        .I3(\clk_cntr_reg_n_0_[1] ),
        .I4(\clk_cntr_reg_n_0_[3] ),
        .I5(\clk_cntr_reg_n_0_[5] ),
        .O(plusOp__0[5]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT2 #(
    .INIT(4'h9)) 
    \clk_cntr[6]_i_1 
       (.I0(\clk_cntr[10]_i_2_n_0 ),
        .I1(\clk_cntr_reg_n_0_[6] ),
        .O(plusOp__0[6]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hD2)) 
    \clk_cntr[7]_i_1 
       (.I0(\clk_cntr_reg_n_0_[6] ),
        .I1(\clk_cntr[10]_i_2_n_0 ),
        .I2(\clk_cntr_reg_n_0_[7] ),
        .O(plusOp__0[7]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT4 #(
    .INIT(16'hDF20)) 
    \clk_cntr[8]_i_1 
       (.I0(\clk_cntr_reg_n_0_[7] ),
        .I1(\clk_cntr[10]_i_2_n_0 ),
        .I2(\clk_cntr_reg_n_0_[6] ),
        .I3(\clk_cntr_reg_n_0_[8] ),
        .O(plusOp__0[8]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT5 #(
    .INIT(32'hF7FF0800)) 
    \clk_cntr[9]_i_1 
       (.I0(\clk_cntr_reg_n_0_[8] ),
        .I1(\clk_cntr_reg_n_0_[6] ),
        .I2(\clk_cntr[10]_i_2_n_0 ),
        .I3(\clk_cntr_reg_n_0_[7] ),
        .I4(\clk_cntr_reg_n_0_[9] ),
        .O(plusOp__0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[0]),
        .Q(\clk_cntr_reg_n_0_[0] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[10] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[10]),
        .Q(Q[1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[1]),
        .Q(\clk_cntr_reg_n_0_[1] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[2]),
        .Q(\clk_cntr_reg_n_0_[2] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[3]),
        .Q(\clk_cntr_reg_n_0_[3] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[4] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[4]),
        .Q(Q[0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[5] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[5]),
        .Q(\clk_cntr_reg_n_0_[5] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[6] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[6]),
        .Q(\clk_cntr_reg_n_0_[6] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[7] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[7]),
        .Q(\clk_cntr_reg_n_0_[7] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[8] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[8]),
        .Q(\clk_cntr_reg_n_0_[8] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \clk_cntr_reg[9] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(plusOp__0[9]),
        .Q(\clk_cntr_reg_n_0_[9] ),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    data_rdy_bit_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .D(Inst_iis_deser_n_7),
        .Q(data_rdy_bit),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    rst_i_1
       (.I0(S_AXI_ARESETN),
        .O(SR));
  LUT6 #(
    .INIT(64'h0000000400040448)) 
    slv_ip2bus_data
       (.I0(\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg ),
        .I1(Bus_RNW_reg),
        .I2(\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg ),
        .I3(\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg ),
        .I4(\GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg ),
        .I5(\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg ),
        .O(\s_axi_rdata_i_reg[24] ));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
