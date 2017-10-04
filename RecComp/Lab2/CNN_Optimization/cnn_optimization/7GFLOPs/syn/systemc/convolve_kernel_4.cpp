#include "convolve_kernel.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve_kernel::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void convolve_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void convolve_kernel::thread_ap_CS_fsm_state239() {
    ap_CS_fsm_state239 = ap_CS_fsm.read()[4];
}

void convolve_kernel::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage1_flag00000000() {
    ap_block_pp0_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage1_flag00011001() {
    ap_block_pp0_stage1_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage1_flag00011011() {
    ap_block_pp0_stage1_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage2_flag00000000() {
    ap_block_pp0_stage2_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage2_flag00011001() {
    ap_block_pp0_stage2_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage2_flag00011011() {
    ap_block_pp0_stage2_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state100_pp0_stage2_iter32() {
    ap_block_state100_pp0_stage2_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state101_pp0_stage0_iter33() {
    ap_block_state101_pp0_stage0_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state102_pp0_stage1_iter33() {
    ap_block_state102_pp0_stage1_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state103_pp0_stage2_iter33() {
    ap_block_state103_pp0_stage2_iter33 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state104_pp0_stage0_iter34() {
    ap_block_state104_pp0_stage0_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state105_pp0_stage1_iter34() {
    ap_block_state105_pp0_stage1_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state106_pp0_stage2_iter34() {
    ap_block_state106_pp0_stage2_iter34 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state107_pp0_stage0_iter35() {
    ap_block_state107_pp0_stage0_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state108_pp0_stage1_iter35() {
    ap_block_state108_pp0_stage1_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state109_pp0_stage2_iter35() {
    ap_block_state109_pp0_stage2_iter35 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state10_pp0_stage2_iter2() {
    ap_block_state10_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state110_pp0_stage0_iter36() {
    ap_block_state110_pp0_stage0_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state111_pp0_stage1_iter36() {
    ap_block_state111_pp0_stage1_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state112_pp0_stage2_iter36() {
    ap_block_state112_pp0_stage2_iter36 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state113_pp0_stage0_iter37() {
    ap_block_state113_pp0_stage0_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state114_pp0_stage1_iter37() {
    ap_block_state114_pp0_stage1_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state115_pp0_stage2_iter37() {
    ap_block_state115_pp0_stage2_iter37 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state116_pp0_stage0_iter38() {
    ap_block_state116_pp0_stage0_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state117_pp0_stage1_iter38() {
    ap_block_state117_pp0_stage1_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state118_pp0_stage2_iter38() {
    ap_block_state118_pp0_stage2_iter38 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state119_pp0_stage0_iter39() {
    ap_block_state119_pp0_stage0_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state11_pp0_stage0_iter3() {
    ap_block_state11_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state120_pp0_stage1_iter39() {
    ap_block_state120_pp0_stage1_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state121_pp0_stage2_iter39() {
    ap_block_state121_pp0_stage2_iter39 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state122_pp0_stage0_iter40() {
    ap_block_state122_pp0_stage0_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state123_pp0_stage1_iter40() {
    ap_block_state123_pp0_stage1_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state124_pp0_stage2_iter40() {
    ap_block_state124_pp0_stage2_iter40 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state125_pp0_stage0_iter41() {
    ap_block_state125_pp0_stage0_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state126_pp0_stage1_iter41() {
    ap_block_state126_pp0_stage1_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state127_pp0_stage2_iter41() {
    ap_block_state127_pp0_stage2_iter41 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state128_pp0_stage0_iter42() {
    ap_block_state128_pp0_stage0_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state129_pp0_stage1_iter42() {
    ap_block_state129_pp0_stage1_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state12_pp0_stage1_iter3() {
    ap_block_state12_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state130_pp0_stage2_iter42() {
    ap_block_state130_pp0_stage2_iter42 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state131_pp0_stage0_iter43() {
    ap_block_state131_pp0_stage0_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state132_pp0_stage1_iter43() {
    ap_block_state132_pp0_stage1_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state133_pp0_stage2_iter43() {
    ap_block_state133_pp0_stage2_iter43 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state134_pp0_stage0_iter44() {
    ap_block_state134_pp0_stage0_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state135_pp0_stage1_iter44() {
    ap_block_state135_pp0_stage1_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state136_pp0_stage2_iter44() {
    ap_block_state136_pp0_stage2_iter44 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state137_pp0_stage0_iter45() {
    ap_block_state137_pp0_stage0_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state138_pp0_stage1_iter45() {
    ap_block_state138_pp0_stage1_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state139_pp0_stage2_iter45() {
    ap_block_state139_pp0_stage2_iter45 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state13_pp0_stage2_iter3() {
    ap_block_state13_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state140_pp0_stage0_iter46() {
    ap_block_state140_pp0_stage0_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state141_pp0_stage1_iter46() {
    ap_block_state141_pp0_stage1_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state142_pp0_stage2_iter46() {
    ap_block_state142_pp0_stage2_iter46 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state143_pp0_stage0_iter47() {
    ap_block_state143_pp0_stage0_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state144_pp0_stage1_iter47() {
    ap_block_state144_pp0_stage1_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state145_pp0_stage2_iter47() {
    ap_block_state145_pp0_stage2_iter47 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state146_pp0_stage0_iter48() {
    ap_block_state146_pp0_stage0_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state147_pp0_stage1_iter48() {
    ap_block_state147_pp0_stage1_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state148_pp0_stage2_iter48() {
    ap_block_state148_pp0_stage2_iter48 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state149_pp0_stage0_iter49() {
    ap_block_state149_pp0_stage0_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state14_pp0_stage0_iter4() {
    ap_block_state14_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state150_pp0_stage1_iter49() {
    ap_block_state150_pp0_stage1_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state151_pp0_stage2_iter49() {
    ap_block_state151_pp0_stage2_iter49 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state152_pp0_stage0_iter50() {
    ap_block_state152_pp0_stage0_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state153_pp0_stage1_iter50() {
    ap_block_state153_pp0_stage1_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state154_pp0_stage2_iter50() {
    ap_block_state154_pp0_stage2_iter50 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state155_pp0_stage0_iter51() {
    ap_block_state155_pp0_stage0_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state156_pp0_stage1_iter51() {
    ap_block_state156_pp0_stage1_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state157_pp0_stage2_iter51() {
    ap_block_state157_pp0_stage2_iter51 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state158_pp0_stage0_iter52() {
    ap_block_state158_pp0_stage0_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state159_pp0_stage1_iter52() {
    ap_block_state159_pp0_stage1_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state15_pp0_stage1_iter4() {
    ap_block_state15_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state160_pp0_stage2_iter52() {
    ap_block_state160_pp0_stage2_iter52 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state161_pp0_stage0_iter53() {
    ap_block_state161_pp0_stage0_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state162_pp0_stage1_iter53() {
    ap_block_state162_pp0_stage1_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state163_pp0_stage2_iter53() {
    ap_block_state163_pp0_stage2_iter53 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state164_pp0_stage0_iter54() {
    ap_block_state164_pp0_stage0_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state165_pp0_stage1_iter54() {
    ap_block_state165_pp0_stage1_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state166_pp0_stage2_iter54() {
    ap_block_state166_pp0_stage2_iter54 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state167_pp0_stage0_iter55() {
    ap_block_state167_pp0_stage0_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state168_pp0_stage1_iter55() {
    ap_block_state168_pp0_stage1_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state169_pp0_stage2_iter55() {
    ap_block_state169_pp0_stage2_iter55 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state16_pp0_stage2_iter4() {
    ap_block_state16_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state170_pp0_stage0_iter56() {
    ap_block_state170_pp0_stage0_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state171_pp0_stage1_iter56() {
    ap_block_state171_pp0_stage1_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state172_pp0_stage2_iter56() {
    ap_block_state172_pp0_stage2_iter56 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state173_pp0_stage0_iter57() {
    ap_block_state173_pp0_stage0_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state174_pp0_stage1_iter57() {
    ap_block_state174_pp0_stage1_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state175_pp0_stage2_iter57() {
    ap_block_state175_pp0_stage2_iter57 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state176_pp0_stage0_iter58() {
    ap_block_state176_pp0_stage0_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state177_pp0_stage1_iter58() {
    ap_block_state177_pp0_stage1_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state178_pp0_stage2_iter58() {
    ap_block_state178_pp0_stage2_iter58 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state179_pp0_stage0_iter59() {
    ap_block_state179_pp0_stage0_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state17_pp0_stage0_iter5() {
    ap_block_state17_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state180_pp0_stage1_iter59() {
    ap_block_state180_pp0_stage1_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state181_pp0_stage2_iter59() {
    ap_block_state181_pp0_stage2_iter59 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state182_pp0_stage0_iter60() {
    ap_block_state182_pp0_stage0_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state183_pp0_stage1_iter60() {
    ap_block_state183_pp0_stage1_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state184_pp0_stage2_iter60() {
    ap_block_state184_pp0_stage2_iter60 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state185_pp0_stage0_iter61() {
    ap_block_state185_pp0_stage0_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state186_pp0_stage1_iter61() {
    ap_block_state186_pp0_stage1_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state187_pp0_stage2_iter61() {
    ap_block_state187_pp0_stage2_iter61 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state188_pp0_stage0_iter62() {
    ap_block_state188_pp0_stage0_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state189_pp0_stage1_iter62() {
    ap_block_state189_pp0_stage1_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state18_pp0_stage1_iter5() {
    ap_block_state18_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state190_pp0_stage2_iter62() {
    ap_block_state190_pp0_stage2_iter62 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state191_pp0_stage0_iter63() {
    ap_block_state191_pp0_stage0_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state192_pp0_stage1_iter63() {
    ap_block_state192_pp0_stage1_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state193_pp0_stage2_iter63() {
    ap_block_state193_pp0_stage2_iter63 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state194_pp0_stage0_iter64() {
    ap_block_state194_pp0_stage0_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state195_pp0_stage1_iter64() {
    ap_block_state195_pp0_stage1_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state196_pp0_stage2_iter64() {
    ap_block_state196_pp0_stage2_iter64 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state197_pp0_stage0_iter65() {
    ap_block_state197_pp0_stage0_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state198_pp0_stage1_iter65() {
    ap_block_state198_pp0_stage1_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state199_pp0_stage2_iter65() {
    ap_block_state199_pp0_stage2_iter65 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state19_pp0_stage2_iter5() {
    ap_block_state19_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state200_pp0_stage0_iter66() {
    ap_block_state200_pp0_stage0_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state201_pp0_stage1_iter66() {
    ap_block_state201_pp0_stage1_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state202_pp0_stage2_iter66() {
    ap_block_state202_pp0_stage2_iter66 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state203_pp0_stage0_iter67() {
    ap_block_state203_pp0_stage0_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state204_pp0_stage1_iter67() {
    ap_block_state204_pp0_stage1_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state205_pp0_stage2_iter67() {
    ap_block_state205_pp0_stage2_iter67 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state206_pp0_stage0_iter68() {
    ap_block_state206_pp0_stage0_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state207_pp0_stage1_iter68() {
    ap_block_state207_pp0_stage1_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state208_pp0_stage2_iter68() {
    ap_block_state208_pp0_stage2_iter68 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state209_pp0_stage0_iter69() {
    ap_block_state209_pp0_stage0_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state20_pp0_stage0_iter6() {
    ap_block_state20_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state210_pp0_stage1_iter69() {
    ap_block_state210_pp0_stage1_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state211_pp0_stage2_iter69() {
    ap_block_state211_pp0_stage2_iter69 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state212_pp0_stage0_iter70() {
    ap_block_state212_pp0_stage0_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state213_pp0_stage1_iter70() {
    ap_block_state213_pp0_stage1_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state214_pp0_stage2_iter70() {
    ap_block_state214_pp0_stage2_iter70 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state215_pp0_stage0_iter71() {
    ap_block_state215_pp0_stage0_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state216_pp0_stage1_iter71() {
    ap_block_state216_pp0_stage1_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state217_pp0_stage2_iter71() {
    ap_block_state217_pp0_stage2_iter71 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state218_pp0_stage0_iter72() {
    ap_block_state218_pp0_stage0_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state219_pp0_stage1_iter72() {
    ap_block_state219_pp0_stage1_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state21_pp0_stage1_iter6() {
    ap_block_state21_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state220_pp0_stage2_iter72() {
    ap_block_state220_pp0_stage2_iter72 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state221_pp0_stage0_iter73() {
    ap_block_state221_pp0_stage0_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state222_pp0_stage1_iter73() {
    ap_block_state222_pp0_stage1_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state223_pp0_stage2_iter73() {
    ap_block_state223_pp0_stage2_iter73 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state224_pp0_stage0_iter74() {
    ap_block_state224_pp0_stage0_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state225_pp0_stage1_iter74() {
    ap_block_state225_pp0_stage1_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state226_pp0_stage2_iter74() {
    ap_block_state226_pp0_stage2_iter74 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state227_pp0_stage0_iter75() {
    ap_block_state227_pp0_stage0_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state228_pp0_stage1_iter75() {
    ap_block_state228_pp0_stage1_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state229_pp0_stage2_iter75() {
    ap_block_state229_pp0_stage2_iter75 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state22_pp0_stage2_iter6() {
    ap_block_state22_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state230_pp0_stage0_iter76() {
    ap_block_state230_pp0_stage0_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state231_pp0_stage1_iter76() {
    ap_block_state231_pp0_stage1_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state232_pp0_stage2_iter76() {
    ap_block_state232_pp0_stage2_iter76 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state233_pp0_stage0_iter77() {
    ap_block_state233_pp0_stage0_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state234_pp0_stage1_iter77() {
    ap_block_state234_pp0_stage1_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state235_pp0_stage2_iter77() {
    ap_block_state235_pp0_stage2_iter77 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state236_pp0_stage0_iter78() {
    ap_block_state236_pp0_stage0_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state237_pp0_stage1_iter78() {
    ap_block_state237_pp0_stage1_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state238_pp0_stage2_iter78() {
    ap_block_state238_pp0_stage2_iter78 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state23_pp0_stage0_iter7() {
    ap_block_state23_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state24_pp0_stage1_iter7() {
    ap_block_state24_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state25_pp0_stage2_iter7() {
    ap_block_state25_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state26_pp0_stage0_iter8() {
    ap_block_state26_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state27_pp0_stage1_iter8() {
    ap_block_state27_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state28_pp0_stage2_iter8() {
    ap_block_state28_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state29_pp0_stage0_iter9() {
    ap_block_state29_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state30_pp0_stage1_iter9() {
    ap_block_state30_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state31_pp0_stage2_iter9() {
    ap_block_state31_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state32_pp0_stage0_iter10() {
    ap_block_state32_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state33_pp0_stage1_iter10() {
    ap_block_state33_pp0_stage1_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state34_pp0_stage2_iter10() {
    ap_block_state34_pp0_stage2_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state35_pp0_stage0_iter11() {
    ap_block_state35_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state36_pp0_stage1_iter11() {
    ap_block_state36_pp0_stage1_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state37_pp0_stage2_iter11() {
    ap_block_state37_pp0_stage2_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state38_pp0_stage0_iter12() {
    ap_block_state38_pp0_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state39_pp0_stage1_iter12() {
    ap_block_state39_pp0_stage1_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state40_pp0_stage2_iter12() {
    ap_block_state40_pp0_stage2_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state41_pp0_stage0_iter13() {
    ap_block_state41_pp0_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state42_pp0_stage1_iter13() {
    ap_block_state42_pp0_stage1_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state43_pp0_stage2_iter13() {
    ap_block_state43_pp0_stage2_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state44_pp0_stage0_iter14() {
    ap_block_state44_pp0_stage0_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state45_pp0_stage1_iter14() {
    ap_block_state45_pp0_stage1_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state46_pp0_stage2_iter14() {
    ap_block_state46_pp0_stage2_iter14 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state47_pp0_stage0_iter15() {
    ap_block_state47_pp0_stage0_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state48_pp0_stage1_iter15() {
    ap_block_state48_pp0_stage1_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state49_pp0_stage2_iter15() {
    ap_block_state49_pp0_stage2_iter15 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state50_pp0_stage0_iter16() {
    ap_block_state50_pp0_stage0_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state51_pp0_stage1_iter16() {
    ap_block_state51_pp0_stage1_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state52_pp0_stage2_iter16() {
    ap_block_state52_pp0_stage2_iter16 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state53_pp0_stage0_iter17() {
    ap_block_state53_pp0_stage0_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state54_pp0_stage1_iter17() {
    ap_block_state54_pp0_stage1_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state55_pp0_stage2_iter17() {
    ap_block_state55_pp0_stage2_iter17 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state56_pp0_stage0_iter18() {
    ap_block_state56_pp0_stage0_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state57_pp0_stage1_iter18() {
    ap_block_state57_pp0_stage1_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state58_pp0_stage2_iter18() {
    ap_block_state58_pp0_stage2_iter18 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state59_pp0_stage0_iter19() {
    ap_block_state59_pp0_stage0_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state5_pp0_stage0_iter1() {
    ap_block_state5_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state60_pp0_stage1_iter19() {
    ap_block_state60_pp0_stage1_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state61_pp0_stage2_iter19() {
    ap_block_state61_pp0_stage2_iter19 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state62_pp0_stage0_iter20() {
    ap_block_state62_pp0_stage0_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state63_pp0_stage1_iter20() {
    ap_block_state63_pp0_stage1_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state64_pp0_stage2_iter20() {
    ap_block_state64_pp0_stage2_iter20 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state65_pp0_stage0_iter21() {
    ap_block_state65_pp0_stage0_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state66_pp0_stage1_iter21() {
    ap_block_state66_pp0_stage1_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state67_pp0_stage2_iter21() {
    ap_block_state67_pp0_stage2_iter21 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state68_pp0_stage0_iter22() {
    ap_block_state68_pp0_stage0_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state69_pp0_stage1_iter22() {
    ap_block_state69_pp0_stage1_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state6_pp0_stage1_iter1() {
    ap_block_state6_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state70_pp0_stage2_iter22() {
    ap_block_state70_pp0_stage2_iter22 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state71_pp0_stage0_iter23() {
    ap_block_state71_pp0_stage0_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state72_pp0_stage1_iter23() {
    ap_block_state72_pp0_stage1_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state73_pp0_stage2_iter23() {
    ap_block_state73_pp0_stage2_iter23 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state74_pp0_stage0_iter24() {
    ap_block_state74_pp0_stage0_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state75_pp0_stage1_iter24() {
    ap_block_state75_pp0_stage1_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state76_pp0_stage2_iter24() {
    ap_block_state76_pp0_stage2_iter24 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state77_pp0_stage0_iter25() {
    ap_block_state77_pp0_stage0_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state78_pp0_stage1_iter25() {
    ap_block_state78_pp0_stage1_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state79_pp0_stage2_iter25() {
    ap_block_state79_pp0_stage2_iter25 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state7_pp0_stage2_iter1() {
    ap_block_state7_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state80_pp0_stage0_iter26() {
    ap_block_state80_pp0_stage0_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state81_pp0_stage1_iter26() {
    ap_block_state81_pp0_stage1_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state82_pp0_stage2_iter26() {
    ap_block_state82_pp0_stage2_iter26 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state83_pp0_stage0_iter27() {
    ap_block_state83_pp0_stage0_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state84_pp0_stage1_iter27() {
    ap_block_state84_pp0_stage1_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state85_pp0_stage2_iter27() {
    ap_block_state85_pp0_stage2_iter27 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state86_pp0_stage0_iter28() {
    ap_block_state86_pp0_stage0_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state87_pp0_stage1_iter28() {
    ap_block_state87_pp0_stage1_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state88_pp0_stage2_iter28() {
    ap_block_state88_pp0_stage2_iter28 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state89_pp0_stage0_iter29() {
    ap_block_state89_pp0_stage0_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state8_pp0_stage0_iter2() {
    ap_block_state8_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state90_pp0_stage1_iter29() {
    ap_block_state90_pp0_stage1_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state91_pp0_stage2_iter29() {
    ap_block_state91_pp0_stage2_iter29 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state92_pp0_stage0_iter30() {
    ap_block_state92_pp0_stage0_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state93_pp0_stage1_iter30() {
    ap_block_state93_pp0_stage1_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state94_pp0_stage2_iter30() {
    ap_block_state94_pp0_stage2_iter30 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state95_pp0_stage0_iter31() {
    ap_block_state95_pp0_stage0_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state96_pp0_stage1_iter31() {
    ap_block_state96_pp0_stage1_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state97_pp0_stage2_iter31() {
    ap_block_state97_pp0_stage2_iter31 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state98_pp0_stage0_iter32() {
    ap_block_state98_pp0_stage0_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state99_pp0_stage1_iter32() {
    ap_block_state99_pp0_stage1_iter32 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state9_pp0_stage1_iter2() {
    ap_block_state9_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten_fu_1044_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void convolve_kernel::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter15.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter16.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter17.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter18.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter19.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter20.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter21.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter22.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter23.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter24.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter25.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter26.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter27.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter28.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter29.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter30.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter31.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter32.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter33.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter34.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter35.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter36.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter37.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter38.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter39.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter40.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter41.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter42.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter43.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter44.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter45.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter46.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter47.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter48.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter49.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter50.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter52.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter53.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter55.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter56.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter58.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter59.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter61.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter62.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter64.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter65.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter67.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter68.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter70.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter71.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter73.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter74.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter76.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter77.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter78.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state239.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_0_Addr_A() {
    bufi_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_0_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_0_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_0_Addr_B() {
    bufi_0_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_0_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_0_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_0_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_0_Clk_A() {
    bufi_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_0_Clk_B() {
    bufi_0_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_0_Din_A() {
    bufi_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_0_Din_B() {
    bufi_0_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_0_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_0_EN_A = ap_const_logic_1;
    } else {
        bufi_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_0_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_0_EN_B = ap_const_logic_1;
    } else {
        bufi_0_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_0_Rst_A() {
    bufi_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_0_Rst_B() {
    bufi_0_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_0_WEN_A() {
    bufi_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_0_WEN_B() {
    bufi_0_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_1_Addr_A() {
    bufi_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_1_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_1_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_1_Addr_B() {
    bufi_1_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_1_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_1_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_1_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_1_Clk_A() {
    bufi_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_1_Clk_B() {
    bufi_1_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_1_Din_A() {
    bufi_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_1_Din_B() {
    bufi_1_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_1_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_1_EN_A = ap_const_logic_1;
    } else {
        bufi_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_1_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_1_EN_B = ap_const_logic_1;
    } else {
        bufi_1_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_1_Rst_A() {
    bufi_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_1_Rst_B() {
    bufi_1_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_1_WEN_A() {
    bufi_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_1_WEN_B() {
    bufi_1_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_2_Addr_A() {
    bufi_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_2_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_2_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_2_Addr_B() {
    bufi_2_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_2_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_2_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_2_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_2_Clk_A() {
    bufi_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_2_Clk_B() {
    bufi_2_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_2_Din_A() {
    bufi_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_2_Din_B() {
    bufi_2_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_2_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_2_EN_A = ap_const_logic_1;
    } else {
        bufi_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_2_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_2_EN_B = ap_const_logic_1;
    } else {
        bufi_2_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_2_Rst_A() {
    bufi_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_2_Rst_B() {
    bufi_2_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_2_WEN_A() {
    bufi_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_2_WEN_B() {
    bufi_2_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_3_Addr_A() {
    bufi_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_3_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_3_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_3_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_3_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_3_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_3_Addr_B() {
    bufi_3_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_3_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_3_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_3_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_3_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_3_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_3_Clk_A() {
    bufi_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_3_Clk_B() {
    bufi_3_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_3_Din_A() {
    bufi_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_3_Din_B() {
    bufi_3_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_3_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_3_EN_A = ap_const_logic_1;
    } else {
        bufi_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_3_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_3_EN_B = ap_const_logic_1;
    } else {
        bufi_3_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_3_Rst_A() {
    bufi_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_3_Rst_B() {
    bufi_3_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_3_WEN_A() {
    bufi_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_3_WEN_B() {
    bufi_3_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_4_Addr_A() {
    bufi_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_4_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_4_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_4_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_4_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_4_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_4_Addr_B() {
    bufi_4_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_4_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_4_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_4_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_4_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_4_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_4_Clk_A() {
    bufi_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_4_Clk_B() {
    bufi_4_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_4_Din_A() {
    bufi_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_4_Din_B() {
    bufi_4_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_4_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_4_EN_A = ap_const_logic_1;
    } else {
        bufi_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_4_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_4_EN_B = ap_const_logic_1;
    } else {
        bufi_4_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_4_Rst_A() {
    bufi_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_4_Rst_B() {
    bufi_4_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_4_WEN_A() {
    bufi_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_4_WEN_B() {
    bufi_4_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_5_Addr_A() {
    bufi_5_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_5_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_5_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_5_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_5_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_5_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_5_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_5_Addr_B() {
    bufi_5_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_5_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_5_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_5_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_5_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_5_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_5_Clk_A() {
    bufi_5_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_5_Clk_B() {
    bufi_5_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_5_Din_A() {
    bufi_5_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_5_Din_B() {
    bufi_5_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_5_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_5_EN_A = ap_const_logic_1;
    } else {
        bufi_5_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_5_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_5_EN_B = ap_const_logic_1;
    } else {
        bufi_5_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_5_Rst_A() {
    bufi_5_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_5_Rst_B() {
    bufi_5_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_5_WEN_A() {
    bufi_5_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_5_WEN_B() {
    bufi_5_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_6_Addr_A() {
    bufi_6_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_6_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_6_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_6_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_3_fu_1143_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_6_Addr_A_orig =  (sc_lv<32>) (tmp_2_0_2_fu_1128_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_6_Addr_A_orig =  (sc_lv<32>) (tmp_3_fu_1082_p1.read());
    } else {
        bufi_6_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_6_Addr_B() {
    bufi_6_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_6_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_6_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_6_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_4_fu_1160_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufi_6_Addr_B_orig =  (sc_lv<32>) (tmp_2_0_1_fu_1118_p1.read());
    } else {
        bufi_6_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufi_6_Clk_A() {
    bufi_6_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_6_Clk_B() {
    bufi_6_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_6_Din_A() {
    bufi_6_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_6_Din_B() {
    bufi_6_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufi_6_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_6_EN_A = ap_const_logic_1;
    } else {
        bufi_6_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_6_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())))) {
        bufi_6_EN_B = ap_const_logic_1;
    } else {
        bufi_6_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_6_Rst_A() {
    bufi_6_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufi_6_Rst_B() {
    bufi_6_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufi_6_WEN_A() {
    bufi_6_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufi_6_WEN_B() {
    bufi_6_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_0_Addr_A() {
    bufo_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_0_Addr_A_orig() {
    bufo_0_Addr_A_orig =  (sc_lv<32>) (tmp_4_cast_fu_1196_p1.read());
}

void convolve_kernel::thread_bufo_0_Addr_B() {
    bufo_0_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_0_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_0_Addr_B_orig() {
    bufo_0_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter78_bufo_0_addr_reg_1972.read());
}

void convolve_kernel::thread_bufo_0_Clk_A() {
    bufo_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_0_Clk_B() {
    bufo_0_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_0_Din_A() {
    bufo_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_0_Din_B() {
    bufo_0_Din_B = temp_2_0_4_4_reg_2740.read();
}

void convolve_kernel::thread_bufo_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        bufo_0_EN_A = ap_const_logic_1;
    } else {
        bufo_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_0_EN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()))) {
        bufo_0_EN_B = ap_const_logic_1;
    } else {
        bufo_0_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_0_Rst_A() {
    bufo_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_0_Rst_B() {
    bufo_0_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_0_WEN_A() {
    bufo_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_0_WEN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter78_exitcond_flatten_reg_1202.read(), ap_const_lv1_0))) {
        bufo_0_WEN_B = ap_const_lv4_F;
    } else {
        bufo_0_WEN_B = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_1_Addr_A() {
    bufo_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_1_Addr_A_orig() {
    bufo_1_Addr_A_orig =  (sc_lv<32>) (tmp_4_cast_fu_1196_p1.read());
}

void convolve_kernel::thread_bufo_1_Addr_B() {
    bufo_1_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_1_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_1_Addr_B_orig() {
    bufo_1_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter78_bufo_1_addr_reg_1978.read());
}

void convolve_kernel::thread_bufo_1_Clk_A() {
    bufo_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_1_Clk_B() {
    bufo_1_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_1_Din_A() {
    bufo_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_1_Din_B() {
    bufo_1_Din_B = temp_2_1_4_4_reg_2745.read();
}

void convolve_kernel::thread_bufo_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        bufo_1_EN_A = ap_const_logic_1;
    } else {
        bufo_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_1_EN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()))) {
        bufo_1_EN_B = ap_const_logic_1;
    } else {
        bufo_1_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_1_Rst_A() {
    bufo_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_1_Rst_B() {
    bufo_1_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_1_WEN_A() {
    bufo_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_1_WEN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter78_exitcond_flatten_reg_1202.read(), ap_const_lv1_0))) {
        bufo_1_WEN_B = ap_const_lv4_F;
    } else {
        bufo_1_WEN_B = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufo_2_Addr_A() {
    bufo_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_2_Addr_A_orig() {
    bufo_2_Addr_A_orig =  (sc_lv<32>) (tmp_4_cast_fu_1196_p1.read());
}

void convolve_kernel::thread_bufo_2_Addr_B() {
    bufo_2_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufo_2_Addr_B_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufo_2_Addr_B_orig() {
    bufo_2_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter78_bufo_2_addr_reg_1984.read());
}

void convolve_kernel::thread_bufo_2_Clk_A() {
    bufo_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_2_Clk_B() {
    bufo_2_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_2_Din_A() {
    bufo_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufo_2_Din_B() {
    bufo_2_Din_B = temp_2_2_4_4_reg_2750.read();
}

void convolve_kernel::thread_bufo_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()))) {
        bufo_2_EN_A = ap_const_logic_1;
    } else {
        bufo_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_2_EN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()))) {
        bufo_2_EN_B = ap_const_logic_1;
    } else {
        bufo_2_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_2_Rst_A() {
    bufo_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_2_Rst_B() {
    bufo_2_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_2_WEN_A() {
    bufo_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufo_2_WEN_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter78.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter78_exitcond_flatten_reg_1202.read(), ap_const_lv1_0))) {
        bufo_2_WEN_B = ap_const_lv4_F;
    } else {
        bufo_2_WEN_B = ap_const_lv4_0;
    }
}

void convolve_kernel::thread_bufw_0_0_Addr_A() {
    bufw_0_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_0_Addr_A_orig() {
    bufw_0_0_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_0_0_Clk_A() {
    bufw_0_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_0_Din_A() {
    bufw_0_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_0_0_EN_A = ap_const_logic_1;
    } else {
        bufw_0_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_0_Rst_A() {
    bufw_0_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_0_WEN_A() {
    bufw_0_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_0_1_Addr_A() {
    bufw_0_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_1_Addr_A_orig() {
    bufw_0_1_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_0_1_Clk_A() {
    bufw_0_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_1_Din_A() {
    bufw_0_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_0_1_EN_A = ap_const_logic_1;
    } else {
        bufw_0_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_1_Rst_A() {
    bufw_0_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_1_WEN_A() {
    bufw_0_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_0_2_Addr_A() {
    bufw_0_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_2_Addr_A_orig() {
    bufw_0_2_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_0_2_Clk_A() {
    bufw_0_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_2_Din_A() {
    bufw_0_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_0_2_EN_A = ap_const_logic_1;
    } else {
        bufw_0_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_2_Rst_A() {
    bufw_0_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_2_WEN_A() {
    bufw_0_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_0_3_Addr_A() {
    bufw_0_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_3_Addr_A_orig() {
    bufw_0_3_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_0_3_Clk_A() {
    bufw_0_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_3_Din_A() {
    bufw_0_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_0_3_EN_A = ap_const_logic_1;
    } else {
        bufw_0_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_3_Rst_A() {
    bufw_0_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_3_WEN_A() {
    bufw_0_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_0_4_Addr_A() {
    bufw_0_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_4_Addr_A_orig() {
    bufw_0_4_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_0_4_Clk_A() {
    bufw_0_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_4_Din_A() {
    bufw_0_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_0_4_EN_A = ap_const_logic_1;
    } else {
        bufw_0_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_4_Rst_A() {
    bufw_0_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_4_WEN_A() {
    bufw_0_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_0_Addr_A() {
    bufw_1_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_0_Addr_A_orig() {
    bufw_1_0_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_1_0_Clk_A() {
    bufw_1_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_0_Din_A() {
    bufw_1_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_1_0_EN_A = ap_const_logic_1;
    } else {
        bufw_1_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_0_Rst_A() {
    bufw_1_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_0_WEN_A() {
    bufw_1_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_1_Addr_A() {
    bufw_1_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_1_Addr_A_orig() {
    bufw_1_1_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_1_1_Clk_A() {
    bufw_1_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_1_Din_A() {
    bufw_1_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_1_1_EN_A = ap_const_logic_1;
    } else {
        bufw_1_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_1_Rst_A() {
    bufw_1_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_1_WEN_A() {
    bufw_1_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_2_Addr_A() {
    bufw_1_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_2_Addr_A_orig() {
    bufw_1_2_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_1_2_Clk_A() {
    bufw_1_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_2_Din_A() {
    bufw_1_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_1_2_EN_A = ap_const_logic_1;
    } else {
        bufw_1_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_2_Rst_A() {
    bufw_1_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_2_WEN_A() {
    bufw_1_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_3_Addr_A() {
    bufw_1_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_3_Addr_A_orig() {
    bufw_1_3_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_fu_1106_p1.read());
}

void convolve_kernel::thread_bufw_1_3_Clk_A() {
    bufw_1_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_3_Din_A() {
    bufw_1_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0))) {
        bufw_1_3_EN_A = ap_const_logic_1;
    } else {
        bufw_1_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_3_Rst_A() {
    bufw_1_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_3_WEN_A() {
    bufw_1_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_4_Addr_A() {
    bufw_1_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_4_Addr_A_orig() {
    bufw_1_4_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_1_4_Clk_A() {
    bufw_1_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_4_Din_A() {
    bufw_1_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_1_4_EN_A = ap_const_logic_1;
    } else {
        bufw_1_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_4_Rst_A() {
    bufw_1_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_4_WEN_A() {
    bufw_1_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_0_Addr_A() {
    bufw_2_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_0_Addr_A_orig() {
    bufw_2_0_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_2_0_Clk_A() {
    bufw_2_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_0_Din_A() {
    bufw_2_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_2_0_EN_A = ap_const_logic_1;
    } else {
        bufw_2_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_0_Rst_A() {
    bufw_2_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_0_WEN_A() {
    bufw_2_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_1_Addr_A() {
    bufw_2_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_1_Addr_A_orig() {
    bufw_2_1_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_2_1_Clk_A() {
    bufw_2_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_1_Din_A() {
    bufw_2_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_2_1_EN_A = ap_const_logic_1;
    } else {
        bufw_2_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_1_Rst_A() {
    bufw_2_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_1_WEN_A() {
    bufw_2_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_2_Addr_A() {
    bufw_2_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_2_Addr_A_orig() {
    bufw_2_2_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_2_2_Clk_A() {
    bufw_2_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_2_Din_A() {
    bufw_2_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_2_2_EN_A = ap_const_logic_1;
    } else {
        bufw_2_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_2_Rst_A() {
    bufw_2_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_2_WEN_A() {
    bufw_2_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_3_Addr_A() {
    bufw_2_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_3_Addr_A_orig() {
    bufw_2_3_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_2_3_Clk_A() {
    bufw_2_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_3_Din_A() {
    bufw_2_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_2_3_EN_A = ap_const_logic_1;
    } else {
        bufw_2_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_3_Rst_A() {
    bufw_2_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_3_WEN_A() {
    bufw_2_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_4_Addr_A() {
    bufw_2_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_4_Addr_A_orig() {
    bufw_2_4_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_2_4_Clk_A() {
    bufw_2_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_4_Din_A() {
    bufw_2_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_2_4_EN_A = ap_const_logic_1;
    } else {
        bufw_2_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_4_Rst_A() {
    bufw_2_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_4_WEN_A() {
    bufw_2_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_0_Addr_A() {
    bufw_3_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_0_Addr_A_orig() {
    bufw_3_0_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_3_0_Clk_A() {
    bufw_3_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_0_Din_A() {
    bufw_3_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_3_0_EN_A = ap_const_logic_1;
    } else {
        bufw_3_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_0_Rst_A() {
    bufw_3_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_0_WEN_A() {
    bufw_3_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_1_Addr_A() {
    bufw_3_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_1_Addr_A_orig() {
    bufw_3_1_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_3_1_Clk_A() {
    bufw_3_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_1_Din_A() {
    bufw_3_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_3_1_EN_A = ap_const_logic_1;
    } else {
        bufw_3_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_1_Rst_A() {
    bufw_3_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_1_WEN_A() {
    bufw_3_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_2_Addr_A() {
    bufw_3_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_2_Addr_A_orig() {
    bufw_3_2_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_3_2_Clk_A() {
    bufw_3_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_2_Din_A() {
    bufw_3_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_3_2_EN_A = ap_const_logic_1;
    } else {
        bufw_3_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_2_Rst_A() {
    bufw_3_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_2_WEN_A() {
    bufw_3_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_3_Addr_A() {
    bufw_3_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_3_Addr_A_orig() {
    bufw_3_3_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_3_3_Clk_A() {
    bufw_3_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_3_Din_A() {
    bufw_3_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_3_3_EN_A = ap_const_logic_1;
    } else {
        bufw_3_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_3_Rst_A() {
    bufw_3_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_3_WEN_A() {
    bufw_3_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_4_Addr_A() {
    bufw_3_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_4_Addr_A_orig() {
    bufw_3_4_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_3_4_Clk_A() {
    bufw_3_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_4_Din_A() {
    bufw_3_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_3_4_EN_A = ap_const_logic_1;
    } else {
        bufw_3_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_4_Rst_A() {
    bufw_3_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_4_WEN_A() {
    bufw_3_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_0_Addr_A() {
    bufw_4_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_0_Addr_A_orig() {
    bufw_4_0_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_4_0_Clk_A() {
    bufw_4_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_0_Din_A() {
    bufw_4_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_0_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_4_0_EN_A = ap_const_logic_1;
    } else {
        bufw_4_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_0_Rst_A() {
    bufw_4_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_0_WEN_A() {
    bufw_4_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_1_Addr_A() {
    bufw_4_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_1_Addr_A_orig() {
    bufw_4_1_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_4_1_Clk_A() {
    bufw_4_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_1_Din_A() {
    bufw_4_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_1_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_4_1_EN_A = ap_const_logic_1;
    } else {
        bufw_4_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_1_Rst_A() {
    bufw_4_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_1_WEN_A() {
    bufw_4_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_2_Addr_A() {
    bufw_4_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_2_Addr_A_orig() {
    bufw_4_2_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_4_2_Clk_A() {
    bufw_4_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_2_Din_A() {
    bufw_4_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_2_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_4_2_EN_A = ap_const_logic_1;
    } else {
        bufw_4_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_2_Rst_A() {
    bufw_4_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_2_WEN_A() {
    bufw_4_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_3_Addr_A() {
    bufw_4_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_3_Addr_A_orig() {
    bufw_4_3_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_4_3_Clk_A() {
    bufw_4_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_3_Din_A() {
    bufw_4_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_3_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_4_3_EN_A = ap_const_logic_1;
    } else {
        bufw_4_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_3_Rst_A() {
    bufw_4_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_3_WEN_A() {
    bufw_4_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_4_Addr_A() {
    bufw_4_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_4_Addr_A_orig() {
    bufw_4_4_Addr_A_orig =  (sc_lv<32>) (tmp_mid2_reg_1289.read());
}

void convolve_kernel::thread_bufw_4_4_Clk_A() {
    bufw_4_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_4_Din_A() {
    bufw_4_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_4_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bufw_4_4_EN_A = ap_const_logic_1;
    } else {
        bufw_4_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_4_Rst_A() {
    bufw_4_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_4_WEN_A() {
    bufw_4_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_exitcond_flatten_fu_1044_p2() {
    exitcond_flatten_fu_1044_p2 = (!indvar_flatten_phi_fu_814_p4.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_phi_fu_814_p4.read() == ap_const_lv8_C0);
}

void convolve_kernel::thread_grp_fu_1000_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p0 = bufw_4_3_load_reg_1928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p0 = bufw_2_4_load_reg_1770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p0 = bufw_1_0_load_reg_1547.read();
    } else {
        grp_fu_1000_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1000_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p1 = bufi_4_load_4_reg_1949.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p1 = bufi_5_load_2_reg_1679.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1000_p1 = bufi_1_load_1_reg_1566.read();
    } else {
        grp_fu_1000_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1004_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p0 = bufw_4_4_load_reg_1942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p0 = bufw_3_0_load_reg_1777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p0 = bufw_1_1_load_reg_1559.read();
    } else {
        grp_fu_1004_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1004_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p1 = bufi_5_load_4_reg_1956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p1 = bufi_1_load_3_reg_1795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1004_p1 = bufi_2_load_1_reg_1579.read();
    } else {
        grp_fu_1004_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1008_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1008_p0 = bufw_3_1_load_reg_1789.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1008_p0 = bufw_1_2_load_reg_1572.read();
    } else {
        grp_fu_1008_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1008_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1008_p1 = bufi_3_load_3_reg_1808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1008_p1 = bufi_2_load_3_reg_1801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1008_p1 = bufi_3_load_1_reg_1592.read();
    } else {
        grp_fu_1008_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1012_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p0 = bufw_3_2_load_reg_1868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p0 = bufw_1_3_load_reg_1586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p0 = bufw_0_0_load_reg_1512.read();
    } else {
        grp_fu_1012_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1012_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p1 = bufi_4_load_3_reg_1815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p1 = bufi_5_load_1_reg_1673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1012_p1 = bufi_2_load_reg_1365.read();
    } else {
        grp_fu_1012_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1016_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p0 = bufw_3_3_load_reg_1875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p0 = bufw_1_4_load_reg_1735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p0 = bufw_0_1_load_reg_1519.read();
    } else {
        grp_fu_1016_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1016_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p1 = bufi_5_load_3_reg_1857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p1 = bufi_6_load_1_reg_1685.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1016_p1 = bufi_3_load_reg_1372.read();
    } else {
        grp_fu_1016_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1020_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p0 = bufw_3_4_load_reg_1882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p0 = bufw_2_0_load_reg_1742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p0 = bufw_0_2_load_reg_1526.read();
    } else {
        grp_fu_1020_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1020_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p1 = bufi_6_load_3_reg_1863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p1 = bufi_2_load_2_reg_1617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1020_p1 = bufi_4_load_reg_1379.read();
    } else {
        grp_fu_1020_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1024_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p0 = bufw_4_0_load_reg_1889.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p0 = bufw_2_1_load_reg_1749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p0 = bufw_0_3_load_reg_1533.read();
    } else {
        grp_fu_1024_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1024_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p1 = bufi_2_load_4_reg_1921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p1 = bufi_3_load_2_reg_1624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1024_p1 = bufi_5_load_reg_1461.read();
    } else {
        grp_fu_1024_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1028_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p0 = bufw_4_1_load_reg_1901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p0 = bufw_2_2_load_reg_1756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p0 = bufw_0_4_load_reg_1540.read();
    } else {
        grp_fu_1028_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1028_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p1 = bufi_3_load_4_reg_1935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p1 = bufi_4_load_2_reg_1631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1028_p1 = bufi_6_load_reg_1467.read();
    } else {
        grp_fu_1028_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1032_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p0 = bufw_4_2_load_reg_1914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p0 = bufw_2_3_load_reg_1763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p0 = bufw_1_0_load_reg_1547.read();
    } else {
        grp_fu_1032_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1032_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p1 = bufi_4_load_4_reg_1949.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p1 = bufi_5_load_2_reg_1679.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1032_p1 = bufi_2_load_1_reg_1579.read();
    } else {
        grp_fu_1032_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1036_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p0 = bufw_4_3_load_reg_1928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p0 = bufw_2_4_load_reg_1770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p0 = bufw_1_1_load_reg_1559.read();
    } else {
        grp_fu_1036_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1036_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p1 = bufi_5_load_4_reg_1956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p1 = bufi_6_load_2_reg_1690.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1036_p1 = bufi_3_load_1_reg_1592.read();
    } else {
        grp_fu_1036_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1040_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p0 = bufw_4_4_load_reg_1942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p0 = bufw_3_0_load_reg_1777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p0 = bufw_1_2_load_reg_1572.read();
    } else {
        grp_fu_1040_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1040_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p1 = bufi_6_load_4_reg_1962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p1 = bufi_2_load_3_reg_1801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1040_p1 = bufi_4_load_1_reg_1599.read();
    } else {
        grp_fu_1040_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_844_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_844_p0 = temp_2_2_3_reg_2615.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_844_p0 = temp_2_1_1_2_reg_2490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_844_p0 = bufo_0_load_reg_1990.read();
    } else {
        grp_fu_844_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_844_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_844_p1 = ap_reg_pp0_iter51_tmp_10_2_3_1_reg_2335.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_844_p1 = ap_reg_pp0_iter27_tmp_10_1_1_3_reg_2170.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_844_p1 = tmp_s_reg_1995.read();
    } else {
        grp_fu_844_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_848_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_848_p0 = temp_2_0_3_1_reg_2620.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_848_p0 = temp_2_2_1_2_reg_2495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_848_p0 = bufo_1_load_reg_2040.read();
    } else {
        grp_fu_848_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_848_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_848_p1 = ap_reg_pp0_iter54_tmp_10_0_3_2_reg_2255.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_848_p1 = ap_reg_pp0_iter27_tmp_10_2_1_3_reg_2215.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_848_p1 = tmp_10_1_reg_2045.read();
    } else {
        grp_fu_848_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_852_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p0 = temp_2_1_3_1_reg_2625.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p0 = temp_2_0_1_3_reg_2500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p0 = bufo_2_load_reg_2085.read();
    } else {
        grp_fu_852_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_852_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p1 = ap_reg_pp0_iter54_tmp_10_1_3_2_reg_2295.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p1 = ap_reg_pp0_iter30_tmp_10_0_1_4_reg_2130.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_852_p1 = tmp_10_2_reg_2090.read();
    } else {
        grp_fu_852_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_856_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_856_p0 = temp_2_2_3_1_reg_2630.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_856_p0 = temp_2_1_1_3_reg_2505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_856_p0 = temp_2_reg_2380.read();
    } else {
        grp_fu_856_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_856_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter54.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_856_p1 = ap_reg_pp0_iter54_tmp_10_2_3_2_reg_2340.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_856_p1 = ap_reg_pp0_iter30_tmp_10_1_1_4_reg_2175.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_856_p1 = ap_reg_pp0_iter5_tmp_10_0_0_1_reg_2000.read();
    } else {
        grp_fu_856_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_860_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_860_p0 = temp_2_0_3_2_reg_2635.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_860_p0 = temp_2_2_1_3_reg_2510.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_860_p0 = temp_2_1_reg_2385.read();
    } else {
        grp_fu_860_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_860_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_860_p1 = ap_reg_pp0_iter57_tmp_10_0_3_3_reg_2260.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter30.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_860_p1 = ap_reg_pp0_iter30_tmp_10_2_1_4_reg_2220.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_860_p1 = ap_reg_pp0_iter5_tmp_10_1_0_1_reg_2050.read();
    } else {
        grp_fu_860_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_864_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_864_p0 = temp_2_1_3_2_reg_2640.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_864_p0 = temp_2_0_1_4_reg_2515.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_864_p0 = temp_2_2_reg_2390.read();
    } else {
        grp_fu_864_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_864_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_864_p1 = ap_reg_pp0_iter57_tmp_10_1_3_3_reg_2300.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_864_p1 = ap_reg_pp0_iter33_tmp_10_0_2_reg_2135.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()))) {
        grp_fu_864_p1 = ap_reg_pp0_iter5_tmp_10_2_0_1_reg_2095.read();
    } else {
        grp_fu_864_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_868_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_868_p0 = temp_2_2_3_2_reg_2645.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_868_p0 = temp_2_1_1_4_reg_2520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_868_p0 = temp_2_0_0_1_reg_2395.read();
    } else {
        grp_fu_868_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_868_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter57.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_868_p1 = ap_reg_pp0_iter57_tmp_10_2_3_3_reg_2345.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_868_p1 = ap_reg_pp0_iter33_tmp_10_1_2_reg_2180.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_868_p1 = ap_reg_pp0_iter8_tmp_10_0_0_2_reg_2005.read();
    } else {
        grp_fu_868_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_872_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_872_p0 = temp_2_0_3_3_reg_2650.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_872_p0 = temp_2_2_1_4_reg_2525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_872_p0 = temp_2_1_0_1_reg_2400.read();
    } else {
        grp_fu_872_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_872_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_872_p1 = ap_reg_pp0_iter60_tmp_10_0_3_4_reg_2265.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter33.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_872_p1 = ap_reg_pp0_iter33_tmp_10_2_2_reg_2225.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_872_p1 = ap_reg_pp0_iter8_tmp_10_1_0_2_reg_2055.read();
    } else {
        grp_fu_872_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_876_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_876_p0 = temp_2_1_3_3_reg_2655.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_876_p0 = temp_2_0_2_reg_2530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_876_p0 = temp_2_2_0_1_reg_2405.read();
    } else {
        grp_fu_876_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_876_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_876_p1 = ap_reg_pp0_iter60_tmp_10_1_3_4_reg_2305.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_876_p1 = ap_reg_pp0_iter36_tmp_10_0_2_1_reg_2140.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        grp_fu_876_p1 = ap_reg_pp0_iter8_tmp_10_2_0_2_reg_2100.read();
    } else {
        grp_fu_876_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_880_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_880_p0 = temp_2_2_3_3_reg_2660.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_880_p0 = temp_2_1_2_reg_2535.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_880_p0 = temp_2_0_0_2_reg_2410.read();
    } else {
        grp_fu_880_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_880_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter60.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_880_p1 = ap_reg_pp0_iter60_tmp_10_2_3_4_reg_2350.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_880_p1 = ap_reg_pp0_iter36_tmp_10_1_2_1_reg_2185.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_880_p1 = ap_reg_pp0_iter11_tmp_10_0_0_3_reg_2010.read();
    } else {
        grp_fu_880_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_884_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_884_p0 = temp_2_0_3_4_reg_2665.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_884_p0 = temp_2_2_2_reg_2540.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_884_p0 = temp_2_1_0_2_reg_2415.read();
    } else {
        grp_fu_884_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_884_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_884_p1 = ap_reg_pp0_iter63_tmp_10_0_4_reg_2270.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter36.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_884_p1 = ap_reg_pp0_iter36_tmp_10_2_2_1_reg_2230.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_884_p1 = ap_reg_pp0_iter11_tmp_10_1_0_3_reg_2060.read();
    } else {
        grp_fu_884_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_888_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_888_p0 = temp_2_1_3_4_reg_2670.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_888_p0 = temp_2_0_2_1_reg_2545.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_888_p0 = temp_2_2_0_2_reg_2420.read();
    } else {
        grp_fu_888_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_888_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_888_p1 = ap_reg_pp0_iter63_tmp_10_1_4_reg_2310.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_888_p1 = ap_reg_pp0_iter39_tmp_10_0_2_2_reg_2145.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        grp_fu_888_p1 = ap_reg_pp0_iter11_tmp_10_2_0_3_reg_2105.read();
    } else {
        grp_fu_888_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_892_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_892_p0 = temp_2_2_3_4_reg_2675.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_892_p0 = temp_2_1_2_1_reg_2550.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_892_p0 = temp_2_0_0_3_reg_2425.read();
    } else {
        grp_fu_892_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_892_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter63.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_892_p1 = ap_reg_pp0_iter63_tmp_10_2_4_reg_2355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_892_p1 = ap_reg_pp0_iter39_tmp_10_1_2_2_reg_2190.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_892_p1 = ap_reg_pp0_iter14_tmp_10_0_0_4_reg_2015.read();
    } else {
        grp_fu_892_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_896_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_896_p0 = temp_2_0_4_reg_2680.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_896_p0 = temp_2_2_2_1_reg_2555.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_896_p0 = temp_2_1_0_3_reg_2430.read();
    } else {
        grp_fu_896_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_896_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_896_p1 = ap_reg_pp0_iter66_tmp_10_0_4_1_reg_2275.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter39.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_896_p1 = ap_reg_pp0_iter39_tmp_10_2_2_2_reg_2235.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_896_p1 = ap_reg_pp0_iter14_tmp_10_1_0_4_reg_2065.read();
    } else {
        grp_fu_896_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_900_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_900_p0 = temp_2_1_4_reg_2685.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_900_p0 = temp_2_0_2_2_reg_2560.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_900_p0 = temp_2_2_0_3_reg_2435.read();
    } else {
        grp_fu_900_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_900_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_900_p1 = ap_reg_pp0_iter66_tmp_10_1_4_1_reg_2315.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_900_p1 = ap_reg_pp0_iter42_tmp_10_0_2_3_reg_2150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter15.read()))) {
        grp_fu_900_p1 = ap_reg_pp0_iter14_tmp_10_2_0_4_reg_2110.read();
    } else {
        grp_fu_900_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_904_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_904_p0 = temp_2_2_4_reg_2690.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_904_p0 = temp_2_1_2_2_reg_2565.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_904_p0 = temp_2_0_0_4_reg_2440.read();
    } else {
        grp_fu_904_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_904_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter66.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_904_p1 = ap_reg_pp0_iter66_tmp_10_2_4_1_reg_2360.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_904_p1 = ap_reg_pp0_iter42_tmp_10_1_2_3_reg_2195.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_904_p1 = ap_reg_pp0_iter17_tmp_10_0_1_reg_2020.read();
    } else {
        grp_fu_904_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_908_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_908_p0 = temp_2_0_4_1_reg_2695.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_908_p0 = temp_2_2_2_2_reg_2570.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_908_p0 = temp_2_1_0_4_reg_2445.read();
    } else {
        grp_fu_908_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_908_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_908_p1 = ap_reg_pp0_iter69_tmp_10_0_4_2_reg_2280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter42.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_908_p1 = ap_reg_pp0_iter42_tmp_10_2_2_3_reg_2240.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_908_p1 = ap_reg_pp0_iter17_tmp_10_1_1_reg_2070.read();
    } else {
        grp_fu_908_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_912_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_912_p0 = temp_2_1_4_1_reg_2700.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_912_p0 = temp_2_0_2_3_reg_2575.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_912_p0 = temp_2_2_0_4_reg_2450.read();
    } else {
        grp_fu_912_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_912_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_912_p1 = ap_reg_pp0_iter69_tmp_10_1_4_2_reg_2320.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_912_p1 = ap_reg_pp0_iter45_tmp_10_0_2_4_reg_2155.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter18.read()))) {
        grp_fu_912_p1 = ap_reg_pp0_iter17_tmp_10_2_1_reg_2115.read();
    } else {
        grp_fu_912_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_916_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_916_p0 = temp_2_2_4_1_reg_2705.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_916_p0 = temp_2_1_2_3_reg_2580.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_916_p0 = temp_2_0_1_reg_2455.read();
    } else {
        grp_fu_916_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_916_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter69.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_916_p1 = ap_reg_pp0_iter69_tmp_10_2_4_2_reg_2365.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_916_p1 = ap_reg_pp0_iter45_tmp_10_1_2_4_reg_2200.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_916_p1 = ap_reg_pp0_iter20_tmp_10_0_1_1_reg_2025.read();
    } else {
        grp_fu_916_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_920_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_920_p0 = temp_2_0_4_2_reg_2710.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_920_p0 = temp_2_2_2_3_reg_2585.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_920_p0 = temp_2_1_1_reg_2460.read();
    } else {
        grp_fu_920_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_920_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_920_p1 = ap_reg_pp0_iter72_tmp_10_0_4_3_reg_2285.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter45.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_920_p1 = ap_reg_pp0_iter45_tmp_10_2_2_4_reg_2245.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_920_p1 = ap_reg_pp0_iter20_tmp_10_1_1_1_reg_2075.read();
    } else {
        grp_fu_920_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_924_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_924_p0 = temp_2_1_4_2_reg_2715.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_924_p0 = temp_2_0_2_4_reg_2590.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_924_p0 = temp_2_2_1_reg_2465.read();
    } else {
        grp_fu_924_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_924_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_924_p1 = ap_reg_pp0_iter72_tmp_10_1_4_3_reg_2325.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_924_p1 = ap_reg_pp0_iter48_tmp_10_0_3_reg_2160.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter21.read()))) {
        grp_fu_924_p1 = ap_reg_pp0_iter20_tmp_10_2_1_1_reg_2120.read();
    } else {
        grp_fu_924_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_928_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_928_p0 = temp_2_2_4_2_reg_2720.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_928_p0 = temp_2_1_2_4_reg_2595.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_928_p0 = temp_2_0_1_1_reg_2470.read();
    } else {
        grp_fu_928_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_928_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter72.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_928_p1 = ap_reg_pp0_iter72_tmp_10_2_4_3_reg_2370.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_928_p1 = ap_reg_pp0_iter48_tmp_10_1_3_reg_2205.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_928_p1 = ap_reg_pp0_iter23_tmp_10_0_1_2_reg_2030.read();
    } else {
        grp_fu_928_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_932_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_932_p0 = temp_2_0_4_3_reg_2725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_932_p0 = temp_2_2_2_4_reg_2600.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_932_p0 = temp_2_1_1_1_reg_2475.read();
    } else {
        grp_fu_932_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_932_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_932_p1 = ap_reg_pp0_iter75_tmp_10_0_4_4_reg_2290.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter48.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_932_p1 = ap_reg_pp0_iter48_tmp_10_2_3_reg_2250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_932_p1 = ap_reg_pp0_iter23_tmp_10_1_1_2_reg_2080.read();
    } else {
        grp_fu_932_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_936_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_936_p0 = temp_2_1_4_3_reg_2730.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_936_p0 = temp_2_0_3_reg_2605.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_936_p0 = temp_2_2_1_1_reg_2480.read();
    } else {
        grp_fu_936_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_936_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_936_p1 = ap_reg_pp0_iter75_tmp_10_1_4_4_reg_2330.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_936_p1 = ap_reg_pp0_iter51_tmp_10_0_3_1_reg_2165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        grp_fu_936_p1 = ap_reg_pp0_iter23_tmp_10_2_1_2_reg_2125.read();
    } else {
        grp_fu_936_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_940_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_940_p0 = temp_2_2_4_3_reg_2735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_940_p0 = temp_2_1_3_reg_2610.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_940_p0 = temp_2_0_1_2_reg_2485.read();
    } else {
        grp_fu_940_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_940_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter75.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_940_p1 = ap_reg_pp0_iter75_tmp_10_2_4_4_reg_2375.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter51.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_940_p1 = ap_reg_pp0_iter51_tmp_10_1_3_1_reg_2210.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter27.read()))) {
        grp_fu_940_p1 = ap_reg_pp0_iter26_tmp_10_0_1_3_reg_2035.read();
    } else {
        grp_fu_940_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_944_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p0 = bufw_3_2_load_reg_1868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p0 = bufw_1_4_load_reg_1735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p0 = bufw_0_0_load_reg_1512.read();
    } else {
        grp_fu_944_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_944_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p1 = bufi_2_load_3_reg_1801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p1 = bufi_4_load_1_reg_1599.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_944_p1 = bufi_0_load_reg_1354.read();
    } else {
        grp_fu_944_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_948_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p0 = bufw_3_3_load_reg_1875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p0 = bufw_2_0_load_reg_1742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p0 = bufw_0_1_load_reg_1519.read();
    } else {
        grp_fu_948_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_948_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p1 = bufi_3_load_3_reg_1808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p1 = bufi_0_load_2_reg_1606.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_948_p1 = bufi_1_load_reg_1359.read();
    } else {
        grp_fu_948_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_952_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p0 = bufw_3_4_load_reg_1882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p0 = bufw_2_1_load_reg_1749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p0 = bufw_0_2_load_reg_1526.read();
    } else {
        grp_fu_952_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_952_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p1 = bufi_4_load_3_reg_1815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p1 = bufi_1_load_2_reg_1611.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_952_p1 = bufi_2_load_reg_1365.read();
    } else {
        grp_fu_952_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_956_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p0 = bufw_4_0_load_reg_1889.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p0 = bufw_2_2_load_reg_1756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p0 = bufw_0_3_load_reg_1533.read();
    } else {
        grp_fu_956_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_956_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p1 = bufi_0_load_4_reg_1896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p1 = bufi_2_load_2_reg_1617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_956_p1 = bufi_3_load_reg_1372.read();
    } else {
        grp_fu_956_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_960_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p0 = bufw_4_1_load_reg_1901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p0 = bufw_2_3_load_reg_1763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p0 = bufw_0_4_load_reg_1540.read();
    } else {
        grp_fu_960_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_960_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p1 = bufi_1_load_4_reg_1908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p1 = bufi_3_load_2_reg_1624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_960_p1 = bufi_4_load_reg_1379.read();
    } else {
        grp_fu_960_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_964_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p0 = bufw_4_2_load_reg_1914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p0 = bufw_2_4_load_reg_1770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p0 = bufw_1_0_load_reg_1547.read();
    } else {
        grp_fu_964_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_964_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p1 = bufi_2_load_4_reg_1921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p1 = bufi_4_load_2_reg_1631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_964_p1 = bufi_0_load_1_reg_1554.read();
    } else {
        grp_fu_964_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_968_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p0 = bufw_4_3_load_reg_1928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p0 = bufw_3_0_load_reg_1777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p0 = bufw_1_1_load_reg_1559.read();
    } else {
        grp_fu_968_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_968_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p1 = bufi_3_load_4_reg_1935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p1 = bufi_0_load_3_reg_1784.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_968_p1 = bufi_1_load_1_reg_1566.read();
    } else {
        grp_fu_968_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_972_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p0 = bufw_4_4_load_reg_1942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p0 = bufw_3_1_load_reg_1789.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p0 = bufw_1_2_load_reg_1572.read();
    } else {
        grp_fu_972_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_972_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p1 = bufi_4_load_4_reg_1949.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p1 = bufi_1_load_3_reg_1795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_972_p1 = bufi_2_load_1_reg_1579.read();
    } else {
        grp_fu_972_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_976_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_976_p0 = bufw_3_2_load_reg_1868.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_976_p0 = bufw_1_3_load_reg_1586.read();
    } else {
        grp_fu_976_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_976_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_976_p1 = bufi_3_load_3_reg_1808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_976_p1 = bufi_4_load_1_reg_1599.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_976_p1 = bufi_3_load_1_reg_1592.read();
    } else {
        grp_fu_976_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_980_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p0 = bufw_3_3_load_reg_1875.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p0 = bufw_1_4_load_reg_1735.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p0 = bufw_0_0_load_reg_1512.read();
    } else {
        grp_fu_980_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_980_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p1 = bufi_4_load_3_reg_1815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p1 = bufi_5_load_1_reg_1673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_980_p1 = bufi_1_load_reg_1359.read();
    } else {
        grp_fu_980_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_984_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p0 = bufw_3_4_load_reg_1882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p0 = bufw_2_0_load_reg_1742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p0 = bufw_0_1_load_reg_1519.read();
    } else {
        grp_fu_984_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_984_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p1 = bufi_5_load_3_reg_1857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p1 = bufi_1_load_2_reg_1611.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_984_p1 = bufi_2_load_reg_1365.read();
    } else {
        grp_fu_984_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_988_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p0 = bufw_4_0_load_reg_1889.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p0 = bufw_2_1_load_reg_1749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p0 = bufw_0_2_load_reg_1526.read();
    } else {
        grp_fu_988_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_988_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p1 = bufi_1_load_4_reg_1908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p1 = bufi_2_load_2_reg_1617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_988_p1 = bufi_3_load_reg_1372.read();
    } else {
        grp_fu_988_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_992_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p0 = bufw_4_1_load_reg_1901.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p0 = bufw_2_2_load_reg_1756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p0 = bufw_0_3_load_reg_1533.read();
    } else {
        grp_fu_992_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_992_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p1 = bufi_2_load_4_reg_1921.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p1 = bufi_3_load_2_reg_1624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_992_p1 = bufi_4_load_reg_1379.read();
    } else {
        grp_fu_992_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_996_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p0 = bufw_4_2_load_reg_1914.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p0 = bufw_2_3_load_reg_1763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p0 = bufw_0_4_load_reg_1540.read();
    } else {
        grp_fu_996_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_996_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p1 = bufi_3_load_4_reg_1935.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p1 = bufi_4_load_2_reg_1631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_996_p1 = bufi_5_load_reg_1461.read();
    } else {
        grp_fu_996_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_indvar_flatten_next_fu_1050_p2() {
    indvar_flatten_next_fu_1050_p2 = (!indvar_flatten_phi_fu_814_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten_phi_fu_814_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void convolve_kernel::thread_indvar_flatten_phi_fu_814_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_1202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten_phi_fu_814_p4 = indvar_flatten_next_reg_1206.read();
    } else {
        indvar_flatten_phi_fu_814_p4 = indvar_flatten_reg_810.read();
    }
}

void convolve_kernel::thread_lhs_V_cast1_fu_1092_p1() {
    lhs_V_cast1_fu_1092_p1 = esl_zext<3,2>(p_1_mid2_reg_1221.read());
}

void convolve_kernel::thread_p_1_mid2_fu_1068_p3() {
    p_1_mid2_fu_1068_p3 = (!tmp_1_fu_1062_p2.read()[0].is_01())? sc_lv<2>(): ((tmp_1_fu_1062_p2.read()[0].to_bool())? ap_const_lv2_0: p_1_phi_fu_837_p4.read());
}

void convolve_kernel::thread_p_1_phi_fu_837_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_1202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        p_1_phi_fu_837_p4 = row_b_V_reg_1278.read();
    } else {
        p_1_phi_fu_837_p4 = p_1_reg_833.read();
    }
}

void convolve_kernel::thread_p_s_phi_fu_825_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_reg_1202.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        p_s_phi_fu_825_p4 = tmp_mid2_v_reg_1230.read();
    } else {
        p_s_phi_fu_825_p4 = p_s_reg_821.read();
    }
}

void convolve_kernel::thread_r_V_1_0_2_fu_1100_p2() {
    r_V_1_0_2_fu_1100_p2 = (!lhs_V_cast1_fu_1092_p1.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<3>(): (sc_biguint<3>(lhs_V_cast1_fu_1092_p1.read()) + sc_biguint<3>(ap_const_lv3_2));
}

void convolve_kernel::thread_r_V_1_0_3_fu_1138_p2() {
    r_V_1_0_3_fu_1138_p2 = (!lhs_V_cast1_reg_1273.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<3>(): (sc_biguint<3>(lhs_V_cast1_reg_1273.read()) + sc_biguint<3>(ap_const_lv3_3));
}

void convolve_kernel::thread_r_V_1_0_s_fu_1153_p3() {
    r_V_1_0_s_fu_1153_p3 = esl_concat<1,2>(ap_const_lv1_1, ap_reg_pp0_iter1_p_1_mid2_reg_1221.read());
}

void convolve_kernel::thread_row_b_V_fu_1095_p2() {
    row_b_V_fu_1095_p2 = (!p_1_mid2_reg_1221.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(p_1_mid2_reg_1221.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void convolve_kernel::thread_tmp_1_fu_1062_p2() {
    tmp_1_fu_1062_p2 = (!p_1_phi_fu_837_p4.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(p_1_phi_fu_837_p4.read() == ap_const_lv2_3);
}

void convolve_kernel::thread_tmp_2_0_1_fu_1118_p1() {
    tmp_2_0_1_fu_1118_p1 = esl_zext<64,2>(row_b_V_reg_1278.read());
}

void convolve_kernel::thread_tmp_2_0_2_fu_1128_p1() {
    tmp_2_0_2_fu_1128_p1 = esl_zext<64,3>(r_V_1_0_2_reg_1284.read());
}

void convolve_kernel::thread_tmp_2_0_3_fu_1143_p1() {
    tmp_2_0_3_fu_1143_p1 = esl_zext<64,3>(r_V_1_0_3_reg_1456.read());
}

void convolve_kernel::thread_tmp_2_0_4_fu_1160_p1() {
    tmp_2_0_4_fu_1160_p1 = esl_zext<64,3>(r_V_1_0_s_fu_1153_p3.read());
}

void convolve_kernel::thread_tmp_2_fu_1181_p2() {
    tmp_2_fu_1181_p2 = (!tmp_fu_1174_p3.read().is_01() || !tmp_mid2_cast_fu_1171_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_fu_1174_p3.read()) - sc_biguint<9>(tmp_mid2_cast_fu_1171_p1.read()));
}

void convolve_kernel::thread_tmp_3_cast_fu_1187_p1() {
    tmp_3_cast_fu_1187_p1 = esl_zext<9,2>(ap_reg_pp0_iter1_p_1_mid2_reg_1221.read());
}

void convolve_kernel::thread_tmp_3_fu_1082_p1() {
    tmp_3_fu_1082_p1 = esl_zext<64,2>(p_1_mid2_reg_1221.read());
}

void convolve_kernel::thread_tmp_4_cast_fu_1196_p1() {
    tmp_4_cast_fu_1196_p1 = esl_sext<64,9>(tmp_4_reg_1967.read());
}

void convolve_kernel::thread_tmp_4_fu_1190_p2() {
    tmp_4_fu_1190_p2 = (!tmp_2_fu_1181_p2.read().is_01() || !tmp_3_cast_fu_1187_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_2_fu_1181_p2.read()) + sc_biguint<9>(tmp_3_cast_fu_1187_p1.read()));
}

void convolve_kernel::thread_tmp_fu_1174_p3() {
    tmp_fu_1174_p3 = esl_concat<7,2>(ap_reg_pp0_iter1_tmp_mid2_v_reg_1230.read(), ap_const_lv2_0);
}

void convolve_kernel::thread_tmp_mid2_cast_fu_1171_p1() {
    tmp_mid2_cast_fu_1171_p1 = esl_zext<9,7>(ap_reg_pp0_iter1_tmp_mid2_v_reg_1230.read());
}

void convolve_kernel::thread_tmp_mid2_fu_1106_p1() {
    tmp_mid2_fu_1106_p1 = esl_zext<64,7>(tmp_mid2_v_reg_1230.read());
}

void convolve_kernel::thread_tmp_mid2_v_fu_1076_p3() {
    tmp_mid2_v_fu_1076_p3 = (!tmp_1_reg_1216.read()[0].is_01())? sc_lv<7>(): ((tmp_1_reg_1216.read()[0].to_bool())? to_b_V_reg_1211.read(): p_s_reg_821.read());
}

void convolve_kernel::thread_to_b_V_fu_1056_p2() {
    to_b_V_fu_1056_p2 = (!p_s_phi_fu_825_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(p_s_phi_fu_825_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

}

