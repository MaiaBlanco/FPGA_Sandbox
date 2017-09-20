//Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
//Date        : Tue Sep 19 09:36:37 2017
//Host        : DarkCube running 64-bit major release  (build 9200)
//Command     : generate_target bd_350b.bd
//Design      : bd_350b
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "bd_350b,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=bd_350b,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=12,numReposBlks=12,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=SBD,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "zynq_design_1_system_ila_0.hwdef" *) 
module bd_350b
   (SLOT_0_AXI_araddr,
    SLOT_0_AXI_arready,
    SLOT_0_AXI_arvalid,
    SLOT_0_AXI_awaddr,
    SLOT_0_AXI_awready,
    SLOT_0_AXI_awvalid,
    SLOT_0_AXI_bready,
    SLOT_0_AXI_bresp,
    SLOT_0_AXI_bvalid,
    SLOT_0_AXI_rdata,
    SLOT_0_AXI_rready,
    SLOT_0_AXI_rresp,
    SLOT_0_AXI_rvalid,
    SLOT_0_AXI_wdata,
    SLOT_0_AXI_wready,
    SLOT_0_AXI_wstrb,
    SLOT_0_AXI_wvalid,
    SLOT_1_GPIO_tri_o,
    SLOT_2_AXI_araddr,
    SLOT_2_AXI_arburst,
    SLOT_2_AXI_arcache,
    SLOT_2_AXI_arid,
    SLOT_2_AXI_arlen,
    SLOT_2_AXI_arlock,
    SLOT_2_AXI_arprot,
    SLOT_2_AXI_arqos,
    SLOT_2_AXI_arready,
    SLOT_2_AXI_arsize,
    SLOT_2_AXI_arvalid,
    SLOT_2_AXI_awaddr,
    SLOT_2_AXI_awburst,
    SLOT_2_AXI_awcache,
    SLOT_2_AXI_awid,
    SLOT_2_AXI_awlen,
    SLOT_2_AXI_awlock,
    SLOT_2_AXI_awprot,
    SLOT_2_AXI_awqos,
    SLOT_2_AXI_awready,
    SLOT_2_AXI_awsize,
    SLOT_2_AXI_awvalid,
    SLOT_2_AXI_bid,
    SLOT_2_AXI_bready,
    SLOT_2_AXI_bresp,
    SLOT_2_AXI_bvalid,
    SLOT_2_AXI_rdata,
    SLOT_2_AXI_rid,
    SLOT_2_AXI_rlast,
    SLOT_2_AXI_rready,
    SLOT_2_AXI_rresp,
    SLOT_2_AXI_rvalid,
    SLOT_2_AXI_wdata,
    SLOT_2_AXI_wlast,
    SLOT_2_AXI_wready,
    SLOT_2_AXI_wstrb,
    SLOT_2_AXI_wvalid,
    TRIG_IN_ack,
    TRIG_IN_trig,
    TRIG_OUT_ack,
    TRIG_OUT_trig,
    clk,
    resetn);
  input [8:0]SLOT_0_AXI_araddr;
  input SLOT_0_AXI_arready;
  input SLOT_0_AXI_arvalid;
  input [8:0]SLOT_0_AXI_awaddr;
  input SLOT_0_AXI_awready;
  input SLOT_0_AXI_awvalid;
  input SLOT_0_AXI_bready;
  input [1:0]SLOT_0_AXI_bresp;
  input SLOT_0_AXI_bvalid;
  input [31:0]SLOT_0_AXI_rdata;
  input SLOT_0_AXI_rready;
  input [1:0]SLOT_0_AXI_rresp;
  input SLOT_0_AXI_rvalid;
  input [31:0]SLOT_0_AXI_wdata;
  input SLOT_0_AXI_wready;
  input [3:0]SLOT_0_AXI_wstrb;
  input SLOT_0_AXI_wvalid;
  input [7:0]SLOT_1_GPIO_tri_o;
  input [15:0]SLOT_2_AXI_araddr;
  input [1:0]SLOT_2_AXI_arburst;
  input [3:0]SLOT_2_AXI_arcache;
  input [11:0]SLOT_2_AXI_arid;
  input [7:0]SLOT_2_AXI_arlen;
  input [0:0]SLOT_2_AXI_arlock;
  input [2:0]SLOT_2_AXI_arprot;
  input [3:0]SLOT_2_AXI_arqos;
  input SLOT_2_AXI_arready;
  input [2:0]SLOT_2_AXI_arsize;
  input SLOT_2_AXI_arvalid;
  input [15:0]SLOT_2_AXI_awaddr;
  input [1:0]SLOT_2_AXI_awburst;
  input [3:0]SLOT_2_AXI_awcache;
  input [11:0]SLOT_2_AXI_awid;
  input [7:0]SLOT_2_AXI_awlen;
  input [0:0]SLOT_2_AXI_awlock;
  input [2:0]SLOT_2_AXI_awprot;
  input [3:0]SLOT_2_AXI_awqos;
  input SLOT_2_AXI_awready;
  input [2:0]SLOT_2_AXI_awsize;
  input SLOT_2_AXI_awvalid;
  input [11:0]SLOT_2_AXI_bid;
  input SLOT_2_AXI_bready;
  input [1:0]SLOT_2_AXI_bresp;
  input SLOT_2_AXI_bvalid;
  input [31:0]SLOT_2_AXI_rdata;
  input [11:0]SLOT_2_AXI_rid;
  input SLOT_2_AXI_rlast;
  input SLOT_2_AXI_rready;
  input [1:0]SLOT_2_AXI_rresp;
  input SLOT_2_AXI_rvalid;
  input [31:0]SLOT_2_AXI_wdata;
  input SLOT_2_AXI_wlast;
  input SLOT_2_AXI_wready;
  input [3:0]SLOT_2_AXI_wstrb;
  input SLOT_2_AXI_wvalid;
  output [0:0]TRIG_IN_ack;
  input [0:0]TRIG_IN_trig;
  input [0:0]TRIG_OUT_ack;
  output [0:0]TRIG_OUT_trig;
  input clk;
  input resetn;

  wire [15:0]Conn1_ARADDR;
  wire [1:0]Conn1_ARBURST;
  wire [3:0]Conn1_ARCACHE;
  wire [11:0]Conn1_ARID;
  wire [7:0]Conn1_ARLEN;
  wire [0:0]Conn1_ARLOCK;
  wire [2:0]Conn1_ARPROT;
  wire [3:0]Conn1_ARQOS;
  wire Conn1_ARREADY;
  wire [2:0]Conn1_ARSIZE;
  wire Conn1_ARVALID;
  wire [15:0]Conn1_AWADDR;
  wire [1:0]Conn1_AWBURST;
  wire [3:0]Conn1_AWCACHE;
  wire [11:0]Conn1_AWID;
  wire [7:0]Conn1_AWLEN;
  wire [0:0]Conn1_AWLOCK;
  wire [2:0]Conn1_AWPROT;
  wire [3:0]Conn1_AWQOS;
  wire Conn1_AWREADY;
  wire [2:0]Conn1_AWSIZE;
  wire Conn1_AWVALID;
  wire [11:0]Conn1_BID;
  wire Conn1_BREADY;
  wire [1:0]Conn1_BRESP;
  wire Conn1_BVALID;
  wire [31:0]Conn1_RDATA;
  wire [11:0]Conn1_RID;
  wire Conn1_RLAST;
  wire Conn1_RREADY;
  wire [1:0]Conn1_RRESP;
  wire Conn1_RVALID;
  wire [31:0]Conn1_WDATA;
  wire Conn1_WLAST;
  wire Conn1_WREADY;
  wire [3:0]Conn1_WSTRB;
  wire Conn1_WVALID;
  wire [8:0]Conn_ARADDR;
  wire Conn_ARREADY;
  wire Conn_ARVALID;
  wire [8:0]Conn_AWADDR;
  wire Conn_AWREADY;
  wire Conn_AWVALID;
  wire Conn_BREADY;
  wire [1:0]Conn_BRESP;
  wire Conn_BVALID;
  wire [31:0]Conn_RDATA;
  wire Conn_RREADY;
  wire [1:0]Conn_RRESP;
  wire Conn_RVALID;
  wire [31:0]Conn_WDATA;
  wire Conn_WREADY;
  wire [3:0]Conn_WSTRB;
  wire Conn_WVALID;
  wire [7:0]SLOT_1_GPIO_tri_o_1;
  wire TRIG_IN_1_ACK;
  wire [0:0]TRIG_IN_1_TRIG;
  wire clk_1;
  wire [0:0]ila_lib_TRIG_OUT_ACK;
  wire ila_lib_TRIG_OUT_TRIG;
  wire [1:0]net_slot_0_axi_ar_cnt;
  wire [1:0]net_slot_0_axi_ar_ctrl;
  wire [8:0]net_slot_0_axi_araddr;
  wire net_slot_0_axi_arready;
  wire net_slot_0_axi_arvalid;
  wire [1:0]net_slot_0_axi_aw_cnt;
  wire [1:0]net_slot_0_axi_aw_ctrl;
  wire [8:0]net_slot_0_axi_awaddr;
  wire net_slot_0_axi_awready;
  wire net_slot_0_axi_awvalid;
  wire [1:0]net_slot_0_axi_b_cnt;
  wire [1:0]net_slot_0_axi_b_ctrl;
  wire net_slot_0_axi_bready;
  wire [1:0]net_slot_0_axi_bresp;
  wire net_slot_0_axi_bvalid;
  wire [1:0]net_slot_0_axi_r_cnt;
  wire [1:0]net_slot_0_axi_r_ctrl;
  wire [31:0]net_slot_0_axi_rdata;
  wire net_slot_0_axi_rready;
  wire [1:0]net_slot_0_axi_rresp;
  wire net_slot_0_axi_rvalid;
  wire [1:0]net_slot_0_axi_w_ctrl;
  wire [31:0]net_slot_0_axi_wdata;
  wire net_slot_0_axi_wready;
  wire [3:0]net_slot_0_axi_wstrb;
  wire net_slot_0_axi_wvalid;
  wire [1:0]net_slot_2_axi_ar_cnt;
  wire [1:0]net_slot_2_axi_ar_ctrl;
  wire [15:0]net_slot_2_axi_araddr;
  wire [1:0]net_slot_2_axi_arburst;
  wire [3:0]net_slot_2_axi_arcache;
  wire [11:0]net_slot_2_axi_arid;
  wire [7:0]net_slot_2_axi_arlen;
  wire [0:0]net_slot_2_axi_arlock;
  wire [2:0]net_slot_2_axi_arprot;
  wire [3:0]net_slot_2_axi_arqos;
  wire net_slot_2_axi_arready;
  wire [2:0]net_slot_2_axi_arsize;
  wire net_slot_2_axi_arvalid;
  wire [1:0]net_slot_2_axi_aw_cnt;
  wire [1:0]net_slot_2_axi_aw_ctrl;
  wire [15:0]net_slot_2_axi_awaddr;
  wire [1:0]net_slot_2_axi_awburst;
  wire [3:0]net_slot_2_axi_awcache;
  wire [11:0]net_slot_2_axi_awid;
  wire [7:0]net_slot_2_axi_awlen;
  wire [0:0]net_slot_2_axi_awlock;
  wire [2:0]net_slot_2_axi_awprot;
  wire [3:0]net_slot_2_axi_awqos;
  wire net_slot_2_axi_awready;
  wire [2:0]net_slot_2_axi_awsize;
  wire net_slot_2_axi_awvalid;
  wire [1:0]net_slot_2_axi_b_cnt;
  wire [1:0]net_slot_2_axi_b_ctrl;
  wire [11:0]net_slot_2_axi_bid;
  wire net_slot_2_axi_bready;
  wire [1:0]net_slot_2_axi_bresp;
  wire net_slot_2_axi_bvalid;
  wire [1:0]net_slot_2_axi_r_cnt;
  wire [2:0]net_slot_2_axi_r_ctrl;
  wire [31:0]net_slot_2_axi_rdata;
  wire [11:0]net_slot_2_axi_rid;
  wire net_slot_2_axi_rlast;
  wire net_slot_2_axi_rready;
  wire [1:0]net_slot_2_axi_rresp;
  wire net_slot_2_axi_rvalid;
  wire [2:0]net_slot_2_axi_w_ctrl;
  wire [31:0]net_slot_2_axi_wdata;
  wire net_slot_2_axi_wlast;
  wire net_slot_2_axi_wready;
  wire [3:0]net_slot_2_axi_wstrb;
  wire net_slot_2_axi_wvalid;
  wire resetn_1;

  assign Conn1_ARADDR = SLOT_2_AXI_araddr[15:0];
  assign Conn1_ARBURST = SLOT_2_AXI_arburst[1:0];
  assign Conn1_ARCACHE = SLOT_2_AXI_arcache[3:0];
  assign Conn1_ARID = SLOT_2_AXI_arid[11:0];
  assign Conn1_ARLEN = SLOT_2_AXI_arlen[7:0];
  assign Conn1_ARLOCK = SLOT_2_AXI_arlock[0];
  assign Conn1_ARPROT = SLOT_2_AXI_arprot[2:0];
  assign Conn1_ARQOS = SLOT_2_AXI_arqos[3:0];
  assign Conn1_ARREADY = SLOT_2_AXI_arready;
  assign Conn1_ARSIZE = SLOT_2_AXI_arsize[2:0];
  assign Conn1_ARVALID = SLOT_2_AXI_arvalid;
  assign Conn1_AWADDR = SLOT_2_AXI_awaddr[15:0];
  assign Conn1_AWBURST = SLOT_2_AXI_awburst[1:0];
  assign Conn1_AWCACHE = SLOT_2_AXI_awcache[3:0];
  assign Conn1_AWID = SLOT_2_AXI_awid[11:0];
  assign Conn1_AWLEN = SLOT_2_AXI_awlen[7:0];
  assign Conn1_AWLOCK = SLOT_2_AXI_awlock[0];
  assign Conn1_AWPROT = SLOT_2_AXI_awprot[2:0];
  assign Conn1_AWQOS = SLOT_2_AXI_awqos[3:0];
  assign Conn1_AWREADY = SLOT_2_AXI_awready;
  assign Conn1_AWSIZE = SLOT_2_AXI_awsize[2:0];
  assign Conn1_AWVALID = SLOT_2_AXI_awvalid;
  assign Conn1_BID = SLOT_2_AXI_bid[11:0];
  assign Conn1_BREADY = SLOT_2_AXI_bready;
  assign Conn1_BRESP = SLOT_2_AXI_bresp[1:0];
  assign Conn1_BVALID = SLOT_2_AXI_bvalid;
  assign Conn1_RDATA = SLOT_2_AXI_rdata[31:0];
  assign Conn1_RID = SLOT_2_AXI_rid[11:0];
  assign Conn1_RLAST = SLOT_2_AXI_rlast;
  assign Conn1_RREADY = SLOT_2_AXI_rready;
  assign Conn1_RRESP = SLOT_2_AXI_rresp[1:0];
  assign Conn1_RVALID = SLOT_2_AXI_rvalid;
  assign Conn1_WDATA = SLOT_2_AXI_wdata[31:0];
  assign Conn1_WLAST = SLOT_2_AXI_wlast;
  assign Conn1_WREADY = SLOT_2_AXI_wready;
  assign Conn1_WSTRB = SLOT_2_AXI_wstrb[3:0];
  assign Conn1_WVALID = SLOT_2_AXI_wvalid;
  assign Conn_ARADDR = SLOT_0_AXI_araddr[8:0];
  assign Conn_ARREADY = SLOT_0_AXI_arready;
  assign Conn_ARVALID = SLOT_0_AXI_arvalid;
  assign Conn_AWADDR = SLOT_0_AXI_awaddr[8:0];
  assign Conn_AWREADY = SLOT_0_AXI_awready;
  assign Conn_AWVALID = SLOT_0_AXI_awvalid;
  assign Conn_BREADY = SLOT_0_AXI_bready;
  assign Conn_BRESP = SLOT_0_AXI_bresp[1:0];
  assign Conn_BVALID = SLOT_0_AXI_bvalid;
  assign Conn_RDATA = SLOT_0_AXI_rdata[31:0];
  assign Conn_RREADY = SLOT_0_AXI_rready;
  assign Conn_RRESP = SLOT_0_AXI_rresp[1:0];
  assign Conn_RVALID = SLOT_0_AXI_rvalid;
  assign Conn_WDATA = SLOT_0_AXI_wdata[31:0];
  assign Conn_WREADY = SLOT_0_AXI_wready;
  assign Conn_WSTRB = SLOT_0_AXI_wstrb[3:0];
  assign Conn_WVALID = SLOT_0_AXI_wvalid;
  assign SLOT_1_GPIO_tri_o_1 = SLOT_1_GPIO_tri_o[7:0];
  assign TRIG_IN_1_TRIG = TRIG_IN_trig[0];
  assign TRIG_IN_ack[0] = TRIG_IN_1_ACK;
  assign TRIG_OUT_trig[0] = ila_lib_TRIG_OUT_TRIG;
  assign clk_1 = clk;
  assign ila_lib_TRIG_OUT_ACK = TRIG_OUT_ack[0];
  assign resetn_1 = resetn;
  bd_350b_g_inst_0 g_inst
       (.aclk(clk_1),
        .aresetn(resetn_1),
        .m_slot_0_axi_ar_cnt(net_slot_0_axi_ar_cnt),
        .m_slot_0_axi_araddr(net_slot_0_axi_araddr),
        .m_slot_0_axi_arready(net_slot_0_axi_arready),
        .m_slot_0_axi_arvalid(net_slot_0_axi_arvalid),
        .m_slot_0_axi_aw_cnt(net_slot_0_axi_aw_cnt),
        .m_slot_0_axi_awaddr(net_slot_0_axi_awaddr),
        .m_slot_0_axi_awready(net_slot_0_axi_awready),
        .m_slot_0_axi_awvalid(net_slot_0_axi_awvalid),
        .m_slot_0_axi_b_cnt(net_slot_0_axi_b_cnt),
        .m_slot_0_axi_bready(net_slot_0_axi_bready),
        .m_slot_0_axi_bresp(net_slot_0_axi_bresp),
        .m_slot_0_axi_bvalid(net_slot_0_axi_bvalid),
        .m_slot_0_axi_r_cnt(net_slot_0_axi_r_cnt),
        .m_slot_0_axi_rdata(net_slot_0_axi_rdata),
        .m_slot_0_axi_rready(net_slot_0_axi_rready),
        .m_slot_0_axi_rresp(net_slot_0_axi_rresp),
        .m_slot_0_axi_rvalid(net_slot_0_axi_rvalid),
        .m_slot_0_axi_wdata(net_slot_0_axi_wdata),
        .m_slot_0_axi_wready(net_slot_0_axi_wready),
        .m_slot_0_axi_wstrb(net_slot_0_axi_wstrb),
        .m_slot_0_axi_wvalid(net_slot_0_axi_wvalid),
        .m_slot_1_axi_ar_cnt(net_slot_2_axi_ar_cnt),
        .m_slot_1_axi_araddr(net_slot_2_axi_araddr),
        .m_slot_1_axi_arburst(net_slot_2_axi_arburst),
        .m_slot_1_axi_arcache(net_slot_2_axi_arcache),
        .m_slot_1_axi_arid(net_slot_2_axi_arid),
        .m_slot_1_axi_arlen(net_slot_2_axi_arlen),
        .m_slot_1_axi_arlock(net_slot_2_axi_arlock),
        .m_slot_1_axi_arprot(net_slot_2_axi_arprot),
        .m_slot_1_axi_arqos(net_slot_2_axi_arqos),
        .m_slot_1_axi_arready(net_slot_2_axi_arready),
        .m_slot_1_axi_arsize(net_slot_2_axi_arsize),
        .m_slot_1_axi_arvalid(net_slot_2_axi_arvalid),
        .m_slot_1_axi_aw_cnt(net_slot_2_axi_aw_cnt),
        .m_slot_1_axi_awaddr(net_slot_2_axi_awaddr),
        .m_slot_1_axi_awburst(net_slot_2_axi_awburst),
        .m_slot_1_axi_awcache(net_slot_2_axi_awcache),
        .m_slot_1_axi_awid(net_slot_2_axi_awid),
        .m_slot_1_axi_awlen(net_slot_2_axi_awlen),
        .m_slot_1_axi_awlock(net_slot_2_axi_awlock),
        .m_slot_1_axi_awprot(net_slot_2_axi_awprot),
        .m_slot_1_axi_awqos(net_slot_2_axi_awqos),
        .m_slot_1_axi_awready(net_slot_2_axi_awready),
        .m_slot_1_axi_awsize(net_slot_2_axi_awsize),
        .m_slot_1_axi_awvalid(net_slot_2_axi_awvalid),
        .m_slot_1_axi_b_cnt(net_slot_2_axi_b_cnt),
        .m_slot_1_axi_bid(net_slot_2_axi_bid),
        .m_slot_1_axi_bready(net_slot_2_axi_bready),
        .m_slot_1_axi_bresp(net_slot_2_axi_bresp),
        .m_slot_1_axi_bvalid(net_slot_2_axi_bvalid),
        .m_slot_1_axi_r_cnt(net_slot_2_axi_r_cnt),
        .m_slot_1_axi_rdata(net_slot_2_axi_rdata),
        .m_slot_1_axi_rid(net_slot_2_axi_rid),
        .m_slot_1_axi_rlast(net_slot_2_axi_rlast),
        .m_slot_1_axi_rready(net_slot_2_axi_rready),
        .m_slot_1_axi_rresp(net_slot_2_axi_rresp),
        .m_slot_1_axi_rvalid(net_slot_2_axi_rvalid),
        .m_slot_1_axi_wdata(net_slot_2_axi_wdata),
        .m_slot_1_axi_wlast(net_slot_2_axi_wlast),
        .m_slot_1_axi_wready(net_slot_2_axi_wready),
        .m_slot_1_axi_wstrb(net_slot_2_axi_wstrb),
        .m_slot_1_axi_wvalid(net_slot_2_axi_wvalid),
        .slot_0_axi_araddr(Conn_ARADDR),
        .slot_0_axi_arready(Conn_ARREADY),
        .slot_0_axi_arvalid(Conn_ARVALID),
        .slot_0_axi_awaddr(Conn_AWADDR),
        .slot_0_axi_awready(Conn_AWREADY),
        .slot_0_axi_awvalid(Conn_AWVALID),
        .slot_0_axi_bready(Conn_BREADY),
        .slot_0_axi_bresp(Conn_BRESP),
        .slot_0_axi_bvalid(Conn_BVALID),
        .slot_0_axi_rdata(Conn_RDATA),
        .slot_0_axi_rready(Conn_RREADY),
        .slot_0_axi_rresp(Conn_RRESP),
        .slot_0_axi_rvalid(Conn_RVALID),
        .slot_0_axi_wdata(Conn_WDATA),
        .slot_0_axi_wready(Conn_WREADY),
        .slot_0_axi_wstrb(Conn_WSTRB),
        .slot_0_axi_wvalid(Conn_WVALID),
        .slot_1_axi_araddr(Conn1_ARADDR),
        .slot_1_axi_arburst(Conn1_ARBURST),
        .slot_1_axi_arcache(Conn1_ARCACHE),
        .slot_1_axi_arid(Conn1_ARID),
        .slot_1_axi_arlen(Conn1_ARLEN),
        .slot_1_axi_arlock(Conn1_ARLOCK),
        .slot_1_axi_arprot(Conn1_ARPROT),
        .slot_1_axi_arqos(Conn1_ARQOS),
        .slot_1_axi_arready(Conn1_ARREADY),
        .slot_1_axi_arsize(Conn1_ARSIZE),
        .slot_1_axi_arvalid(Conn1_ARVALID),
        .slot_1_axi_awaddr(Conn1_AWADDR),
        .slot_1_axi_awburst(Conn1_AWBURST),
        .slot_1_axi_awcache(Conn1_AWCACHE),
        .slot_1_axi_awid(Conn1_AWID),
        .slot_1_axi_awlen(Conn1_AWLEN),
        .slot_1_axi_awlock(Conn1_AWLOCK),
        .slot_1_axi_awprot(Conn1_AWPROT),
        .slot_1_axi_awqos(Conn1_AWQOS),
        .slot_1_axi_awready(Conn1_AWREADY),
        .slot_1_axi_awsize(Conn1_AWSIZE),
        .slot_1_axi_awvalid(Conn1_AWVALID),
        .slot_1_axi_bid(Conn1_BID),
        .slot_1_axi_bready(Conn1_BREADY),
        .slot_1_axi_bresp(Conn1_BRESP),
        .slot_1_axi_bvalid(Conn1_BVALID),
        .slot_1_axi_rdata(Conn1_RDATA),
        .slot_1_axi_rid(Conn1_RID),
        .slot_1_axi_rlast(Conn1_RLAST),
        .slot_1_axi_rready(Conn1_RREADY),
        .slot_1_axi_rresp(Conn1_RRESP),
        .slot_1_axi_rvalid(Conn1_RVALID),
        .slot_1_axi_wdata(Conn1_WDATA),
        .slot_1_axi_wlast(Conn1_WLAST),
        .slot_1_axi_wready(Conn1_WREADY),
        .slot_1_axi_wstrb(Conn1_WSTRB),
        .slot_1_axi_wvalid(Conn1_WVALID));
  bd_350b_ila_lib_0 ila_lib
       (.clk(clk_1),
        .probe0(net_slot_0_axi_ar_cnt),
        .probe1(net_slot_0_axi_araddr),
        .probe10(net_slot_0_axi_wstrb),
        .probe11(net_slot_0_axi_aw_ctrl),
        .probe12(net_slot_0_axi_w_ctrl),
        .probe13(net_slot_0_axi_b_ctrl),
        .probe14(net_slot_0_axi_ar_ctrl),
        .probe15(net_slot_0_axi_r_ctrl),
        .probe16(SLOT_1_GPIO_tri_o_1),
        .probe17(net_slot_2_axi_ar_cnt),
        .probe18(net_slot_2_axi_araddr),
        .probe19(net_slot_2_axi_arburst),
        .probe2(net_slot_0_axi_aw_cnt),
        .probe20(net_slot_2_axi_arcache),
        .probe21(net_slot_2_axi_arid),
        .probe22(net_slot_2_axi_arlen),
        .probe23(net_slot_2_axi_arlock),
        .probe24(net_slot_2_axi_arprot),
        .probe25(net_slot_2_axi_arqos),
        .probe26(net_slot_2_axi_arsize),
        .probe27(net_slot_2_axi_aw_cnt),
        .probe28(net_slot_2_axi_awaddr),
        .probe29(net_slot_2_axi_awburst),
        .probe3(net_slot_0_axi_awaddr),
        .probe30(net_slot_2_axi_awcache),
        .probe31(net_slot_2_axi_awid),
        .probe32(net_slot_2_axi_awlen),
        .probe33(net_slot_2_axi_awlock),
        .probe34(net_slot_2_axi_awprot),
        .probe35(net_slot_2_axi_awqos),
        .probe36(net_slot_2_axi_awsize),
        .probe37(net_slot_2_axi_b_cnt),
        .probe38(net_slot_2_axi_bid),
        .probe39(net_slot_2_axi_bresp),
        .probe4(net_slot_0_axi_b_cnt),
        .probe40(net_slot_2_axi_r_cnt),
        .probe41(net_slot_2_axi_rdata),
        .probe42(net_slot_2_axi_rid),
        .probe43(net_slot_2_axi_rresp),
        .probe44(net_slot_2_axi_wdata),
        .probe45(net_slot_2_axi_wstrb),
        .probe46(net_slot_2_axi_aw_ctrl),
        .probe47(net_slot_2_axi_w_ctrl),
        .probe48(net_slot_2_axi_b_ctrl),
        .probe49(net_slot_2_axi_ar_ctrl),
        .probe5(net_slot_0_axi_bresp),
        .probe50(net_slot_2_axi_r_ctrl),
        .probe6(net_slot_0_axi_r_cnt),
        .probe7(net_slot_0_axi_rdata),
        .probe8(net_slot_0_axi_rresp),
        .probe9(net_slot_0_axi_wdata),
        .trig_in(TRIG_IN_1_TRIG),
        .trig_in_ack(TRIG_IN_1_ACK),
        .trig_out(ila_lib_TRIG_OUT_TRIG),
        .trig_out_ack(ila_lib_TRIG_OUT_ACK));
  bd_350b_slot_0_ar_0 slot_0_ar
       (.In0(net_slot_0_axi_arvalid),
        .In1(net_slot_0_axi_arready),
        .dout(net_slot_0_axi_ar_ctrl));
  bd_350b_slot_0_aw_0 slot_0_aw
       (.In0(net_slot_0_axi_awvalid),
        .In1(net_slot_0_axi_awready),
        .dout(net_slot_0_axi_aw_ctrl));
  bd_350b_slot_0_b_0 slot_0_b
       (.In0(net_slot_0_axi_bvalid),
        .In1(net_slot_0_axi_bready),
        .dout(net_slot_0_axi_b_ctrl));
  bd_350b_slot_0_r_0 slot_0_r
       (.In0(net_slot_0_axi_rvalid),
        .In1(net_slot_0_axi_rready),
        .dout(net_slot_0_axi_r_ctrl));
  bd_350b_slot_0_w_0 slot_0_w
       (.In0(net_slot_0_axi_wvalid),
        .In1(net_slot_0_axi_wready),
        .dout(net_slot_0_axi_w_ctrl));
  bd_350b_slot_2_ar_0 slot_2_ar
       (.In0(net_slot_2_axi_arvalid),
        .In1(net_slot_2_axi_arready),
        .dout(net_slot_2_axi_ar_ctrl));
  bd_350b_slot_2_aw_0 slot_2_aw
       (.In0(net_slot_2_axi_awvalid),
        .In1(net_slot_2_axi_awready),
        .dout(net_slot_2_axi_aw_ctrl));
  bd_350b_slot_2_b_0 slot_2_b
       (.In0(net_slot_2_axi_bvalid),
        .In1(net_slot_2_axi_bready),
        .dout(net_slot_2_axi_b_ctrl));
  bd_350b_slot_2_r_0 slot_2_r
       (.In0(net_slot_2_axi_rvalid),
        .In1(net_slot_2_axi_rready),
        .In2(net_slot_2_axi_rlast),
        .dout(net_slot_2_axi_r_ctrl));
  bd_350b_slot_2_w_0 slot_2_w
       (.In0(net_slot_2_axi_wvalid),
        .In1(net_slot_2_axi_wready),
        .In2(net_slot_2_axi_wlast),
        .dout(net_slot_2_axi_w_ctrl));
endmodule
