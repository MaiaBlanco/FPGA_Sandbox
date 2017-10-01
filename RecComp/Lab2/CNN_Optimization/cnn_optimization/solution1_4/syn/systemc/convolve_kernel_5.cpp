#include "convolve_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve_kernel::thread_bufo_187_Din_B() {
    bufo_187_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_187_EN_A() {
    bufo_187_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_187_EN_B() {
    bufo_187_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_187_Rst_A() {
    bufo_187_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_187_Rst_B() {
    bufo_187_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_187_WEN_A() {
    bufo_187_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_187_WEN_B() {
    bufo_187_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_188_Addr_A() {
    bufo_188_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_188_Addr_B() {
    bufo_188_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_188_Clk_A() {
    bufo_188_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_188_Clk_B() {
    bufo_188_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_188_Din_A() {
    bufo_188_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_188_Din_B() {
    bufo_188_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_188_EN_A() {
    bufo_188_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_188_EN_B() {
    bufo_188_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_188_Rst_A() {
    bufo_188_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_188_Rst_B() {
    bufo_188_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_188_WEN_A() {
    bufo_188_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_188_WEN_B() {
    bufo_188_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_189_Addr_A() {
    bufo_189_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_189_Addr_B() {
    bufo_189_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_189_Clk_A() {
    bufo_189_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_189_Clk_B() {
    bufo_189_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_189_Din_A() {
    bufo_189_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_189_Din_B() {
    bufo_189_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_189_EN_A() {
    bufo_189_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_189_EN_B() {
    bufo_189_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_189_Rst_A() {
    bufo_189_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_189_Rst_B() {
    bufo_189_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_189_WEN_A() {
    bufo_189_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_189_WEN_B() {
    bufo_189_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_18_Addr_A() {
    bufo_18_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_18_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_18_Addr_A_orig() {
    bufo_18_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_18_Clk_A() {
    bufo_18_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_18_Din_A() {
    bufo_18_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_18_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_18_EN_A = ap_const_logic_1;
    } else {
        bufo_18_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_18_Rst_A() {
    bufo_18_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_18_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_12) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_18_WEN_A = ap_const_lv4_F;
    } else {
        bufo_18_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_190_Addr_A() {
    bufo_190_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_190_Addr_B() {
    bufo_190_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_190_Clk_A() {
    bufo_190_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_190_Clk_B() {
    bufo_190_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_190_Din_A() {
    bufo_190_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_190_Din_B() {
    bufo_190_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_190_EN_A() {
    bufo_190_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_190_EN_B() {
    bufo_190_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_190_Rst_A() {
    bufo_190_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_190_Rst_B() {
    bufo_190_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_190_WEN_A() {
    bufo_190_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_190_WEN_B() {
    bufo_190_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_191_Addr_A() {
    bufo_191_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_191_Addr_B() {
    bufo_191_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_191_Clk_A() {
    bufo_191_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_191_Clk_B() {
    bufo_191_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_191_Din_A() {
    bufo_191_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_191_Din_B() {
    bufo_191_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_191_EN_A() {
    bufo_191_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_191_EN_B() {
    bufo_191_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_191_Rst_A() {
    bufo_191_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_191_Rst_B() {
    bufo_191_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_191_WEN_A() {
    bufo_191_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_191_WEN_B() {
    bufo_191_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_192_Addr_A() {
    bufo_192_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_192_Addr_B() {
    bufo_192_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_192_Clk_A() {
    bufo_192_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_192_Clk_B() {
    bufo_192_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_192_Din_A() {
    bufo_192_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_192_Din_B() {
    bufo_192_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_192_EN_A() {
    bufo_192_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_192_EN_B() {
    bufo_192_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_192_Rst_A() {
    bufo_192_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_192_Rst_B() {
    bufo_192_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_192_WEN_A() {
    bufo_192_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_192_WEN_B() {
    bufo_192_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_193_Addr_A() {
    bufo_193_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_193_Addr_B() {
    bufo_193_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_193_Clk_A() {
    bufo_193_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_193_Clk_B() {
    bufo_193_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_193_Din_A() {
    bufo_193_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_193_Din_B() {
    bufo_193_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_193_EN_A() {
    bufo_193_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_193_EN_B() {
    bufo_193_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_193_Rst_A() {
    bufo_193_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_193_Rst_B() {
    bufo_193_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_193_WEN_A() {
    bufo_193_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_193_WEN_B() {
    bufo_193_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_194_Addr_A() {
    bufo_194_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_194_Addr_B() {
    bufo_194_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_194_Clk_A() {
    bufo_194_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_194_Clk_B() {
    bufo_194_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_194_Din_A() {
    bufo_194_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_194_Din_B() {
    bufo_194_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_194_EN_A() {
    bufo_194_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_194_EN_B() {
    bufo_194_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_194_Rst_A() {
    bufo_194_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_194_Rst_B() {
    bufo_194_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_194_WEN_A() {
    bufo_194_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_194_WEN_B() {
    bufo_194_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_195_Addr_A() {
    bufo_195_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_195_Addr_B() {
    bufo_195_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_195_Clk_A() {
    bufo_195_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_195_Clk_B() {
    bufo_195_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_195_Din_A() {
    bufo_195_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_195_Din_B() {
    bufo_195_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_195_EN_A() {
    bufo_195_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_195_EN_B() {
    bufo_195_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_195_Rst_A() {
    bufo_195_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_195_Rst_B() {
    bufo_195_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_195_WEN_A() {
    bufo_195_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_195_WEN_B() {
    bufo_195_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_196_Addr_A() {
    bufo_196_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_196_Addr_B() {
    bufo_196_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_196_Clk_A() {
    bufo_196_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_196_Clk_B() {
    bufo_196_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_196_Din_A() {
    bufo_196_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_196_Din_B() {
    bufo_196_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_196_EN_A() {
    bufo_196_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_196_EN_B() {
    bufo_196_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_196_Rst_A() {
    bufo_196_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_196_Rst_B() {
    bufo_196_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_196_WEN_A() {
    bufo_196_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_196_WEN_B() {
    bufo_196_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_197_Addr_A() {
    bufo_197_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_197_Addr_B() {
    bufo_197_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_197_Clk_A() {
    bufo_197_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_197_Clk_B() {
    bufo_197_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_197_Din_A() {
    bufo_197_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_197_Din_B() {
    bufo_197_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_197_EN_A() {
    bufo_197_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_197_EN_B() {
    bufo_197_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_197_Rst_A() {
    bufo_197_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_197_Rst_B() {
    bufo_197_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_197_WEN_A() {
    bufo_197_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_197_WEN_B() {
    bufo_197_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_198_Addr_A() {
    bufo_198_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_198_Addr_B() {
    bufo_198_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_198_Clk_A() {
    bufo_198_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_198_Clk_B() {
    bufo_198_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_198_Din_A() {
    bufo_198_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_198_Din_B() {
    bufo_198_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_198_EN_A() {
    bufo_198_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_198_EN_B() {
    bufo_198_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_198_Rst_A() {
    bufo_198_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_198_Rst_B() {
    bufo_198_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_198_WEN_A() {
    bufo_198_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_198_WEN_B() {
    bufo_198_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_199_Addr_A() {
    bufo_199_Addr_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_199_Addr_B() {
    bufo_199_Addr_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_199_Clk_A() {
    bufo_199_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_199_Clk_B() {
    bufo_199_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_199_Din_A() {
    bufo_199_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_199_Din_B() {
    bufo_199_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_199_EN_A() {
    bufo_199_EN_A = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_199_EN_B() {
    bufo_199_EN_B = ap_const_logic_0;
}

void convolve_kernel::thread_bufo_199_Rst_A() {
    bufo_199_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_199_Rst_B() {
    bufo_199_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_199_WEN_A() {
    bufo_199_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_199_WEN_B() {
    bufo_199_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_19_Addr_A() {
    bufo_19_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_19_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_19_Addr_A_orig() {
    bufo_19_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_19_Clk_A() {
    bufo_19_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_19_Din_A() {
    bufo_19_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_19_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_19_EN_A = ap_const_logic_1;
    } else {
        bufo_19_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_19_Rst_A() {
    bufo_19_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_19_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_13) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_19_WEN_A = ap_const_lv4_F;
    } else {
        bufo_19_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_1_Addr_A() {
    bufo_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_1_Addr_A_orig() {
    bufo_1_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_1_Clk_A() {
    bufo_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_1_Din_A() {
    bufo_1_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_1_EN_A = ap_const_logic_1;
    } else {
        bufo_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_1_Rst_A() {
    bufo_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_1_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_1_WEN_A = ap_const_lv4_F;
    } else {
        bufo_1_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_20_Addr_A() {
    bufo_20_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_20_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_20_Addr_A_orig() {
    bufo_20_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_20_Clk_A() {
    bufo_20_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_20_Din_A() {
    bufo_20_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_20_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_20_EN_A = ap_const_logic_1;
    } else {
        bufo_20_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_20_Rst_A() {
    bufo_20_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_20_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_14) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_20_WEN_A = ap_const_lv4_F;
    } else {
        bufo_20_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_21_Addr_A() {
    bufo_21_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_21_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_21_Addr_A_orig() {
    bufo_21_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_21_Clk_A() {
    bufo_21_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_21_Din_A() {
    bufo_21_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_21_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_21_EN_A = ap_const_logic_1;
    } else {
        bufo_21_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_21_Rst_A() {
    bufo_21_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_21_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_15) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_21_WEN_A = ap_const_lv4_F;
    } else {
        bufo_21_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_22_Addr_A() {
    bufo_22_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_22_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_22_Addr_A_orig() {
    bufo_22_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_22_Clk_A() {
    bufo_22_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_22_Din_A() {
    bufo_22_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_22_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_22_EN_A = ap_const_logic_1;
    } else {
        bufo_22_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_22_Rst_A() {
    bufo_22_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_22_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_16) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_22_WEN_A = ap_const_lv4_F;
    } else {
        bufo_22_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_23_Addr_A() {
    bufo_23_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_23_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_23_Addr_A_orig() {
    bufo_23_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_23_Clk_A() {
    bufo_23_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_23_Din_A() {
    bufo_23_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_23_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_23_EN_A = ap_const_logic_1;
    } else {
        bufo_23_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_23_Rst_A() {
    bufo_23_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_23_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_17) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_23_WEN_A = ap_const_lv4_F;
    } else {
        bufo_23_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_24_Addr_A() {
    bufo_24_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_24_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_24_Addr_A_orig() {
    bufo_24_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_24_Clk_A() {
    bufo_24_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_24_Din_A() {
    bufo_24_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_24_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_24_EN_A = ap_const_logic_1;
    } else {
        bufo_24_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_24_Rst_A() {
    bufo_24_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_24_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_18) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_24_WEN_A = ap_const_lv4_F;
    } else {
        bufo_24_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_25_Addr_A() {
    bufo_25_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_25_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_25_Addr_A_orig() {
    bufo_25_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_25_Clk_A() {
    bufo_25_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_25_Din_A() {
    bufo_25_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_25_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_25_EN_A = ap_const_logic_1;
    } else {
        bufo_25_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_25_Rst_A() {
    bufo_25_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_25_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_19) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_25_WEN_A = ap_const_lv4_F;
    } else {
        bufo_25_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_26_Addr_A() {
    bufo_26_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_26_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_26_Addr_A_orig() {
    bufo_26_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_26_Clk_A() {
    bufo_26_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_26_Din_A() {
    bufo_26_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_26_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_26_EN_A = ap_const_logic_1;
    } else {
        bufo_26_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_26_Rst_A() {
    bufo_26_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_26_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_26_WEN_A = ap_const_lv4_F;
    } else {
        bufo_26_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_27_Addr_A() {
    bufo_27_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_27_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_27_Addr_A_orig() {
    bufo_27_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_27_Clk_A() {
    bufo_27_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_27_Din_A() {
    bufo_27_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_27_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_27_EN_A = ap_const_logic_1;
    } else {
        bufo_27_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_27_Rst_A() {
    bufo_27_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_27_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_27_WEN_A = ap_const_lv4_F;
    } else {
        bufo_27_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_28_Addr_A() {
    bufo_28_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_28_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_28_Addr_A_orig() {
    bufo_28_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_28_Clk_A() {
    bufo_28_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_28_Din_A() {
    bufo_28_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_28_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_28_EN_A = ap_const_logic_1;
    } else {
        bufo_28_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_28_Rst_A() {
    bufo_28_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_28_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_28_WEN_A = ap_const_lv4_F;
    } else {
        bufo_28_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_29_Addr_A() {
    bufo_29_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_29_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_29_Addr_A_orig() {
    bufo_29_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_29_Clk_A() {
    bufo_29_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_29_Din_A() {
    bufo_29_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_29_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_29_EN_A = ap_const_logic_1;
    } else {
        bufo_29_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_29_Rst_A() {
    bufo_29_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_29_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_29_WEN_A = ap_const_lv4_F;
    } else {
        bufo_29_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_2_Addr_A() {
    bufo_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_2_Addr_A_orig() {
    bufo_2_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_2_Clk_A() {
    bufo_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_2_Din_A() {
    bufo_2_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_2_EN_A = ap_const_logic_1;
    } else {
        bufo_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_2_Rst_A() {
    bufo_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_2_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_2_WEN_A = ap_const_lv4_F;
    } else {
        bufo_2_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_30_Addr_A() {
    bufo_30_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_30_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_30_Addr_A_orig() {
    bufo_30_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_30_Clk_A() {
    bufo_30_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_30_Din_A() {
    bufo_30_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_30_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_30_EN_A = ap_const_logic_1;
    } else {
        bufo_30_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_30_Rst_A() {
    bufo_30_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_30_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_30_WEN_A = ap_const_lv4_F;
    } else {
        bufo_30_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_31_Addr_A() {
    bufo_31_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_31_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_31_Addr_A_orig() {
    bufo_31_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_31_Clk_A() {
    bufo_31_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_31_Din_A() {
    bufo_31_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_31_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_31_EN_A = ap_const_logic_1;
    } else {
        bufo_31_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_31_Rst_A() {
    bufo_31_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_31_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_1F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_31_WEN_A = ap_const_lv4_F;
    } else {
        bufo_31_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_32_Addr_A() {
    bufo_32_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_32_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_32_Addr_A_orig() {
    bufo_32_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_32_Clk_A() {
    bufo_32_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_32_Din_A() {
    bufo_32_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_32_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_32_EN_A = ap_const_logic_1;
    } else {
        bufo_32_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_32_Rst_A() {
    bufo_32_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_32_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_20) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_32_WEN_A = ap_const_lv4_F;
    } else {
        bufo_32_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_33_Addr_A() {
    bufo_33_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_33_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_33_Addr_A_orig() {
    bufo_33_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_33_Clk_A() {
    bufo_33_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_33_Din_A() {
    bufo_33_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_33_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_33_EN_A = ap_const_logic_1;
    } else {
        bufo_33_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_33_Rst_A() {
    bufo_33_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_33_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_21) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_33_WEN_A = ap_const_lv4_F;
    } else {
        bufo_33_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_34_Addr_A() {
    bufo_34_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_34_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_34_Addr_A_orig() {
    bufo_34_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_34_Clk_A() {
    bufo_34_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_34_Din_A() {
    bufo_34_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_34_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_34_EN_A = ap_const_logic_1;
    } else {
        bufo_34_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_34_Rst_A() {
    bufo_34_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_34_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_22) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_34_WEN_A = ap_const_lv4_F;
    } else {
        bufo_34_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_35_Addr_A() {
    bufo_35_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_35_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_35_Addr_A_orig() {
    bufo_35_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_35_Clk_A() {
    bufo_35_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_35_Din_A() {
    bufo_35_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_35_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_35_EN_A = ap_const_logic_1;
    } else {
        bufo_35_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_35_Rst_A() {
    bufo_35_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_35_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_23) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_35_WEN_A = ap_const_lv4_F;
    } else {
        bufo_35_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_36_Addr_A() {
    bufo_36_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_36_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_36_Addr_A_orig() {
    bufo_36_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_36_Clk_A() {
    bufo_36_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_36_Din_A() {
    bufo_36_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_36_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_36_EN_A = ap_const_logic_1;
    } else {
        bufo_36_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_36_Rst_A() {
    bufo_36_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_36_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_24) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_36_WEN_A = ap_const_lv4_F;
    } else {
        bufo_36_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_37_Addr_A() {
    bufo_37_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_37_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_37_Addr_A_orig() {
    bufo_37_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_37_Clk_A() {
    bufo_37_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_37_Din_A() {
    bufo_37_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_37_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_37_EN_A = ap_const_logic_1;
    } else {
        bufo_37_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_37_Rst_A() {
    bufo_37_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_37_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_25) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_37_WEN_A = ap_const_lv4_F;
    } else {
        bufo_37_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_38_Addr_A() {
    bufo_38_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_38_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_38_Addr_A_orig() {
    bufo_38_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_38_Clk_A() {
    bufo_38_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_38_Din_A() {
    bufo_38_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_38_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_38_EN_A = ap_const_logic_1;
    } else {
        bufo_38_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_38_Rst_A() {
    bufo_38_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_38_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_26) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_38_WEN_A = ap_const_lv4_F;
    } else {
        bufo_38_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_39_Addr_A() {
    bufo_39_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_39_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_39_Addr_A_orig() {
    bufo_39_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_39_Clk_A() {
    bufo_39_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_39_Din_A() {
    bufo_39_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_39_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_39_EN_A = ap_const_logic_1;
    } else {
        bufo_39_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_39_Rst_A() {
    bufo_39_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_39_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_27) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_39_WEN_A = ap_const_lv4_F;
    } else {
        bufo_39_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_3_Addr_A() {
    bufo_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_3_Addr_A_orig() {
    bufo_3_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_3_Clk_A() {
    bufo_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_3_Din_A() {
    bufo_3_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_3_EN_A = ap_const_logic_1;
    } else {
        bufo_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_3_Rst_A() {
    bufo_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_3_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_3_WEN_A = ap_const_lv4_F;
    } else {
        bufo_3_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_40_Addr_A() {
    bufo_40_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_40_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_40_Addr_A_orig() {
    bufo_40_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_40_Clk_A() {
    bufo_40_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_40_Din_A() {
    bufo_40_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_40_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_40_EN_A = ap_const_logic_1;
    } else {
        bufo_40_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_40_Rst_A() {
    bufo_40_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_40_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_28) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_40_WEN_A = ap_const_lv4_F;
    } else {
        bufo_40_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_41_Addr_A() {
    bufo_41_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_41_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_41_Addr_A_orig() {
    bufo_41_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_41_Clk_A() {
    bufo_41_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_41_Din_A() {
    bufo_41_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_41_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_41_EN_A = ap_const_logic_1;
    } else {
        bufo_41_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_41_Rst_A() {
    bufo_41_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_41_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_29) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_41_WEN_A = ap_const_lv4_F;
    } else {
        bufo_41_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_42_Addr_A() {
    bufo_42_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_42_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_42_Addr_A_orig() {
    bufo_42_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_42_Clk_A() {
    bufo_42_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_42_Din_A() {
    bufo_42_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_42_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_42_EN_A = ap_const_logic_1;
    } else {
        bufo_42_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_42_Rst_A() {
    bufo_42_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_42_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_42_WEN_A = ap_const_lv4_F;
    } else {
        bufo_42_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_43_Addr_A() {
    bufo_43_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_43_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_43_Addr_A_orig() {
    bufo_43_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_43_Clk_A() {
    bufo_43_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_43_Din_A() {
    bufo_43_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_43_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_43_EN_A = ap_const_logic_1;
    } else {
        bufo_43_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_43_Rst_A() {
    bufo_43_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_43_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_43_WEN_A = ap_const_lv4_F;
    } else {
        bufo_43_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_44_Addr_A() {
    bufo_44_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_44_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_44_Addr_A_orig() {
    bufo_44_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_44_Clk_A() {
    bufo_44_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_44_Din_A() {
    bufo_44_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_44_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_44_EN_A = ap_const_logic_1;
    } else {
        bufo_44_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_44_Rst_A() {
    bufo_44_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_44_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_44_WEN_A = ap_const_lv4_F;
    } else {
        bufo_44_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_45_Addr_A() {
    bufo_45_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_45_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_45_Addr_A_orig() {
    bufo_45_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_45_Clk_A() {
    bufo_45_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_45_Din_A() {
    bufo_45_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_45_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_45_EN_A = ap_const_logic_1;
    } else {
        bufo_45_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_45_Rst_A() {
    bufo_45_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_45_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_45_WEN_A = ap_const_lv4_F;
    } else {
        bufo_45_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_46_Addr_A() {
    bufo_46_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_46_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_46_Addr_A_orig() {
    bufo_46_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_46_Clk_A() {
    bufo_46_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_46_Din_A() {
    bufo_46_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_46_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_46_EN_A = ap_const_logic_1;
    } else {
        bufo_46_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_46_Rst_A() {
    bufo_46_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_46_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_46_WEN_A = ap_const_lv4_F;
    } else {
        bufo_46_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_47_Addr_A() {
    bufo_47_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_47_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_47_Addr_A_orig() {
    bufo_47_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_47_Clk_A() {
    bufo_47_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_47_Din_A() {
    bufo_47_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_47_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_47_EN_A = ap_const_logic_1;
    } else {
        bufo_47_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_47_Rst_A() {
    bufo_47_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_47_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_2F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_47_WEN_A = ap_const_lv4_F;
    } else {
        bufo_47_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_48_Addr_A() {
    bufo_48_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_48_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_48_Addr_A_orig() {
    bufo_48_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_48_Clk_A() {
    bufo_48_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_48_Din_A() {
    bufo_48_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_48_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_48_EN_A = ap_const_logic_1;
    } else {
        bufo_48_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_48_Rst_A() {
    bufo_48_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_48_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_30) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_48_WEN_A = ap_const_lv4_F;
    } else {
        bufo_48_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_49_Addr_A() {
    bufo_49_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_49_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_49_Addr_A_orig() {
    bufo_49_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_49_Clk_A() {
    bufo_49_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_49_Din_A() {
    bufo_49_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_49_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_49_EN_A = ap_const_logic_1;
    } else {
        bufo_49_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_49_Rst_A() {
    bufo_49_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_49_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_31) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_49_WEN_A = ap_const_lv4_F;
    } else {
        bufo_49_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_4_Addr_A() {
    bufo_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_4_Addr_A_orig() {
    bufo_4_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_4_Clk_A() {
    bufo_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_4_Din_A() {
    bufo_4_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_4_EN_A = ap_const_logic_1;
    } else {
        bufo_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_4_Rst_A() {
    bufo_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_4_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_4_WEN_A = ap_const_lv4_F;
    } else {
        bufo_4_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_50_Addr_A() {
    bufo_50_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_50_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_50_Addr_A_orig() {
    bufo_50_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_50_Clk_A() {
    bufo_50_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_50_Din_A() {
    bufo_50_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_50_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_50_EN_A = ap_const_logic_1;
    } else {
        bufo_50_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_50_Rst_A() {
    bufo_50_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_50_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_32) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_50_WEN_A = ap_const_lv4_F;
    } else {
        bufo_50_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_51_Addr_A() {
    bufo_51_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_51_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_51_Addr_A_orig() {
    bufo_51_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_51_Clk_A() {
    bufo_51_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_51_Din_A() {
    bufo_51_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_51_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_51_EN_A = ap_const_logic_1;
    } else {
        bufo_51_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_51_Rst_A() {
    bufo_51_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_51_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_33) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_51_WEN_A = ap_const_lv4_F;
    } else {
        bufo_51_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_52_Addr_A() {
    bufo_52_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_52_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_52_Addr_A_orig() {
    bufo_52_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_52_Clk_A() {
    bufo_52_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_52_Din_A() {
    bufo_52_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_52_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_52_EN_A = ap_const_logic_1;
    } else {
        bufo_52_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_52_Rst_A() {
    bufo_52_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_52_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_34) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_52_WEN_A = ap_const_lv4_F;
    } else {
        bufo_52_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_53_Addr_A() {
    bufo_53_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_53_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_53_Addr_A_orig() {
    bufo_53_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_53_Clk_A() {
    bufo_53_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_53_Din_A() {
    bufo_53_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_53_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_53_EN_A = ap_const_logic_1;
    } else {
        bufo_53_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_53_Rst_A() {
    bufo_53_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_53_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_35) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_53_WEN_A = ap_const_lv4_F;
    } else {
        bufo_53_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_54_Addr_A() {
    bufo_54_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_54_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_54_Addr_A_orig() {
    bufo_54_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_54_Clk_A() {
    bufo_54_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_54_Din_A() {
    bufo_54_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_54_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_54_EN_A = ap_const_logic_1;
    } else {
        bufo_54_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_54_Rst_A() {
    bufo_54_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_54_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_36) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_54_WEN_A = ap_const_lv4_F;
    } else {
        bufo_54_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_55_Addr_A() {
    bufo_55_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_55_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_55_Addr_A_orig() {
    bufo_55_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_55_Clk_A() {
    bufo_55_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_55_Din_A() {
    bufo_55_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_55_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_55_EN_A = ap_const_logic_1;
    } else {
        bufo_55_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_55_Rst_A() {
    bufo_55_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_55_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_37) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_55_WEN_A = ap_const_lv4_F;
    } else {
        bufo_55_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_56_Addr_A() {
    bufo_56_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_56_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_56_Addr_A_orig() {
    bufo_56_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_56_Clk_A() {
    bufo_56_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_56_Din_A() {
    bufo_56_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_56_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_56_EN_A = ap_const_logic_1;
    } else {
        bufo_56_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_56_Rst_A() {
    bufo_56_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_56_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_38) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_56_WEN_A = ap_const_lv4_F;
    } else {
        bufo_56_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_57_Addr_A() {
    bufo_57_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_57_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_57_Addr_A_orig() {
    bufo_57_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_57_Clk_A() {
    bufo_57_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_57_Din_A() {
    bufo_57_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_57_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_57_EN_A = ap_const_logic_1;
    } else {
        bufo_57_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_57_Rst_A() {
    bufo_57_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_57_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_39) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_57_WEN_A = ap_const_lv4_F;
    } else {
        bufo_57_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_58_Addr_A() {
    bufo_58_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_58_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_58_Addr_A_orig() {
    bufo_58_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_58_Clk_A() {
    bufo_58_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_58_Din_A() {
    bufo_58_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_58_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_58_EN_A = ap_const_logic_1;
    } else {
        bufo_58_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_58_Rst_A() {
    bufo_58_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_58_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_58_WEN_A = ap_const_lv4_F;
    } else {
        bufo_58_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_59_Addr_A() {
    bufo_59_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_59_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_59_Addr_A_orig() {
    bufo_59_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_59_Clk_A() {
    bufo_59_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_59_Din_A() {
    bufo_59_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_59_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_59_EN_A = ap_const_logic_1;
    } else {
        bufo_59_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_59_Rst_A() {
    bufo_59_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_59_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_59_WEN_A = ap_const_lv4_F;
    } else {
        bufo_59_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_5_Addr_A() {
    bufo_5_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_5_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_5_Addr_A_orig() {
    bufo_5_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_5_Clk_A() {
    bufo_5_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_5_Din_A() {
    bufo_5_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_5_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_5_EN_A = ap_const_logic_1;
    } else {
        bufo_5_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_5_Rst_A() {
    bufo_5_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_5_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_5_WEN_A = ap_const_lv4_F;
    } else {
        bufo_5_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_60_Addr_A() {
    bufo_60_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_60_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_60_Addr_A_orig() {
    bufo_60_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_60_Clk_A() {
    bufo_60_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_60_Din_A() {
    bufo_60_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_60_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_60_EN_A = ap_const_logic_1;
    } else {
        bufo_60_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_60_Rst_A() {
    bufo_60_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_60_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_60_WEN_A = ap_const_lv4_F;
    } else {
        bufo_60_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_61_Addr_A() {
    bufo_61_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_61_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_61_Addr_A_orig() {
    bufo_61_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_61_Clk_A() {
    bufo_61_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_61_Din_A() {
    bufo_61_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_61_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_61_EN_A = ap_const_logic_1;
    } else {
        bufo_61_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_61_Rst_A() {
    bufo_61_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_61_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_61_WEN_A = ap_const_lv4_F;
    } else {
        bufo_61_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_62_Addr_A() {
    bufo_62_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_62_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_62_Addr_A_orig() {
    bufo_62_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_62_Clk_A() {
    bufo_62_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_62_Din_A() {
    bufo_62_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_62_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_62_EN_A = ap_const_logic_1;
    } else {
        bufo_62_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_62_Rst_A() {
    bufo_62_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_62_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_62_WEN_A = ap_const_lv4_F;
    } else {
        bufo_62_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_63_Addr_A() {
    bufo_63_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_63_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_63_Addr_A_orig() {
    bufo_63_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_63_Clk_A() {
    bufo_63_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_63_Din_A() {
    bufo_63_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_63_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_63_EN_A = ap_const_logic_1;
    } else {
        bufo_63_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_63_Rst_A() {
    bufo_63_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_63_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_3F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_63_WEN_A = ap_const_lv4_F;
    } else {
        bufo_63_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_64_Addr_A() {
    bufo_64_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_64_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_64_Addr_A_orig() {
    bufo_64_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_64_Clk_A() {
    bufo_64_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_64_Din_A() {
    bufo_64_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_64_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_64_EN_A = ap_const_logic_1;
    } else {
        bufo_64_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_64_Rst_A() {
    bufo_64_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_64_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_40) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_64_WEN_A = ap_const_lv4_F;
    } else {
        bufo_64_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_65_Addr_A() {
    bufo_65_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_65_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_65_Addr_A_orig() {
    bufo_65_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_65_Clk_A() {
    bufo_65_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_65_Din_A() {
    bufo_65_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_65_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_65_EN_A = ap_const_logic_1;
    } else {
        bufo_65_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_65_Rst_A() {
    bufo_65_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_65_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_41) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_65_WEN_A = ap_const_lv4_F;
    } else {
        bufo_65_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_66_Addr_A() {
    bufo_66_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_66_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_66_Addr_A_orig() {
    bufo_66_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_66_Clk_A() {
    bufo_66_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_66_Din_A() {
    bufo_66_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_66_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_66_EN_A = ap_const_logic_1;
    } else {
        bufo_66_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_66_Rst_A() {
    bufo_66_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_66_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_42) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_66_WEN_A = ap_const_lv4_F;
    } else {
        bufo_66_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_67_Addr_A() {
    bufo_67_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_67_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_67_Addr_A_orig() {
    bufo_67_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_67_Clk_A() {
    bufo_67_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_67_Din_A() {
    bufo_67_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_67_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_67_EN_A = ap_const_logic_1;
    } else {
        bufo_67_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_67_Rst_A() {
    bufo_67_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_67_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_43) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_67_WEN_A = ap_const_lv4_F;
    } else {
        bufo_67_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_68_Addr_A() {
    bufo_68_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_68_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_68_Addr_A_orig() {
    bufo_68_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_68_Clk_A() {
    bufo_68_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_68_Din_A() {
    bufo_68_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_68_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_68_EN_A = ap_const_logic_1;
    } else {
        bufo_68_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_68_Rst_A() {
    bufo_68_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_68_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_44) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_68_WEN_A = ap_const_lv4_F;
    } else {
        bufo_68_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_69_Addr_A() {
    bufo_69_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_69_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_69_Addr_A_orig() {
    bufo_69_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_69_Clk_A() {
    bufo_69_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_69_Din_A() {
    bufo_69_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_69_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_69_EN_A = ap_const_logic_1;
    } else {
        bufo_69_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_69_Rst_A() {
    bufo_69_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_69_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_45) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_69_WEN_A = ap_const_lv4_F;
    } else {
        bufo_69_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_6_Addr_A() {
    bufo_6_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_6_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_6_Addr_A_orig() {
    bufo_6_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_6_Clk_A() {
    bufo_6_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_6_Din_A() {
    bufo_6_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_6_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_6_EN_A = ap_const_logic_1;
    } else {
        bufo_6_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_6_Rst_A() {
    bufo_6_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_6_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_6) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_6_WEN_A = ap_const_lv4_F;
    } else {
        bufo_6_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_70_Addr_A() {
    bufo_70_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_70_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_70_Addr_A_orig() {
    bufo_70_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_70_Clk_A() {
    bufo_70_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_70_Din_A() {
    bufo_70_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_70_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_70_EN_A = ap_const_logic_1;
    } else {
        bufo_70_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_70_Rst_A() {
    bufo_70_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_70_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_46) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_70_WEN_A = ap_const_lv4_F;
    } else {
        bufo_70_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_71_Addr_A() {
    bufo_71_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_71_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_71_Addr_A_orig() {
    bufo_71_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_71_Clk_A() {
    bufo_71_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_71_Din_A() {
    bufo_71_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_71_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_71_EN_A = ap_const_logic_1;
    } else {
        bufo_71_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_71_Rst_A() {
    bufo_71_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_71_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_47) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_71_WEN_A = ap_const_lv4_F;
    } else {
        bufo_71_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_72_Addr_A() {
    bufo_72_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_72_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_72_Addr_A_orig() {
    bufo_72_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_72_Clk_A() {
    bufo_72_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_72_Din_A() {
    bufo_72_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_72_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_72_EN_A = ap_const_logic_1;
    } else {
        bufo_72_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_72_Rst_A() {
    bufo_72_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_72_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_48) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_72_WEN_A = ap_const_lv4_F;
    } else {
        bufo_72_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_73_Addr_A() {
    bufo_73_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_73_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_73_Addr_A_orig() {
    bufo_73_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_73_Clk_A() {
    bufo_73_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_73_Din_A() {
    bufo_73_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_73_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_73_EN_A = ap_const_logic_1;
    } else {
        bufo_73_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_73_Rst_A() {
    bufo_73_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_73_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_49) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_73_WEN_A = ap_const_lv4_F;
    } else {
        bufo_73_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_74_Addr_A() {
    bufo_74_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_74_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_74_Addr_A_orig() {
    bufo_74_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_74_Clk_A() {
    bufo_74_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_74_Din_A() {
    bufo_74_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_74_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_74_EN_A = ap_const_logic_1;
    } else {
        bufo_74_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_74_Rst_A() {
    bufo_74_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_74_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_74_WEN_A = ap_const_lv4_F;
    } else {
        bufo_74_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_75_Addr_A() {
    bufo_75_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_75_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_75_Addr_A_orig() {
    bufo_75_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_75_Clk_A() {
    bufo_75_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_75_Din_A() {
    bufo_75_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_75_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_75_EN_A = ap_const_logic_1;
    } else {
        bufo_75_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_75_Rst_A() {
    bufo_75_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_75_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_75_WEN_A = ap_const_lv4_F;
    } else {
        bufo_75_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_76_Addr_A() {
    bufo_76_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_76_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_76_Addr_A_orig() {
    bufo_76_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_76_Clk_A() {
    bufo_76_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_76_Din_A() {
    bufo_76_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_76_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_76_EN_A = ap_const_logic_1;
    } else {
        bufo_76_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_76_Rst_A() {
    bufo_76_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_76_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_76_WEN_A = ap_const_lv4_F;
    } else {
        bufo_76_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_77_Addr_A() {
    bufo_77_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_77_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_77_Addr_A_orig() {
    bufo_77_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_77_Clk_A() {
    bufo_77_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_77_Din_A() {
    bufo_77_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_77_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_77_EN_A = ap_const_logic_1;
    } else {
        bufo_77_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_77_Rst_A() {
    bufo_77_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_77_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_77_WEN_A = ap_const_lv4_F;
    } else {
        bufo_77_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_78_Addr_A() {
    bufo_78_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_78_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_78_Addr_A_orig() {
    bufo_78_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_78_Clk_A() {
    bufo_78_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_78_Din_A() {
    bufo_78_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_78_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_78_EN_A = ap_const_logic_1;
    } else {
        bufo_78_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_78_Rst_A() {
    bufo_78_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_78_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_78_WEN_A = ap_const_lv4_F;
    } else {
        bufo_78_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_79_Addr_A() {
    bufo_79_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_79_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_79_Addr_A_orig() {
    bufo_79_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_79_Clk_A() {
    bufo_79_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_79_Din_A() {
    bufo_79_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_79_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_79_EN_A = ap_const_logic_1;
    } else {
        bufo_79_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_79_Rst_A() {
    bufo_79_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_79_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_4F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_79_WEN_A = ap_const_lv4_F;
    } else {
        bufo_79_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_7_Addr_A() {
    bufo_7_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_7_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_7_Addr_A_orig() {
    bufo_7_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_7_Clk_A() {
    bufo_7_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_7_Din_A() {
    bufo_7_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_7_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_7_EN_A = ap_const_logic_1;
    } else {
        bufo_7_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_7_Rst_A() {
    bufo_7_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_7_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_7) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_7_WEN_A = ap_const_lv4_F;
    } else {
        bufo_7_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_80_Addr_A() {
    bufo_80_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_80_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_80_Addr_A_orig() {
    bufo_80_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_80_Clk_A() {
    bufo_80_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_80_Din_A() {
    bufo_80_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_80_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_80_EN_A = ap_const_logic_1;
    } else {
        bufo_80_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_80_Rst_A() {
    bufo_80_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_80_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_50) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_80_WEN_A = ap_const_lv4_F;
    } else {
        bufo_80_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_81_Addr_A() {
    bufo_81_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_81_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_81_Addr_A_orig() {
    bufo_81_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_81_Clk_A() {
    bufo_81_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_81_Din_A() {
    bufo_81_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_81_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_81_EN_A = ap_const_logic_1;
    } else {
        bufo_81_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_81_Rst_A() {
    bufo_81_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_81_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_51) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_81_WEN_A = ap_const_lv4_F;
    } else {
        bufo_81_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_82_Addr_A() {
    bufo_82_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_82_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_82_Addr_A_orig() {
    bufo_82_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_82_Clk_A() {
    bufo_82_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_82_Din_A() {
    bufo_82_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_82_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_82_EN_A = ap_const_logic_1;
    } else {
        bufo_82_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_82_Rst_A() {
    bufo_82_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_82_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_52) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_82_WEN_A = ap_const_lv4_F;
    } else {
        bufo_82_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_83_Addr_A() {
    bufo_83_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_83_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_83_Addr_A_orig() {
    bufo_83_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_83_Clk_A() {
    bufo_83_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_83_Din_A() {
    bufo_83_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_83_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_83_EN_A = ap_const_logic_1;
    } else {
        bufo_83_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_83_Rst_A() {
    bufo_83_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_83_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_53) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_83_WEN_A = ap_const_lv4_F;
    } else {
        bufo_83_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_84_Addr_A() {
    bufo_84_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_84_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_84_Addr_A_orig() {
    bufo_84_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_84_Clk_A() {
    bufo_84_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_84_Din_A() {
    bufo_84_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_84_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_84_EN_A = ap_const_logic_1;
    } else {
        bufo_84_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_84_Rst_A() {
    bufo_84_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_84_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_54) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_84_WEN_A = ap_const_lv4_F;
    } else {
        bufo_84_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_85_Addr_A() {
    bufo_85_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_85_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_85_Addr_A_orig() {
    bufo_85_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_85_Clk_A() {
    bufo_85_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_85_Din_A() {
    bufo_85_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_85_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_85_EN_A = ap_const_logic_1;
    } else {
        bufo_85_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_85_Rst_A() {
    bufo_85_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_85_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_55) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_85_WEN_A = ap_const_lv4_F;
    } else {
        bufo_85_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_86_Addr_A() {
    bufo_86_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_86_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_86_Addr_A_orig() {
    bufo_86_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_86_Clk_A() {
    bufo_86_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_86_Din_A() {
    bufo_86_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_86_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_86_EN_A = ap_const_logic_1;
    } else {
        bufo_86_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_86_Rst_A() {
    bufo_86_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_86_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_56) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_86_WEN_A = ap_const_lv4_F;
    } else {
        bufo_86_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_87_Addr_A() {
    bufo_87_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_87_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_87_Addr_A_orig() {
    bufo_87_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_87_Clk_A() {
    bufo_87_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_87_Din_A() {
    bufo_87_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_87_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_87_EN_A = ap_const_logic_1;
    } else {
        bufo_87_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_87_Rst_A() {
    bufo_87_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_87_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_57) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_87_WEN_A = ap_const_lv4_F;
    } else {
        bufo_87_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_88_Addr_A() {
    bufo_88_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_88_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_88_Addr_A_orig() {
    bufo_88_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_88_Clk_A() {
    bufo_88_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_88_Din_A() {
    bufo_88_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_88_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_88_EN_A = ap_const_logic_1;
    } else {
        bufo_88_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_88_Rst_A() {
    bufo_88_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_88_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_58) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_88_WEN_A = ap_const_lv4_F;
    } else {
        bufo_88_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_89_Addr_A() {
    bufo_89_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_89_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_89_Addr_A_orig() {
    bufo_89_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_89_Clk_A() {
    bufo_89_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_89_Din_A() {
    bufo_89_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_89_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_89_EN_A = ap_const_logic_1;
    } else {
        bufo_89_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_89_Rst_A() {
    bufo_89_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_89_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_59) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_89_WEN_A = ap_const_lv4_F;
    } else {
        bufo_89_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_8_Addr_A() {
    bufo_8_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_8_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_8_Addr_A_orig() {
    bufo_8_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_8_Clk_A() {
    bufo_8_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_8_Din_A() {
    bufo_8_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_8_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_8_EN_A = ap_const_logic_1;
    } else {
        bufo_8_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_8_Rst_A() {
    bufo_8_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_8_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_8) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_8_WEN_A = ap_const_lv4_F;
    } else {
        bufo_8_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_90_Addr_A() {
    bufo_90_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_90_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_90_Addr_A_orig() {
    bufo_90_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_90_Clk_A() {
    bufo_90_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_90_Din_A() {
    bufo_90_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_90_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_90_EN_A = ap_const_logic_1;
    } else {
        bufo_90_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_90_Rst_A() {
    bufo_90_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_90_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5A) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_90_WEN_A = ap_const_lv4_F;
    } else {
        bufo_90_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_91_Addr_A() {
    bufo_91_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_91_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_91_Addr_A_orig() {
    bufo_91_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_91_Clk_A() {
    bufo_91_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_91_Din_A() {
    bufo_91_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_91_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_91_EN_A = ap_const_logic_1;
    } else {
        bufo_91_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_91_Rst_A() {
    bufo_91_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_91_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5B) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_91_WEN_A = ap_const_lv4_F;
    } else {
        bufo_91_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_92_Addr_A() {
    bufo_92_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_92_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_92_Addr_A_orig() {
    bufo_92_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_92_Clk_A() {
    bufo_92_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_92_Din_A() {
    bufo_92_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_92_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_92_EN_A = ap_const_logic_1;
    } else {
        bufo_92_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_92_Rst_A() {
    bufo_92_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_92_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5C) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_92_WEN_A = ap_const_lv4_F;
    } else {
        bufo_92_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_93_Addr_A() {
    bufo_93_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_93_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_93_Addr_A_orig() {
    bufo_93_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_93_Clk_A() {
    bufo_93_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_93_Din_A() {
    bufo_93_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_93_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_93_EN_A = ap_const_logic_1;
    } else {
        bufo_93_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_93_Rst_A() {
    bufo_93_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_93_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5D) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_93_WEN_A = ap_const_lv4_F;
    } else {
        bufo_93_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_94_Addr_A() {
    bufo_94_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_94_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_94_Addr_A_orig() {
    bufo_94_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_94_Clk_A() {
    bufo_94_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_94_Din_A() {
    bufo_94_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_94_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_94_EN_A = ap_const_logic_1;
    } else {
        bufo_94_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_94_Rst_A() {
    bufo_94_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_94_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5E) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_94_WEN_A = ap_const_lv4_F;
    } else {
        bufo_94_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_95_Addr_A() {
    bufo_95_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_95_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_95_Addr_A_orig() {
    bufo_95_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_95_Clk_A() {
    bufo_95_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_95_Din_A() {
    bufo_95_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_95_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_95_EN_A = ap_const_logic_1;
    } else {
        bufo_95_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_95_Rst_A() {
    bufo_95_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_95_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_5F) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_95_WEN_A = ap_const_lv4_F;
    } else {
        bufo_95_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_96_Addr_A() {
    bufo_96_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_96_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_96_Addr_A_orig() {
    bufo_96_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_96_Clk_A() {
    bufo_96_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_96_Din_A() {
    bufo_96_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_96_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_96_EN_A = ap_const_logic_1;
    } else {
        bufo_96_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_96_Rst_A() {
    bufo_96_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_96_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_60) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_96_WEN_A = ap_const_lv4_F;
    } else {
        bufo_96_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_97_Addr_A() {
    bufo_97_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_97_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_97_Addr_A_orig() {
    bufo_97_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_97_Clk_A() {
    bufo_97_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_97_Din_A() {
    bufo_97_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_97_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_97_EN_A = ap_const_logic_1;
    } else {
        bufo_97_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_97_Rst_A() {
    bufo_97_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_97_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_61) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_97_WEN_A = ap_const_lv4_F;
    } else {
        bufo_97_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_98_Addr_A() {
    bufo_98_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_98_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_98_Addr_A_orig() {
    bufo_98_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_98_Clk_A() {
    bufo_98_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_98_Din_A() {
    bufo_98_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_98_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_98_EN_A = ap_const_logic_1;
    } else {
        bufo_98_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_98_Rst_A() {
    bufo_98_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_98_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_62) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_98_WEN_A = ap_const_lv4_F;
    } else {
        bufo_98_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_99_Addr_A() {
    bufo_99_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_99_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_99_Addr_A_orig() {
    bufo_99_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_99_Clk_A() {
    bufo_99_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_99_Din_A() {
    bufo_99_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_99_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_99_EN_A = ap_const_logic_1;
    } else {
        bufo_99_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_99_Rst_A() {
    bufo_99_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_99_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_63) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_99_WEN_A = ap_const_lv4_F;
    } else {
        bufo_99_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_9_Addr_A() {
    bufo_9_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_9_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_9_Addr_A_orig() {
    bufo_9_Addr_A_orig =  (sc_lv<32>) (ap_const_lv64_0);
}

void convolve_kernel::thread_bufo_9_Clk_A() {
    bufo_9_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_9_Din_A() {
    bufo_9_Din_A = reg_2580.read();
}

void convolve_kernel::thread_bufo_9_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_9_EN_A = ap_const_logic_1;
    } else {
        bufo_9_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_9_Rst_A() {
    bufo_9_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_9_WEN_A() {
    if ((esl_seteq<1,7,7>(p_s_reg_2284.read(), ap_const_lv7_9) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        bufo_9_WEN_A = ap_const_lv4_F;
    } else {
        bufo_9_WEN_A = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufw_Addr_A() {
    bufw_Addr_A = (!ap_const_lv32_4.is_01())? sc_lv<32>(): bufw_Addr_A_orig.read() << (unsigned short)ap_const_lv32_4.to_uint();
}

void convolve_kernel::thread_bufw_Addr_A_orig() {
    bufw_Addr_A_orig =  (sc_lv<32>) (phi_mul_reg_2272.read());
}

void convolve_kernel::thread_bufw_Clk_A() {
    bufw_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_Din_A() {
    bufw_Din_A = ap_const_lv128_lc_1;
}

void convolve_kernel::thread_bufw_EN_A() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bufw_EN_A = ap_const_logic_1;
    } else {
        bufw_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_Rst_A() {
    bufw_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_WEN_A() {
    bufw_WEN_A = ap_const_lv16_0;
}

void convolve_kernel::thread_grp_fu_2558_p0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        grp_fu_2558_p0 = bufo_load_phi_reg_2296.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        grp_fu_2558_p0 = reg_2580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_fu_2558_p0 = tmp_s_reg_3561.read();
    } else {
        grp_fu_2558_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_2558_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        grp_fu_2558_p1 = reg_2580.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_fu_2558_p1 = tmp_5_3_reg_3576.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        grp_fu_2558_p1 = tmp_5_2_reg_3571.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        grp_fu_2558_p1 = tmp_5_1_reg_3566.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        grp_fu_2558_p1 = ap_const_lv32_0;
    } else {
        grp_fu_2558_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_2564_p0() {
    grp_fu_2564_p0 = tmp_reg_3481.read();
}

void convolve_kernel::thread_grp_fu_2564_p1() {
    grp_fu_2564_p1 = tmp_1_reg_3486.read();
}

void convolve_kernel::thread_grp_fu_2568_p0() {
    grp_fu_2568_p0 = tmp_6_reg_3491.read();
}

void convolve_kernel::thread_grp_fu_2568_p1() {
    grp_fu_2568_p1 = tmp_8_reg_3496.read();
}

void convolve_kernel::thread_grp_fu_2572_p0() {
    grp_fu_2572_p0 = tmp_4_reg_3501.read();
}

void convolve_kernel::thread_grp_fu_2572_p1() {
    grp_fu_2572_p1 = tmp_11_reg_3506.read();
}

void convolve_kernel::thread_grp_fu_2576_p0() {
    grp_fu_2576_p0 = tmp_13_reg_3511.read();
}

void convolve_kernel::thread_grp_fu_2576_p1() {
    grp_fu_2576_p1 = tmp_15_reg_3516.read();
}

void convolve_kernel::thread_next_mul_fu_2714_p2() {
    next_mul_fu_2714_p2 = (!ap_const_lv64_19.is_01() || !phi_mul_reg_2272.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_19) + sc_biguint<64>(phi_mul_reg_2272.read()));
}

void convolve_kernel::thread_tmp_1_fu_2724_p1() {
    tmp_1_fu_2724_p1 = bufi_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_fu_2720_p1() {
    tmp_fu_2720_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_to_b_V_fu_2820_p2() {
    to_b_V_fu_2820_p2 = (!ap_const_lv7_1.is_01() || !p_s_reg_2284.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(p_s_reg_2284.read()));
}

}

