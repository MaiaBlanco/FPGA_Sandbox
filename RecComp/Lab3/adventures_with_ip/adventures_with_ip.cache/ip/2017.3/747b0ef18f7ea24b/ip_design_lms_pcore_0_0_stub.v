// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
// Date        : Tue Oct 17 19:49:37 2017
// Host        : TacitMonolith running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ ip_design_lms_pcore_0_0_stub.v
// Design      : ip_design_lms_pcore_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "lms_pcore,Vivado 2017.3" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(IPCORE_CLK, IPCORE_RESETN, AXI4_Lite_ACLK, 
  AXI4_Lite_ARESETN, AXI4_Lite_AWADDR, AXI4_Lite_AWVALID, AXI4_Lite_WDATA, AXI4_Lite_WSTRB, 
  AXI4_Lite_WVALID, AXI4_Lite_BREADY, AXI4_Lite_ARADDR, AXI4_Lite_ARVALID, 
  AXI4_Lite_RREADY, AXI4_Lite_AWREADY, AXI4_Lite_WREADY, AXI4_Lite_BRESP, AXI4_Lite_BVALID, 
  AXI4_Lite_ARREADY, AXI4_Lite_RDATA, AXI4_Lite_RRESP, AXI4_Lite_RVALID)
/* synthesis syn_black_box black_box_pad_pin="IPCORE_CLK,IPCORE_RESETN,AXI4_Lite_ACLK,AXI4_Lite_ARESETN,AXI4_Lite_AWADDR[15:0],AXI4_Lite_AWVALID,AXI4_Lite_WDATA[31:0],AXI4_Lite_WSTRB[3:0],AXI4_Lite_WVALID,AXI4_Lite_BREADY,AXI4_Lite_ARADDR[15:0],AXI4_Lite_ARVALID,AXI4_Lite_RREADY,AXI4_Lite_AWREADY,AXI4_Lite_WREADY,AXI4_Lite_BRESP[1:0],AXI4_Lite_BVALID,AXI4_Lite_ARREADY,AXI4_Lite_RDATA[31:0],AXI4_Lite_RRESP[1:0],AXI4_Lite_RVALID" */;
  input IPCORE_CLK;
  input IPCORE_RESETN;
  input AXI4_Lite_ACLK;
  input AXI4_Lite_ARESETN;
  input [15:0]AXI4_Lite_AWADDR;
  input AXI4_Lite_AWVALID;
  input [31:0]AXI4_Lite_WDATA;
  input [3:0]AXI4_Lite_WSTRB;
  input AXI4_Lite_WVALID;
  input AXI4_Lite_BREADY;
  input [15:0]AXI4_Lite_ARADDR;
  input AXI4_Lite_ARVALID;
  input AXI4_Lite_RREADY;
  output AXI4_Lite_AWREADY;
  output AXI4_Lite_WREADY;
  output [1:0]AXI4_Lite_BRESP;
  output AXI4_Lite_BVALID;
  output AXI4_Lite_ARREADY;
  output [31:0]AXI4_Lite_RDATA;
  output [1:0]AXI4_Lite_RRESP;
  output AXI4_Lite_RVALID;
endmodule
