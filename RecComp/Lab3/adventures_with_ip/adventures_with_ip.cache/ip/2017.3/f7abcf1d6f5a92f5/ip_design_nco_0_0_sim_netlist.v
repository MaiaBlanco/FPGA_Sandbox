// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
// Date        : Tue Oct 17 19:49:25 2017
// Host        : TacitMonolith running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ ip_design_nco_0_0_sim_netlist.v
// Design      : ip_design_nco_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "ip_design_nco_0_0,nco,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "nco,Vivado 2017.3" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (s_axi_AXILiteS_AWADDR,
    s_axi_AXILiteS_AWVALID,
    s_axi_AXILiteS_AWREADY,
    s_axi_AXILiteS_WDATA,
    s_axi_AXILiteS_WSTRB,
    s_axi_AXILiteS_WVALID,
    s_axi_AXILiteS_WREADY,
    s_axi_AXILiteS_BRESP,
    s_axi_AXILiteS_BVALID,
    s_axi_AXILiteS_BREADY,
    s_axi_AXILiteS_ARADDR,
    s_axi_AXILiteS_ARVALID,
    s_axi_AXILiteS_ARREADY,
    s_axi_AXILiteS_RDATA,
    s_axi_AXILiteS_RRESP,
    s_axi_AXILiteS_RVALID,
    s_axi_AXILiteS_RREADY,
    ap_clk,
    ap_rst_n);
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWADDR" *) (* x_interface_parameter = "XIL_INTERFACENAME s_axi_AXILiteS, ADDR_WIDTH 6, DATA_WIDTH 32, PROTOCOL AXI4LITE, READ_WRITE_MODE READ_WRITE, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 100000000, ID_WIDTH 0, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0" *) input [5:0]s_axi_AXILiteS_AWADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWVALID" *) input s_axi_AXILiteS_AWVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS AWREADY" *) output s_axi_AXILiteS_AWREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WDATA" *) input [31:0]s_axi_AXILiteS_WDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WSTRB" *) input [3:0]s_axi_AXILiteS_WSTRB;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WVALID" *) input s_axi_AXILiteS_WVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS WREADY" *) output s_axi_AXILiteS_WREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BRESP" *) output [1:0]s_axi_AXILiteS_BRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BVALID" *) output s_axi_AXILiteS_BVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS BREADY" *) input s_axi_AXILiteS_BREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARADDR" *) input [5:0]s_axi_AXILiteS_ARADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARVALID" *) input s_axi_AXILiteS_ARVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS ARREADY" *) output s_axi_AXILiteS_ARREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RDATA" *) output [31:0]s_axi_AXILiteS_RDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RRESP" *) output [1:0]s_axi_AXILiteS_RRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RVALID" *) output s_axi_AXILiteS_RVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 s_axi_AXILiteS RREADY" *) input s_axi_AXILiteS_RREADY;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME ap_clk, ASSOCIATED_BUSIF s_axi_AXILiteS, ASSOCIATED_RESET ap_rst_n, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {CLK {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0" *) input ap_clk;
  (* x_interface_info = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *) (* x_interface_parameter = "XIL_INTERFACENAME ap_rst_n, POLARITY ACTIVE_LOW, LAYERED_METADATA xilinx.com:interface:datatypes:1.0 {RST {datatype {name {attribs {resolve_type immediate dependency {} format string minimum {} maximum {}} value {}} bitwidth {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 1} bitoffset {attribs {resolve_type immediate dependency {} format long minimum {} maximum {}} value 0}}}}" *) input ap_rst_n;

  wire ap_clk;
  wire ap_rst_n;
  wire [5:0]s_axi_AXILiteS_ARADDR;
  wire s_axi_AXILiteS_ARREADY;
  wire s_axi_AXILiteS_ARVALID;
  wire [5:0]s_axi_AXILiteS_AWADDR;
  wire s_axi_AXILiteS_AWREADY;
  wire s_axi_AXILiteS_AWVALID;
  wire s_axi_AXILiteS_BREADY;
  wire [1:0]s_axi_AXILiteS_BRESP;
  wire s_axi_AXILiteS_BVALID;
  wire [31:0]s_axi_AXILiteS_RDATA;
  wire s_axi_AXILiteS_RREADY;
  wire [1:0]s_axi_AXILiteS_RRESP;
  wire s_axi_AXILiteS_RVALID;
  wire [31:0]s_axi_AXILiteS_WDATA;
  wire s_axi_AXILiteS_WREADY;
  wire [3:0]s_axi_AXILiteS_WSTRB;
  wire s_axi_AXILiteS_WVALID;

  (* C_S_AXI_AXILITES_ADDR_WIDTH = "6" *) 
  (* C_S_AXI_AXILITES_DATA_WIDTH = "32" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco U0
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .s_axi_AXILiteS_ARADDR(s_axi_AXILiteS_ARADDR),
        .s_axi_AXILiteS_ARREADY(s_axi_AXILiteS_ARREADY),
        .s_axi_AXILiteS_ARVALID(s_axi_AXILiteS_ARVALID),
        .s_axi_AXILiteS_AWADDR(s_axi_AXILiteS_AWADDR),
        .s_axi_AXILiteS_AWREADY(s_axi_AXILiteS_AWREADY),
        .s_axi_AXILiteS_AWVALID(s_axi_AXILiteS_AWVALID),
        .s_axi_AXILiteS_BREADY(s_axi_AXILiteS_BREADY),
        .s_axi_AXILiteS_BRESP(s_axi_AXILiteS_BRESP),
        .s_axi_AXILiteS_BVALID(s_axi_AXILiteS_BVALID),
        .s_axi_AXILiteS_RDATA(s_axi_AXILiteS_RDATA),
        .s_axi_AXILiteS_RREADY(s_axi_AXILiteS_RREADY),
        .s_axi_AXILiteS_RRESP(s_axi_AXILiteS_RRESP),
        .s_axi_AXILiteS_RVALID(s_axi_AXILiteS_RVALID),
        .s_axi_AXILiteS_WDATA(s_axi_AXILiteS_WDATA),
        .s_axi_AXILiteS_WREADY(s_axi_AXILiteS_WREADY),
        .s_axi_AXILiteS_WSTRB(s_axi_AXILiteS_WSTRB),
        .s_axi_AXILiteS_WVALID(s_axi_AXILiteS_WVALID));
endmodule

