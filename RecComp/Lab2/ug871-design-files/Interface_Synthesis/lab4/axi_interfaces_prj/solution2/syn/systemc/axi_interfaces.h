// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _axi_interfaces_HH_
#define _axi_interfaces_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "axi_interfaces_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 4,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct axi_interfaces : public sc_module {
    // Port declarations 68
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > d_o_0_TREADY;
    sc_in< sc_logic > d_o_1_TREADY;
    sc_in< sc_logic > d_o_2_TREADY;
    sc_in< sc_logic > d_o_3_TREADY;
    sc_in< sc_logic > d_o_4_TREADY;
    sc_in< sc_logic > d_o_5_TREADY;
    sc_in< sc_logic > d_o_6_TREADY;
    sc_in< sc_logic > d_o_7_TREADY;
    sc_out< sc_lv<16> > d_o_0_TDATA;
    sc_out< sc_logic > d_o_0_TVALID;
    sc_out< sc_lv<16> > d_o_1_TDATA;
    sc_out< sc_logic > d_o_1_TVALID;
    sc_out< sc_lv<16> > d_o_2_TDATA;
    sc_out< sc_logic > d_o_2_TVALID;
    sc_out< sc_lv<16> > d_o_3_TDATA;
    sc_out< sc_logic > d_o_3_TVALID;
    sc_out< sc_lv<16> > d_o_4_TDATA;
    sc_out< sc_logic > d_o_4_TVALID;
    sc_out< sc_lv<16> > d_o_5_TDATA;
    sc_out< sc_logic > d_o_5_TVALID;
    sc_out< sc_lv<16> > d_o_6_TDATA;
    sc_out< sc_logic > d_o_6_TVALID;
    sc_out< sc_lv<16> > d_o_7_TDATA;
    sc_out< sc_logic > d_o_7_TVALID;
    sc_in< sc_lv<16> > d_i_0_TDATA;
    sc_in< sc_logic > d_i_0_TVALID;
    sc_out< sc_logic > d_i_0_TREADY;
    sc_in< sc_lv<16> > d_i_1_TDATA;
    sc_in< sc_logic > d_i_1_TVALID;
    sc_out< sc_logic > d_i_1_TREADY;
    sc_in< sc_lv<16> > d_i_2_TDATA;
    sc_in< sc_logic > d_i_2_TVALID;
    sc_out< sc_logic > d_i_2_TREADY;
    sc_in< sc_lv<16> > d_i_3_TDATA;
    sc_in< sc_logic > d_i_3_TVALID;
    sc_out< sc_logic > d_i_3_TREADY;
    sc_in< sc_lv<16> > d_i_4_TDATA;
    sc_in< sc_logic > d_i_4_TVALID;
    sc_out< sc_logic > d_i_4_TREADY;
    sc_in< sc_lv<16> > d_i_5_TDATA;
    sc_in< sc_logic > d_i_5_TVALID;
    sc_out< sc_logic > d_i_5_TREADY;
    sc_in< sc_lv<16> > d_i_6_TDATA;
    sc_in< sc_logic > d_i_6_TVALID;
    sc_out< sc_logic > d_i_6_TREADY;
    sc_in< sc_lv<16> > d_i_7_TDATA;
    sc_in< sc_logic > d_i_7_TVALID;
    sc_out< sc_logic > d_i_7_TREADY;
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    axi_interfaces(sc_module_name name);
    SC_HAS_PROCESS(axi_interfaces);

    ~axi_interfaces();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    axi_interfaces_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* axi_interfaces_AXILiteS_s_axi_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<1> > exitcond_fu_246_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< sc_logic > d_i_0_0_vld_out;
    sc_signal< sc_logic > d_i_1_0_vld_out;
    sc_signal< sc_logic > d_i_2_0_vld_out;
    sc_signal< sc_logic > d_i_3_0_vld_out;
    sc_signal< sc_logic > d_i_4_0_vld_out;
    sc_signal< sc_logic > d_i_5_0_vld_out;
    sc_signal< sc_logic > d_i_6_0_vld_out;
    sc_signal< sc_logic > d_i_7_0_vld_out;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter1;
    sc_signal< sc_logic > d_o_0_1_ack_in;
    sc_signal< sc_logic > d_o_1_1_ack_in;
    sc_signal< sc_logic > d_o_2_1_ack_in;
    sc_signal< sc_logic > d_o_3_1_ack_in;
    sc_signal< sc_logic > d_o_4_1_ack_in;
    sc_signal< sc_logic > d_o_5_1_ack_in;
    sc_signal< sc_logic > d_o_6_1_ack_in;
    sc_signal< sc_logic > d_o_7_1_ack_in;
    sc_signal< bool > ap_block_state4_io;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state3_io;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<16> > d_o_0_1_data_out;
    sc_signal< sc_logic > d_o_0_1_vld_in;
    sc_signal< sc_logic > d_o_0_1_vld_out;
    sc_signal< sc_logic > d_o_0_1_ack_out;
    sc_signal< sc_lv<16> > d_o_0_1_payload_A;
    sc_signal< sc_lv<16> > d_o_0_1_payload_B;
    sc_signal< sc_logic > d_o_0_1_sel_rd;
    sc_signal< sc_logic > d_o_0_1_sel_wr;
    sc_signal< sc_logic > d_o_0_1_sel;
    sc_signal< sc_logic > d_o_0_1_load_A;
    sc_signal< sc_logic > d_o_0_1_load_B;
    sc_signal< sc_lv<2> > d_o_0_1_state;
    sc_signal< sc_logic > d_o_0_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_1_1_data_out;
    sc_signal< sc_logic > d_o_1_1_vld_in;
    sc_signal< sc_logic > d_o_1_1_vld_out;
    sc_signal< sc_logic > d_o_1_1_ack_out;
    sc_signal< sc_lv<16> > d_o_1_1_payload_A;
    sc_signal< sc_lv<16> > d_o_1_1_payload_B;
    sc_signal< sc_logic > d_o_1_1_sel_rd;
    sc_signal< sc_logic > d_o_1_1_sel_wr;
    sc_signal< sc_logic > d_o_1_1_sel;
    sc_signal< sc_logic > d_o_1_1_load_A;
    sc_signal< sc_logic > d_o_1_1_load_B;
    sc_signal< sc_lv<2> > d_o_1_1_state;
    sc_signal< sc_logic > d_o_1_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_2_1_data_out;
    sc_signal< sc_logic > d_o_2_1_vld_in;
    sc_signal< sc_logic > d_o_2_1_vld_out;
    sc_signal< sc_logic > d_o_2_1_ack_out;
    sc_signal< sc_lv<16> > d_o_2_1_payload_A;
    sc_signal< sc_lv<16> > d_o_2_1_payload_B;
    sc_signal< sc_logic > d_o_2_1_sel_rd;
    sc_signal< sc_logic > d_o_2_1_sel_wr;
    sc_signal< sc_logic > d_o_2_1_sel;
    sc_signal< sc_logic > d_o_2_1_load_A;
    sc_signal< sc_logic > d_o_2_1_load_B;
    sc_signal< sc_lv<2> > d_o_2_1_state;
    sc_signal< sc_logic > d_o_2_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_3_1_data_out;
    sc_signal< sc_logic > d_o_3_1_vld_in;
    sc_signal< sc_logic > d_o_3_1_vld_out;
    sc_signal< sc_logic > d_o_3_1_ack_out;
    sc_signal< sc_lv<16> > d_o_3_1_payload_A;
    sc_signal< sc_lv<16> > d_o_3_1_payload_B;
    sc_signal< sc_logic > d_o_3_1_sel_rd;
    sc_signal< sc_logic > d_o_3_1_sel_wr;
    sc_signal< sc_logic > d_o_3_1_sel;
    sc_signal< sc_logic > d_o_3_1_load_A;
    sc_signal< sc_logic > d_o_3_1_load_B;
    sc_signal< sc_lv<2> > d_o_3_1_state;
    sc_signal< sc_logic > d_o_3_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_4_1_data_out;
    sc_signal< sc_logic > d_o_4_1_vld_in;
    sc_signal< sc_logic > d_o_4_1_vld_out;
    sc_signal< sc_logic > d_o_4_1_ack_out;
    sc_signal< sc_lv<16> > d_o_4_1_payload_A;
    sc_signal< sc_lv<16> > d_o_4_1_payload_B;
    sc_signal< sc_logic > d_o_4_1_sel_rd;
    sc_signal< sc_logic > d_o_4_1_sel_wr;
    sc_signal< sc_logic > d_o_4_1_sel;
    sc_signal< sc_logic > d_o_4_1_load_A;
    sc_signal< sc_logic > d_o_4_1_load_B;
    sc_signal< sc_lv<2> > d_o_4_1_state;
    sc_signal< sc_logic > d_o_4_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_5_1_data_out;
    sc_signal< sc_logic > d_o_5_1_vld_in;
    sc_signal< sc_logic > d_o_5_1_vld_out;
    sc_signal< sc_logic > d_o_5_1_ack_out;
    sc_signal< sc_lv<16> > d_o_5_1_payload_A;
    sc_signal< sc_lv<16> > d_o_5_1_payload_B;
    sc_signal< sc_logic > d_o_5_1_sel_rd;
    sc_signal< sc_logic > d_o_5_1_sel_wr;
    sc_signal< sc_logic > d_o_5_1_sel;
    sc_signal< sc_logic > d_o_5_1_load_A;
    sc_signal< sc_logic > d_o_5_1_load_B;
    sc_signal< sc_lv<2> > d_o_5_1_state;
    sc_signal< sc_logic > d_o_5_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_6_1_data_out;
    sc_signal< sc_logic > d_o_6_1_vld_in;
    sc_signal< sc_logic > d_o_6_1_vld_out;
    sc_signal< sc_logic > d_o_6_1_ack_out;
    sc_signal< sc_lv<16> > d_o_6_1_payload_A;
    sc_signal< sc_lv<16> > d_o_6_1_payload_B;
    sc_signal< sc_logic > d_o_6_1_sel_rd;
    sc_signal< sc_logic > d_o_6_1_sel_wr;
    sc_signal< sc_logic > d_o_6_1_sel;
    sc_signal< sc_logic > d_o_6_1_load_A;
    sc_signal< sc_logic > d_o_6_1_load_B;
    sc_signal< sc_lv<2> > d_o_6_1_state;
    sc_signal< sc_logic > d_o_6_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_o_7_1_data_out;
    sc_signal< sc_logic > d_o_7_1_vld_in;
    sc_signal< sc_logic > d_o_7_1_vld_out;
    sc_signal< sc_logic > d_o_7_1_ack_out;
    sc_signal< sc_lv<16> > d_o_7_1_payload_A;
    sc_signal< sc_lv<16> > d_o_7_1_payload_B;
    sc_signal< sc_logic > d_o_7_1_sel_rd;
    sc_signal< sc_logic > d_o_7_1_sel_wr;
    sc_signal< sc_logic > d_o_7_1_sel;
    sc_signal< sc_logic > d_o_7_1_load_A;
    sc_signal< sc_logic > d_o_7_1_load_B;
    sc_signal< sc_lv<2> > d_o_7_1_state;
    sc_signal< sc_logic > d_o_7_1_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_0_0_data_out;
    sc_signal< sc_logic > d_i_0_0_vld_in;
    sc_signal< sc_logic > d_i_0_0_ack_in;
    sc_signal< sc_logic > d_i_0_0_ack_out;
    sc_signal< sc_lv<16> > d_i_0_0_payload_A;
    sc_signal< sc_lv<16> > d_i_0_0_payload_B;
    sc_signal< sc_logic > d_i_0_0_sel_rd;
    sc_signal< sc_logic > d_i_0_0_sel_wr;
    sc_signal< sc_logic > d_i_0_0_sel;
    sc_signal< sc_logic > d_i_0_0_load_A;
    sc_signal< sc_logic > d_i_0_0_load_B;
    sc_signal< sc_lv<2> > d_i_0_0_state;
    sc_signal< sc_logic > d_i_0_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_1_0_data_out;
    sc_signal< sc_logic > d_i_1_0_vld_in;
    sc_signal< sc_logic > d_i_1_0_ack_in;
    sc_signal< sc_logic > d_i_1_0_ack_out;
    sc_signal< sc_lv<16> > d_i_1_0_payload_A;
    sc_signal< sc_lv<16> > d_i_1_0_payload_B;
    sc_signal< sc_logic > d_i_1_0_sel_rd;
    sc_signal< sc_logic > d_i_1_0_sel_wr;
    sc_signal< sc_logic > d_i_1_0_sel;
    sc_signal< sc_logic > d_i_1_0_load_A;
    sc_signal< sc_logic > d_i_1_0_load_B;
    sc_signal< sc_lv<2> > d_i_1_0_state;
    sc_signal< sc_logic > d_i_1_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_2_0_data_out;
    sc_signal< sc_logic > d_i_2_0_vld_in;
    sc_signal< sc_logic > d_i_2_0_ack_in;
    sc_signal< sc_logic > d_i_2_0_ack_out;
    sc_signal< sc_lv<16> > d_i_2_0_payload_A;
    sc_signal< sc_lv<16> > d_i_2_0_payload_B;
    sc_signal< sc_logic > d_i_2_0_sel_rd;
    sc_signal< sc_logic > d_i_2_0_sel_wr;
    sc_signal< sc_logic > d_i_2_0_sel;
    sc_signal< sc_logic > d_i_2_0_load_A;
    sc_signal< sc_logic > d_i_2_0_load_B;
    sc_signal< sc_lv<2> > d_i_2_0_state;
    sc_signal< sc_logic > d_i_2_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_3_0_data_out;
    sc_signal< sc_logic > d_i_3_0_vld_in;
    sc_signal< sc_logic > d_i_3_0_ack_in;
    sc_signal< sc_logic > d_i_3_0_ack_out;
    sc_signal< sc_lv<16> > d_i_3_0_payload_A;
    sc_signal< sc_lv<16> > d_i_3_0_payload_B;
    sc_signal< sc_logic > d_i_3_0_sel_rd;
    sc_signal< sc_logic > d_i_3_0_sel_wr;
    sc_signal< sc_logic > d_i_3_0_sel;
    sc_signal< sc_logic > d_i_3_0_load_A;
    sc_signal< sc_logic > d_i_3_0_load_B;
    sc_signal< sc_lv<2> > d_i_3_0_state;
    sc_signal< sc_logic > d_i_3_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_4_0_data_out;
    sc_signal< sc_logic > d_i_4_0_vld_in;
    sc_signal< sc_logic > d_i_4_0_ack_in;
    sc_signal< sc_logic > d_i_4_0_ack_out;
    sc_signal< sc_lv<16> > d_i_4_0_payload_A;
    sc_signal< sc_lv<16> > d_i_4_0_payload_B;
    sc_signal< sc_logic > d_i_4_0_sel_rd;
    sc_signal< sc_logic > d_i_4_0_sel_wr;
    sc_signal< sc_logic > d_i_4_0_sel;
    sc_signal< sc_logic > d_i_4_0_load_A;
    sc_signal< sc_logic > d_i_4_0_load_B;
    sc_signal< sc_lv<2> > d_i_4_0_state;
    sc_signal< sc_logic > d_i_4_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_5_0_data_out;
    sc_signal< sc_logic > d_i_5_0_vld_in;
    sc_signal< sc_logic > d_i_5_0_ack_in;
    sc_signal< sc_logic > d_i_5_0_ack_out;
    sc_signal< sc_lv<16> > d_i_5_0_payload_A;
    sc_signal< sc_lv<16> > d_i_5_0_payload_B;
    sc_signal< sc_logic > d_i_5_0_sel_rd;
    sc_signal< sc_logic > d_i_5_0_sel_wr;
    sc_signal< sc_logic > d_i_5_0_sel;
    sc_signal< sc_logic > d_i_5_0_load_A;
    sc_signal< sc_logic > d_i_5_0_load_B;
    sc_signal< sc_lv<2> > d_i_5_0_state;
    sc_signal< sc_logic > d_i_5_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_6_0_data_out;
    sc_signal< sc_logic > d_i_6_0_vld_in;
    sc_signal< sc_logic > d_i_6_0_ack_in;
    sc_signal< sc_logic > d_i_6_0_ack_out;
    sc_signal< sc_lv<16> > d_i_6_0_payload_A;
    sc_signal< sc_lv<16> > d_i_6_0_payload_B;
    sc_signal< sc_logic > d_i_6_0_sel_rd;
    sc_signal< sc_logic > d_i_6_0_sel_wr;
    sc_signal< sc_logic > d_i_6_0_sel;
    sc_signal< sc_logic > d_i_6_0_load_A;
    sc_signal< sc_logic > d_i_6_0_load_B;
    sc_signal< sc_lv<2> > d_i_6_0_state;
    sc_signal< sc_logic > d_i_6_0_state_cmp_full;
    sc_signal< sc_lv<16> > d_i_7_0_data_out;
    sc_signal< sc_logic > d_i_7_0_vld_in;
    sc_signal< sc_logic > d_i_7_0_ack_in;
    sc_signal< sc_logic > d_i_7_0_ack_out;
    sc_signal< sc_lv<16> > d_i_7_0_payload_A;
    sc_signal< sc_lv<16> > d_i_7_0_payload_B;
    sc_signal< sc_logic > d_i_7_0_sel_rd;
    sc_signal< sc_logic > d_i_7_0_sel_wr;
    sc_signal< sc_logic > d_i_7_0_sel;
    sc_signal< sc_logic > d_i_7_0_load_A;
    sc_signal< sc_logic > d_i_7_0_load_B;
    sc_signal< sc_lv<2> > d_i_7_0_state;
    sc_signal< sc_logic > d_i_7_0_state_cmp_full;
    sc_signal< sc_lv<32> > acc_0;
    sc_signal< sc_lv<32> > acc_1;
    sc_signal< sc_lv<32> > acc_2;
    sc_signal< sc_lv<32> > acc_3;
    sc_signal< sc_lv<32> > acc_4;
    sc_signal< sc_lv<32> > acc_5;
    sc_signal< sc_lv<32> > acc_6;
    sc_signal< sc_lv<32> > acc_7;
    sc_signal< sc_logic > d_o_0_TDATA_blk_n;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_logic > d_o_1_TDATA_blk_n;
    sc_signal< sc_logic > d_o_2_TDATA_blk_n;
    sc_signal< sc_logic > d_o_3_TDATA_blk_n;
    sc_signal< sc_logic > d_o_4_TDATA_blk_n;
    sc_signal< sc_logic > d_o_5_TDATA_blk_n;
    sc_signal< sc_logic > d_o_6_TDATA_blk_n;
    sc_signal< sc_logic > d_o_7_TDATA_blk_n;
    sc_signal< sc_logic > d_i_0_TDATA_blk_n;
    sc_signal< sc_logic > d_i_1_TDATA_blk_n;
    sc_signal< sc_logic > d_i_2_TDATA_blk_n;
    sc_signal< sc_logic > d_i_3_TDATA_blk_n;
    sc_signal< sc_logic > d_i_4_TDATA_blk_n;
    sc_signal< sc_logic > d_i_5_TDATA_blk_n;
    sc_signal< sc_logic > d_i_6_TDATA_blk_n;
    sc_signal< sc_logic > d_i_7_TDATA_blk_n;
    sc_signal< sc_lv<5> > i1_reg_218;
    sc_signal< sc_lv<5> > tmp_17_fu_242_p1;
    sc_signal< sc_lv<5> > tmp_17_reg_502;
    sc_signal< sc_lv<1> > exitcond_reg_507;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond_reg_507;
    sc_signal< sc_lv<16> > tmp_8_fu_278_p2;
    sc_signal< sc_lv<16> > tmp_2_1_fu_309_p2;
    sc_signal< sc_lv<16> > tmp_2_2_fu_340_p2;
    sc_signal< sc_lv<16> > tmp_2_3_fu_371_p2;
    sc_signal< sc_lv<16> > tmp_2_4_fu_402_p2;
    sc_signal< sc_lv<16> > tmp_2_5_fu_433_p2;
    sc_signal< sc_lv<16> > tmp_2_6_fu_464_p2;
    sc_signal< sc_lv<16> > tmp_2_7_fu_495_p2;
    sc_signal< bool > ap_block_pp0_stage0_flag00011011;
    sc_signal< sc_lv<5> > i1_phi_fu_222_p6;
    sc_signal< sc_lv<32> > tmp_1_fu_266_p2;
    sc_signal< sc_lv<32> > tmp_1_1_fu_297_p2;
    sc_signal< sc_lv<32> > tmp_1_2_fu_328_p2;
    sc_signal< sc_lv<32> > tmp_1_3_fu_359_p2;
    sc_signal< sc_lv<32> > tmp_1_4_fu_390_p2;
    sc_signal< sc_lv<32> > tmp_1_5_fu_421_p2;
    sc_signal< sc_lv<32> > tmp_1_6_fu_452_p2;
    sc_signal< sc_lv<32> > tmp_1_7_fu_483_p2;
    sc_signal< bool > ap_block_pp0_stage0_flag00001001;
    sc_signal< sc_lv<6> > i1_cast_fu_232_p1;
    sc_signal< sc_lv<6> > i_1_7_fu_236_p2;
    sc_signal< sc_lv<32> > tmp1_fu_258_p1;
    sc_signal< sc_lv<16> > tmp_2_fu_262_p1;
    sc_signal< sc_lv<32> > tmp_s_fu_289_p1;
    sc_signal< sc_lv<16> > tmp_10_fu_293_p1;
    sc_signal< sc_lv<32> > tmp_9_fu_320_p1;
    sc_signal< sc_lv<16> > tmp_11_fu_324_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_351_p1;
    sc_signal< sc_lv<16> > tmp_12_fu_355_p1;
    sc_signal< sc_lv<32> > tmp_4_fu_382_p1;
    sc_signal< sc_lv<16> > tmp_13_fu_386_p1;
    sc_signal< sc_lv<32> > tmp_5_fu_413_p1;
    sc_signal< sc_lv<16> > tmp_14_fu_417_p1;
    sc_signal< sc_lv<32> > tmp_6_fu_444_p1;
    sc_signal< sc_lv<16> > tmp_15_fu_448_p1;
    sc_signal< sc_lv<32> > tmp_7_fu_475_p1;
    sc_signal< sc_lv<16> > tmp_16_fu_479_p1;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0_0to1;
    sc_signal< sc_logic > ap_reset_idle_pp0;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< bool > ap_condition_1051;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_pp0_stage0;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_8;
    static const sc_lv<6> ap_const_lv6_20;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_block_pp0_stage0_flag00000000();
    void thread_ap_block_pp0_stage0_flag00001001();
    void thread_ap_block_pp0_stage0_flag00011001();
    void thread_ap_block_pp0_stage0_flag00011011();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_io();
    void thread_ap_block_state3_pp0_stage0_iter2();
    void thread_ap_block_state4_io();
    void thread_ap_block_state4_pp0_stage0_iter1();
    void thread_ap_condition_1051();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_reg_pp0_iter0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp0_0to1();
    void thread_ap_ready();
    void thread_ap_reset_idle_pp0();
    void thread_ap_rst_n_inv();
    void thread_d_i_0_0_ack_in();
    void thread_d_i_0_0_ack_out();
    void thread_d_i_0_0_data_out();
    void thread_d_i_0_0_load_A();
    void thread_d_i_0_0_load_B();
    void thread_d_i_0_0_sel();
    void thread_d_i_0_0_state_cmp_full();
    void thread_d_i_0_0_vld_in();
    void thread_d_i_0_0_vld_out();
    void thread_d_i_0_TDATA_blk_n();
    void thread_d_i_0_TREADY();
    void thread_d_i_1_0_ack_in();
    void thread_d_i_1_0_ack_out();
    void thread_d_i_1_0_data_out();
    void thread_d_i_1_0_load_A();
    void thread_d_i_1_0_load_B();
    void thread_d_i_1_0_sel();
    void thread_d_i_1_0_state_cmp_full();
    void thread_d_i_1_0_vld_in();
    void thread_d_i_1_0_vld_out();
    void thread_d_i_1_TDATA_blk_n();
    void thread_d_i_1_TREADY();
    void thread_d_i_2_0_ack_in();
    void thread_d_i_2_0_ack_out();
    void thread_d_i_2_0_data_out();
    void thread_d_i_2_0_load_A();
    void thread_d_i_2_0_load_B();
    void thread_d_i_2_0_sel();
    void thread_d_i_2_0_state_cmp_full();
    void thread_d_i_2_0_vld_in();
    void thread_d_i_2_0_vld_out();
    void thread_d_i_2_TDATA_blk_n();
    void thread_d_i_2_TREADY();
    void thread_d_i_3_0_ack_in();
    void thread_d_i_3_0_ack_out();
    void thread_d_i_3_0_data_out();
    void thread_d_i_3_0_load_A();
    void thread_d_i_3_0_load_B();
    void thread_d_i_3_0_sel();
    void thread_d_i_3_0_state_cmp_full();
    void thread_d_i_3_0_vld_in();
    void thread_d_i_3_0_vld_out();
    void thread_d_i_3_TDATA_blk_n();
    void thread_d_i_3_TREADY();
    void thread_d_i_4_0_ack_in();
    void thread_d_i_4_0_ack_out();
    void thread_d_i_4_0_data_out();
    void thread_d_i_4_0_load_A();
    void thread_d_i_4_0_load_B();
    void thread_d_i_4_0_sel();
    void thread_d_i_4_0_state_cmp_full();
    void thread_d_i_4_0_vld_in();
    void thread_d_i_4_0_vld_out();
    void thread_d_i_4_TDATA_blk_n();
    void thread_d_i_4_TREADY();
    void thread_d_i_5_0_ack_in();
    void thread_d_i_5_0_ack_out();
    void thread_d_i_5_0_data_out();
    void thread_d_i_5_0_load_A();
    void thread_d_i_5_0_load_B();
    void thread_d_i_5_0_sel();
    void thread_d_i_5_0_state_cmp_full();
    void thread_d_i_5_0_vld_in();
    void thread_d_i_5_0_vld_out();
    void thread_d_i_5_TDATA_blk_n();
    void thread_d_i_5_TREADY();
    void thread_d_i_6_0_ack_in();
    void thread_d_i_6_0_ack_out();
    void thread_d_i_6_0_data_out();
    void thread_d_i_6_0_load_A();
    void thread_d_i_6_0_load_B();
    void thread_d_i_6_0_sel();
    void thread_d_i_6_0_state_cmp_full();
    void thread_d_i_6_0_vld_in();
    void thread_d_i_6_0_vld_out();
    void thread_d_i_6_TDATA_blk_n();
    void thread_d_i_6_TREADY();
    void thread_d_i_7_0_ack_in();
    void thread_d_i_7_0_ack_out();
    void thread_d_i_7_0_data_out();
    void thread_d_i_7_0_load_A();
    void thread_d_i_7_0_load_B();
    void thread_d_i_7_0_sel();
    void thread_d_i_7_0_state_cmp_full();
    void thread_d_i_7_0_vld_in();
    void thread_d_i_7_0_vld_out();
    void thread_d_i_7_TDATA_blk_n();
    void thread_d_i_7_TREADY();
    void thread_d_o_0_1_ack_in();
    void thread_d_o_0_1_ack_out();
    void thread_d_o_0_1_data_out();
    void thread_d_o_0_1_load_A();
    void thread_d_o_0_1_load_B();
    void thread_d_o_0_1_sel();
    void thread_d_o_0_1_state_cmp_full();
    void thread_d_o_0_1_vld_in();
    void thread_d_o_0_1_vld_out();
    void thread_d_o_0_TDATA();
    void thread_d_o_0_TDATA_blk_n();
    void thread_d_o_0_TVALID();
    void thread_d_o_1_1_ack_in();
    void thread_d_o_1_1_ack_out();
    void thread_d_o_1_1_data_out();
    void thread_d_o_1_1_load_A();
    void thread_d_o_1_1_load_B();
    void thread_d_o_1_1_sel();
    void thread_d_o_1_1_state_cmp_full();
    void thread_d_o_1_1_vld_in();
    void thread_d_o_1_1_vld_out();
    void thread_d_o_1_TDATA();
    void thread_d_o_1_TDATA_blk_n();
    void thread_d_o_1_TVALID();
    void thread_d_o_2_1_ack_in();
    void thread_d_o_2_1_ack_out();
    void thread_d_o_2_1_data_out();
    void thread_d_o_2_1_load_A();
    void thread_d_o_2_1_load_B();
    void thread_d_o_2_1_sel();
    void thread_d_o_2_1_state_cmp_full();
    void thread_d_o_2_1_vld_in();
    void thread_d_o_2_1_vld_out();
    void thread_d_o_2_TDATA();
    void thread_d_o_2_TDATA_blk_n();
    void thread_d_o_2_TVALID();
    void thread_d_o_3_1_ack_in();
    void thread_d_o_3_1_ack_out();
    void thread_d_o_3_1_data_out();
    void thread_d_o_3_1_load_A();
    void thread_d_o_3_1_load_B();
    void thread_d_o_3_1_sel();
    void thread_d_o_3_1_state_cmp_full();
    void thread_d_o_3_1_vld_in();
    void thread_d_o_3_1_vld_out();
    void thread_d_o_3_TDATA();
    void thread_d_o_3_TDATA_blk_n();
    void thread_d_o_3_TVALID();
    void thread_d_o_4_1_ack_in();
    void thread_d_o_4_1_ack_out();
    void thread_d_o_4_1_data_out();
    void thread_d_o_4_1_load_A();
    void thread_d_o_4_1_load_B();
    void thread_d_o_4_1_sel();
    void thread_d_o_4_1_state_cmp_full();
    void thread_d_o_4_1_vld_in();
    void thread_d_o_4_1_vld_out();
    void thread_d_o_4_TDATA();
    void thread_d_o_4_TDATA_blk_n();
    void thread_d_o_4_TVALID();
    void thread_d_o_5_1_ack_in();
    void thread_d_o_5_1_ack_out();
    void thread_d_o_5_1_data_out();
    void thread_d_o_5_1_load_A();
    void thread_d_o_5_1_load_B();
    void thread_d_o_5_1_sel();
    void thread_d_o_5_1_state_cmp_full();
    void thread_d_o_5_1_vld_in();
    void thread_d_o_5_1_vld_out();
    void thread_d_o_5_TDATA();
    void thread_d_o_5_TDATA_blk_n();
    void thread_d_o_5_TVALID();
    void thread_d_o_6_1_ack_in();
    void thread_d_o_6_1_ack_out();
    void thread_d_o_6_1_data_out();
    void thread_d_o_6_1_load_A();
    void thread_d_o_6_1_load_B();
    void thread_d_o_6_1_sel();
    void thread_d_o_6_1_state_cmp_full();
    void thread_d_o_6_1_vld_in();
    void thread_d_o_6_1_vld_out();
    void thread_d_o_6_TDATA();
    void thread_d_o_6_TDATA_blk_n();
    void thread_d_o_6_TVALID();
    void thread_d_o_7_1_ack_in();
    void thread_d_o_7_1_ack_out();
    void thread_d_o_7_1_data_out();
    void thread_d_o_7_1_load_A();
    void thread_d_o_7_1_load_B();
    void thread_d_o_7_1_sel();
    void thread_d_o_7_1_state_cmp_full();
    void thread_d_o_7_1_vld_in();
    void thread_d_o_7_1_vld_out();
    void thread_d_o_7_TDATA();
    void thread_d_o_7_TDATA_blk_n();
    void thread_d_o_7_TVALID();
    void thread_exitcond_fu_246_p2();
    void thread_i1_cast_fu_232_p1();
    void thread_i1_phi_fu_222_p6();
    void thread_i_1_7_fu_236_p2();
    void thread_tmp1_fu_258_p1();
    void thread_tmp_10_fu_293_p1();
    void thread_tmp_11_fu_324_p1();
    void thread_tmp_12_fu_355_p1();
    void thread_tmp_13_fu_386_p1();
    void thread_tmp_14_fu_417_p1();
    void thread_tmp_15_fu_448_p1();
    void thread_tmp_16_fu_479_p1();
    void thread_tmp_17_fu_242_p1();
    void thread_tmp_1_1_fu_297_p2();
    void thread_tmp_1_2_fu_328_p2();
    void thread_tmp_1_3_fu_359_p2();
    void thread_tmp_1_4_fu_390_p2();
    void thread_tmp_1_5_fu_421_p2();
    void thread_tmp_1_6_fu_452_p2();
    void thread_tmp_1_7_fu_483_p2();
    void thread_tmp_1_fu_266_p2();
    void thread_tmp_2_1_fu_309_p2();
    void thread_tmp_2_2_fu_340_p2();
    void thread_tmp_2_3_fu_371_p2();
    void thread_tmp_2_4_fu_402_p2();
    void thread_tmp_2_5_fu_433_p2();
    void thread_tmp_2_6_fu_464_p2();
    void thread_tmp_2_7_fu_495_p2();
    void thread_tmp_2_fu_262_p1();
    void thread_tmp_3_fu_351_p1();
    void thread_tmp_4_fu_382_p1();
    void thread_tmp_5_fu_413_p1();
    void thread_tmp_6_fu_444_p1();
    void thread_tmp_7_fu_475_p1();
    void thread_tmp_8_fu_278_p2();
    void thread_tmp_9_fu_320_p1();
    void thread_tmp_s_fu_289_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
