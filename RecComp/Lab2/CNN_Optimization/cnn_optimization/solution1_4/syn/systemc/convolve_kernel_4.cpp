#include "convolve_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void convolve_kernel::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[16];
}

void convolve_kernel::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[17];
}

void convolve_kernel::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void convolve_kernel::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void convolve_kernel::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[26];
}

void convolve_kernel::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void convolve_kernel::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[34];
}

void convolve_kernel::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[35];
}

void convolve_kernel::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void convolve_kernel::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[43];
}

void convolve_kernel::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[44];
}

void convolve_kernel::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[45];
}

void convolve_kernel::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[46];
}

void convolve_kernel::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[54];
}

void convolve_kernel::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[55];
}

void convolve_kernel::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void convolve_kernel::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void convolve_kernel::thread_ap_done() {
    ap_done = ap_const_logic_0;
}

void convolve_kernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_ready() {
    ap_ready = ap_const_logic_0;
}

void convolve_kernel::thread_bufi_Addr_A() {
    bufi_Addr_A = (!ap_const_lv32_4.is_01())? sc_lv<32>(): bufi_Addr_A_orig.read() << (unsigned short)ap_const_lv32_4.to_uint();
}

void convolve_kernel::thread_bufi_Addr_A_orig() {
    bufi_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufi_Clk_A() {
    bufi_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_Din_A() {
    bufi_Din_A = ap_const_lv128_lc_1;
}

void convolve_kernel::thread_bufi_EN_A() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bufi_EN_A = ap_const_logic_1;
    } else {
        bufi_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_Rst_A() {
    bufi_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_WEN_A() {
    bufi_WEN_A = ap_const_lv16_0;
}

void convolve_kernel::thread_bufo_0_Addr_A() {
    bufo_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_0_Addr_A_orig() {
    bufo_0_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_0_Clk_A() {
    bufo_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_0_Din_A() {
    bufo_0_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_0_EN_A = ap_const_logic_1;
    } else {
        bufo_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_0_Rst_A() {
    bufo_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_0_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_0_WEN_A = ap_const_lv4_F;
    } else {
        bufo_0_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_100_Addr_A() {
    bufo_100_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_100_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_100_Addr_A_orig() {
    bufo_100_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_100_Clk_A() {
    bufo_100_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_100_Din_A() {
    bufo_100_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_100_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_100_EN_A = ap_const_logic_1;
    } else {
        bufo_100_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_100_Rst_A() {
    bufo_100_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_100_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_64) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_100_WEN_A = ap_const_lv4_F;
    } else {
        bufo_100_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_101_Addr_A() {
    bufo_101_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_101_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_101_Addr_A_orig() {
    bufo_101_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_101_Clk_A() {
    bufo_101_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_101_Din_A() {
    bufo_101_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_101_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_101_EN_A = ap_const_logic_1;
    } else {
        bufo_101_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_101_Rst_A() {
    bufo_101_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_101_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_65) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_101_WEN_A = ap_const_lv4_F;
    } else {
        bufo_101_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_102_Addr_A() {
    bufo_102_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_102_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_102_Addr_A_orig() {
    bufo_102_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_102_Clk_A() {
    bufo_102_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_102_Din_A() {
    bufo_102_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_102_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_102_EN_A = ap_const_logic_1;
    } else {
        bufo_102_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_102_Rst_A() {
    bufo_102_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_102_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_66) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_102_WEN_A = ap_const_lv4_F;
    } else {
        bufo_102_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_103_Addr_A() {
    bufo_103_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_103_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_103_Addr_A_orig() {
    bufo_103_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_103_Clk_A() {
    bufo_103_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_103_Din_A() {
    bufo_103_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_103_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_103_EN_A = ap_const_logic_1;
    } else {
        bufo_103_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_103_Rst_A() {
    bufo_103_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_103_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_67) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_103_WEN_A = ap_const_lv4_F;
    } else {
        bufo_103_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_104_Addr_A() {
    bufo_104_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_104_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_104_Addr_A_orig() {
    bufo_104_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_104_Clk_A() {
    bufo_104_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_104_Din_A() {
    bufo_104_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_104_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_104_EN_A = ap_const_logic_1;
    } else {
        bufo_104_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_104_Rst_A() {
    bufo_104_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_104_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_68) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_104_WEN_A = ap_const_lv4_F;
    } else {
        bufo_104_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_105_Addr_A() {
    bufo_105_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_105_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_105_Addr_A_orig() {
    bufo_105_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_105_Clk_A() {
    bufo_105_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_105_Din_A() {
    bufo_105_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_105_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_105_EN_A = ap_const_logic_1;
    } else {
        bufo_105_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_105_Rst_A() {
    bufo_105_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_105_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_69) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_105_WEN_A = ap_const_lv4_F;
    } else {
        bufo_105_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_106_Addr_A() {
    bufo_106_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_106_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_106_Addr_A_orig() {
    bufo_106_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_106_Clk_A() {
    bufo_106_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_106_Din_A() {
    bufo_106_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_106_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_106_EN_A = ap_const_logic_1;
    } else {
        bufo_106_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_106_Rst_A() {
    bufo_106_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_106_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_106_WEN_A = ap_const_lv4_F;
    } else {
        bufo_106_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_107_Addr_A() {
    bufo_107_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_107_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_107_Addr_A_orig() {
    bufo_107_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_107_Clk_A() {
    bufo_107_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_107_Din_A() {
    bufo_107_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_107_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_107_EN_A = ap_const_logic_1;
    } else {
        bufo_107_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_107_Rst_A() {
    bufo_107_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_107_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_107_WEN_A = ap_const_lv4_F;
    } else {
        bufo_107_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_108_Addr_A() {
    bufo_108_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_108_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_108_Addr_A_orig() {
    bufo_108_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_108_Clk_A() {
    bufo_108_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_108_Din_A() {
    bufo_108_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_108_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_108_EN_A = ap_const_logic_1;
    } else {
        bufo_108_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_108_Rst_A() {
    bufo_108_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_108_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_108_WEN_A = ap_const_lv4_F;
    } else {
        bufo_108_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_109_Addr_A() {
    bufo_109_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_109_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_109_Addr_A_orig() {
    bufo_109_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_109_Clk_A() {
    bufo_109_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_109_Din_A() {
    bufo_109_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_109_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_109_EN_A = ap_const_logic_1;
    } else {
        bufo_109_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_109_Rst_A() {
    bufo_109_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_109_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_109_WEN_A = ap_const_lv4_F;
    } else {
        bufo_109_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_10_Addr_A() {
    bufo_10_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_10_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_10_Addr_A_orig() {
    bufo_10_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_10_Clk_A() {
    bufo_10_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_10_Din_A() {
    bufo_10_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_10_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_10_EN_A = ap_const_logic_1;
    } else {
        bufo_10_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_10_Rst_A() {
    bufo_10_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_10_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_10_WEN_A = ap_const_lv4_F;
    } else {
        bufo_10_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_110_Addr_A() {
    bufo_110_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_110_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_110_Addr_A_orig() {
    bufo_110_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_110_Clk_A() {
    bufo_110_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_110_Din_A() {
    bufo_110_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_110_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_110_EN_A = ap_const_logic_1;
    } else {
        bufo_110_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_110_Rst_A() {
    bufo_110_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_110_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_110_WEN_A = ap_const_lv4_F;
    } else {
        bufo_110_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_111_Addr_A() {
    bufo_111_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_111_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_111_Addr_A_orig() {
    bufo_111_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_111_Clk_A() {
    bufo_111_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_111_Din_A() {
    bufo_111_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_111_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_111_EN_A = ap_const_logic_1;
    } else {
        bufo_111_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_111_Rst_A() {
    bufo_111_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_111_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_111_WEN_A = ap_const_lv4_F;
    } else {
        bufo_111_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_112_Addr_A() {
    bufo_112_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_112_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_112_Addr_A_orig() {
    bufo_112_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_112_Clk_A() {
    bufo_112_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_112_Din_A() {
    bufo_112_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_112_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_112_EN_A = ap_const_logic_1;
    } else {
        bufo_112_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_112_Rst_A() {
    bufo_112_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_112_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_70) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_112_WEN_A = ap_const_lv4_F;
    } else {
        bufo_112_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_113_Addr_A() {
    bufo_113_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_113_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_113_Addr_A_orig() {
    bufo_113_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_113_Clk_A() {
    bufo_113_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_113_Din_A() {
    bufo_113_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_113_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_113_EN_A = ap_const_logic_1;
    } else {
        bufo_113_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_113_Rst_A() {
    bufo_113_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_113_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_71) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_113_WEN_A = ap_const_lv4_F;
    } else {
        bufo_113_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_114_Addr_A() {
    bufo_114_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_114_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_114_Addr_A_orig() {
    bufo_114_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_114_Clk_A() {
    bufo_114_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_114_Din_A() {
    bufo_114_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_114_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_114_EN_A = ap_const_logic_1;
    } else {
        bufo_114_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_114_Rst_A() {
    bufo_114_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_114_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_72) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_114_WEN_A = ap_const_lv4_F;
    } else {
        bufo_114_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_115_Addr_A() {
    bufo_115_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_115_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_115_Addr_A_orig() {
    bufo_115_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_115_Clk_A() {
    bufo_115_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_115_Din_A() {
    bufo_115_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_115_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_115_EN_A = ap_const_logic_1;
    } else {
        bufo_115_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_115_Rst_A() {
    bufo_115_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_115_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_73) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_115_WEN_A = ap_const_lv4_F;
    } else {
        bufo_115_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_116_Addr_A() {
    bufo_116_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_116_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_116_Addr_A_orig() {
    bufo_116_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_116_Clk_A() {
    bufo_116_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_116_Din_A() {
    bufo_116_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_116_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_116_EN_A = ap_const_logic_1;
    } else {
        bufo_116_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_116_Rst_A() {
    bufo_116_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_116_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_74) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_116_WEN_A = ap_const_lv4_F;
    } else {
        bufo_116_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_117_Addr_A() {
    bufo_117_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_117_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_117_Addr_A_orig() {
    bufo_117_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_117_Clk_A() {
    bufo_117_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_117_Din_A() {
    bufo_117_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_117_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_117_EN_A = ap_const_logic_1;
    } else {
        bufo_117_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_117_Rst_A() {
    bufo_117_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_117_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_75) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_117_WEN_A = ap_const_lv4_F;
    } else {
        bufo_117_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_118_Addr_A() {
    bufo_118_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_118_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_118_Addr_A_orig() {
    bufo_118_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_118_Clk_A() {
    bufo_118_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_118_Din_A() {
    bufo_118_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_118_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_118_EN_A = ap_const_logic_1;
    } else {
        bufo_118_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_118_Rst_A() {
    bufo_118_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_118_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_76) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_118_WEN_A = ap_const_lv4_F;
    } else {
        bufo_118_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_119_Addr_A() {
    bufo_119_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_119_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_119_Addr_A_orig() {
    bufo_119_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_119_Clk_A() {
    bufo_119_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_119_Din_A() {
    bufo_119_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_119_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_119_EN_A = ap_const_logic_1;
    } else {
        bufo_119_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_119_Rst_A() {
    bufo_119_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_119_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_77) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_119_WEN_A = ap_const_lv4_F;
    } else {
        bufo_119_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_11_Addr_A() {
    bufo_11_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_11_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_11_Addr_A_orig() {
    bufo_11_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_11_Clk_A() {
    bufo_11_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_11_Din_A() {
    bufo_11_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_11_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_11_EN_A = ap_const_logic_1;
    } else {
        bufo_11_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_11_Rst_A() {
    bufo_11_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_11_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_11_WEN_A = ap_const_lv4_F;
    } else {
        bufo_11_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_120_Addr_A() {
    bufo_120_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_120_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_120_Addr_A_orig() {
    bufo_120_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_120_Clk_A() {
    bufo_120_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_120_Din_A() {
    bufo_120_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_120_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_120_EN_A = ap_const_logic_1;
    } else {
        bufo_120_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_120_Rst_A() {
    bufo_120_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_120_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_78) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_120_WEN_A = ap_const_lv4_F;
    } else {
        bufo_120_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_121_Addr_A() {
    bufo_121_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_121_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_121_Addr_A_orig() {
    bufo_121_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_121_Clk_A() {
    bufo_121_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_121_Din_A() {
    bufo_121_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_121_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_121_EN_A = ap_const_logic_1;
    } else {
        bufo_121_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_121_Rst_A() {
    bufo_121_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_121_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_79) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_121_WEN_A = ap_const_lv4_F;
    } else {
        bufo_121_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_122_Addr_A() {
    bufo_122_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_122_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_122_Addr_A_orig() {
    bufo_122_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_122_Clk_A() {
    bufo_122_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_122_Din_A() {
    bufo_122_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_122_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_122_EN_A = ap_const_logic_1;
    } else {
        bufo_122_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_122_Rst_A() {
    bufo_122_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_122_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_122_WEN_A = ap_const_lv4_F;
    } else {
        bufo_122_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_123_Addr_A() {
    bufo_123_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_123_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_123_Addr_A_orig() {
    bufo_123_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_123_Clk_A() {
    bufo_123_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_123_Din_A() {
    bufo_123_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_123_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_123_EN_A = ap_const_logic_1;
    } else {
        bufo_123_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_123_Rst_A() {
    bufo_123_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_123_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_123_WEN_A = ap_const_lv4_F;
    } else {
        bufo_123_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_124_Addr_A() {
    bufo_124_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_124_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_124_Addr_A_orig() {
    bufo_124_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_124_Clk_A() {
    bufo_124_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_124_Din_A() {
    bufo_124_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_124_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_124_EN_A = ap_const_logic_1;
    } else {
        bufo_124_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_124_Rst_A() {
    bufo_124_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_124_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_124_WEN_A = ap_const_lv4_F;
    } else {
        bufo_124_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_125_Addr_A() {
    bufo_125_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_125_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_125_Addr_A_orig() {
    bufo_125_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_125_Clk_A() {
    bufo_125_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_125_Din_A() {
    bufo_125_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_125_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_125_EN_A = ap_const_logic_1;
    } else {
        bufo_125_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_125_Rst_A() {
    bufo_125_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_125_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_125_WEN_A = ap_const_lv4_F;
    } else {
        bufo_125_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_126_Addr_A() {
    bufo_126_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_126_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_126_Addr_A_orig() {
    bufo_126_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_126_Clk_A() {
    bufo_126_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_126_Din_A() {
    bufo_126_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_126_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_126_EN_A = ap_const_logic_1;
    } else {
        bufo_126_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_126_Rst_A() {
    bufo_126_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_126_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_126_WEN_A = ap_const_lv4_F;
    } else {
        bufo_126_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_127_Addr_A() {
    bufo_127_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_127_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_127_Addr_A_orig() {
    bufo_127_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_127_Clk_A() {
    bufo_127_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_127_Din_A() {
    bufo_127_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_127_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_127_EN_A = ap_const_logic_1;
    } else {
        bufo_127_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_127_Rst_A() {
    bufo_127_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_127_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_127_WEN_A = ap_const_lv4_F;
    } else {
        bufo_127_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_128_Addr_A() {
    bufo_128_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_128_Addr_B() {
    bufo_128_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_128_Clk_A() {
    bufo_128_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_128_Clk_B() {
    bufo_128_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_128_Din_A() {
    bufo_128_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_128_Din_B() {
    bufo_128_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_128_EN_A() {
    bufo_128_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_128_EN_B() {
    bufo_128_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_128_Rst_A() {
    bufo_128_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_128_Rst_B() {
    bufo_128_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_128_WEN_A() {
    bufo_128_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_128_WEN_B() {
    bufo_128_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_129_Addr_A() {
    bufo_129_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_129_Addr_B() {
    bufo_129_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_129_Clk_A() {
    bufo_129_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_129_Clk_B() {
    bufo_129_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_129_Din_A() {
    bufo_129_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_129_Din_B() {
    bufo_129_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_129_EN_A() {
    bufo_129_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_129_EN_B() {
    bufo_129_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_129_Rst_A() {
    bufo_129_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_129_Rst_B() {
    bufo_129_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_129_WEN_A() {
    bufo_129_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_129_WEN_B() {
    bufo_129_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_12_Addr_A() {
    bufo_12_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_12_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_12_Addr_A_orig() {
    bufo_12_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_12_Clk_A() {
    bufo_12_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_12_Din_A() {
    bufo_12_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_12_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_12_EN_A = ap_const_logic_1;
    } else {
        bufo_12_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_12_Rst_A() {
    bufo_12_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_12_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_12_WEN_A = ap_const_lv4_F;
    } else {
        bufo_12_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_130_Addr_A() {
    bufo_130_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_130_Addr_B() {
    bufo_130_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_130_Clk_A() {
    bufo_130_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_130_Clk_B() {
    bufo_130_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_130_Din_A() {
    bufo_130_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_130_Din_B() {
    bufo_130_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_130_EN_A() {
    bufo_130_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_130_EN_B() {
    bufo_130_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_130_Rst_A() {
    bufo_130_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_130_Rst_B() {
    bufo_130_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_130_WEN_A() {
    bufo_130_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_130_WEN_B() {
    bufo_130_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_131_Addr_A() {
    bufo_131_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_131_Addr_B() {
    bufo_131_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_131_Clk_A() {
    bufo_131_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_131_Clk_B() {
    bufo_131_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_131_Din_A() {
    bufo_131_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_131_Din_B() {
    bufo_131_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_131_EN_A() {
    bufo_131_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_131_EN_B() {
    bufo_131_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_131_Rst_A() {
    bufo_131_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_131_Rst_B() {
    bufo_131_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_131_WEN_A() {
    bufo_131_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_131_WEN_B() {
    bufo_131_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_132_Addr_A() {
    bufo_132_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_132_Addr_B() {
    bufo_132_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_132_Clk_A() {
    bufo_132_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_132_Clk_B() {
    bufo_132_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_132_Din_A() {
    bufo_132_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_132_Din_B() {
    bufo_132_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_132_EN_A() {
    bufo_132_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_132_EN_B() {
    bufo_132_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_132_Rst_A() {
    bufo_132_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_132_Rst_B() {
    bufo_132_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_132_WEN_A() {
    bufo_132_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_132_WEN_B() {
    bufo_132_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_133_Addr_A() {
    bufo_133_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_133_Addr_B() {
    bufo_133_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_133_Clk_A() {
    bufo_133_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_133_Clk_B() {
    bufo_133_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_133_Din_A() {
    bufo_133_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_133_Din_B() {
    bufo_133_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_133_EN_A() {
    bufo_133_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_133_EN_B() {
    bufo_133_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_133_Rst_A() {
    bufo_133_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_133_Rst_B() {
    bufo_133_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_133_WEN_A() {
    bufo_133_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_133_WEN_B() {
    bufo_133_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_134_Addr_A() {
    bufo_134_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_134_Addr_B() {
    bufo_134_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_134_Clk_A() {
    bufo_134_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_134_Clk_B() {
    bufo_134_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_134_Din_A() {
    bufo_134_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_134_Din_B() {
    bufo_134_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_134_EN_A() {
    bufo_134_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_134_EN_B() {
    bufo_134_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_134_Rst_A() {
    bufo_134_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_134_Rst_B() {
    bufo_134_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_134_WEN_A() {
    bufo_134_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_134_WEN_B() {
    bufo_134_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_135_Addr_A() {
    bufo_135_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_135_Addr_B() {
    bufo_135_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_135_Clk_A() {
    bufo_135_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_135_Clk_B() {
    bufo_135_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_135_Din_A() {
    bufo_135_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_135_Din_B() {
    bufo_135_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_135_EN_A() {
    bufo_135_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_135_EN_B() {
    bufo_135_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_135_Rst_A() {
    bufo_135_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_135_Rst_B() {
    bufo_135_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_135_WEN_A() {
    bufo_135_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_135_WEN_B() {
    bufo_135_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_136_Addr_A() {
    bufo_136_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_136_Addr_B() {
    bufo_136_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_136_Clk_A() {
    bufo_136_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_136_Clk_B() {
    bufo_136_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_136_Din_A() {
    bufo_136_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_136_Din_B() {
    bufo_136_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_136_EN_A() {
    bufo_136_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_136_EN_B() {
    bufo_136_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_136_Rst_A() {
    bufo_136_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_136_Rst_B() {
    bufo_136_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_136_WEN_A() {
    bufo_136_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_136_WEN_B() {
    bufo_136_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_137_Addr_A() {
    bufo_137_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_137_Addr_B() {
    bufo_137_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_137_Clk_A() {
    bufo_137_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_137_Clk_B() {
    bufo_137_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_137_Din_A() {
    bufo_137_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_137_Din_B() {
    bufo_137_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_137_EN_A() {
    bufo_137_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_137_EN_B() {
    bufo_137_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_137_Rst_A() {
    bufo_137_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_137_Rst_B() {
    bufo_137_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_137_WEN_A() {
    bufo_137_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_137_WEN_B() {
    bufo_137_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_138_Addr_A() {
    bufo_138_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_138_Addr_B() {
    bufo_138_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_138_Clk_A() {
    bufo_138_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_138_Clk_B() {
    bufo_138_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_138_Din_A() {
    bufo_138_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_138_Din_B() {
    bufo_138_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_138_EN_A() {
    bufo_138_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_138_EN_B() {
    bufo_138_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_138_Rst_A() {
    bufo_138_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_138_Rst_B() {
    bufo_138_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_138_WEN_A() {
    bufo_138_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_138_WEN_B() {
    bufo_138_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_139_Addr_A() {
    bufo_139_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_139_Addr_B() {
    bufo_139_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_139_Clk_A() {
    bufo_139_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_139_Clk_B() {
    bufo_139_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_139_Din_A() {
    bufo_139_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_139_Din_B() {
    bufo_139_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_139_EN_A() {
    bufo_139_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_139_EN_B() {
    bufo_139_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_139_Rst_A() {
    bufo_139_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_139_Rst_B() {
    bufo_139_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_139_WEN_A() {
    bufo_139_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_139_WEN_B() {
    bufo_139_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_13_Addr_A() {
    bufo_13_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_13_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_13_Addr_A_orig() {
    bufo_13_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_13_Clk_A() {
    bufo_13_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_13_Din_A() {
    bufo_13_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_13_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_13_EN_A = ap_const_logic_1;
    } else {
        bufo_13_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_13_Rst_A() {
    bufo_13_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_13_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_13_WEN_A = ap_const_lv4_F;
    } else {
        bufo_13_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_140_Addr_A() {
    bufo_140_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_140_Addr_B() {
    bufo_140_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_140_Clk_A() {
    bufo_140_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_140_Clk_B() {
    bufo_140_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_140_Din_A() {
    bufo_140_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_140_Din_B() {
    bufo_140_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_140_EN_A() {
    bufo_140_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_140_EN_B() {
    bufo_140_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_140_Rst_A() {
    bufo_140_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_140_Rst_B() {
    bufo_140_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_140_WEN_A() {
    bufo_140_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_140_WEN_B() {
    bufo_140_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_141_Addr_A() {
    bufo_141_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_141_Addr_B() {
    bufo_141_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_141_Clk_A() {
    bufo_141_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_141_Clk_B() {
    bufo_141_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_141_Din_A() {
    bufo_141_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_141_Din_B() {
    bufo_141_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_141_EN_A() {
    bufo_141_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_141_EN_B() {
    bufo_141_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_141_Rst_A() {
    bufo_141_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_141_Rst_B() {
    bufo_141_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_141_WEN_A() {
    bufo_141_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_141_WEN_B() {
    bufo_141_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_142_Addr_A() {
    bufo_142_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_142_Addr_B() {
    bufo_142_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_142_Clk_A() {
    bufo_142_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_142_Clk_B() {
    bufo_142_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_142_Din_A() {
    bufo_142_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_142_Din_B() {
    bufo_142_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_142_EN_A() {
    bufo_142_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_142_EN_B() {
    bufo_142_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_142_Rst_A() {
    bufo_142_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_142_Rst_B() {
    bufo_142_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_142_WEN_A() {
    bufo_142_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_142_WEN_B() {
    bufo_142_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_143_Addr_A() {
    bufo_143_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_143_Addr_B() {
    bufo_143_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_143_Clk_A() {
    bufo_143_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_143_Clk_B() {
    bufo_143_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_143_Din_A() {
    bufo_143_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_143_Din_B() {
    bufo_143_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_143_EN_A() {
    bufo_143_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_143_EN_B() {
    bufo_143_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_143_Rst_A() {
    bufo_143_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_143_Rst_B() {
    bufo_143_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_143_WEN_A() {
    bufo_143_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_143_WEN_B() {
    bufo_143_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_144_Addr_A() {
    bufo_144_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_144_Addr_B() {
    bufo_144_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_144_Clk_A() {
    bufo_144_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_144_Clk_B() {
    bufo_144_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_144_Din_A() {
    bufo_144_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_144_Din_B() {
    bufo_144_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_144_EN_A() {
    bufo_144_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_144_EN_B() {
    bufo_144_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_144_Rst_A() {
    bufo_144_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_144_Rst_B() {
    bufo_144_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_144_WEN_A() {
    bufo_144_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_144_WEN_B() {
    bufo_144_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_145_Addr_A() {
    bufo_145_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_145_Addr_B() {
    bufo_145_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_145_Clk_A() {
    bufo_145_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_145_Clk_B() {
    bufo_145_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_145_Din_A() {
    bufo_145_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_145_Din_B() {
    bufo_145_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_145_EN_A() {
    bufo_145_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_145_EN_B() {
    bufo_145_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_145_Rst_A() {
    bufo_145_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_145_Rst_B() {
    bufo_145_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_145_WEN_A() {
    bufo_145_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_145_WEN_B() {
    bufo_145_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_146_Addr_A() {
    bufo_146_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_146_Addr_B() {
    bufo_146_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_146_Clk_A() {
    bufo_146_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_146_Clk_B() {
    bufo_146_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_146_Din_A() {
    bufo_146_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_146_Din_B() {
    bufo_146_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_146_EN_A() {
    bufo_146_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_146_EN_B() {
    bufo_146_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_146_Rst_A() {
    bufo_146_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_146_Rst_B() {
    bufo_146_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_146_WEN_A() {
    bufo_146_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_146_WEN_B() {
    bufo_146_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_147_Addr_A() {
    bufo_147_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_147_Addr_B() {
    bufo_147_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_147_Clk_A() {
    bufo_147_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_147_Clk_B() {
    bufo_147_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_147_Din_A() {
    bufo_147_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_147_Din_B() {
    bufo_147_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_147_EN_A() {
    bufo_147_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_147_EN_B() {
    bufo_147_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_147_Rst_A() {
    bufo_147_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_147_Rst_B() {
    bufo_147_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_147_WEN_A() {
    bufo_147_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_147_WEN_B() {
    bufo_147_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_148_Addr_A() {
    bufo_148_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_148_Addr_B() {
    bufo_148_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_148_Clk_A() {
    bufo_148_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_148_Clk_B() {
    bufo_148_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_148_Din_A() {
    bufo_148_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_148_Din_B() {
    bufo_148_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_148_EN_A() {
    bufo_148_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_148_EN_B() {
    bufo_148_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_148_Rst_A() {
    bufo_148_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_148_Rst_B() {
    bufo_148_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_148_WEN_A() {
    bufo_148_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_148_WEN_B() {
    bufo_148_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_149_Addr_A() {
    bufo_149_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_149_Addr_B() {
    bufo_149_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_149_Clk_A() {
    bufo_149_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_149_Clk_B() {
    bufo_149_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_149_Din_A() {
    bufo_149_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_149_Din_B() {
    bufo_149_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_149_EN_A() {
    bufo_149_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_149_EN_B() {
    bufo_149_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_149_Rst_A() {
    bufo_149_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_149_Rst_B() {
    bufo_149_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_149_WEN_A() {
    bufo_149_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_149_WEN_B() {
    bufo_149_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_14_Addr_A() {
    bufo_14_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_14_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_14_Addr_A_orig() {
    bufo_14_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_14_Clk_A() {
    bufo_14_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_14_Din_A() {
    bufo_14_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_14_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_14_EN_A = ap_const_logic_1;
    } else {
        bufo_14_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_14_Rst_A() {
    bufo_14_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_14_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_14_WEN_A = ap_const_lv4_F;
    } else {
        bufo_14_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_150_Addr_A() {
    bufo_150_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_150_Addr_B() {
    bufo_150_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_150_Clk_A() {
    bufo_150_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_150_Clk_B() {
    bufo_150_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_150_Din_A() {
    bufo_150_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_150_Din_B() {
    bufo_150_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_150_EN_A() {
    bufo_150_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_150_EN_B() {
    bufo_150_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_150_Rst_A() {
    bufo_150_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_150_Rst_B() {
    bufo_150_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_150_WEN_A() {
    bufo_150_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_150_WEN_B() {
    bufo_150_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_151_Addr_A() {
    bufo_151_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_151_Addr_B() {
    bufo_151_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_151_Clk_A() {
    bufo_151_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_151_Clk_B() {
    bufo_151_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_151_Din_A() {
    bufo_151_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_151_Din_B() {
    bufo_151_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_151_EN_A() {
    bufo_151_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_151_EN_B() {
    bufo_151_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_151_Rst_A() {
    bufo_151_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_151_Rst_B() {
    bufo_151_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_151_WEN_A() {
    bufo_151_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_151_WEN_B() {
    bufo_151_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_152_Addr_A() {
    bufo_152_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_152_Addr_B() {
    bufo_152_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_152_Clk_A() {
    bufo_152_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_152_Clk_B() {
    bufo_152_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_152_Din_A() {
    bufo_152_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_152_Din_B() {
    bufo_152_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_152_EN_A() {
    bufo_152_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_152_EN_B() {
    bufo_152_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_152_Rst_A() {
    bufo_152_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_152_Rst_B() {
    bufo_152_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_152_WEN_A() {
    bufo_152_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_152_WEN_B() {
    bufo_152_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_153_Addr_A() {
    bufo_153_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_153_Addr_B() {
    bufo_153_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_153_Clk_A() {
    bufo_153_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_153_Clk_B() {
    bufo_153_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_153_Din_A() {
    bufo_153_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_153_Din_B() {
    bufo_153_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_153_EN_A() {
    bufo_153_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_153_EN_B() {
    bufo_153_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_153_Rst_A() {
    bufo_153_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_153_Rst_B() {
    bufo_153_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_153_WEN_A() {
    bufo_153_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_153_WEN_B() {
    bufo_153_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_154_Addr_A() {
    bufo_154_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_154_Addr_B() {
    bufo_154_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_154_Clk_A() {
    bufo_154_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_154_Clk_B() {
    bufo_154_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_154_Din_A() {
    bufo_154_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_154_Din_B() {
    bufo_154_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_154_EN_A() {
    bufo_154_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_154_EN_B() {
    bufo_154_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_154_Rst_A() {
    bufo_154_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_154_Rst_B() {
    bufo_154_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_154_WEN_A() {
    bufo_154_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_154_WEN_B() {
    bufo_154_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_155_Addr_A() {
    bufo_155_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_155_Addr_B() {
    bufo_155_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_155_Clk_A() {
    bufo_155_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_155_Clk_B() {
    bufo_155_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_155_Din_A() {
    bufo_155_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_155_Din_B() {
    bufo_155_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_155_EN_A() {
    bufo_155_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_155_EN_B() {
    bufo_155_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_155_Rst_A() {
    bufo_155_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_155_Rst_B() {
    bufo_155_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_155_WEN_A() {
    bufo_155_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_155_WEN_B() {
    bufo_155_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_156_Addr_A() {
    bufo_156_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_156_Addr_B() {
    bufo_156_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_156_Clk_A() {
    bufo_156_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_156_Clk_B() {
    bufo_156_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_156_Din_A() {
    bufo_156_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_156_Din_B() {
    bufo_156_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_156_EN_A() {
    bufo_156_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_156_EN_B() {
    bufo_156_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_156_Rst_A() {
    bufo_156_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_156_Rst_B() {
    bufo_156_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_156_WEN_A() {
    bufo_156_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_156_WEN_B() {
    bufo_156_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_157_Addr_A() {
    bufo_157_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_157_Addr_B() {
    bufo_157_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_157_Clk_A() {
    bufo_157_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_157_Clk_B() {
    bufo_157_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_157_Din_A() {
    bufo_157_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_157_Din_B() {
    bufo_157_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_157_EN_A() {
    bufo_157_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_157_EN_B() {
    bufo_157_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_157_Rst_A() {
    bufo_157_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_157_Rst_B() {
    bufo_157_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_157_WEN_A() {
    bufo_157_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_157_WEN_B() {
    bufo_157_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_158_Addr_A() {
    bufo_158_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_158_Addr_B() {
    bufo_158_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_158_Clk_A() {
    bufo_158_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_158_Clk_B() {
    bufo_158_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_158_Din_A() {
    bufo_158_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_158_Din_B() {
    bufo_158_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_158_EN_A() {
    bufo_158_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_158_EN_B() {
    bufo_158_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_158_Rst_A() {
    bufo_158_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_158_Rst_B() {
    bufo_158_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_158_WEN_A() {
    bufo_158_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_158_WEN_B() {
    bufo_158_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_159_Addr_A() {
    bufo_159_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_159_Addr_B() {
    bufo_159_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_159_Clk_A() {
    bufo_159_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_159_Clk_B() {
    bufo_159_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_159_Din_A() {
    bufo_159_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_159_Din_B() {
    bufo_159_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_159_EN_A() {
    bufo_159_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_159_EN_B() {
    bufo_159_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_159_Rst_A() {
    bufo_159_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_159_Rst_B() {
    bufo_159_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_159_WEN_A() {
    bufo_159_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_159_WEN_B() {
    bufo_159_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_15_Addr_A() {
    bufo_15_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_15_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_15_Addr_A_orig() {
    bufo_15_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_15_Clk_A() {
    bufo_15_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_15_Din_A() {
    bufo_15_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_15_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_15_EN_A = ap_const_logic_1;
    } else {
        bufo_15_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_15_Rst_A() {
    bufo_15_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_15_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_15_WEN_A = ap_const_lv4_F;
    } else {
        bufo_15_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_160_Addr_A() {
    bufo_160_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_160_Addr_B() {
    bufo_160_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_160_Clk_A() {
    bufo_160_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_160_Clk_B() {
    bufo_160_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_160_Din_A() {
    bufo_160_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_160_Din_B() {
    bufo_160_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_160_EN_A() {
    bufo_160_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_160_EN_B() {
    bufo_160_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_160_Rst_A() {
    bufo_160_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_160_Rst_B() {
    bufo_160_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_160_WEN_A() {
    bufo_160_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_160_WEN_B() {
    bufo_160_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_161_Addr_A() {
    bufo_161_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_161_Addr_B() {
    bufo_161_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_161_Clk_A() {
    bufo_161_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_161_Clk_B() {
    bufo_161_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_161_Din_A() {
    bufo_161_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_161_Din_B() {
    bufo_161_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_161_EN_A() {
    bufo_161_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_161_EN_B() {
    bufo_161_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_161_Rst_A() {
    bufo_161_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_161_Rst_B() {
    bufo_161_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_161_WEN_A() {
    bufo_161_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_161_WEN_B() {
    bufo_161_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_162_Addr_A() {
    bufo_162_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_162_Addr_B() {
    bufo_162_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_162_Clk_A() {
    bufo_162_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_162_Clk_B() {
    bufo_162_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_162_Din_A() {
    bufo_162_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_162_Din_B() {
    bufo_162_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_162_EN_A() {
    bufo_162_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_162_EN_B() {
    bufo_162_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_162_Rst_A() {
    bufo_162_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_162_Rst_B() {
    bufo_162_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_162_WEN_A() {
    bufo_162_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_162_WEN_B() {
    bufo_162_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_163_Addr_A() {
    bufo_163_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_163_Addr_B() {
    bufo_163_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_163_Clk_A() {
    bufo_163_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_163_Clk_B() {
    bufo_163_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_163_Din_A() {
    bufo_163_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_163_Din_B() {
    bufo_163_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_163_EN_A() {
    bufo_163_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_163_EN_B() {
    bufo_163_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_163_Rst_A() {
    bufo_163_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_163_Rst_B() {
    bufo_163_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_163_WEN_A() {
    bufo_163_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_163_WEN_B() {
    bufo_163_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_164_Addr_A() {
    bufo_164_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_164_Addr_B() {
    bufo_164_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_164_Clk_A() {
    bufo_164_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_164_Clk_B() {
    bufo_164_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_164_Din_A() {
    bufo_164_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_164_Din_B() {
    bufo_164_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_164_EN_A() {
    bufo_164_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_164_EN_B() {
    bufo_164_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_164_Rst_A() {
    bufo_164_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_164_Rst_B() {
    bufo_164_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_164_WEN_A() {
    bufo_164_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_164_WEN_B() {
    bufo_164_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_165_Addr_A() {
    bufo_165_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_165_Addr_B() {
    bufo_165_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_165_Clk_A() {
    bufo_165_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_165_Clk_B() {
    bufo_165_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_165_Din_A() {
    bufo_165_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_165_Din_B() {
    bufo_165_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_165_EN_A() {
    bufo_165_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_165_EN_B() {
    bufo_165_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_165_Rst_A() {
    bufo_165_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_165_Rst_B() {
    bufo_165_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_165_WEN_A() {
    bufo_165_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_165_WEN_B() {
    bufo_165_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_166_Addr_A() {
    bufo_166_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_166_Addr_B() {
    bufo_166_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_166_Clk_A() {
    bufo_166_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_166_Clk_B() {
    bufo_166_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_166_Din_A() {
    bufo_166_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_166_Din_B() {
    bufo_166_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_166_EN_A() {
    bufo_166_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_166_EN_B() {
    bufo_166_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_166_Rst_A() {
    bufo_166_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_166_Rst_B() {
    bufo_166_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_166_WEN_A() {
    bufo_166_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_166_WEN_B() {
    bufo_166_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_167_Addr_A() {
    bufo_167_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_167_Addr_B() {
    bufo_167_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_167_Clk_A() {
    bufo_167_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_167_Clk_B() {
    bufo_167_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_167_Din_A() {
    bufo_167_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_167_Din_B() {
    bufo_167_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_167_EN_A() {
    bufo_167_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_167_EN_B() {
    bufo_167_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_167_Rst_A() {
    bufo_167_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_167_Rst_B() {
    bufo_167_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_167_WEN_A() {
    bufo_167_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_167_WEN_B() {
    bufo_167_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_168_Addr_A() {
    bufo_168_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_168_Addr_B() {
    bufo_168_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_168_Clk_A() {
    bufo_168_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_168_Clk_B() {
    bufo_168_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_168_Din_A() {
    bufo_168_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_168_Din_B() {
    bufo_168_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_168_EN_A() {
    bufo_168_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_168_EN_B() {
    bufo_168_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_168_Rst_A() {
    bufo_168_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_168_Rst_B() {
    bufo_168_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_168_WEN_A() {
    bufo_168_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_168_WEN_B() {
    bufo_168_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_169_Addr_A() {
    bufo_169_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_169_Addr_B() {
    bufo_169_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_169_Clk_A() {
    bufo_169_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_169_Clk_B() {
    bufo_169_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_169_Din_A() {
    bufo_169_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_169_Din_B() {
    bufo_169_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_169_EN_A() {
    bufo_169_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_169_EN_B() {
    bufo_169_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_169_Rst_A() {
    bufo_169_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_169_Rst_B() {
    bufo_169_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_169_WEN_A() {
    bufo_169_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_169_WEN_B() {
    bufo_169_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_16_Addr_A() {
    bufo_16_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_16_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_16_Addr_A_orig() {
    bufo_16_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_16_Clk_A() {
    bufo_16_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_16_Din_A() {
    bufo_16_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_16_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_16_EN_A = ap_const_logic_1;
    } else {
        bufo_16_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_16_Rst_A() {
    bufo_16_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_16_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_10) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_16_WEN_A = ap_const_lv4_F;
    } else {
        bufo_16_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_170_Addr_A() {
    bufo_170_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_170_Addr_B() {
    bufo_170_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_170_Clk_A() {
    bufo_170_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_170_Clk_B() {
    bufo_170_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_170_Din_A() {
    bufo_170_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_170_Din_B() {
    bufo_170_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_170_EN_A() {
    bufo_170_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_170_EN_B() {
    bufo_170_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_170_Rst_A() {
    bufo_170_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_170_Rst_B() {
    bufo_170_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_170_WEN_A() {
    bufo_170_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_170_WEN_B() {
    bufo_170_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_171_Addr_A() {
    bufo_171_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_171_Addr_B() {
    bufo_171_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_171_Clk_A() {
    bufo_171_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_171_Clk_B() {
    bufo_171_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_171_Din_A() {
    bufo_171_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_171_Din_B() {
    bufo_171_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_171_EN_A() {
    bufo_171_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_171_EN_B() {
    bufo_171_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_171_Rst_A() {
    bufo_171_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_171_Rst_B() {
    bufo_171_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_171_WEN_A() {
    bufo_171_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_171_WEN_B() {
    bufo_171_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_172_Addr_A() {
    bufo_172_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_172_Addr_B() {
    bufo_172_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_172_Clk_A() {
    bufo_172_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_172_Clk_B() {
    bufo_172_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_172_Din_A() {
    bufo_172_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_172_Din_B() {
    bufo_172_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_172_EN_A() {
    bufo_172_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_172_EN_B() {
    bufo_172_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_172_Rst_A() {
    bufo_172_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_172_Rst_B() {
    bufo_172_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_172_WEN_A() {
    bufo_172_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_172_WEN_B() {
    bufo_172_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_173_Addr_A() {
    bufo_173_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_173_Addr_B() {
    bufo_173_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_173_Clk_A() {
    bufo_173_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_173_Clk_B() {
    bufo_173_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_173_Din_A() {
    bufo_173_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_173_Din_B() {
    bufo_173_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_173_EN_A() {
    bufo_173_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_173_EN_B() {
    bufo_173_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_173_Rst_A() {
    bufo_173_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_173_Rst_B() {
    bufo_173_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_173_WEN_A() {
    bufo_173_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_173_WEN_B() {
    bufo_173_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_174_Addr_A() {
    bufo_174_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_174_Addr_B() {
    bufo_174_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_174_Clk_A() {
    bufo_174_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_174_Clk_B() {
    bufo_174_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_174_Din_A() {
    bufo_174_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_174_Din_B() {
    bufo_174_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_174_EN_A() {
    bufo_174_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_174_EN_B() {
    bufo_174_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_174_Rst_A() {
    bufo_174_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_174_Rst_B() {
    bufo_174_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_174_WEN_A() {
    bufo_174_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_174_WEN_B() {
    bufo_174_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_175_Addr_A() {
    bufo_175_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_175_Addr_B() {
    bufo_175_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_175_Clk_A() {
    bufo_175_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_175_Clk_B() {
    bufo_175_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_175_Din_A() {
    bufo_175_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_175_Din_B() {
    bufo_175_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_175_EN_A() {
    bufo_175_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_175_EN_B() {
    bufo_175_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_175_Rst_A() {
    bufo_175_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_175_Rst_B() {
    bufo_175_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_175_WEN_A() {
    bufo_175_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_175_WEN_B() {
    bufo_175_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_176_Addr_A() {
    bufo_176_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_176_Addr_B() {
    bufo_176_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_176_Clk_A() {
    bufo_176_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_176_Clk_B() {
    bufo_176_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_176_Din_A() {
    bufo_176_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_176_Din_B() {
    bufo_176_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_176_EN_A() {
    bufo_176_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_176_EN_B() {
    bufo_176_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_176_Rst_A() {
    bufo_176_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_176_Rst_B() {
    bufo_176_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_176_WEN_A() {
    bufo_176_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_176_WEN_B() {
    bufo_176_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_177_Addr_A() {
    bufo_177_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_177_Addr_B() {
    bufo_177_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_177_Clk_A() {
    bufo_177_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_177_Clk_B() {
    bufo_177_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_177_Din_A() {
    bufo_177_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_177_Din_B() {
    bufo_177_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_177_EN_A() {
    bufo_177_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_177_EN_B() {
    bufo_177_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_177_Rst_A() {
    bufo_177_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_177_Rst_B() {
    bufo_177_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_177_WEN_A() {
    bufo_177_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_177_WEN_B() {
    bufo_177_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_178_Addr_A() {
    bufo_178_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_178_Addr_B() {
    bufo_178_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_178_Clk_A() {
    bufo_178_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_178_Clk_B() {
    bufo_178_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_178_Din_A() {
    bufo_178_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_178_Din_B() {
    bufo_178_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_178_EN_A() {
    bufo_178_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_178_EN_B() {
    bufo_178_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_178_Rst_A() {
    bufo_178_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_178_Rst_B() {
    bufo_178_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_178_WEN_A() {
    bufo_178_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_178_WEN_B() {
    bufo_178_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_179_Addr_A() {
    bufo_179_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_179_Addr_B() {
    bufo_179_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_179_Clk_A() {
    bufo_179_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_179_Clk_B() {
    bufo_179_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_179_Din_A() {
    bufo_179_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_179_Din_B() {
    bufo_179_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_179_EN_A() {
    bufo_179_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_179_EN_B() {
    bufo_179_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_179_Rst_A() {
    bufo_179_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_179_Rst_B() {
    bufo_179_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_179_WEN_A() {
    bufo_179_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_179_WEN_B() {
    bufo_179_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_17_Addr_A() {
    bufo_17_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_17_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_17_Addr_A_orig() {
    bufo_17_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_17_Clk_A() {
    bufo_17_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_17_Din_A() {
    bufo_17_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_17_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_17_EN_A = ap_const_logic_1;
    } else {
        bufo_17_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_17_Rst_A() {
    bufo_17_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_17_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_11) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_17_WEN_A = ap_const_lv4_F;
    } else {
        bufo_17_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_180_Addr_A() {
    bufo_180_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_180_Addr_B() {
    bufo_180_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_180_Clk_A() {
    bufo_180_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_180_Clk_B() {
    bufo_180_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_180_Din_A() {
    bufo_180_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_180_Din_B() {
    bufo_180_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_180_EN_A() {
    bufo_180_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_180_EN_B() {
    bufo_180_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_180_Rst_A() {
    bufo_180_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_180_Rst_B() {
    bufo_180_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_180_WEN_A() {
    bufo_180_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_180_WEN_B() {
    bufo_180_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_181_Addr_A() {
    bufo_181_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_181_Addr_B() {
    bufo_181_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_181_Clk_A() {
    bufo_181_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_181_Clk_B() {
    bufo_181_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_181_Din_A() {
    bufo_181_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_181_Din_B() {
    bufo_181_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_181_EN_A() {
    bufo_181_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_181_EN_B() {
    bufo_181_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_181_Rst_A() {
    bufo_181_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_181_Rst_B() {
    bufo_181_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_181_WEN_A() {
    bufo_181_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_181_WEN_B() {
    bufo_181_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_182_Addr_A() {
    bufo_182_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_182_Addr_B() {
    bufo_182_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_182_Clk_A() {
    bufo_182_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_182_Clk_B() {
    bufo_182_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_182_Din_A() {
    bufo_182_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_182_Din_B() {
    bufo_182_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_182_EN_A() {
    bufo_182_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_182_EN_B() {
    bufo_182_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_182_Rst_A() {
    bufo_182_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_182_Rst_B() {
    bufo_182_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_182_WEN_A() {
    bufo_182_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_182_WEN_B() {
    bufo_182_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_183_Addr_A() {
    bufo_183_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_183_Addr_B() {
    bufo_183_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_183_Clk_A() {
    bufo_183_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_183_Clk_B() {
    bufo_183_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_183_Din_A() {
    bufo_183_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_183_Din_B() {
    bufo_183_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_183_EN_A() {
    bufo_183_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_183_EN_B() {
    bufo_183_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_183_Rst_A() {
    bufo_183_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_183_Rst_B() {
    bufo_183_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_183_WEN_A() {
    bufo_183_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_183_WEN_B() {
    bufo_183_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_184_Addr_A() {
    bufo_184_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_184_Addr_B() {
    bufo_184_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_184_Clk_A() {
    bufo_184_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_184_Clk_B() {
    bufo_184_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_184_Din_A() {
    bufo_184_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_184_Din_B() {
    bufo_184_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_184_EN_A() {
    bufo_184_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_184_EN_B() {
    bufo_184_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_184_Rst_A() {
    bufo_184_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_184_Rst_B() {
    bufo_184_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_184_WEN_A() {
    bufo_184_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_184_WEN_B() {
    bufo_184_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_185_Addr_A() {
    bufo_185_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_185_Addr_B() {
    bufo_185_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_185_Clk_A() {
    bufo_185_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_185_Clk_B() {
    bufo_185_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_185_Din_A() {
    bufo_185_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_185_Din_B() {
    bufo_185_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_185_EN_A() {
    bufo_185_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_185_EN_B() {
    bufo_185_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_185_Rst_A() {
    bufo_185_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_185_Rst_B() {
    bufo_185_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_185_WEN_A() {
    bufo_185_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_185_WEN_B() {
    bufo_185_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_186_Addr_A() {
    bufo_186_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_186_Addr_B() {
    bufo_186_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_186_Clk_A() {
    bufo_186_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_186_Clk_B() {
    bufo_186_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_186_Din_A() {
    bufo_186_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_186_Din_B() {
    bufo_186_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_186_EN_A() {
    bufo_186_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_186_EN_B() {
    bufo_186_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_186_Rst_A() {
    bufo_186_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_186_Rst_B() {
    bufo_186_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_186_WEN_A() {
    bufo_186_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_186_WEN_B() {
    bufo_186_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_187_Addr_A() {
    bufo_187_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_187_Addr_B() {
    bufo_187_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_187_Clk_A() {
    bufo_187_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_187_Clk_B() {
    bufo_187_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_187_Din_A() {
    bufo_187_Din_A = ap_const_lv32_0;
}

}

