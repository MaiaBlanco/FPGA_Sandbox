// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _convolve_kernel_HH_
#define _convolve_kernel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "convolve_kernel_fbkb.h"
#include "convolve_kernel_fcud.h"

namespace ap_rtl {

struct convolve_kernel : public sc_module {
    // Port declarations 27
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > bufw_Addr_A;
    sc_out< sc_logic > bufw_EN_A;
    sc_out< sc_lv<4> > bufw_WEN_A;
    sc_out< sc_lv<32> > bufw_Din_A;
    sc_in< sc_lv<32> > bufw_Dout_A;
    sc_out< sc_logic > bufw_Clk_A;
    sc_out< sc_logic > bufw_Rst_A;
    sc_out< sc_lv<32> > bufi_Addr_A;
    sc_out< sc_logic > bufi_EN_A;
    sc_out< sc_lv<4> > bufi_WEN_A;
    sc_out< sc_lv<32> > bufi_Din_A;
    sc_in< sc_lv<32> > bufi_Dout_A;
    sc_out< sc_logic > bufi_Clk_A;
    sc_out< sc_logic > bufi_Rst_A;
    sc_out< sc_lv<32> > bufo_Addr_A;
    sc_out< sc_logic > bufo_EN_A;
    sc_out< sc_lv<4> > bufo_WEN_A;
    sc_out< sc_lv<32> > bufo_Din_A;
    sc_in< sc_lv<32> > bufo_Dout_A;
    sc_out< sc_logic > bufo_Clk_A;
    sc_out< sc_logic > bufo_Rst_A;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    convolve_kernel(sc_module_name name);
    SC_HAS_PROCESS(convolve_kernel);