(* C_S_AXI_AXILITES_ADDR_WIDTH = "6" *) (* C_S_AXI_AXILITES_DATA_WIDTH = "32" *) 
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco
   (s_axi_AXILiteS_AWVALID,
    s_axi_AXILiteS_AWREADY,
    s_axi_AXILiteS_AWADDR,
    s_axi_AXILiteS_WVALID,
    s_axi_AXILiteS_WREADY,
    s_axi_AXILiteS_WDATA,
    s_axi_AXILiteS_WSTRB,
    s_axi_AXILiteS_ARVALID,
    s_axi_AXILiteS_ARREADY,
    s_axi_AXILiteS_ARADDR,
    s_axi_AXILiteS_RVALID,
    s_axi_AXILiteS_RREADY,
    s_axi_AXILiteS_RDATA,
    s_axi_AXILiteS_RRESP,
    s_axi_AXILiteS_BVALID,
    s_axi_AXILiteS_BREADY,
    s_axi_AXILiteS_BRESP,
    ap_clk,
    ap_rst_n);
  input s_axi_AXILiteS_AWVALID;
  output s_axi_AXILiteS_AWREADY;
  input [5:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_WVALID;
  output s_axi_AXILiteS_WREADY;
  input [31:0]s_axi_AXILiteS_WDATA;
  input [3:0]s_axi_AXILiteS_WSTRB;
  input s_axi_AXILiteS_ARVALID;
  output s_axi_AXILiteS_ARREADY;
  input [5:0]s_axi_AXILiteS_ARADDR;
  output s_axi_AXILiteS_RVALID;
  input s_axi_AXILiteS_RREADY;
  output [31:0]s_axi_AXILiteS_RDATA;
  output [1:0]s_axi_AXILiteS_RRESP;
  output s_axi_AXILiteS_BVALID;
  input s_axi_AXILiteS_BREADY;
  output [1:0]s_axi_AXILiteS_BRESP;
  input ap_clk;
  input ap_rst_n;

  wire \<const0> ;
  wire [1:1]ap_NS_fsm;
  wire ap_clk;
  wire ap_rst_n;
  wire ce0;
  wire [15:0]int_sine_sample_V;
  wire nco_AXILiteS_s_axi_U_n_10;
  wire nco_AXILiteS_s_axi_U_n_11;
  wire nco_AXILiteS_s_axi_U_n_12;
  wire nco_AXILiteS_s_axi_U_n_13;
  wire nco_AXILiteS_s_axi_U_n_14;
  wire nco_AXILiteS_s_axi_U_n_15;
  wire nco_AXILiteS_s_axi_U_n_16;
  wire nco_AXILiteS_s_axi_U_n_17;
  wire nco_AXILiteS_s_axi_U_n_18;
  wire nco_AXILiteS_s_axi_U_n_3;
  wire nco_AXILiteS_s_axi_U_n_4;
  wire nco_AXILiteS_s_axi_U_n_5;
  wire nco_AXILiteS_s_axi_U_n_6;
  wire nco_AXILiteS_s_axi_U_n_7;
  wire nco_AXILiteS_s_axi_U_n_8;
  wire nco_AXILiteS_s_axi_U_n_9;
  wire reset;
  wire [5:0]s_axi_AXILiteS_ARADDR;
  wire s_axi_AXILiteS_ARREADY;
  wire s_axi_AXILiteS_ARVALID;
  wire [5:0]s_axi_AXILiteS_AWADDR;
  wire s_axi_AXILiteS_AWREADY;
  wire s_axi_AXILiteS_AWVALID;
  wire s_axi_AXILiteS_BREADY;
  wire s_axi_AXILiteS_BVALID;
  wire [15:0]\^s_axi_AXILiteS_RDATA ;
  wire s_axi_AXILiteS_RREADY;
  wire s_axi_AXILiteS_RVALID;
  wire [31:0]s_axi_AXILiteS_WDATA;
  wire s_axi_AXILiteS_WREADY;
  wire [3:0]s_axi_AXILiteS_WSTRB;
  wire s_axi_AXILiteS_WVALID;
  wire [11:0]sel;
  wire sine_sample_V_ap_vld;
  wire [15:0]temp_V_reg;

  assign s_axi_AXILiteS_BRESP[1] = \<const0> ;
  assign s_axi_AXILiteS_BRESP[0] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[31] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[30] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[29] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[28] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[27] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[26] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[25] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[24] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[23] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[22] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[21] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[20] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[19] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[18] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[17] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[16] = \<const0> ;
  assign s_axi_AXILiteS_RDATA[15:0] = \^s_axi_AXILiteS_RDATA [15:0];
  assign s_axi_AXILiteS_RRESP[1] = \<const0> ;
  assign s_axi_AXILiteS_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  LUT1 #(
    .INIT(2'h1)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(sine_sample_V_ap_vld),
        .O(ap_NS_fsm));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(sine_sample_V_ap_vld),
        .Q(ce0),
        .S(reset));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm),
        .Q(sine_sample_V_ap_vld),
        .R(reset));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_AXILiteS_s_axi nco_AXILiteS_s_axi_U
       (.O({nco_AXILiteS_s_axi_U_n_3,nco_AXILiteS_s_axi_U_n_4,nco_AXILiteS_s_axi_U_n_5,nco_AXILiteS_s_axi_U_n_6}),
        .Q(sine_sample_V_ap_vld),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .out(int_sine_sample_V),
        .reset(reset),
        .s_axi_AXILiteS_ARADDR(s_axi_AXILiteS_ARADDR[4:0]),
        .s_axi_AXILiteS_ARREADY(s_axi_AXILiteS_ARREADY),
        .s_axi_AXILiteS_ARVALID(s_axi_AXILiteS_ARVALID),
        .s_axi_AXILiteS_AWADDR(s_axi_AXILiteS_AWADDR[4:0]),
        .s_axi_AXILiteS_AWREADY(s_axi_AXILiteS_AWREADY),
        .s_axi_AXILiteS_AWVALID(s_axi_AXILiteS_AWVALID),
        .s_axi_AXILiteS_BREADY(s_axi_AXILiteS_BREADY),
        .s_axi_AXILiteS_BVALID(s_axi_AXILiteS_BVALID),
        .s_axi_AXILiteS_RDATA(\^s_axi_AXILiteS_RDATA ),
        .s_axi_AXILiteS_RREADY(s_axi_AXILiteS_RREADY),
        .s_axi_AXILiteS_RVALID(s_axi_AXILiteS_RVALID),
        .s_axi_AXILiteS_WDATA(s_axi_AXILiteS_WDATA[15:0]),
        .s_axi_AXILiteS_WREADY(s_axi_AXILiteS_WREADY),
        .s_axi_AXILiteS_WSTRB(s_axi_AXILiteS_WSTRB[1:0]),
        .s_axi_AXILiteS_WVALID(s_axi_AXILiteS_WVALID),
        .sel(sel),
        .temp_V_reg(temp_V_reg),
        .\temp_V_reg[11] ({nco_AXILiteS_s_axi_U_n_11,nco_AXILiteS_s_axi_U_n_12,nco_AXILiteS_s_axi_U_n_13,nco_AXILiteS_s_axi_U_n_14}),
        .\temp_V_reg[15] ({nco_AXILiteS_s_axi_U_n_15,nco_AXILiteS_s_axi_U_n_16,nco_AXILiteS_s_axi_U_n_17,nco_AXILiteS_s_axi_U_n_18}),
        .\temp_V_reg[7] ({nco_AXILiteS_s_axi_U_n_7,nco_AXILiteS_s_axi_U_n_8,nco_AXILiteS_s_axi_U_n_9,nco_AXILiteS_s_axi_U_n_10}));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_sine_lut_V sine_lut_V_U
       (.Q({sine_sample_V_ap_vld,ce0}),
        .SR(reset),
        .ap_clk(ap_clk),
        .out(int_sine_sample_V),
        .sel(sel));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[0] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_6),
        .Q(temp_V_reg[0]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[10] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_12),
        .Q(temp_V_reg[10]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[11] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_11),
        .Q(temp_V_reg[11]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[12] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_18),
        .Q(temp_V_reg[12]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[13] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_17),
        .Q(temp_V_reg[13]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[14] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_16),
        .Q(temp_V_reg[14]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[15] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_15),
        .Q(temp_V_reg[15]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[1] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_5),
        .Q(temp_V_reg[1]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[2] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_4),
        .Q(temp_V_reg[2]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[3] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_3),
        .Q(temp_V_reg[3]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[4] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_10),
        .Q(temp_V_reg[4]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[5] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_9),
        .Q(temp_V_reg[5]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[6] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_8),
        .Q(temp_V_reg[6]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[7] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_7),
        .Q(temp_V_reg[7]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[8] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_14),
        .Q(temp_V_reg[8]),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    \temp_V_reg[9] 
       (.C(ap_clk),
        .CE(ce0),
        .D(nco_AXILiteS_s_axi_U_n_13),
        .Q(temp_V_reg[9]),
        .R(1'b0));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_AXILiteS_s_axi
   (reset,
    s_axi_AXILiteS_RVALID,
    s_axi_AXILiteS_ARREADY,
    O,
    \temp_V_reg[7] ,
    \temp_V_reg[11] ,
    \temp_V_reg[15] ,
    sel,
    s_axi_AXILiteS_WREADY,
    s_axi_AXILiteS_BVALID,
    s_axi_AXILiteS_RDATA,
    s_axi_AXILiteS_AWREADY,
    ap_clk,
    s_axi_AXILiteS_RREADY,
    s_axi_AXILiteS_ARVALID,
    s_axi_AXILiteS_ARADDR,
    s_axi_AXILiteS_WDATA,
    s_axi_AXILiteS_WSTRB,
    out,
    temp_V_reg,
    ap_rst_n,
    Q,
    s_axi_AXILiteS_AWVALID,
    s_axi_AXILiteS_WVALID,
    s_axi_AXILiteS_AWADDR,
    s_axi_AXILiteS_BREADY);
  output reset;
  output s_axi_AXILiteS_RVALID;
  output s_axi_AXILiteS_ARREADY;
  output [3:0]O;
  output [3:0]\temp_V_reg[7] ;
  output [3:0]\temp_V_reg[11] ;
  output [3:0]\temp_V_reg[15] ;
  output [11:0]sel;
  output s_axi_AXILiteS_WREADY;
  output s_axi_AXILiteS_BVALID;
  output [15:0]s_axi_AXILiteS_RDATA;
  output s_axi_AXILiteS_AWREADY;
  input ap_clk;
  input s_axi_AXILiteS_RREADY;
  input s_axi_AXILiteS_ARVALID;
  input [4:0]s_axi_AXILiteS_ARADDR;
  input [15:0]s_axi_AXILiteS_WDATA;
  input [1:0]s_axi_AXILiteS_WSTRB;
  input [15:0]out;
  input [15:0]temp_V_reg;
  input ap_rst_n;
  input [0:0]Q;
  input s_axi_AXILiteS_AWVALID;
  input s_axi_AXILiteS_WVALID;
  input [4:0]s_axi_AXILiteS_AWADDR;
  input s_axi_AXILiteS_BREADY;

  wire [3:0]O;
  wire [0:0]Q;
  wire ap_clk;
  wire ap_rst_n;
  wire ar_hs;
  wire int_sine_sample_V_ap_vld;
  wire int_sine_sample_V_ap_vld_i_1_n_0;
  wire int_sine_sample_V_ap_vld_i_2_n_0;
  wire \int_step_size_V[15]_i_3_n_0 ;
  wire [15:0]\or ;
  wire [15:0]out;
  wire p_0_in;
  wire q0_reg_0_i_10_n_0;
  wire q0_reg_0_i_11_n_0;
  wire q0_reg_0_i_12_n_0;
  wire q0_reg_0_i_12_n_1;
  wire q0_reg_0_i_12_n_2;
  wire q0_reg_0_i_12_n_3;
  wire q0_reg_0_i_13_n_0;
  wire q0_reg_0_i_14_n_0;
  wire q0_reg_0_i_15_n_0;
  wire q0_reg_0_i_16_n_0;
  wire q0_reg_0_i_17_n_0;
  wire q0_reg_0_i_18_n_0;
  wire q0_reg_0_i_19_n_0;
  wire q0_reg_0_i_1_n_1;
  wire q0_reg_0_i_1_n_2;
  wire q0_reg_0_i_1_n_3;
  wire q0_reg_0_i_20_n_0;
  wire q0_reg_0_i_2_n_0;
  wire q0_reg_0_i_2_n_1;
  wire q0_reg_0_i_2_n_2;
  wire q0_reg_0_i_2_n_3;
  wire q0_reg_0_i_3_n_0;
  wire q0_reg_0_i_3_n_1;
  wire q0_reg_0_i_3_n_2;
  wire q0_reg_0_i_3_n_3;
  wire q0_reg_0_i_4_n_0;
  wire q0_reg_0_i_5_n_0;
  wire q0_reg_0_i_6_n_0;
  wire q0_reg_0_i_7_n_0;
  wire q0_reg_0_i_8_n_0;
  wire q0_reg_0_i_9_n_0;
  wire \rdata_data[0]_i_1_n_0 ;
  wire \rdata_data[0]_i_2_n_0 ;
  wire \rdata_data[10]_i_1_n_0 ;
  wire \rdata_data[11]_i_1_n_0 ;
  wire \rdata_data[12]_i_1_n_0 ;
  wire \rdata_data[13]_i_1_n_0 ;
  wire \rdata_data[14]_i_1_n_0 ;
  wire \rdata_data[15]_i_1_n_0 ;
  wire \rdata_data[15]_i_3_n_0 ;
  wire \rdata_data[1]_i_1_n_0 ;
  wire \rdata_data[2]_i_1_n_0 ;
  wire \rdata_data[3]_i_1_n_0 ;
  wire \rdata_data[4]_i_1_n_0 ;
  wire \rdata_data[5]_i_1_n_0 ;
  wire \rdata_data[6]_i_1_n_0 ;
  wire \rdata_data[7]_i_1_n_0 ;
  wire \rdata_data[8]_i_1_n_0 ;
  wire \rdata_data[9]_i_1_n_0 ;
  wire reset;
  wire [2:0]rstate;
  wire \rstate[0]_i_1_n_0 ;
  wire \rstate[2]_i_1_n_0 ;
  wire [4:0]s_axi_AXILiteS_ARADDR;
  wire s_axi_AXILiteS_ARREADY;
  wire s_axi_AXILiteS_ARVALID;
  wire [4:0]s_axi_AXILiteS_AWADDR;
  wire s_axi_AXILiteS_AWREADY;
  wire s_axi_AXILiteS_AWVALID;
  wire s_axi_AXILiteS_BREADY;
  wire s_axi_AXILiteS_BVALID;
  wire [15:0]s_axi_AXILiteS_RDATA;
  wire s_axi_AXILiteS_RREADY;
  wire s_axi_AXILiteS_RVALID;
  wire [15:0]s_axi_AXILiteS_WDATA;
  wire s_axi_AXILiteS_WREADY;
  wire [1:0]s_axi_AXILiteS_WSTRB;
  wire s_axi_AXILiteS_WVALID;
  wire [11:0]sel;
  wire [15:0]step_size_V;
  wire \temp_V[0]_i_2_n_0 ;
  wire \temp_V[0]_i_3_n_0 ;
  wire \temp_V[0]_i_4_n_0 ;
  wire \temp_V[0]_i_5_n_0 ;
  wire \temp_V[12]_i_2_n_0 ;
  wire \temp_V[12]_i_3_n_0 ;
  wire \temp_V[12]_i_4_n_0 ;
  wire \temp_V[12]_i_5_n_0 ;
  wire \temp_V[4]_i_2_n_0 ;
  wire \temp_V[4]_i_3_n_0 ;
  wire \temp_V[4]_i_4_n_0 ;
  wire \temp_V[4]_i_5_n_0 ;
  wire \temp_V[8]_i_2_n_0 ;
  wire \temp_V[8]_i_3_n_0 ;
  wire \temp_V[8]_i_4_n_0 ;
  wire \temp_V[8]_i_5_n_0 ;
  wire [15:0]temp_V_reg;
  wire \temp_V_reg[0]_i_1_n_0 ;
  wire \temp_V_reg[0]_i_1_n_1 ;
  wire \temp_V_reg[0]_i_1_n_2 ;
  wire \temp_V_reg[0]_i_1_n_3 ;
  wire [3:0]\temp_V_reg[11] ;
  wire \temp_V_reg[12]_i_1_n_1 ;
  wire \temp_V_reg[12]_i_1_n_2 ;
  wire \temp_V_reg[12]_i_1_n_3 ;
  wire [3:0]\temp_V_reg[15] ;
  wire \temp_V_reg[4]_i_1_n_0 ;
  wire \temp_V_reg[4]_i_1_n_1 ;
  wire \temp_V_reg[4]_i_1_n_2 ;
  wire \temp_V_reg[4]_i_1_n_3 ;
  wire [3:0]\temp_V_reg[7] ;
  wire \temp_V_reg[8]_i_1_n_0 ;
  wire \temp_V_reg[8]_i_1_n_1 ;
  wire \temp_V_reg[8]_i_1_n_2 ;
  wire \temp_V_reg[8]_i_1_n_3 ;
  wire waddr0;
  wire \waddr_reg_n_0_[0] ;
  wire \waddr_reg_n_0_[1] ;
  wire \waddr_reg_n_0_[2] ;
  wire \waddr_reg_n_0_[3] ;
  wire \waddr_reg_n_0_[4] ;
  wire [1:0]wstate;
  wire \wstate[0]_i_1_n_0 ;
  wire \wstate[1]_i_1_n_0 ;
  wire [3:3]NLW_q0_reg_0_i_1_CO_UNCONNECTED;
  wire [3:0]NLW_q0_reg_0_i_12_O_UNCONNECTED;
  wire [3:3]\NLW_temp_V_reg[12]_i_1_CO_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(ap_rst_n),
        .O(reset));
  LUT6 #(
    .INIT(64'hFFFBFFFFAAAAAAAA)) 
    int_sine_sample_V_ap_vld_i_1
       (.I0(Q),
        .I1(s_axi_AXILiteS_ARADDR[2]),
        .I2(s_axi_AXILiteS_ARADDR[3]),
        .I3(int_sine_sample_V_ap_vld_i_2_n_0),
        .I4(ar_hs),
        .I5(int_sine_sample_V_ap_vld),
        .O(int_sine_sample_V_ap_vld_i_1_n_0));
  LUT3 #(
    .INIT(8'hFB)) 
    int_sine_sample_V_ap_vld_i_2
       (.I0(s_axi_AXILiteS_ARADDR[1]),
        .I1(s_axi_AXILiteS_ARADDR[4]),
        .I2(s_axi_AXILiteS_ARADDR[0]),
        .O(int_sine_sample_V_ap_vld_i_2_n_0));
  FDRE int_sine_sample_V_ap_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_sine_sample_V_ap_vld_i_1_n_0),
        .Q(int_sine_sample_V_ap_vld),
        .R(reset));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[0]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[0]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[0]),
        .O(\or [0]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[10]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[10]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[10]),
        .O(\or [10]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[11]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[11]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[11]),
        .O(\or [11]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[12]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[12]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[12]),
        .O(\or [12]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[13]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[13]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[13]),
        .O(\or [13]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[14]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[14]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[14]),
        .O(\or [14]));
  LUT4 #(
    .INIT(16'h0001)) 
    \int_step_size_V[15]_i_1 
       (.I0(\waddr_reg_n_0_[0] ),
        .I1(\waddr_reg_n_0_[2] ),
        .I2(\waddr_reg_n_0_[1] ),
        .I3(\int_step_size_V[15]_i_3_n_0 ),
        .O(p_0_in));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[15]_i_2 
       (.I0(s_axi_AXILiteS_WDATA[15]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[15]),
        .O(\or [15]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'hFFFF7FFF)) 
    \int_step_size_V[15]_i_3 
       (.I0(\waddr_reg_n_0_[4] ),
        .I1(\waddr_reg_n_0_[3] ),
        .I2(s_axi_AXILiteS_WVALID),
        .I3(wstate[0]),
        .I4(wstate[1]),
        .O(\int_step_size_V[15]_i_3_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[1]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[1]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[1]),
        .O(\or [1]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[2]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[2]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[2]),
        .O(\or [2]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[3]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[3]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[3]),
        .O(\or [3]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[4]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[4]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[4]),
        .O(\or [4]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[5]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[5]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[5]),
        .O(\or [5]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[6]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[6]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[6]),
        .O(\or [6]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[7]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[7]),
        .I1(s_axi_AXILiteS_WSTRB[0]),
        .I2(step_size_V[7]),
        .O(\or [7]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[8]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[8]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[8]),
        .O(\or [8]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_step_size_V[9]_i_1 
       (.I0(s_axi_AXILiteS_WDATA[9]),
        .I1(s_axi_AXILiteS_WSTRB[1]),
        .I2(step_size_V[9]),
        .O(\or [9]));
  FDRE \int_step_size_V_reg[0] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [0]),
        .Q(step_size_V[0]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[10] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [10]),
        .Q(step_size_V[10]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[11] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [11]),
        .Q(step_size_V[11]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[12] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [12]),
        .Q(step_size_V[12]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[13] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [13]),
        .Q(step_size_V[13]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[14] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [14]),
        .Q(step_size_V[14]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[15] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [15]),
        .Q(step_size_V[15]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[1] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [1]),
        .Q(step_size_V[1]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[2] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [2]),
        .Q(step_size_V[2]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[3] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [3]),
        .Q(step_size_V[3]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[4] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [4]),
        .Q(step_size_V[4]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[5] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [5]),
        .Q(step_size_V[5]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[6] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [6]),
        .Q(step_size_V[6]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[7] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [7]),
        .Q(step_size_V[7]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[8] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [8]),
        .Q(step_size_V[8]),
        .R(1'b0));
  FDRE \int_step_size_V_reg[9] 
       (.C(ap_clk),
        .CE(p_0_in),
        .D(\or [9]),
        .Q(step_size_V[9]),
        .R(1'b0));
  CARRY4 q0_reg_0_i_1
       (.CI(q0_reg_0_i_2_n_0),
        .CO({NLW_q0_reg_0_i_1_CO_UNCONNECTED[3],q0_reg_0_i_1_n_1,q0_reg_0_i_1_n_2,q0_reg_0_i_1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,temp_V_reg[14:12]}),
        .O(sel[11:8]),
        .S({q0_reg_0_i_4_n_0,q0_reg_0_i_5_n_0,q0_reg_0_i_6_n_0,q0_reg_0_i_7_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_10
       (.I0(temp_V_reg[9]),
        .I1(step_size_V[9]),
        .O(q0_reg_0_i_10_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_11
       (.I0(temp_V_reg[8]),
        .I1(step_size_V[8]),
        .O(q0_reg_0_i_11_n_0));
  CARRY4 q0_reg_0_i_12
       (.CI(1'b0),
        .CO({q0_reg_0_i_12_n_0,q0_reg_0_i_12_n_1,q0_reg_0_i_12_n_2,q0_reg_0_i_12_n_3}),
        .CYINIT(1'b0),
        .DI(temp_V_reg[3:0]),
        .O(NLW_q0_reg_0_i_12_O_UNCONNECTED[3:0]),
        .S({q0_reg_0_i_17_n_0,q0_reg_0_i_18_n_0,q0_reg_0_i_19_n_0,q0_reg_0_i_20_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_13
       (.I0(temp_V_reg[7]),
        .I1(step_size_V[7]),
        .O(q0_reg_0_i_13_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_14
       (.I0(temp_V_reg[6]),
        .I1(step_size_V[6]),
        .O(q0_reg_0_i_14_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_15
       (.I0(temp_V_reg[5]),
        .I1(step_size_V[5]),
        .O(q0_reg_0_i_15_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_16
       (.I0(temp_V_reg[4]),
        .I1(step_size_V[4]),
        .O(q0_reg_0_i_16_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_17
       (.I0(temp_V_reg[3]),
        .I1(step_size_V[3]),
        .O(q0_reg_0_i_17_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_18
       (.I0(temp_V_reg[2]),
        .I1(step_size_V[2]),
        .O(q0_reg_0_i_18_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_19
       (.I0(temp_V_reg[1]),
        .I1(step_size_V[1]),
        .O(q0_reg_0_i_19_n_0));
  CARRY4 q0_reg_0_i_2
       (.CI(q0_reg_0_i_3_n_0),
        .CO({q0_reg_0_i_2_n_0,q0_reg_0_i_2_n_1,q0_reg_0_i_2_n_2,q0_reg_0_i_2_n_3}),
        .CYINIT(1'b0),
        .DI(temp_V_reg[11:8]),
        .O(sel[7:4]),
        .S({q0_reg_0_i_8_n_0,q0_reg_0_i_9_n_0,q0_reg_0_i_10_n_0,q0_reg_0_i_11_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_20
       (.I0(temp_V_reg[0]),
        .I1(step_size_V[0]),
        .O(q0_reg_0_i_20_n_0));
  CARRY4 q0_reg_0_i_3
       (.CI(q0_reg_0_i_12_n_0),
        .CO({q0_reg_0_i_3_n_0,q0_reg_0_i_3_n_1,q0_reg_0_i_3_n_2,q0_reg_0_i_3_n_3}),
        .CYINIT(1'b0),
        .DI(temp_V_reg[7:4]),
        .O(sel[3:0]),
        .S({q0_reg_0_i_13_n_0,q0_reg_0_i_14_n_0,q0_reg_0_i_15_n_0,q0_reg_0_i_16_n_0}));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_4
       (.I0(temp_V_reg[15]),
        .I1(step_size_V[15]),
        .O(q0_reg_0_i_4_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_5
       (.I0(temp_V_reg[14]),
        .I1(step_size_V[14]),
        .O(q0_reg_0_i_5_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_6
       (.I0(temp_V_reg[13]),
        .I1(step_size_V[13]),
        .O(q0_reg_0_i_6_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_7
       (.I0(temp_V_reg[12]),
        .I1(step_size_V[12]),
        .O(q0_reg_0_i_7_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_8
       (.I0(temp_V_reg[11]),
        .I1(step_size_V[11]),
        .O(q0_reg_0_i_8_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    q0_reg_0_i_9
       (.I0(temp_V_reg[10]),
        .I1(step_size_V[10]),
        .O(q0_reg_0_i_9_n_0));
  LUT6 #(
    .INIT(64'h0020FFFF00200000)) 
    \rdata_data[0]_i_1 
       (.I0(\rdata_data[0]_i_2_n_0 ),
        .I1(s_axi_AXILiteS_ARADDR[0]),
        .I2(s_axi_AXILiteS_ARADDR[4]),
        .I3(s_axi_AXILiteS_ARADDR[1]),
        .I4(ar_hs),
        .I5(s_axi_AXILiteS_RDATA[0]),
        .O(\rdata_data[0]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'h30BB3088)) 
    \rdata_data[0]_i_2 
       (.I0(step_size_V[0]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(int_sine_sample_V_ap_vld),
        .I3(s_axi_AXILiteS_ARADDR[2]),
        .I4(out[0]),
        .O(\rdata_data[0]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[10]_i_1 
       (.I0(step_size_V[10]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[10]),
        .O(\rdata_data[10]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[11]_i_1 
       (.I0(step_size_V[11]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[11]),
        .O(\rdata_data[11]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[12]_i_1 
       (.I0(step_size_V[12]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[12]),
        .O(\rdata_data[12]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[13]_i_1 
       (.I0(step_size_V[13]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[13]),
        .O(\rdata_data[13]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[14]_i_1 
       (.I0(step_size_V[14]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[14]),
        .O(\rdata_data[14]_i_1_n_0 ));
  LUT5 #(
    .INIT(32'hFFFB0000)) 
    \rdata_data[15]_i_1 
       (.I0(s_axi_AXILiteS_ARADDR[1]),
        .I1(s_axi_AXILiteS_ARADDR[4]),
        .I2(s_axi_AXILiteS_ARADDR[0]),
        .I3(s_axi_AXILiteS_ARADDR[2]),
        .I4(ar_hs),
        .O(\rdata_data[15]_i_1_n_0 ));
  LUT3 #(
    .INIT(8'h20)) 
    \rdata_data[15]_i_2 
       (.I0(s_axi_AXILiteS_ARVALID),
        .I1(rstate[2]),
        .I2(rstate[0]),
        .O(ar_hs));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[15]_i_3 
       (.I0(step_size_V[15]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[15]),
        .O(\rdata_data[15]_i_3_n_0 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[1]_i_1 
       (.I0(step_size_V[1]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[1]),
        .O(\rdata_data[1]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[2]_i_1 
       (.I0(step_size_V[2]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[2]),
        .O(\rdata_data[2]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[3]_i_1 
       (.I0(step_size_V[3]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[3]),
        .O(\rdata_data[3]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[4]_i_1 
       (.I0(step_size_V[4]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[4]),
        .O(\rdata_data[4]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[5]_i_1 
       (.I0(step_size_V[5]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[5]),
        .O(\rdata_data[5]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[6]_i_1 
       (.I0(step_size_V[6]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[6]),
        .O(\rdata_data[6]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[7]_i_1 
       (.I0(step_size_V[7]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[7]),
        .O(\rdata_data[7]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[8]_i_1 
       (.I0(step_size_V[8]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[8]),
        .O(\rdata_data[8]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \rdata_data[9]_i_1 
       (.I0(step_size_V[9]),
        .I1(s_axi_AXILiteS_ARADDR[3]),
        .I2(out[9]),
        .O(\rdata_data[9]_i_1_n_0 ));
  FDRE \rdata_data_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\rdata_data[0]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[0]),
        .R(1'b0));
  FDRE \rdata_data_reg[10] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[10]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[10]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[11] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[11]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[11]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[12] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[12]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[12]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[13] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[13]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[13]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[14] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[14]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[14]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[15] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[15]_i_3_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[15]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[1] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[1]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[1]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[2] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[2]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[2]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[3] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[3]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[3]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[4] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[4]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[4]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[5] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[5]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[5]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[6] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[6]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[6]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[7] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[7]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[7]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[8] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[8]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[8]),
        .R(\rdata_data[15]_i_1_n_0 ));
  FDRE \rdata_data_reg[9] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata_data[9]_i_1_n_0 ),
        .Q(s_axi_AXILiteS_RDATA[9]),
        .R(\rdata_data[15]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT4 #(
    .INIT(16'hF5CF)) 
    \rstate[0]_i_1 
       (.I0(s_axi_AXILiteS_ARVALID),
        .I1(s_axi_AXILiteS_RREADY),
        .I2(rstate[2]),
        .I3(rstate[0]),
        .O(\rstate[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT4 #(
    .INIT(16'h2604)) 
    \rstate[2]_i_1 
       (.I0(rstate[0]),
        .I1(rstate[2]),
        .I2(s_axi_AXILiteS_RREADY),
        .I3(s_axi_AXILiteS_ARVALID),
        .O(\rstate[2]_i_1_n_0 ));
  FDSE \rstate_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\rstate[0]_i_1_n_0 ),
        .Q(rstate[0]),
        .S(reset));
  FDRE \rstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\rstate[2]_i_1_n_0 ),
        .Q(rstate[2]),
        .R(reset));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h2)) 
    s_axi_AXILiteS_ARREADY_INST_0
       (.I0(rstate[0]),
        .I1(rstate[2]),
        .O(s_axi_AXILiteS_ARREADY));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT2 #(
    .INIT(4'h1)) 
    s_axi_AXILiteS_AWREADY_INST_0
       (.I0(wstate[1]),
        .I1(wstate[0]),
        .O(s_axi_AXILiteS_AWREADY));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT2 #(
    .INIT(4'h2)) 
    s_axi_AXILiteS_BVALID_INST_0
       (.I0(wstate[1]),
        .I1(wstate[0]),
        .O(s_axi_AXILiteS_BVALID));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h2)) 
    s_axi_AXILiteS_RVALID_INST_0
       (.I0(rstate[2]),
        .I1(rstate[0]),
        .O(s_axi_AXILiteS_RVALID));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h2)) 
    s_axi_AXILiteS_WREADY_INST_0
       (.I0(wstate[0]),
        .I1(wstate[1]),
        .O(s_axi_AXILiteS_WREADY));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[0]_i_2 
       (.I0(step_size_V[3]),
        .I1(temp_V_reg[3]),
        .O(\temp_V[0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[0]_i_3 
       (.I0(step_size_V[2]),
        .I1(temp_V_reg[2]),
        .O(\temp_V[0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[0]_i_4 
       (.I0(step_size_V[1]),
        .I1(temp_V_reg[1]),
        .O(\temp_V[0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[0]_i_5 
       (.I0(step_size_V[0]),
        .I1(temp_V_reg[0]),
        .O(\temp_V[0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[12]_i_2 
       (.I0(temp_V_reg[15]),
        .I1(step_size_V[15]),
        .O(\temp_V[12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[12]_i_3 
       (.I0(step_size_V[14]),
        .I1(temp_V_reg[14]),
        .O(\temp_V[12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[12]_i_4 
       (.I0(step_size_V[13]),
        .I1(temp_V_reg[13]),
        .O(\temp_V[12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[12]_i_5 
       (.I0(step_size_V[12]),
        .I1(temp_V_reg[12]),
        .O(\temp_V[12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[4]_i_2 
       (.I0(step_size_V[7]),
        .I1(temp_V_reg[7]),
        .O(\temp_V[4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[4]_i_3 
       (.I0(step_size_V[6]),
        .I1(temp_V_reg[6]),
        .O(\temp_V[4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[4]_i_4 
       (.I0(step_size_V[5]),
        .I1(temp_V_reg[5]),
        .O(\temp_V[4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[4]_i_5 
       (.I0(step_size_V[4]),
        .I1(temp_V_reg[4]),
        .O(\temp_V[4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[8]_i_2 
       (.I0(step_size_V[11]),
        .I1(temp_V_reg[11]),
        .O(\temp_V[8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[8]_i_3 
       (.I0(step_size_V[10]),
        .I1(temp_V_reg[10]),
        .O(\temp_V[8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[8]_i_4 
       (.I0(step_size_V[9]),
        .I1(temp_V_reg[9]),
        .O(\temp_V[8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \temp_V[8]_i_5 
       (.I0(step_size_V[8]),
        .I1(temp_V_reg[8]),
        .O(\temp_V[8]_i_5_n_0 ));
  CARRY4 \temp_V_reg[0]_i_1 
       (.CI(1'b0),
        .CO({\temp_V_reg[0]_i_1_n_0 ,\temp_V_reg[0]_i_1_n_1 ,\temp_V_reg[0]_i_1_n_2 ,\temp_V_reg[0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(step_size_V[3:0]),
        .O(O),
        .S({\temp_V[0]_i_2_n_0 ,\temp_V[0]_i_3_n_0 ,\temp_V[0]_i_4_n_0 ,\temp_V[0]_i_5_n_0 }));
  CARRY4 \temp_V_reg[12]_i_1 
       (.CI(\temp_V_reg[8]_i_1_n_0 ),
        .CO({\NLW_temp_V_reg[12]_i_1_CO_UNCONNECTED [3],\temp_V_reg[12]_i_1_n_1 ,\temp_V_reg[12]_i_1_n_2 ,\temp_V_reg[12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,step_size_V[14:12]}),
        .O(\temp_V_reg[15] ),
        .S({\temp_V[12]_i_2_n_0 ,\temp_V[12]_i_3_n_0 ,\temp_V[12]_i_4_n_0 ,\temp_V[12]_i_5_n_0 }));
  CARRY4 \temp_V_reg[4]_i_1 
       (.CI(\temp_V_reg[0]_i_1_n_0 ),
        .CO({\temp_V_reg[4]_i_1_n_0 ,\temp_V_reg[4]_i_1_n_1 ,\temp_V_reg[4]_i_1_n_2 ,\temp_V_reg[4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(step_size_V[7:4]),
        .O(\temp_V_reg[7] ),
        .S({\temp_V[4]_i_2_n_0 ,\temp_V[4]_i_3_n_0 ,\temp_V[4]_i_4_n_0 ,\temp_V[4]_i_5_n_0 }));
  CARRY4 \temp_V_reg[8]_i_1 
       (.CI(\temp_V_reg[4]_i_1_n_0 ),
        .CO({\temp_V_reg[8]_i_1_n_0 ,\temp_V_reg[8]_i_1_n_1 ,\temp_V_reg[8]_i_1_n_2 ,\temp_V_reg[8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(step_size_V[11:8]),
        .O(\temp_V_reg[11] ),
        .S({\temp_V[8]_i_2_n_0 ,\temp_V[8]_i_3_n_0 ,\temp_V[8]_i_4_n_0 ,\temp_V[8]_i_5_n_0 }));
  LUT3 #(
    .INIT(8'h02)) 
    \waddr[4]_i_1 
       (.I0(s_axi_AXILiteS_AWVALID),
        .I1(wstate[0]),
        .I2(wstate[1]),
        .O(waddr0));
  FDRE \waddr_reg[0] 
       (.C(ap_clk),
        .CE(waddr0),
        .D(s_axi_AXILiteS_AWADDR[0]),
        .Q(\waddr_reg_n_0_[0] ),
        .R(1'b0));
  FDRE \waddr_reg[1] 
       (.C(ap_clk),
        .CE(waddr0),
        .D(s_axi_AXILiteS_AWADDR[1]),
        .Q(\waddr_reg_n_0_[1] ),
        .R(1'b0));
  FDRE \waddr_reg[2] 
       (.C(ap_clk),
        .CE(waddr0),
        .D(s_axi_AXILiteS_AWADDR[2]),
        .Q(\waddr_reg_n_0_[2] ),
        .R(1'b0));
  FDRE \waddr_reg[3] 
       (.C(ap_clk),
        .CE(waddr0),
        .D(s_axi_AXILiteS_AWADDR[3]),
        .Q(\waddr_reg_n_0_[3] ),
        .R(1'b0));
  FDRE \waddr_reg[4] 
       (.C(ap_clk),
        .CE(waddr0),
        .D(s_axi_AXILiteS_AWADDR[4]),
        .Q(\waddr_reg_n_0_[4] ),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h002E)) 
    \wstate[0]_i_1 
       (.I0(s_axi_AXILiteS_AWVALID),
        .I1(wstate[0]),
        .I2(s_axi_AXILiteS_WVALID),
        .I3(wstate[1]),
        .O(\wstate[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h5202)) 
    \wstate[1]_i_1 
       (.I0(wstate[1]),
        .I1(s_axi_AXILiteS_BREADY),
        .I2(wstate[0]),
        .I3(s_axi_AXILiteS_WVALID),
        .O(\wstate[1]_i_1_n_0 ));
  FDRE \wstate_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\wstate[0]_i_1_n_0 ),
        .Q(wstate[0]),
        .R(reset));
  FDRE \wstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\wstate[1]_i_1_n_0 ),
        .Q(wstate[1]),
        .R(reset));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_sine_lut_V
   (out,
    ap_clk,
    Q,
    SR,
    sel);
  output [15:0]out;
  input ap_clk;
  input [1:0]Q;
  input [0:0]SR;
  input [11:0]sel;

  wire [1:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire [15:0]out;
  wire [11:0]sel;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_sine_lut_V_rom nco_sine_lut_V_rom_U
       (.Q(Q),
        .SR(SR),
        .ap_clk(ap_clk),
        .out(out),
        .sel(sel));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_nco_sine_lut_V_rom
   (out,
    ap_clk,
    Q,
    SR,
    sel);
  output [15:0]out;
  input ap_clk;
  input [1:0]Q;
  input [0:0]SR;
  input [11:0]sel;

  wire [1:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire [15:0]out;
  wire [11:0]sel;
  wire NLW_q0_reg_0_CASCADEOUTA_UNCONNECTED;
  wire NLW_q0_reg_0_CASCADEOUTB_UNCONNECTED;
  wire NLW_q0_reg_0_DBITERR_UNCONNECTED;
  wire NLW_q0_reg_0_INJECTDBITERR_UNCONNECTED;
  wire NLW_q0_reg_0_INJECTSBITERR_UNCONNECTED;
  wire NLW_q0_reg_0_SBITERR_UNCONNECTED;
  wire [31:8]NLW_q0_reg_0_DOADO_UNCONNECTED;
  wire [31:0]NLW_q0_reg_0_DOBDO_UNCONNECTED;
  wire [3:1]NLW_q0_reg_0_DOPADOP_UNCONNECTED;
  wire [3:0]NLW_q0_reg_0_DOPBDOP_UNCONNECTED;
  wire [7:0]NLW_q0_reg_0_ECCPARITY_UNCONNECTED;
  wire [8:0]NLW_q0_reg_0_RDADDRECC_UNCONNECTED;
  wire NLW_q0_reg_1_CASCADEOUTA_UNCONNECTED;
  wire NLW_q0_reg_1_CASCADEOUTB_UNCONNECTED;
  wire NLW_q0_reg_1_DBITERR_UNCONNECTED;
  wire NLW_q0_reg_1_INJECTDBITERR_UNCONNECTED;
  wire NLW_q0_reg_1_INJECTSBITERR_UNCONNECTED;
  wire NLW_q0_reg_1_SBITERR_UNCONNECTED;
  wire [31:7]NLW_q0_reg_1_DOADO_UNCONNECTED;
  wire [31:0]NLW_q0_reg_1_DOBDO_UNCONNECTED;
  wire [3:0]NLW_q0_reg_1_DOPADOP_UNCONNECTED;
  wire [3:0]NLW_q0_reg_1_DOPBDOP_UNCONNECTED;
  wire [7:0]NLW_q0_reg_1_ECCPARITY_UNCONNECTED;
  wire [8:0]NLW_q0_reg_1_RDADDRECC_UNCONNECTED;

  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p1_d8" *) 
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "65536" *) 
  (* RTL_RAM_NAME = "sine_lut_V_U/nco_sine_lut_V_rom_U/q0" *) 
  (* bram_addr_begin = "0" *) 
  (* bram_addr_end = "4095" *) 
  (* bram_slice_begin = "0" *) 
  (* bram_slice_end = "8" *) 
  RAMB36E1 #(
    .DOA_REG(1),
    .DOB_REG(0),
    .EN_ECC_READ("FALSE"),
    .EN_ECC_WRITE("FALSE"),
    .INITP_00(256'h07FF001FFC00FFE003FF001FF800FFC007FE007FF003FF003FF801FF801FF800),
    .INITP_01(256'hE0007FFE0007FFC001FFF0007FFC003FFC003FFC003FFC007FF800FFF001FFC0),
    .INITP_02(256'hE000000FFFFFE000007FFFF800007FFFE00007FFFC0001FFFE0001FFFC0007FF),
    .INITP_03(256'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFE000000000001FFFFFFFFF00000001FFFFFF),
    .INITP_04(256'hFFFFFF00000001FFFFFFFFF000000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFE),
    .INITP_05(256'hFFC0007FFF0000FFFF00007FFFC0000FFFFC00003FFFFC00000FFFFFE000000F),
    .INITP_06(256'h07FF001FFE003FFC007FF8007FF8007FF8007FFC001FFF0007FFC000FFFC000F),
    .INITP_07(256'h003FF003FF003FF801FF801FFC00FFC007FE003FF001FF800FFE007FF001FFC0),
    .INITP_08(256'hF800FFE003FF001FFC00FFE007FF003FF801FF800FFC00FFC007FE007FE007FE),
    .INITP_09(256'h1FFF8001FFF8003FFE000FFF8003FFC003FFC003FFC003FF8007FF000FFE003F),
    .INITP_0A(256'h1FFFFFF000001FFFFF800007FFFF80001FFFF80003FFFE0001FFFE0003FFF800),
    .INITP_0B(256'h00000000000000000000000000001FFFFFFFFFFFE000000000FFFFFFFE000000),
    .INITP_0C(256'h000000FFFFFFFE000000000FFFFFFFFFFFF00000000000000000000000000000),
    .INITP_0D(256'h003FFF8000FFFF0000FFFF80003FFFF00003FFFFC00003FFFFF000001FFFFFF0),
    .INITP_0E(256'hF800FFE001FFC003FF8007FF8007FF8007FF8003FFE000FFF8003FFF0003FFF0),
    .INITP_0F(256'hFFC00FFC00FFC007FE007FE003FF003FF801FFC00FFE007FF001FF800FFE003F),
    .INIT_00(256'h0AF1D8BFA68D745B41280FF6DDC4AB92785F462D14FBE2C9AF967D644B321900),
    .INIT_01(256'h2C13FAE1C8AF967D644B321900E7CEB59C836A51371E05ECD3BAA1886F563D23),
    .INIT_02(256'h4B321900E7CEB59C846B52392007EED5BCA38A71583F260DF4DBC2A990775E45),
    .INIT_03(256'h634B321901E8CFB69E856C543B2209F1D8BFA68D755C432A11F9E0C7AE957C64),
    .INIT_04(256'h745C432B12FAE2C9B19880674F361E05EDD4BCA38B7259412810F7DEC6AD957C),
    .INIT_05(256'h7B634B331B03EBD3BBA28A725A422A11F9E1C9B09880684F371F06EED6BDA58C),
    .INIT_06(256'h776048301901E9D1BAA28A725A432B13FBE3CBB39B836C543C240CF4DCC4AC94),
    .INIT_07(256'h664F382009F2DAC3AC947D664E371F08F1D9C2AA937B644C341D05EED6BEA78F),
    .INIT_08(256'h462F1802EBD4BDA68F79624B341D06EFD8C1AA937C654E372008F1DAC3AC957D),
    .INIT_09(256'h15FEE8D2BCA68F79634C362009F3DCC6AF99836C553F2812FBE5CEB7A18A735D),
    .INIT_0A(256'hD1BBA6907B654F39240EF8E2CDB7A18B755F49341E08F2DCC6B099836D57412B),
    .INIT_0B(256'h79644F3A2510FBE6D1BCA7927D67523D2812FDE8D2BDA8927D68523D2712FCE7),
    .INIT_0C(256'h0BF7E3CFBAA6927D6954402C1703EEDAC5B09C87735E4934200BF6E1CDB8A38E),
    .INIT_0D(256'h86725F4B382411FDEAD6C2AF9B87735F4C382410FCE8D4C0AC9884705C48341F),
    .INIT_0E(256'hE8D5C2B09D8A7765523F2C1906F3E0CDBAA794816E5A4734210EFAE7D4C0AD99),
    .INIT_0F(256'h2F1D0BF9E8D6C4B2A08E7C6A574533210FFCEAD8C6B3A18E7C6A574532200DFA),
    .INIT_10(256'h5A4938281605F4E3D2C1B09F8D7C6B5A4837251403F1E0CEBCAB998876645241),
    .INIT_11(256'h69594938281808F8E8D8C7B7A796867665554434231302F1E1D0BFAF9E8D7C6B),
    .INIT_12(256'h58493A2B1C0DFEEEDFD0C1B1A293837464554536261607F7E7D8C8B8A8988879),
    .INIT_13(256'h281A0CFEF0E2D4C6B7A99B8C7E706153443627190AFBEDDECFC1B2A394857667),
    .INIT_14(256'hD8CBBEB1A496897C6F6254473A2C1F1204F7E9DCCEC0B3A597897C6E60524436),
    .INIT_15(256'h65594D4135291D1105F9EDE0D4C8BBAFA3968A7D7164574B3E3125180BFEF1E5),
    .INIT_16(256'hD0C5BAAFA4998E83786D62574C41352A1F1308FDF1E6DACFC3B7ACA094897D71),
    .INIT_17(256'h170D03FAF0E6DCD2C8BEB4AAA0968C82786D63594F443A2F251A1005FBF0E5DA),
    .INIT_18(256'h39312820170E06FDF4EBE2DAD1C8BFB6ADA39A91887F756C635950473D342A20),
    .INIT_19(256'h372F282119120A02FBF3ECE4DCD4CCC5BDB5ADA59D958C847C746C635B534A42),
    .INIT_1A(256'h0E0802FCF5EFE9E2DCD6CFC9C2BBB5AEA7A19A938C857E777069625B544D453E),
    .INIT_1B(256'hC0BBB6B1ACA7A19C97928C87827C77716C66615B55504A443E38332D27211B14),
    .INIT_1C(256'h4A47433F3B37332F2B27231F1B17130E0A0601FDF8F4EFEBE6E1DDD8D3CECAC5),
    .INIT_1D(256'hAEACA9A6A4A19E9C999693908D8A8784817E7B7874716E6A6764605D5955524E),
    .INIT_1E(256'hEBE9E8E7E5E4E2E1DFDEDCDAD8D7D5D3D1CFCDCBC9C7C5C3C1BFBCBAB8B5B3B1),
    .INIT_1F(256'hFFFFFFFFFFFFFFFEFEFEFDFDFCFCFBFBFAF9F9F8F7F6F5F4F3F2F1F0EFEEEDEC),
    .INIT_20(256'hEDEEEFF0F1F2F3F4F5F6F7F8F9F9FAFBFBFCFCFDFDFEFEFEFFFFFFFFFFFFFF00),
    .INIT_21(256'hB3B5B8BABCBFC1C3C5C7C9CBCDCFD1D3D5D7D8DADCDEDFE1E2E4E5E7E8E9EBEC),
    .INIT_22(256'h5255595D6064676A6E7174787B7E8184878A8D909396999C9EA1A4A6A9ACAEB1),
    .INIT_23(256'hCACED3D8DDE1E6EBEFF4F8FD01060A0E13171B1F23272B2F33373B3F43474A4E),
    .INIT_24(256'h1B21272D33383E444A50555B61666C71777C82878C92979CA1A7ACB1B6BBC0C5),
    .INIT_25(256'h454D545B626970777E858C939AA1A7AEB5BBC2C9CFD6DCE2E9EFF5FC02080E14),
    .INIT_26(256'h4A535B636C747C848C959DA5ADB5BDC5CCD4DCE4ECF3FB020A121921282F373E),
    .INIT_27(256'h2A343D475059636C757F88919AA3ADB6BFC8D1DAE2EBF4FD060E172028313942),
    .INIT_28(256'hE5F0FB05101A252F3A444F59636D78828C96A0AAB4BEC8D2DCE6F0FA030D1720),
    .INIT_29(256'h7D8994A0ACB7C3CFDAE6F1FD08131F2A35414C57626D78838E99A4AFBAC5D0DA),
    .INIT_2A(256'hF1FE0B1825313E4B5764717D8A96A3AFBBC8D4E0EDF905111D2935414D596571),
    .INIT_2B(256'h4452606E7C8997A5B3C0CEDCE9F704121F2C3A4754626F7C8996A4B1BECBD8E5),
    .INIT_2C(256'h768594A3B2C1CFDEEDFB0A192736445361707E8C9BA9B7C6D4E2F0FE0C1A2836),
    .INIT_2D(256'h8898A8B8C8D8E7F707162636455564748393A2B1C1D0DFEEFE0D1C2B3A495867),
    .INIT_2E(256'h7C8D9EAFBFD0E1F102132334445565768696A7B7C7D8E8F80818283849596979),
    .INIT_2F(256'h5264768899ABBCCEE0F103142537485A6B7C8D9FB0C1D2E3F405162838495A6B),
    .INIT_30(256'h0D203245576A7C8EA1B3C6D8EAFC0F213345576A7C8EA0B2C4D6E8F90B1D2F41),
    .INIT_31(256'hADC0D4E7FA0E2134475A6E8194A7BACDE0F306192C3F5265778A9DB0C2D5E8FA),
    .INIT_32(256'h34485C708498ACC0D4E8FC1024384C5F73879BAFC2D6EAFD1124384B5F728699),
    .INIT_33(256'hA3B8CDE1F60B2034495E73879CB0C5DAEE03172C4054697D92A6BACFE3F70B1F),
    .INIT_34(256'hFC12273D52687D92A8BDD2E8FD12283D52677D92A7BCD1E6FB10253A4F64798E),
    .INIT_35(256'h41576D8399B0C6DCF2081E34495F758BA1B7CDE2F80E24394F657B90A6BBD1E7),
    .INIT_36(256'h738AA1B7CEE5FB12283F556C8399AFC6DCF30920364C63798FA6BCD2E8FE152B),
    .INIT_37(256'h95ACC3DAF10820374E657C93AAC1D8EF061D344B62798FA6BDD4EB02182F465D),
    .INIT_38(256'hA7BED6EE051D344C647B93AAC2D9F1081F374E667D94ACC3DAF20920384F667D),
    .INIT_39(256'hACC4DCF40C243C546C839BB3CBE3FB132B435A728AA2BAD1E90119304860778F),
    .INIT_3A(256'hA5BDD6EE061F374F688098B0C9E1F9112A425A728AA2BBD3EB031B334B637B94),
    .INIT_3B(256'h95ADC6DEF710284159728BA3BCD4ED051E364F678098B1C9E2FA122B435C748C),
    .INIT_3C(256'h7C95AEC7E0F9112A435C758DA6BFD8F109223B546C859EB6CFE80119324B637C),
    .INIT_3D(256'h5E7790A9C2DBF40D263F58718AA3BCD5EE072039526B849CB5CEE70019324B64),
    .INIT_3E(256'h3D566F88A1BAD3EC051E37516A839CB5CEE70019324B647D96AFC8E1FA132C45),
    .INIT_3F(256'h19324B647D96AFC9E2FB142D465F7892ABC4DDF60F28415B748DA6BFD8F10A23),
    .INIT_40(256'hF50E274059728BA4BED7F009223B546D87A0B9D2EB041D365069829BB4CDE600),
    .INIT_41(256'hD3EC051E375069829BB4CDE6FF18314A637C95AEC8E1FA132C455E7790A9C2DC),
    .INIT_42(256'hB4CDE6FF18314A637B94ADC6DFF8112A435C758EA7C0D9F20B243D566F88A1BA),
    .INIT_43(256'h9CB4CDE6FE173049617A93ABC4DDF60E274059728AA3BCD5EE061F38516A839B),
    .INIT_44(256'h8BA3BCD4ED051D364E677F98B0C9E1FA122B435C748DA6BED7EF082139526A83),
    .INIT_45(256'h849CB4CCE4FC142C445D758DA5BDD5EE061E364F677F97B0C8E0F91129425A73),
    .INIT_46(256'h889FB7CFE6FE162E455D758DA5BCD4EC041C344C647C93ABC3DBF30B233B536B),
    .INIT_47(256'h99B0C7DFF60D253C536B8299B1C8E0F70E263D556C849BB3CBE2FA1129415870),
    .INIT_48(256'hB9D0E7FD142B425970869DB4CBE2F910273E556C839AB1C8DFF70E253C536A82),
    .INIT_49(256'hEA01172D435970869CB3C9DFF60C233950667C93AAC0D7ED041A31485E758CA2),
    .INIT_4A(256'h2E44596F849AB0C6DBF1071D32485E748AA0B6CBE1F70D23394F667C92A8BED4),
    .INIT_4B(256'h869BB0C5DAEF04192E43586D8298ADC2D7ED02172D42576D8297ADC2D8ED0318),
    .INIT_4C(256'hF4081C3045596D8296ABBFD3E8FC11253A4F63788CA1B6CBDFF4091E32475C71),
    .INIT_4D(256'h798DA0B4C7DBEE0215293D5064788CA0B3C7DBEF03172B3F53677B8FA3B7CBE0),
    .INIT_4E(256'h172A3D4F6275889AADC0D3E6F90C1F3245586B7E91A5B8CBDEF105182B3F5266),
    .INIT_4F(256'hD0E2F40617293B4D5F718395A8BACCDEF0031527394C5E718395A8BACDDFF205),
    .INIT_50(256'hA5B6C7D7E9FA0B1C2D3E4F60728394A5B7C8DAEBFC0E1F3143546677899BADBE),
    .INIT_51(256'h96A6B6C7D7E7F70717273848586979899AAABBCBDCECFD0E1E2F405061728394),
    .INIT_52(256'hA7B6C5D4E3F20111202F3E4E5D6C7C8B9BAABAC9D9E9F8081827374757677786),
    .INIT_53(256'hD7E5F3010F1D2B3948566473818F9EACBBC9D8E6F5041221303E4D5C6B7A8998),
    .INIT_54(256'h2734414E5B697683909DABB8C5D3E0EDFB081623313F4C5A687683919FADBBC9),
    .INIT_55(256'h9AA6B2BECAD6E2EEFA06121F2B3744505C6975828E9BA8B4C1CEDAE7F4010E1A),
    .INIT_56(256'h2F3A45505B66717C87929DA8B3BECAD5E0ECF7020E1925303C48535F6B76828E),
    .INIT_57(256'hE8F2FC050F19232D37414B555F69737D87929CA6B0BBC5D0DAE5EFFA040F1A25),
    .INIT_58(256'hC6CED7DFE8F1F9020B141D252E374049525C656E77808A939CA6AFB8C2CBD5DF),
    .INIT_59(256'hC8D0D7DEE6EDF5FD040C131B232B333A424A525A626A737B838B939CA4ACB5BD),
    .INIT_5A(256'hF1F7FD030A10161D232930363D444A51585E656C737A81888F969DA4ABB2BAC1),
    .INIT_5B(256'h3F44494E53585E63686D73787D83888E93999EA4AAAFB5BBC1C7CCD2D8DEE4EB),
    .INIT_5C(256'hB5B8BCC0C4C8CCD0D4D8DCE0E4E8ECF1F5F9FE02070B1014191E22272C31353A),
    .INIT_5D(256'h515356595B5E616366696C6F7275787B7E8184878B8E9195989B9FA2A6AAADB1),
    .INIT_5E(256'h141617181A1B1D1E2021232527282A2C2E30323436383A3C3E404345474A4C4E),
    .INIT_5F(256'h000000000000000101010202030304040506060708090A0B0C0D0E0F10111213),
    .INIT_60(256'h1211100F0E0D0C0B0A0908070606050404030302020101010000000000000000),
    .INIT_61(256'h4C4A474543403E3C3A38363432302E2C2A2827252321201E1D1B1A1817161413),
    .INIT_62(256'hADAAA6A29F9B9895918E8B8784817E7B7875726F6C696663615E5B595653514E),
    .INIT_63(256'h35312C27221E1914100B0702FEF9F5F1ECE8E4E0DCD8D4D0CCC8C4C0BCB8B5B1),
    .INIT_64(256'hE4DED8D2CCC7C1BBB5AFAAA49E99938E88837D78736D68635E58534E49443F3A),
    .INIT_65(256'hBAB2ABA49D968F88817A736C655E58514A443D363029231D16100A03FDF7F1EB),
    .INIT_66(256'hB5ACA49C938B837B736A625A524A423A332B231B130C04FDF5EDE6DED7D0C8C1),
    .INIT_67(256'hD5CBC2B8AFA69C938A80776E655C524940372E251D140B02F9F1E8DFD7CEC6BD),
    .INIT_68(256'h1A0F04FAEFE5DAD0C5BBB0A69C92877D73695F554B41372D23190F05FCF2E8DF),
    .INIT_69(256'h82766B5F53483C3025190E02F7ECE0D5CABEB3A89D92877C71665B50453A2F25),
    .INIT_6A(256'h0E01F4E7DACEC1B4A89B8E8275695C5044372B1F1206FAEEE2D6CABEB2A69A8E),
    .INIT_6B(256'hBBAD9F918376685A4C3F31231608FBEDE0D3C5B8AB9D908376695B4E4134271A),
    .INIT_6C(256'h897A6B5C4D3E30211204F5E6D8C9BBAC9E8F8173645648392B1D0F01F3E5D7C9),
    .INIT_6D(256'h7767574737271808F8E9D9C9BAAA9B8B7C6C5D4E3E2F201101F2E3D4C5B6A798),
    .INIT_6E(256'h83726150402F1E0EFDECDCCBBBAA9A897969584838271707F7E7D7C7B6A69686),
    .INIT_6F(256'hAD9B8977665443311F0EFCEBDAC8B7A5948372604F3E2D1C0BFAE9D7C7B6A594),
    .INIT_70(256'hF2DFCDBAA89583715E4C39271503F0DECCBAA89583715F4D3B291706F4E2D0BE),
    .INIT_71(256'h523F2B1805F1DECBB8A5917E6B5845321F0CF9E6D3C0AD9A8875624F3D2A1705),
    .INIT_72(256'hCBB7A38F7B67533F2B1703EFDBC7B3A08C7864503D291502EEDBC7B4A08D7966),
    .INIT_73(256'h5C47321E09F4DFCBB6A18C78634F3A2511FCE8D3BFAB96826D5945301C08F4E0),
    .INIT_74(256'h03EDD8C2AD97826D57422D1702EDD7C2AD98826D58432E1904EFDAC5B09B8671),
    .INIT_75(256'hBEA8927C664F39230DF7E1CBB6A08A745E48321D07F1DBC6B09A846F59442E18),
    .INIT_76(256'h8C755E48311A04EDD7C0AA937C665039230CF6DFC9B39C867059432D1701EAD4),
    .INIT_77(256'h6A533C250EF7DFC8B19A836C553E2710F9E2CBB49D867059422B14FDE7D0B9A2),
    .INIT_78(256'h58412911FAE2CBB39B846C553D260EF7E0C8B199826B533C250DF6DFC7B09982),
    .INIT_79(256'h533B230BF3DBC3AB937C644C341C04ECD4BCA58D755D452E16FEE6CFB79F8870),
    .INIT_7A(256'h5A422911F9E0C8B0977F674F361E06EED5BDA58D755D442C14FCE4CCB49C846B),
    .INIT_7B(256'h6A52392108EFD7BEA68D745C432B12FAE1C9B0987F674E361D05EDD4BCA38B73),
    .INIT_7C(256'h836A51381F06EED5BCA38A725940270EF6DDC4AB937A61493017FEE6CDB49C83),
    .INIT_7D(256'hA1886F563D240BF2D9C0A78E755C432A11F8DFC6AD947B634A3118FFE6CDB49B),
    .INIT_7E(256'hC2A990775E452C13FAE1C8AE957C634A3118FFE6CDB49B826950371E05ECD3BA),
    .INIT_7F(256'hE6CDB49B826950361D04EBD2B9A0876D543B2209F0D7BEA48B725940270EF5DC),
    .INIT_A(36'h000000000),
    .INIT_B(36'h000000000),
    .RAM_EXTENSION_A("NONE"),
    .RAM_EXTENSION_B("NONE"),
    .RAM_MODE("TDP"),
    .RDADDR_COLLISION_HWCONFIG("PERFORMANCE"),
    .READ_WIDTH_A(9),
    .READ_WIDTH_B(0),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(36'h000000000),
    .SRVAL_B(36'h000000000),
    .WRITE_MODE_A("WRITE_FIRST"),
    .WRITE_MODE_B("WRITE_FIRST"),
    .WRITE_WIDTH_A(9),
    .WRITE_WIDTH_B(0)) 
    q0_reg_0
       (.ADDRARDADDR({1'b1,sel,1'b0,1'b0,1'b0}),
        .ADDRBWRADDR({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CASCADEINA(1'b1),
        .CASCADEINB(1'b0),
        .CASCADEOUTA(NLW_q0_reg_0_CASCADEOUTA_UNCONNECTED),
        .CASCADEOUTB(NLW_q0_reg_0_CASCADEOUTB_UNCONNECTED),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(1'b0),
        .DBITERR(NLW_q0_reg_0_DBITERR_UNCONNECTED),
        .DIADI({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .DIBDI({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .DIPADIP({1'b0,1'b0,1'b0,1'b1}),
        .DIPBDIP({1'b1,1'b1,1'b1,1'b1}),
        .DOADO({NLW_q0_reg_0_DOADO_UNCONNECTED[31:8],out[7:0]}),
        .DOBDO(NLW_q0_reg_0_DOBDO_UNCONNECTED[31:0]),
        .DOPADOP({NLW_q0_reg_0_DOPADOP_UNCONNECTED[3:1],out[8]}),
        .DOPBDOP(NLW_q0_reg_0_DOPBDOP_UNCONNECTED[3:0]),
        .ECCPARITY(NLW_q0_reg_0_ECCPARITY_UNCONNECTED[7:0]),
        .ENARDEN(Q[0]),
        .ENBWREN(1'b0),
        .INJECTDBITERR(NLW_q0_reg_0_INJECTDBITERR_UNCONNECTED),
        .INJECTSBITERR(NLW_q0_reg_0_INJECTSBITERR_UNCONNECTED),
        .RDADDRECC(NLW_q0_reg_0_RDADDRECC_UNCONNECTED[8:0]),
        .REGCEAREGCE(Q[1]),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(SR),
        .RSTREGB(1'b0),
        .SBITERR(NLW_q0_reg_0_SBITERR_UNCONNECTED),
        .WEA({1'b0,1'b0,1'b0,1'b0}),
        .WEBWE({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}));
  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p0_d7" *) 
  (* METHODOLOGY_DRC_VIOS = "" *) 
  (* RTL_RAM_BITS = "65536" *) 
  (* RTL_RAM_NAME = "sine_lut_V_U/nco_sine_lut_V_rom_U/q0" *) 
  (* bram_addr_begin = "0" *) 
  (* bram_addr_end = "4095" *) 
  (* bram_slice_begin = "9" *) 
  (* bram_slice_end = "15" *) 
  RAMB36E1 #(
    .DOA_REG(1),
    .DOB_REG(0),
    .EN_ECC_READ("FALSE"),
    .EN_ECC_WRITE("FALSE"),
    .INITP_00(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_01(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_02(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_03(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_04(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_05(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_06(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_07(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_08(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_09(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0A(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0B(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0C(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0D(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0E(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INITP_0F(256'h0000000000000000000000000000000000000000000000000000000000000000),
    .INIT_00(256'h0101010101010101010101000000000000000000000000000000000000000000),
    .INIT_01(256'h0303020202020202020202020202020202020202020202010101010101010101),
    .INIT_02(256'h0404040404040404040404040404030303030303030303030303030303030303),
    .INIT_03(256'h0606060606050505050505050505050505050505050505050504040404040404),
    .INIT_04(256'h0707070707070707070707070707070706060606060606060606060606060606),
    .INIT_05(256'h0909090909090808080808080808080808080808080808080808080707070707),
    .INIT_06(256'h0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A09090909090909090909090909090909),
    .INIT_07(256'h0C0C0C0C0C0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0A0A0A0A0A),
    .INIT_08(256'h0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C),
    .INIT_09(256'h0F0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0D0D0D0D0D0D0D0D),
    .INIT_0A(256'h101010101010101010100F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F),
    .INIT_0B(256'h1111111111111111111111111111111111111010101010101010101010101010),
    .INIT_0C(256'h1312121212121212121212121212121212121212121212121212111111111111),
    .INIT_0D(256'h1414141414141413131313131313131313131313131313131313131313131313),
    .INIT_0E(256'h1515151515151515151515151514141414141414141414141414141414141414),
    .INIT_0F(256'h1616161616161616161616161616161616151515151515151515151515151515),
    .INIT_10(256'h1717171717171717171717171717171717171717171616161616161616161616),
    .INIT_11(256'h1818181818181818181818181818181818181818181818171717171717171717),
    .INIT_12(256'h1919191919191919191919191919191919191919191919181818181818181818),
    .INIT_13(256'h1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1919191919191919191919),
    .INIT_14(256'h1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A),
    .INIT_15(256'h1C1C1C1C1C1C1C1C1C1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B),
    .INIT_16(256'h1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C),
    .INIT_17(256'h1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1C1C1C1C),
    .INIT_18(256'h1E1E1E1E1E1E1E1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D),
    .INIT_19(256'h1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E),
    .INIT_1A(256'h1F1F1F1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E),
    .INIT_1B(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_1C(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_1D(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_1E(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_1F(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_20(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F20),
    .INIT_21(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_22(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_23(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_24(256'h1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F1F),
    .INIT_25(256'h1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1F1F1F1F),
    .INIT_26(256'h1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E1E),
    .INIT_27(256'h1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1E1E1E1E1E1E1E1E),
    .INIT_28(256'h1C1C1C1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D1D),
    .INIT_29(256'h1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C1C),
    .INIT_2A(256'h1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1C1C1C1C1C1C1C1C1C1C),
    .INIT_2B(256'h1A1A1A1A1A1A1A1A1A1A1A1A1A1A1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B1B),
    .INIT_2C(256'h191919191919191919191A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A),
    .INIT_2D(256'h1818181818181818191919191919191919191919191919191919191919191919),
    .INIT_2E(256'h1717171717171717181818181818181818181818181818181818181818181818),
    .INIT_2F(256'h1616161616161616161617171717171717171717171717171717171717171717),
    .INIT_30(256'h1515151515151515151515151515161616161616161616161616161616161616),
    .INIT_31(256'h1414141414141414141414141414141414141515151515151515151515151515),
    .INIT_32(256'h1313131313131313131313131313131313131313131313131414141414141414),
    .INIT_33(256'h1111111111121212121212121212121212121212121212121212121212121313),
    .INIT_34(256'h1010101010101010101010101011111111111111111111111111111111111111),
    .INIT_35(256'h0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F0F1010101010101010101010),
    .INIT_36(256'h0D0D0D0D0D0D0D0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0E0F0F),
    .INIT_37(256'h0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D0D),
    .INIT_38(256'h0A0A0A0A0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0B0C0C0C0C0C0C),
    .INIT_39(256'h0909090909090909090909090909090A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A0A),
    .INIT_3A(256'h0707070708080808080808080808080808080808080808080809090909090909),
    .INIT_3B(256'h0606060606060606060606060606060707070707070707070707070707070707),
    .INIT_3C(256'h0404040404040505050505050505050505050505050505050505060606060606),
    .INIT_3D(256'h0303030303030303030303030303030303040404040404040404040404040404),
    .INIT_3E(256'h0101010101010101020202020202020202020202020202020202020202030303),
    .INIT_3F(256'h0000000000000000000000000000000000000000010101010101010101010101),
    .INIT_40(256'h7E7E7E7E7E7E7E7E7E7E7E7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F00),
    .INIT_41(256'h7C7C7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7E7E7E7E7E7E7E7E7E),
    .INIT_42(256'h7B7B7B7B7B7B7B7B7B7B7B7B7B7B7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C),
    .INIT_43(256'h79797979797A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7B7B7B7B7B7B7B),
    .INIT_44(256'h7878787878787878787878787878787879797979797979797979797979797979),
    .INIT_45(256'h7676767676767777777777777777777777777777777777777777777878787878),
    .INIT_46(256'h7575757575757575757575757575757576767676767676767676767676767676),
    .INIT_47(256'h7373737373747474747474747474747474747474747474747474747575757575),
    .INIT_48(256'h7272727272727272727272727272727373737373737373737373737373737373),
    .INIT_49(256'h7071717171717171717171717171717171717171717171717272727272727272),
    .INIT_4A(256'h6F6F6F6F6F6F6F6F6F6F70707070707070707070707070707070707070707070),
    .INIT_4B(256'h6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6F6F6F6F6F6F6F6F6F6F6F6F6F6F),
    .INIT_4C(256'h6C6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6E6E6E6E6E6E),
    .INIT_4D(256'h6B6B6B6B6B6B6B6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C),
    .INIT_4E(256'h6A6A6A6A6A6A6A6A6A6A6A6A6A6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B),
    .INIT_4F(256'h69696969696969696969696969696969696A6A6A6A6A6A6A6A6A6A6A6A6A6A6A),
    .INIT_50(256'h6868686868686868686868686868686868686868686969696969696969696969),
    .INIT_51(256'h6767676767676767676767676767676767676767676767686868686868686868),
    .INIT_52(256'h6666666666666666666666666666666666666666666666676767676767676767),
    .INIT_53(256'h6565656565656565656565656565656565656565656666666666666666666666),
    .INIT_54(256'h6464646464646464646464646464646464656565656565656565656565656565),
    .INIT_55(256'h6363636363636363636464646464646464646464646464646464646464646464),
    .INIT_56(256'h6363636363636363636363636363636363636363636363636363636363636363),
    .INIT_57(256'h6262626262626262626262626262626262626262626262626262626263636363),
    .INIT_58(256'h6161616161616162626262626262626262626262626262626262626262626262),
    .INIT_59(256'h6161616161616161616161616161616161616161616161616161616161616161),
    .INIT_5A(256'h6060606161616161616161616161616161616161616161616161616161616161),
    .INIT_5B(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_5C(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_5D(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_5E(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_5F(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_60(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_61(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_62(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_63(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_64(256'h6060606060606060606060606060606060606060606060606060606060606060),
    .INIT_65(256'h6161616161616161616161616161616161616161616161616161616160606060),
    .INIT_66(256'h6161616161616161616161616161616161616161616161616161616161616161),
    .INIT_67(256'h6262626262626262626262626262626262626262626262626161616161616161),
    .INIT_68(256'h6363636262626262626262626262626262626262626262626262626262626262),
    .INIT_69(256'h6363636363636363636363636363636363636363636363636363636363636363),
    .INIT_6A(256'h6464646464646464646464646464646464646464646463636363636363636363),
    .INIT_6B(256'h6565656565656565656565656565646464646464646464646464646464646464),
    .INIT_6C(256'h6666666666666666666665656565656565656565656565656565656565656565),
    .INIT_6D(256'h6767676767676767666666666666666666666666666666666666666666666666),
    .INIT_6E(256'h6868686868686868676767676767676767676767676767676767676767676767),
    .INIT_6F(256'h6969696969696969696968686868686868686868686868686868686868686868),
    .INIT_70(256'h6A6A6A6A6A6A6A6A6A6A6A6A6A6A696969696969696969696969696969696969),
    .INIT_71(256'h6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6B6A6A6A6A6A6A6A6A6A6A6A6A6A6A),
    .INIT_72(256'h6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6C6B6B6B6B6B6B6B6B),
    .INIT_73(256'h6E6E6E6E6E6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6D6C6C),
    .INIT_74(256'h6F6F6F6F6F6F6F6F6F6F6F6F6F6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E6E),
    .INIT_75(256'h7070707070707070707070707070707070707070706F6F6F6F6F6F6F6F6F6F6F),
    .INIT_76(256'h7272727272727271717171717171717171717171717171717171717171717070),
    .INIT_77(256'h7373737373737373737373737373737372727272727272727272727272727272),
    .INIT_78(256'h7575757574747474747474747474747474747474747474747474737373737373),
    .INIT_79(256'h7676767676767676767676767676767575757575757575757575757575757575),
    .INIT_7A(256'h7878787877777777777777777777777777777777777777777776767676767676),
    .INIT_7B(256'h7979797979797979797979797979797878787878787878787878787878787878),
    .INIT_7C(256'h7B7B7B7B7B7B7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A7A797979797979),
    .INIT_7D(256'h7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7C7B7B7B7B7B7B7B7B7B7B7B7B7B7B7B),
    .INIT_7E(256'h7E7E7E7E7E7E7E7E7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7D7C7C7C),
    .INIT_7F(256'h7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7F7E7E7E7E7E7E7E7E7E7E7E7E),
    .INIT_A(36'h000000000),
    .INIT_B(36'h000000000),
    .RAM_EXTENSION_A("NONE"),
    .RAM_EXTENSION_B("NONE"),
    .RAM_MODE("TDP"),
    .RDADDR_COLLISION_HWCONFIG("PERFORMANCE"),
    .READ_WIDTH_A(9),
    .READ_WIDTH_B(0),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(36'h000000000),
    .SRVAL_B(36'h000000000),
    .WRITE_MODE_A("WRITE_FIRST"),
    .WRITE_MODE_B("WRITE_FIRST"),
    .WRITE_WIDTH_A(9),
    .WRITE_WIDTH_B(0)) 
    q0_reg_1
       (.ADDRARDADDR({1'b1,sel,1'b0,1'b0,1'b0}),
        .ADDRBWRADDR({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CASCADEINA(1'b1),
        .CASCADEINB(1'b0),
        .CASCADEOUTA(NLW_q0_reg_1_CASCADEOUTA_UNCONNECTED),
        .CASCADEOUTB(NLW_q0_reg_1_CASCADEOUTB_UNCONNECTED),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(1'b0),
        .DBITERR(NLW_q0_reg_1_DBITERR_UNCONNECTED),
        .DIADI({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .DIBDI({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .DIPADIP({1'b0,1'b0,1'b0,1'b0}),
        .DIPBDIP({1'b1,1'b1,1'b1,1'b1}),
        .DOADO({NLW_q0_reg_1_DOADO_UNCONNECTED[31:7],out[15:9]}),
        .DOBDO(NLW_q0_reg_1_DOBDO_UNCONNECTED[31:0]),
        .DOPADOP(NLW_q0_reg_1_DOPADOP_UNCONNECTED[3:0]),
        .DOPBDOP(NLW_q0_reg_1_DOPBDOP_UNCONNECTED[3:0]),
        .ECCPARITY(NLW_q0_reg_1_ECCPARITY_UNCONNECTED[7:0]),
        .ENARDEN(Q[0]),
        .ENBWREN(1'b0),
        .INJECTDBITERR(NLW_q0_reg_1_INJECTDBITERR_UNCONNECTED),
        .INJECTSBITERR(NLW_q0_reg_1_INJECTSBITERR_UNCONNECTED),
        .RDADDRECC(NLW_q0_reg_1_RDADDRECC_UNCONNECTED[8:0]),
        .REGCEAREGCE(Q[1]),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(SR),
        .RSTREGB(1'b0),
        .SBITERR(NLW_q0_reg_1_SBITERR_UNCONNECTED),
        .WEA({1'b0,1'b0,1'b0,1'b0}),
        .WEBWE({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}));
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