    ~convolve_kernel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    convolve_kernel_fbkb<1,5,32,32,32>* convolve_kernel_fbkb_U1;
    convolve_kernel_fcud<1,4,32,32,32>* convolve_kernel_fcud_U2;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > row_b_cast6_cast_fu_161_p1;
    sc_signal< sc_lv<6> > row_b_cast6_cast_reg_455;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<3> > row_b_cast_fu_165_p1;
    sc_signal< sc_lv<3> > row_b_cast_reg_460;
    sc_signal< sc_lv<2> > row_b_1_fu_175_p2;
    sc_signal< sc_lv<2> > row_b_1_reg_468;
    sc_signal< sc_lv<6> > col_b_cast5_cast_fu_181_p1;
    sc_signal< sc_lv<6> > col_b_cast5_cast_reg_473;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<3> > col_b_cast_fu_185_p1;
    sc_signal< sc_lv<3> > col_b_cast_reg_478;
    sc_signal< sc_lv<2> > col_b_1_fu_195_p2;
    sc_signal< sc_lv<2> > col_b_1_reg_486;
    sc_signal< sc_lv<6> > tmp_10_cast_fu_223_p1;
    sc_signal< sc_lv<6> > tmp_10_cast_reg_491;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > bufo_addr_reg_496;
    sc_signal< sc_lv<2> > to_b_1_fu_260_p2;
    sc_signal< sc_lv<2> > to_b_1_reg_504;
    sc_signal< sc_lv<64> > tmp_17_fu_291_p2;
    sc_signal< sc_lv<64> > tmp_17_reg_509;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<7> > tmp_19_cast_fu_315_p1;
    sc_signal< sc_lv<7> > tmp_19_cast_reg_514;
    sc_signal< sc_lv<2> > ti_b_1_fu_325_p2;
    sc_signal< sc_lv<2> > ti_b_1_reg_522;
    sc_signal< sc_lv<9> > tmp_22_fu_356_p2;
    sc_signal< sc_lv<9> > tmp_22_reg_527;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > i_1_fu_368_p2;
    sc_signal< sc_lv<3> > i_1_reg_535;
    sc_signal< sc_lv<9> > tmp_25_fu_404_p2;
    sc_signal< sc_lv<9> > tmp_25_reg_540;
    sc_signal< sc_lv<1> > tmp_7_fu_362_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<3> > j_1_fu_430_p2;
    sc_signal< sc_lv<3> > j_1_reg_553;
    sc_signal< sc_lv<1> > tmp_s_fu_424_p2;
    sc_signal< sc_lv<32> > bufw_load_reg_563;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > bufi_load_reg_568;
    sc_signal< sc_lv<32> > grp_fu_157_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_573;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > bufo_load_reg_578;
    sc_signal< sc_lv<32> > grp_fu_153_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_583;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<2> > row_b_reg_87;
    sc_signal< sc_lv<1> > tmp_1_fu_189_p2;
    sc_signal< sc_lv<2> > col_b_reg_98;
    sc_signal< sc_lv<1> > tmp_3_fu_254_p2;
    sc_signal< sc_lv<1> > tmp_fu_169_p2;
    sc_signal< sc_lv<2> > to_b_reg_109;
    sc_signal< sc_lv<1> > tmp_5_fu_319_p2;
    sc_signal< sc_lv<2> > ti_b_reg_120;
    sc_signal< sc_lv<3> > i_reg_131;
    sc_signal< sc_lv<3> > j_reg_142;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<64> > tmp_14_cast_fu_249_p1;
    sc_signal< sc_lv<64> > tmp_26_cast_fu_419_p1;
    sc_signal< sc_lv<64> > tmp_27_cast_fu_450_p1;
    sc_signal< sc_lv<32> > bufw_Addr_A_orig;
    sc_signal< sc_lv<32> > bufi_Addr_A_orig;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > bufo_Addr_A_orig;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<4> > tmp_8_fu_205_p3;
    sc_signal< sc_lv<5> > p_shl1_cast_fu_213_p1;
    sc_signal< sc_lv<5> > to_b_cast4_cast_fu_201_p1;
    sc_signal< sc_lv<5> > tmp_10_fu_217_p2;
    sc_signal< sc_lv<6> > tmp_11_fu_227_p2;
    sc_signal< sc_lv<6> > tmp_12_fu_232_p2;
    sc_signal< sc_lv<6> > tmp_13_fu_238_p2;
    sc_signal< sc_lv<6> > tmp_14_fu_244_p2;
    sc_signal< sc_lv<6> > ti_b_cast3_cast_fu_266_p1;
    sc_signal< sc_lv<6> > tmp_15_fu_270_p2;
    sc_signal< sc_lv<8> > tmp_16_fu_279_p3;
    sc_signal< sc_lv<64> > tmp_15_cast_fu_275_p1;
    sc_signal< sc_lv<64> > p_shl3_fu_287_p1;
    sc_signal< sc_lv<5> > tmp_18_fu_297_p3;
    sc_signal< sc_lv<6> > p_shl2_cast_fu_305_p1;
    sc_signal< sc_lv<6> > tmp_19_fu_309_p2;
    sc_signal< sc_lv<64> > i_cast2_fu_331_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_335_p2;
    sc_signal< sc_lv<7> > tmp_24_fu_344_p1;
    sc_signal< sc_lv<9> > tmp_21_fu_340_p1;
    sc_signal< sc_lv<9> > p_shl4_cast_fu_348_p3;
    sc_signal< sc_lv<3> > tmp_9_fu_374_p2;
    sc_signal< sc_lv<7> > tmp_9_cast_cast_fu_379_p1;
    sc_signal< sc_lv<7> > tmp_23_fu_383_p2;
    sc_signal< sc_lv<6> > tmp_28_fu_392_p1;
    sc_signal< sc_lv<9> > p_shl5_cast_fu_396_p3;
    sc_signal< sc_lv<9> > tmp_23_cast_fu_388_p1;
    sc_signal< sc_lv<9> > j_cast1_cast_fu_410_p1;
    sc_signal< sc_lv<9> > tmp_26_fu_414_p2;
    sc_signal< sc_lv<3> > tmp_2_fu_436_p2;
    sc_signal< sc_lv<9> > tmp_2_cast_cast_fu_441_p1;
    sc_signal< sc_lv<9> > tmp_27_fu_445_p2;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_state13;
    static const sc_lv<18> ap_ST_fsm_state14;
    static const sc_lv<18> ap_ST_fsm_state15;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bufi_Addr_A();
    void thread_bufi_Addr_A_orig();
    void thread_bufi_Clk_A();
    void thread_bufi_Din_A();
    void thread_bufi_EN_A();
    void thread_bufi_Rst_A();
    void thread_bufi_WEN_A();
    void thread_bufo_Addr_A();
    void thread_bufo_Addr_A_orig();
    void thread_bufo_Clk_A();
    void thread_bufo_Din_A();
    void thread_bufo_EN_A();
    void thread_bufo_Rst_A();
    void thread_bufo_WEN_A();
    void thread_bufw_Addr_A();
    void thread_bufw_Addr_A_orig();
    void thread_bufw_Clk_A();
    void thread_bufw_Din_A();
    void thread_bufw_EN_A();
    void thread_bufw_Rst_A();
    void thread_bufw_WEN_A();
    void thread_col_b_1_fu_195_p2();
    void thread_col_b_cast5_cast_fu_181_p1();
    void thread_col_b_cast_fu_185_p1();
    void thread_i_1_fu_368_p2();
    void thread_i_cast2_fu_331_p1();
    void thread_j_1_fu_430_p2();
    void thread_j_cast1_cast_fu_410_p1();
    void thread_p_shl1_cast_fu_213_p1();
    void thread_p_shl2_cast_fu_305_p1();
    void thread_p_shl3_fu_287_p1();
    void thread_p_shl4_cast_fu_348_p3();
    void thread_p_shl5_cast_fu_396_p3();
    void thread_row_b_1_fu_175_p2();
    void thread_row_b_cast6_cast_fu_161_p1();
    void thread_row_b_cast_fu_165_p1();
    void thread_ti_b_1_fu_325_p2();
    void thread_ti_b_cast3_cast_fu_266_p1();
    void thread_tmp_10_cast_fu_223_p1();
    void thread_tmp_10_fu_217_p2();
    void thread_tmp_11_fu_227_p2();
    void thread_tmp_12_fu_232_p2();
    void thread_tmp_13_fu_238_p2();
    void thread_tmp_14_cast_fu_249_p1();
    void thread_tmp_14_fu_244_p2();
    void thread_tmp_15_cast_fu_275_p1();
    void thread_tmp_15_fu_270_p2();
    void thread_tmp_16_fu_279_p3();
    void thread_tmp_17_fu_291_p2();
    void thread_tmp_18_fu_297_p3();
    void thread_tmp_19_cast_fu_315_p1();
    void thread_tmp_19_fu_309_p2();
    void thread_tmp_1_fu_189_p2();
    void thread_tmp_20_fu_335_p2();
    void thread_tmp_21_fu_340_p1();
    void thread_tmp_22_fu_356_p2();
    void thread_tmp_23_cast_fu_388_p1();
    void thread_tmp_23_fu_383_p2();
    void thread_tmp_24_fu_344_p1();
    void thread_tmp_25_fu_404_p2();
    void thread_tmp_26_cast_fu_419_p1();
    void thread_tmp_26_fu_414_p2();
    void thread_tmp_27_cast_fu_450_p1();
    void thread_tmp_27_fu_445_p2();
    void thread_tmp_28_fu_392_p1();
    void thread_tmp_2_cast_cast_fu_441_p1();
    void thread_tmp_2_fu_436_p2();
    void thread_tmp_3_fu_254_p2();
    void thread_tmp_5_fu_319_p2();
    void thread_tmp_7_fu_362_p2();
    void thread_tmp_8_fu_205_p3();
    void thread_tmp_9_cast_cast_fu_379_p1();
    void thread_tmp_9_fu_374_p2();
    void thread_tmp_fu_169_p2();
    void thread_tmp_s_fu_424_p2();
    void thread_to_b_1_fu_260_p2();
    void thread_to_b_cast4_cast_fu_201_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
