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

void convolve_kernel::thread_ap_CS_fsm_pp0_stage10() {
    ap_CS_fsm_pp0_stage10 = ap_CS_fsm.read()[11];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage11() {
    ap_CS_fsm_pp0_stage11 = ap_CS_fsm.read()[12];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage12() {
    ap_CS_fsm_pp0_stage12 = ap_CS_fsm.read()[13];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage13() {
    ap_CS_fsm_pp0_stage13 = ap_CS_fsm.read()[14];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage14() {
    ap_CS_fsm_pp0_stage14 = ap_CS_fsm.read()[15];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage15() {
    ap_CS_fsm_pp0_stage15 = ap_CS_fsm.read()[16];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage2() {
    ap_CS_fsm_pp0_stage2 = ap_CS_fsm.read()[3];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage3() {
    ap_CS_fsm_pp0_stage3 = ap_CS_fsm.read()[4];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage4() {
    ap_CS_fsm_pp0_stage4 = ap_CS_fsm.read()[5];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage5() {
    ap_CS_fsm_pp0_stage5 = ap_CS_fsm.read()[6];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage6() {
    ap_CS_fsm_pp0_stage6 = ap_CS_fsm.read()[7];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage7() {
    ap_CS_fsm_pp0_stage7 = ap_CS_fsm.read()[8];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage8() {
    ap_CS_fsm_pp0_stage8 = ap_CS_fsm.read()[9];
}

void convolve_kernel::thread_ap_CS_fsm_pp0_stage9() {
    ap_CS_fsm_pp0_stage9 = ap_CS_fsm.read()[10];
}

void convolve_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void convolve_kernel::thread_ap_CS_fsm_state161() {
    ap_CS_fsm_state161 = ap_CS_fsm.read()[17];
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

void convolve_kernel::thread_ap_block_pp0_stage10_flag00000000() {
    ap_block_pp0_stage10_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage10_flag00011001() {
    ap_block_pp0_stage10_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage10_flag00011011() {
    ap_block_pp0_stage10_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage11_flag00000000() {
    ap_block_pp0_stage11_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage11_flag00011001() {
    ap_block_pp0_stage11_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage11_flag00011011() {
    ap_block_pp0_stage11_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage12_flag00000000() {
    ap_block_pp0_stage12_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage12_flag00011001() {
    ap_block_pp0_stage12_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage12_flag00011011() {
    ap_block_pp0_stage12_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage13_flag00000000() {
    ap_block_pp0_stage13_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage13_flag00011001() {
    ap_block_pp0_stage13_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage13_flag00011011() {
    ap_block_pp0_stage13_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage14_flag00000000() {
    ap_block_pp0_stage14_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage14_flag00011001() {
    ap_block_pp0_stage14_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage14_flag00011011() {
    ap_block_pp0_stage14_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage15_flag00000000() {
    ap_block_pp0_stage15_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage15_flag00011001() {
    ap_block_pp0_stage15_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage15_flag00011011() {
    ap_block_pp0_stage15_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
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

void convolve_kernel::thread_ap_block_pp0_stage3_flag00000000() {
    ap_block_pp0_stage3_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage3_flag00011001() {
    ap_block_pp0_stage3_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage3_flag00011011() {
    ap_block_pp0_stage3_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage4_flag00000000() {
    ap_block_pp0_stage4_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage4_flag00011001() {
    ap_block_pp0_stage4_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage4_flag00011011() {
    ap_block_pp0_stage4_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage5_flag00000000() {
    ap_block_pp0_stage5_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage5_flag00011001() {
    ap_block_pp0_stage5_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage5_flag00011011() {
    ap_block_pp0_stage5_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage6_flag00000000() {
    ap_block_pp0_stage6_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage6_flag00011001() {
    ap_block_pp0_stage6_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage6_flag00011011() {
    ap_block_pp0_stage6_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage7_flag00000000() {
    ap_block_pp0_stage7_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage7_flag00011001() {
    ap_block_pp0_stage7_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage7_flag00011011() {
    ap_block_pp0_stage7_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage8_flag00000000() {
    ap_block_pp0_stage8_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage8_flag00011001() {
    ap_block_pp0_stage8_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage8_flag00011011() {
    ap_block_pp0_stage8_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage9_flag00000000() {
    ap_block_pp0_stage9_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage9_flag00011001() {
    ap_block_pp0_stage9_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_pp0_stage9_flag00011011() {
    ap_block_pp0_stage9_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state100_pp0_stage2_iter6() {
    ap_block_state100_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state101_pp0_stage3_iter6() {
    ap_block_state101_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state102_pp0_stage4_iter6() {
    ap_block_state102_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state103_pp0_stage5_iter6() {
    ap_block_state103_pp0_stage5_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state104_pp0_stage6_iter6() {
    ap_block_state104_pp0_stage6_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state105_pp0_stage7_iter6() {
    ap_block_state105_pp0_stage7_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state106_pp0_stage8_iter6() {
    ap_block_state106_pp0_stage8_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state107_pp0_stage9_iter6() {
    ap_block_state107_pp0_stage9_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state108_pp0_stage10_iter6() {
    ap_block_state108_pp0_stage10_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state109_pp0_stage11_iter6() {
    ap_block_state109_pp0_stage11_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state10_pp0_stage8_iter0() {
    ap_block_state10_pp0_stage8_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state110_pp0_stage12_iter6() {
    ap_block_state110_pp0_stage12_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state111_pp0_stage13_iter6() {
    ap_block_state111_pp0_stage13_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state112_pp0_stage14_iter6() {
    ap_block_state112_pp0_stage14_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state113_pp0_stage15_iter6() {
    ap_block_state113_pp0_stage15_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state114_pp0_stage0_iter7() {
    ap_block_state114_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state115_pp0_stage1_iter7() {
    ap_block_state115_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state116_pp0_stage2_iter7() {
    ap_block_state116_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state117_pp0_stage3_iter7() {
    ap_block_state117_pp0_stage3_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state118_pp0_stage4_iter7() {
    ap_block_state118_pp0_stage4_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state119_pp0_stage5_iter7() {
    ap_block_state119_pp0_stage5_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state11_pp0_stage9_iter0() {
    ap_block_state11_pp0_stage9_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state120_pp0_stage6_iter7() {
    ap_block_state120_pp0_stage6_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state121_pp0_stage7_iter7() {
    ap_block_state121_pp0_stage7_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state122_pp0_stage8_iter7() {
    ap_block_state122_pp0_stage8_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state123_pp0_stage9_iter7() {
    ap_block_state123_pp0_stage9_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state124_pp0_stage10_iter7() {
    ap_block_state124_pp0_stage10_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state125_pp0_stage11_iter7() {
    ap_block_state125_pp0_stage11_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state126_pp0_stage12_iter7() {
    ap_block_state126_pp0_stage12_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state127_pp0_stage13_iter7() {
    ap_block_state127_pp0_stage13_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state128_pp0_stage14_iter7() {
    ap_block_state128_pp0_stage14_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state129_pp0_stage15_iter7() {
    ap_block_state129_pp0_stage15_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state12_pp0_stage10_iter0() {
    ap_block_state12_pp0_stage10_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state130_pp0_stage0_iter8() {
    ap_block_state130_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state131_pp0_stage1_iter8() {
    ap_block_state131_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state132_pp0_stage2_iter8() {
    ap_block_state132_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state133_pp0_stage3_iter8() {
    ap_block_state133_pp0_stage3_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state134_pp0_stage4_iter8() {
    ap_block_state134_pp0_stage4_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state135_pp0_stage5_iter8() {
    ap_block_state135_pp0_stage5_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state136_pp0_stage6_iter8() {
    ap_block_state136_pp0_stage6_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state137_pp0_stage7_iter8() {
    ap_block_state137_pp0_stage7_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state138_pp0_stage8_iter8() {
    ap_block_state138_pp0_stage8_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state139_pp0_stage9_iter8() {
    ap_block_state139_pp0_stage9_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state13_pp0_stage11_iter0() {
    ap_block_state13_pp0_stage11_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state140_pp0_stage10_iter8() {
    ap_block_state140_pp0_stage10_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state141_pp0_stage11_iter8() {
    ap_block_state141_pp0_stage11_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state142_pp0_stage12_iter8() {
    ap_block_state142_pp0_stage12_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state143_pp0_stage13_iter8() {
    ap_block_state143_pp0_stage13_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state144_pp0_stage14_iter8() {
    ap_block_state144_pp0_stage14_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state145_pp0_stage15_iter8() {
    ap_block_state145_pp0_stage15_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state146_pp0_stage0_iter9() {
    ap_block_state146_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state147_pp0_stage1_iter9() {
    ap_block_state147_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state148_pp0_stage2_iter9() {
    ap_block_state148_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state149_pp0_stage3_iter9() {
    ap_block_state149_pp0_stage3_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state14_pp0_stage12_iter0() {
    ap_block_state14_pp0_stage12_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state150_pp0_stage4_iter9() {
    ap_block_state150_pp0_stage4_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state151_pp0_stage5_iter9() {
    ap_block_state151_pp0_stage5_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state152_pp0_stage6_iter9() {
    ap_block_state152_pp0_stage6_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state153_pp0_stage7_iter9() {
    ap_block_state153_pp0_stage7_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state154_pp0_stage8_iter9() {
    ap_block_state154_pp0_stage8_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state155_pp0_stage9_iter9() {
    ap_block_state155_pp0_stage9_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state156_pp0_stage10_iter9() {
    ap_block_state156_pp0_stage10_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state157_pp0_stage11_iter9() {
    ap_block_state157_pp0_stage11_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state158_pp0_stage12_iter9() {
    ap_block_state158_pp0_stage12_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state159_pp0_stage13_iter9() {
    ap_block_state159_pp0_stage13_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state15_pp0_stage13_iter0() {
    ap_block_state15_pp0_stage13_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state160_pp0_stage14_iter9() {
    ap_block_state160_pp0_stage14_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state16_pp0_stage14_iter0() {
    ap_block_state16_pp0_stage14_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state17_pp0_stage15_iter0() {
    ap_block_state17_pp0_stage15_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state18_pp0_stage0_iter1() {
    ap_block_state18_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state19_pp0_stage1_iter1() {
    ap_block_state19_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state20_pp0_stage2_iter1() {
    ap_block_state20_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state21_pp0_stage3_iter1() {
    ap_block_state21_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state22_pp0_stage4_iter1() {
    ap_block_state22_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state23_pp0_stage5_iter1() {
    ap_block_state23_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state24_pp0_stage6_iter1() {
    ap_block_state24_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state25_pp0_stage7_iter1() {
    ap_block_state25_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state26_pp0_stage8_iter1() {
    ap_block_state26_pp0_stage8_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state27_pp0_stage9_iter1() {
    ap_block_state27_pp0_stage9_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state28_pp0_stage10_iter1() {
    ap_block_state28_pp0_stage10_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state29_pp0_stage11_iter1() {
    ap_block_state29_pp0_stage11_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state30_pp0_stage12_iter1() {
    ap_block_state30_pp0_stage12_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state31_pp0_stage13_iter1() {
    ap_block_state31_pp0_stage13_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state32_pp0_stage14_iter1() {
    ap_block_state32_pp0_stage14_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state33_pp0_stage15_iter1() {
    ap_block_state33_pp0_stage15_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state34_pp0_stage0_iter2() {
    ap_block_state34_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state35_pp0_stage1_iter2() {
    ap_block_state35_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state36_pp0_stage2_iter2() {
    ap_block_state36_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state37_pp0_stage3_iter2() {
    ap_block_state37_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state38_pp0_stage4_iter2() {
    ap_block_state38_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state39_pp0_stage5_iter2() {
    ap_block_state39_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state40_pp0_stage6_iter2() {
    ap_block_state40_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state41_pp0_stage7_iter2() {
    ap_block_state41_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state42_pp0_stage8_iter2() {
    ap_block_state42_pp0_stage8_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state43_pp0_stage9_iter2() {
    ap_block_state43_pp0_stage9_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state44_pp0_stage10_iter2() {
    ap_block_state44_pp0_stage10_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state45_pp0_stage11_iter2() {
    ap_block_state45_pp0_stage11_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state46_pp0_stage12_iter2() {
    ap_block_state46_pp0_stage12_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state47_pp0_stage13_iter2() {
    ap_block_state47_pp0_stage13_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state48_pp0_stage14_iter2() {
    ap_block_state48_pp0_stage14_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state49_pp0_stage15_iter2() {
    ap_block_state49_pp0_stage15_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state50_pp0_stage0_iter3() {
    ap_block_state50_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state51_pp0_stage1_iter3() {
    ap_block_state51_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state52_pp0_stage2_iter3() {
    ap_block_state52_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state53_pp0_stage3_iter3() {
    ap_block_state53_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state54_pp0_stage4_iter3() {
    ap_block_state54_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state55_pp0_stage5_iter3() {
    ap_block_state55_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state56_pp0_stage6_iter3() {
    ap_block_state56_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state57_pp0_stage7_iter3() {
    ap_block_state57_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state58_pp0_stage8_iter3() {
    ap_block_state58_pp0_stage8_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state59_pp0_stage9_iter3() {
    ap_block_state59_pp0_stage9_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state60_pp0_stage10_iter3() {
    ap_block_state60_pp0_stage10_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state61_pp0_stage11_iter3() {
    ap_block_state61_pp0_stage11_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state62_pp0_stage12_iter3() {
    ap_block_state62_pp0_stage12_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state63_pp0_stage13_iter3() {
    ap_block_state63_pp0_stage13_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state64_pp0_stage14_iter3() {
    ap_block_state64_pp0_stage14_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state65_pp0_stage15_iter3() {
    ap_block_state65_pp0_stage15_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state66_pp0_stage0_iter4() {
    ap_block_state66_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state67_pp0_stage1_iter4() {
    ap_block_state67_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state68_pp0_stage2_iter4() {
    ap_block_state68_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state69_pp0_stage3_iter4() {
    ap_block_state69_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state70_pp0_stage4_iter4() {
    ap_block_state70_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state71_pp0_stage5_iter4() {
    ap_block_state71_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state72_pp0_stage6_iter4() {
    ap_block_state72_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state73_pp0_stage7_iter4() {
    ap_block_state73_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state74_pp0_stage8_iter4() {
    ap_block_state74_pp0_stage8_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state75_pp0_stage9_iter4() {
    ap_block_state75_pp0_stage9_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state76_pp0_stage10_iter4() {
    ap_block_state76_pp0_stage10_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state77_pp0_stage11_iter4() {
    ap_block_state77_pp0_stage11_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state78_pp0_stage12_iter4() {
    ap_block_state78_pp0_stage12_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state79_pp0_stage13_iter4() {
    ap_block_state79_pp0_stage13_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state80_pp0_stage14_iter4() {
    ap_block_state80_pp0_stage14_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state81_pp0_stage15_iter4() {
    ap_block_state81_pp0_stage15_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state82_pp0_stage0_iter5() {
    ap_block_state82_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state83_pp0_stage1_iter5() {
    ap_block_state83_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state84_pp0_stage2_iter5() {
    ap_block_state84_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state85_pp0_stage3_iter5() {
    ap_block_state85_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state86_pp0_stage4_iter5() {
    ap_block_state86_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state87_pp0_stage5_iter5() {
    ap_block_state87_pp0_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state88_pp0_stage6_iter5() {
    ap_block_state88_pp0_stage6_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state89_pp0_stage7_iter5() {
    ap_block_state89_pp0_stage7_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state90_pp0_stage8_iter5() {
    ap_block_state90_pp0_stage8_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state91_pp0_stage9_iter5() {
    ap_block_state91_pp0_stage9_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state92_pp0_stage10_iter5() {
    ap_block_state92_pp0_stage10_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state93_pp0_stage11_iter5() {
    ap_block_state93_pp0_stage11_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state94_pp0_stage12_iter5() {
    ap_block_state94_pp0_stage12_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state95_pp0_stage13_iter5() {
    ap_block_state95_pp0_stage13_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state96_pp0_stage14_iter5() {
    ap_block_state96_pp0_stage14_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state97_pp0_stage15_iter5() {
    ap_block_state97_pp0_stage15_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state98_pp0_stage0_iter6() {
    ap_block_state98_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state99_pp0_stage1_iter6() {
    ap_block_state99_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten2_fu_1051_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state161.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void convolve_kernel::thread_bufi_Addr_A() {
    bufi_Addr_A = (!ap_const_lv32_6.is_01())? sc_lv<32>(): bufi_Addr_A_orig.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void convolve_kernel::thread_bufi_Addr_A_orig() {
    bufi_Addr_A_orig =  (sc_lv<32>) (tmp_649_cast_fu_1635_p1.read());
}

void convolve_kernel::thread_bufi_Clk_A() {
    bufi_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufi_Din_A() {
    bufi_Din_A = ap_const_lv512_lc_1;
}

void convolve_kernel::thread_bufi_EN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0))) {
        bufi_EN_A = ap_const_logic_1;
    } else {
        bufi_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_Rst_A() {
    bufi_Rst_A = ap_rst_n_inv.read();
}

void convolve_kernel::thread_bufi_WEN_A() {
    bufi_WEN_A = ap_const_lv64_0;
}

void convolve_kernel::thread_bufo_Addr_A() {
    bufo_Addr_A = (!ap_const_lv32_6.is_01())? sc_lv<32>(): bufo_Addr_A_orig.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void convolve_kernel::thread_bufo_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (ap_reg_pp0_iter9_bufo_addr_reg_3867.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (bufo_addr_reg_3867.read());
    } else {
        bufo_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufo_Clk_A() {
    bufo_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_Din_A() {
    bufo_Din_A = esl_concat<480,32>(esl_concat<448,32>(esl_concat<416,32>(esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_605_fu_3629_p1.read(), tmp_570_fu_3625_p1.read()), tmp_535_fu_3621_p1.read()), tmp_500_fu_3617_p1.read()), tmp_465_fu_3613_p1.read()), tmp_430_fu_3609_p1.read()), tmp_395_fu_3605_p1.read()), tmp_360_fu_3601_p1.read()), tmp_325_fu_3597_p1.read()), tmp_290_fu_3593_p1.read()), tmp_255_fu_3589_p1.read()), tmp_220_fu_3585_p1.read()), tmp_185_fu_3581_p1.read()), tmp_150_fu_3577_p1.read()), tmp_114_fu_3573_p1.read()), tmp_79_fu_3569_p1.read());
}

void convolve_kernel::thread_bufo_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read())))) {
        bufo_EN_A = ap_const_logic_1;
    } else {
        bufo_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_Rst_A() {
    bufo_Rst_A = ap_rst_n_inv.read();
}

void convolve_kernel::thread_bufo_WEN_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter9_exitcond_flatten2_reg_3675.read()))) {
        bufo_WEN_A = ap_const_lv64_FFFFFFFFFFFFFFFF;
    } else {
        bufo_WEN_A = ap_const_lv64_0;
    }
}

void convolve_kernel::thread_bufw_Addr_A() {
    bufw_Addr_A = (!ap_const_lv32_6.is_01())? sc_lv<32>(): bufw_Addr_A_orig.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void convolve_kernel::thread_bufw_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_636_cast_fu_2916_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_635_cast_fu_2825_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_634_cast_fu_2709_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_633_cast_fu_2588_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_632_cast_fu_2408_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_631_cast_fu_2292_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_630_cast_fu_2176_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_628_cast_fu_2059_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_627_cast_fu_1941_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_626_cast_fu_1825_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_625_cast_fu_1648_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_624_cast_fu_1625_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_623_cast_fu_1414_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_622_cast_fu_1391_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_621_cast_fu_1293_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        bufw_Addr_A_orig =  (sc_lv<32>) (tmp_629_cast_fu_1278_p1.read());
    } else {
        bufw_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_Clk_A() {
    bufw_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_Din_A() {
    bufw_Din_A = ap_const_lv512_lc_1;
}

void convolve_kernel::thread_bufw_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_EN_A = ap_const_logic_1;
    } else {
        bufw_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_Rst_A() {
    bufw_Rst_A = ap_rst_n_inv.read();
}

void convolve_kernel::thread_bufw_WEN_A() {
    bufw_WEN_A = ap_const_lv64_0;
}

void convolve_kernel::thread_col_b_1_fu_1371_p2() {
    col_b_1_fu_1371_p2 = (!ap_const_lv5_1.is_01() || !col_b_mid2_reg_3802.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(col_b_mid2_reg_3802.read()));
}

void convolve_kernel::thread_col_b_cast1_cast_fu_1339_p1() {
    col_b_cast1_cast_fu_1339_p1 = esl_zext<10,5>(col_b_mid2_reg_3802.read());
}

void convolve_kernel::thread_col_b_mid2_fu_1250_p3() {
    col_b_mid2_fu_1250_p3 = (!tmp_616_fu_1245_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_616_fu_1245_p2.read()[0].to_bool())? ap_const_lv5_0: col_b_reg_421.read());
}

void convolve_kernel::thread_col_b_phi_fu_425_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        col_b_phi_fu_425_p4 = col_b_1_reg_3957.read();
    } else {
        col_b_phi_fu_425_p4 = col_b_reg_421.read();
    }
}

void convolve_kernel::thread_exitcond_flatten1_fu_1075_p2() {
    exitcond_flatten1_fu_1075_p2 = (!indvar_flatten_phi_fu_401_p4.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_phi_fu_401_p4.read() == ap_const_lv10_100);
}

void convolve_kernel::thread_exitcond_flatten2_fu_1051_p2() {
    exitcond_flatten2_fu_1051_p2 = (!indvar_flatten1_phi_fu_355_p4.read().is_01() || !ap_const_lv13_1900.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_phi_fu_355_p4.read() == ap_const_lv13_1900);
}

void convolve_kernel::thread_exitcond_flatten_fu_1063_p2() {
    exitcond_flatten_fu_1063_p2 = (!indvar_flatten2_phi_fu_378_p4.read().is_01() || !ap_const_lv12_500.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_phi_fu_378_p4.read() == ap_const_lv12_500);
}

void convolve_kernel::thread_exitcond_flatten_mid_fu_1117_p2() {
    exitcond_flatten_mid_fu_1117_p2 = (exitcond_flatten1_reg_3701.read() & not_exitcond_flatten_fu_1107_p2.read());
}

void convolve_kernel::thread_exitcond_flatten_not_fu_1128_p2() {
    exitcond_flatten_not_fu_1128_p2 = (exitcond_flatten1_reg_3701.read() ^ ap_const_lv1_1);
}

void convolve_kernel::thread_grp_fu_433_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_13_reg_8607.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_12_reg_8527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_11_reg_8447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_10_reg_8367.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_s_reg_8287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_9_reg_8207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_8_reg_8127.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_7_reg_8047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_6_reg_7967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_5_reg_7887.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_4_reg_7807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_3_reg_7727.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_12_0_2_reg_7647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = reg_951.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_607_reg_6707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p0 = tmp_18_fu_2417_p1.read();
    } else {
        grp_fu_433_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_433_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter8_tmp_11_0_14_reg_7567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter8_tmp_11_0_13_reg_7487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter7_tmp_11_0_12_reg_7407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter7_tmp_11_0_11_reg_7327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter6_tmp_11_0_10_reg_7147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter6_tmp_11_0_s_reg_6967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter5_tmp_11_0_9_reg_6712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter5_tmp_11_0_8_reg_6527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter4_tmp_11_0_7_reg_6347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter4_tmp_11_0_6_reg_6087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter3_tmp_11_0_5_reg_5827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter3_tmp_11_0_4_reg_5562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter2_tmp_11_0_3_reg_5372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = ap_reg_pp0_iter1_tmp_11_0_2_reg_5172.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = tmp_11_0_1_reg_4902.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_433_p1 = tmp_116_reg_4702.read();
    } else {
        grp_fu_433_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_437_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_13_reg_8612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_12_reg_8532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_11_reg_8452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_10_reg_8372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_s_reg_8292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_9_reg_8212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_8_reg_8132.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_7_reg_8052.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_6_reg_7972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_5_reg_7892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_4_reg_7812.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_3_reg_7732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_2_reg_7652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = reg_956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_12_1_reg_6742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p0 = tmp_83_fu_2448_p1.read();
    } else {
        grp_fu_437_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_437_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter8_tmp_11_1_14_reg_7572.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter8_tmp_11_1_13_reg_7492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter7_tmp_11_1_12_reg_7412.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter7_tmp_11_1_11_reg_7332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter6_tmp_11_1_10_reg_7177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter6_tmp_11_1_s_reg_6997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter5_tmp_11_1_9_reg_6747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter5_tmp_11_1_8_reg_6557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter4_tmp_11_1_7_reg_6377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter4_tmp_11_1_6_reg_6122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter3_tmp_11_1_5_reg_5862.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter3_tmp_11_1_4_reg_5597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter2_tmp_11_1_3_reg_5407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = ap_reg_pp0_iter1_tmp_11_1_2_reg_5207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = tmp_11_1_1_reg_4942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_437_p1 = tmp_11_1_reg_4737.read();
    } else {
        grp_fu_437_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_441_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_13_reg_8617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_12_reg_8537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_11_reg_8457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_10_reg_8377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_s_reg_8297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_9_reg_8217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_8_reg_8137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_7_reg_8057.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_6_reg_7977.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_5_reg_7897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_4_reg_7817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_3_reg_7737.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_2_reg_7657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = reg_961.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_12_2_reg_6757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p0 = tmp_119_fu_2457_p1.read();
    } else {
        grp_fu_441_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_441_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter8_tmp_11_2_14_reg_7577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter8_tmp_11_2_13_reg_7497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter7_tmp_11_2_12_reg_7417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter7_tmp_11_2_11_reg_7337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter6_tmp_11_2_10_reg_7187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter6_tmp_11_2_s_reg_7007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter5_tmp_11_2_9_reg_6762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter5_tmp_11_2_8_reg_6567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter4_tmp_11_2_7_reg_6387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter4_tmp_11_2_6_reg_6137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter3_tmp_11_2_5_reg_5877.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter3_tmp_11_2_4_reg_5612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter2_tmp_11_2_3_reg_5417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = ap_reg_pp0_iter1_tmp_11_2_2_reg_5217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = tmp_11_2_1_reg_4957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_441_p1 = tmp_11_2_reg_4747.read();
    } else {
        grp_fu_441_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_445_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_13_reg_8622.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_12_reg_8542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_11_reg_8462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_10_reg_8382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_s_reg_8302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_9_reg_8222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_8_reg_8142.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_7_reg_8062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_6_reg_7982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_5_reg_7902.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_4_reg_7822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_3_reg_7742.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_2_reg_7662.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = reg_966.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_12_3_reg_6772.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p0 = tmp_154_fu_2466_p1.read();
    } else {
        grp_fu_445_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_445_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter8_tmp_11_3_14_reg_7582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter8_tmp_11_3_13_reg_7502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter7_tmp_11_3_12_reg_7422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter7_tmp_11_3_11_reg_7342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter6_tmp_11_3_10_reg_7197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter6_tmp_11_3_s_reg_7017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter5_tmp_11_3_9_reg_6777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter5_tmp_11_3_8_reg_6577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter4_tmp_11_3_7_reg_6397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter4_tmp_11_3_6_reg_6152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter3_tmp_11_3_5_reg_5892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter3_tmp_11_3_4_reg_5627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter2_tmp_11_3_3_reg_5427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = ap_reg_pp0_iter1_tmp_11_3_2_reg_5227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = tmp_11_3_1_reg_4972.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_445_p1 = tmp_11_3_reg_4757.read();
    } else {
        grp_fu_445_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_449_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_13_reg_8627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_12_reg_8547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_11_reg_8467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_10_reg_8387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_s_reg_8307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_9_reg_8227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_8_reg_8147.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_7_reg_8067.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_6_reg_7987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_5_reg_7907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_4_reg_7827.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_3_reg_7747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_2_reg_7667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = reg_971.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_12_4_reg_6787.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p0 = tmp_189_fu_2475_p1.read();
    } else {
        grp_fu_449_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_449_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter8_tmp_11_4_14_reg_7587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter8_tmp_11_4_13_reg_7507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter7_tmp_11_4_12_reg_7427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter7_tmp_11_4_11_reg_7347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter6_tmp_11_4_10_reg_7207.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter6_tmp_11_4_s_reg_7027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter5_tmp_11_4_9_reg_6792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter5_tmp_11_4_8_reg_6587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter4_tmp_11_4_7_reg_6407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter4_tmp_11_4_6_reg_6167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter3_tmp_11_4_5_reg_5907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter3_tmp_11_4_4_reg_5642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter2_tmp_11_4_3_reg_5437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = ap_reg_pp0_iter1_tmp_11_4_2_reg_5237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = tmp_11_4_1_reg_4987.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_449_p1 = tmp_11_4_reg_4767.read();
    } else {
        grp_fu_449_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_453_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_13_reg_8632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_12_reg_8552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_11_reg_8472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_10_reg_8392.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_s_reg_8312.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_9_reg_8232.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_8_reg_8152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_7_reg_8072.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_6_reg_7992.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_5_reg_7912.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_4_reg_7832.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_3_reg_7752.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_2_reg_7672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = reg_976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_12_5_reg_6802.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p0 = tmp_224_fu_2484_p1.read();
    } else {
        grp_fu_453_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_453_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter8_tmp_11_5_14_reg_7592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter8_tmp_11_5_13_reg_7512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter7_tmp_11_5_12_reg_7432.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter7_tmp_11_5_11_reg_7352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter6_tmp_11_5_10_reg_7217.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter6_tmp_11_5_s_reg_7037.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter5_tmp_11_5_9_reg_6807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter5_tmp_11_5_8_reg_6597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter4_tmp_11_5_7_reg_6417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter4_tmp_11_5_6_reg_6182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter3_tmp_11_5_5_reg_5922.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter3_tmp_11_5_4_reg_5657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter2_tmp_11_5_3_reg_5447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = ap_reg_pp0_iter1_tmp_11_5_2_reg_5247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = tmp_11_5_1_reg_5002.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_453_p1 = tmp_11_5_reg_4777.read();
    } else {
        grp_fu_453_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_457_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_13_reg_8637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_12_reg_8557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_11_reg_8477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_10_reg_8397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_s_reg_8317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_9_reg_8237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_8_reg_8157.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_7_reg_8077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_6_reg_7997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_5_reg_7917.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_4_reg_7837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_3_reg_7757.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_2_reg_7677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = reg_981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_12_6_reg_6817.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p0 = tmp_259_fu_2493_p1.read();
    } else {
        grp_fu_457_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_457_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter8_tmp_11_6_14_reg_7597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter8_tmp_11_6_13_reg_7517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter7_tmp_11_6_12_reg_7437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter7_tmp_11_6_11_reg_7357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter6_tmp_11_6_10_reg_7227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter6_tmp_11_6_s_reg_7047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter5_tmp_11_6_9_reg_6822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter5_tmp_11_6_8_reg_6607.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter4_tmp_11_6_7_reg_6427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter4_tmp_11_6_6_reg_6197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter3_tmp_11_6_5_reg_5937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter3_tmp_11_6_4_reg_5672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter2_tmp_11_6_3_reg_5457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = ap_reg_pp0_iter1_tmp_11_6_2_reg_5257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = tmp_11_6_1_reg_5017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_457_p1 = tmp_11_6_reg_4787.read();
    } else {
        grp_fu_457_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_461_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_13_reg_8642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_12_reg_8562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_11_reg_8482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_10_reg_8402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_s_reg_8322.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_9_reg_8242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_8_reg_8162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_7_reg_8082.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_6_reg_8002.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_5_reg_7922.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_4_reg_7842.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_3_reg_7762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_2_reg_7682.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = reg_986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_12_7_reg_6832.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p0 = tmp_294_fu_2502_p1.read();
    } else {
        grp_fu_461_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_461_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter8_tmp_11_7_14_reg_7602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter8_tmp_11_7_13_reg_7522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter7_tmp_11_7_12_reg_7442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter7_tmp_11_7_11_reg_7362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter6_tmp_11_7_10_reg_7237.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter6_tmp_11_7_s_reg_7057.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter5_tmp_11_7_9_reg_6837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter5_tmp_11_7_8_reg_6617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter4_tmp_11_7_7_reg_6437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter4_tmp_11_7_6_reg_6212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter3_tmp_11_7_5_reg_5952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter3_tmp_11_7_4_reg_5687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter2_tmp_11_7_3_reg_5467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = ap_reg_pp0_iter1_tmp_11_7_2_reg_5267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = tmp_11_7_1_reg_5032.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_461_p1 = tmp_11_7_reg_4797.read();
    } else {
        grp_fu_461_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_465_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_13_reg_8647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_12_reg_8567.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_11_reg_8487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_10_reg_8407.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_s_reg_8327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_9_reg_8247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_8_reg_8167.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_7_reg_8087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_6_reg_8007.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_5_reg_7927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_4_reg_7847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_3_reg_7767.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_2_reg_7687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = reg_991.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_12_8_reg_6847.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p0 = tmp_329_fu_2511_p1.read();
    } else {
        grp_fu_465_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_465_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter8_tmp_11_8_14_reg_7607.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter8_tmp_11_8_13_reg_7527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter7_tmp_11_8_12_reg_7447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter7_tmp_11_8_11_reg_7367.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter6_tmp_11_8_10_reg_7247.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter6_tmp_11_8_s_reg_7067.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter5_tmp_11_8_9_reg_6852.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter5_tmp_11_8_8_reg_6627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter4_tmp_11_8_7_reg_6447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter4_tmp_11_8_6_reg_6227.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter3_tmp_11_8_5_reg_5967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter3_tmp_11_8_4_reg_5702.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter2_tmp_11_8_3_reg_5477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = ap_reg_pp0_iter1_tmp_11_8_2_reg_5277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = tmp_11_8_1_reg_5047.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_465_p1 = tmp_11_8_reg_4807.read();
    } else {
        grp_fu_465_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_469_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_13_reg_8652.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_12_reg_8572.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_11_reg_8492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_10_reg_8412.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_s_reg_8332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_9_reg_8252.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_8_reg_8172.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_7_reg_8092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_6_reg_8012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_5_reg_7932.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_4_reg_7852.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_3_reg_7772.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_2_reg_7692.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = reg_996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_12_9_reg_6862.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p0 = tmp_364_fu_2520_p1.read();
    } else {
        grp_fu_469_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_469_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter8_tmp_11_9_14_reg_7612.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter8_tmp_11_9_13_reg_7532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter7_tmp_11_9_12_reg_7452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter7_tmp_11_9_11_reg_7372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter6_tmp_11_9_10_reg_7257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter6_tmp_11_9_s_reg_7077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter5_tmp_11_9_9_reg_6867.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter5_tmp_11_9_8_reg_6637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter4_tmp_11_9_7_reg_6457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter4_tmp_11_9_6_reg_6242.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter3_tmp_11_9_5_reg_5982.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter3_tmp_11_9_4_reg_5717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter2_tmp_11_9_3_reg_5487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = ap_reg_pp0_iter1_tmp_11_9_2_reg_5287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = tmp_11_9_1_reg_5062.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_469_p1 = tmp_11_9_reg_4817.read();
    } else {
        grp_fu_469_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_473_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_13_reg_8657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_12_reg_8577.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_11_reg_8497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_10_reg_8417.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_s_reg_8337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_9_reg_8257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_8_reg_8177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_7_reg_8097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_6_reg_8017.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_5_reg_7937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_4_reg_7857.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_3_reg_7777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_10_2_reg_7697.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = reg_1001.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_12_s_reg_6877.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p0 = tmp_399_fu_2529_p1.read();
    } else {
        grp_fu_473_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_473_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter8_tmp_11_10_14_reg_7617.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter8_tmp_11_10_13_reg_7537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter7_tmp_11_10_12_reg_7457.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter7_tmp_11_10_11_reg_7377.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter6_tmp_11_10_10_reg_7267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter6_tmp_11_10_s_reg_7087.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter5_tmp_11_10_9_reg_6882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter5_tmp_11_10_8_reg_6647.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter4_tmp_11_10_7_reg_6467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter4_tmp_11_10_6_reg_6257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter3_tmp_11_10_5_reg_5997.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter3_tmp_11_10_4_reg_5732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter2_tmp_11_10_3_reg_5497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = ap_reg_pp0_iter1_tmp_11_10_2_reg_5297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = tmp_11_10_1_reg_5077.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_473_p1 = tmp_11_s_reg_4827.read();
    } else {
        grp_fu_473_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_477_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_13_reg_8662.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_12_reg_8582.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_11_reg_8502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_10_reg_8422.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_s_reg_8342.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_9_reg_8262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_8_reg_8182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_7_reg_8102.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_6_reg_8022.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_5_reg_7942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_4_reg_7862.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_3_reg_7782.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_11_2_reg_7702.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = reg_1006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_12_10_reg_6892.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p0 = tmp_434_fu_2538_p1.read();
    } else {
        grp_fu_477_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_477_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter8_tmp_11_11_14_reg_7622.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter8_tmp_11_11_13_reg_7542.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter7_tmp_11_11_12_reg_7462.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter7_tmp_11_11_11_reg_7382.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter6_tmp_11_11_10_reg_7277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter6_tmp_11_11_s_reg_7097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter5_tmp_11_11_9_reg_6897.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter5_tmp_11_11_8_reg_6657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter4_tmp_11_11_7_reg_6477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter4_tmp_11_11_6_reg_6272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter3_tmp_11_11_5_reg_6012.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter3_tmp_11_11_4_reg_5747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter2_tmp_11_11_3_reg_5507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = ap_reg_pp0_iter1_tmp_11_11_2_reg_5307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = tmp_11_11_1_reg_5092.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_477_p1 = tmp_11_10_reg_4837.read();
    } else {
        grp_fu_477_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_481_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_13_reg_8667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_12_reg_8587.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_11_reg_8507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_10_reg_8427.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_s_reg_8347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_9_reg_8267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_8_reg_8187.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_7_reg_8107.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_6_reg_8027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_5_reg_7947.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_4_reg_7867.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_3_reg_7787.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_12_2_reg_7707.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = reg_1011.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_12_11_reg_6907.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p0 = tmp_469_fu_2547_p1.read();
    } else {
        grp_fu_481_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_481_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter8_tmp_11_12_14_reg_7627.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter8_tmp_11_12_13_reg_7547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter7_tmp_11_12_12_reg_7467.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter7_tmp_11_12_11_reg_7387.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter6_tmp_11_12_10_reg_7287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter6_tmp_11_12_s_reg_7107.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter5_tmp_11_12_9_reg_6912.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter5_tmp_11_12_8_reg_6667.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter4_tmp_11_12_7_reg_6487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter4_tmp_11_12_6_reg_6287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter3_tmp_11_12_5_reg_6027.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter3_tmp_11_12_4_reg_5762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter2_tmp_11_12_3_reg_5517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = ap_reg_pp0_iter1_tmp_11_12_2_reg_5317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = tmp_11_12_1_reg_5107.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_481_p1 = tmp_11_11_reg_4847.read();
    } else {
        grp_fu_481_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_485_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_13_reg_8672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_12_reg_8592.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_11_reg_8512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_10_reg_8432.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_s_reg_8352.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_9_reg_8272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_8_reg_8192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_7_reg_8112.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_6_reg_8032.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_5_reg_7952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_4_reg_7872.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_3_reg_7792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_13_2_reg_7712.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = reg_1016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_12_12_reg_6922.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p0 = tmp_504_fu_2556_p1.read();
    } else {
        grp_fu_485_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_485_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter8_tmp_11_13_14_reg_7632.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter8_tmp_11_13_13_reg_7552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter7_tmp_11_13_12_reg_7472.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter7_tmp_11_13_11_reg_7392.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter6_tmp_11_13_10_reg_7297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter6_tmp_11_13_s_reg_7117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter5_tmp_11_13_9_reg_6927.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter5_tmp_11_13_8_reg_6677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter4_tmp_11_13_7_reg_6497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter4_tmp_11_13_6_reg_6302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter3_tmp_11_13_5_reg_6042.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter3_tmp_11_13_4_reg_5777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter2_tmp_11_13_3_reg_5527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = ap_reg_pp0_iter1_tmp_11_13_2_reg_5327.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = tmp_11_13_1_reg_5122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_485_p1 = tmp_11_12_reg_4857.read();
    } else {
        grp_fu_485_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_489_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_13_reg_8677.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_12_reg_8597.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_11_reg_8517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_10_reg_8437.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_s_reg_8357.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_9_reg_8277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_8_reg_8197.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_7_reg_8117.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_6_reg_8037.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_5_reg_7957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_4_reg_7877.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_3_reg_7797.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_14_2_reg_7717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = reg_1021.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_12_13_reg_6937.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p0 = tmp_539_fu_2565_p1.read();
    } else {
        grp_fu_489_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_489_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter8_tmp_11_14_14_reg_7637.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter8_tmp_11_14_13_reg_7557.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter7_tmp_11_14_12_reg_7477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter7_tmp_11_14_11_reg_7397.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter6_tmp_11_14_10_reg_7307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter6_tmp_11_14_s_reg_7127.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter5_tmp_11_14_9_reg_6942.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter5_tmp_11_14_8_reg_6687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter4_tmp_11_14_7_reg_6507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter4_tmp_11_14_6_reg_6317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter3_tmp_11_14_5_reg_6057.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter3_tmp_11_14_4_reg_5792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter2_tmp_11_14_3_reg_5537.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = ap_reg_pp0_iter1_tmp_11_14_2_reg_5337.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = tmp_11_14_1_reg_5137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_489_p1 = tmp_11_13_reg_4867.read();
    } else {
        grp_fu_489_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_493_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_13_reg_8682.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_12_reg_8602.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_11_reg_8522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_10_reg_8442.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_s_reg_8362.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_9_reg_8282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_8_reg_8202.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_7_reg_8122.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_6_reg_8042.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_5_reg_7962.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_4_reg_7882.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_3_reg_7802.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_15_2_reg_7722.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = reg_1026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_12_14_reg_6952.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p0 = tmp_574_fu_2574_p1.read();
    } else {
        grp_fu_493_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_493_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter8_tmp_11_15_14_reg_7642.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter8_tmp_11_15_13_reg_7562.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter7_tmp_11_15_12_reg_7482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter7_tmp_11_15_11_reg_7402.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter6_tmp_11_15_10_reg_7317.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter6_tmp_11_15_s_reg_7137.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter5_tmp_11_15_9_reg_6957.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter5_tmp_11_15_8_reg_6697.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter4_tmp_11_15_7_reg_6517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter4_tmp_11_15_6_reg_6332.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter3_tmp_11_15_5_reg_6072.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter3_tmp_11_15_4_reg_5807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter2_tmp_11_15_3_reg_5547.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = ap_reg_pp0_iter1_tmp_11_15_2_reg_5347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = tmp_11_15_1_reg_5152.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_493_p1 = tmp_11_14_reg_4877.read();
    } else {
        grp_fu_493_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_497_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_76_fu_3486_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_72_fu_3403_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_68_fu_3320_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_64_fu_3222_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_60_fu_3124_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_56_fu_3022_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_52_fu_2920_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_48_fu_2829_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_44_fu_2723_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_40_fu_2597_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_36_fu_2421_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_32_fu_2301_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_28_fu_2185_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_24_fu_2069_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_20_fu_1945_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p0 = tmp_14_fu_1839_p1.read();
    } else {
        grp_fu_497_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_497_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_497_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_497_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_501_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_113_fu_3509_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_111_fu_3426_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_109_fu_3343_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_107_fu_3245_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_105_fu_3147_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_103_fu_3049_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_101_fu_2947_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_99_fu_2856_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_97_fu_2750_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_95_fu_2624_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_93_fu_2452_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_91_fu_2328_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_89_fu_2212_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_87_fu_2096_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_85_fu_1972_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p0 = tmp_81_fu_1866_p1.read();
    } else {
        grp_fu_501_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_501_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_501_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_501_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_505_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_149_fu_3513_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_147_fu_3430_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_145_fu_3347_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_143_fu_3250_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_141_fu_3152_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_139_fu_3054_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_137_fu_2952_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_135_fu_2860_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_133_fu_2755_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_131_fu_2629_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_129_fu_2461_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_127_fu_2333_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_125_fu_2217_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_123_fu_2101_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_121_fu_1977_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p0 = tmp_117_fu_1871_p1.read();
    } else {
        grp_fu_505_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_505_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_505_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_505_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_509_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_184_fu_3517_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_182_fu_3434_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_180_fu_3351_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_178_fu_3255_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_176_fu_3157_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_174_fu_3059_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_172_fu_2957_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_170_fu_2864_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_168_fu_2760_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_166_fu_2634_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_164_fu_2470_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_162_fu_2338_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_160_fu_2222_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_158_fu_2106_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_156_fu_1982_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p0 = tmp_152_fu_1876_p1.read();
    } else {
        grp_fu_509_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_509_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_509_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_509_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_513_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_219_fu_3521_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_217_fu_3438_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_215_fu_3355_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_213_fu_3260_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_211_fu_3162_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_209_fu_3064_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_207_fu_2962_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_205_fu_2868_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_203_fu_2765_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_201_fu_2639_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_199_fu_2479_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_197_fu_2343_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_195_fu_2227_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_193_fu_2111_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_191_fu_1987_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p0 = tmp_187_fu_1881_p1.read();
    } else {
        grp_fu_513_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_513_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_513_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_513_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_517_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_254_fu_3525_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_252_fu_3442_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_250_fu_3359_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_248_fu_3265_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_246_fu_3167_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_244_fu_3069_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_242_fu_2967_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_240_fu_2872_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_238_fu_2770_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_236_fu_2644_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_234_fu_2488_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_232_fu_2348_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_230_fu_2232_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_228_fu_2116_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_226_fu_1992_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p0 = tmp_222_fu_1886_p1.read();
    } else {
        grp_fu_517_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_517_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_517_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_517_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_521_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_289_fu_3529_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_287_fu_3446_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_285_fu_3363_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_283_fu_3270_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_281_fu_3172_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_279_fu_3074_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_277_fu_2972_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_275_fu_2876_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_273_fu_2775_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_271_fu_2649_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_269_fu_2497_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_267_fu_2353_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_265_fu_2237_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_263_fu_2121_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_261_fu_1997_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p0 = tmp_257_fu_1891_p1.read();
    } else {
        grp_fu_521_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_521_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_521_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_521_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_525_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_324_fu_3533_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_322_fu_3450_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_320_fu_3367_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_318_fu_3275_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_316_fu_3177_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_314_fu_3079_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_312_fu_2977_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_310_fu_2880_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_308_fu_2780_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_306_fu_2654_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_304_fu_2506_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_302_fu_2358_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_300_fu_2242_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_298_fu_2126_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_296_fu_2002_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p0 = tmp_292_fu_1896_p1.read();
    } else {
        grp_fu_525_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_525_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_525_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_525_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_529_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_359_fu_3537_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_357_fu_3454_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_355_fu_3371_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_353_fu_3280_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_351_fu_3182_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_349_fu_3084_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_347_fu_2982_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_345_fu_2884_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_343_fu_2785_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_341_fu_2659_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_339_fu_2515_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_337_fu_2363_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_335_fu_2247_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_333_fu_2131_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_331_fu_2007_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p0 = tmp_327_fu_1901_p1.read();
    } else {
        grp_fu_529_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_529_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_529_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_529_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_533_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_394_fu_3541_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_392_fu_3458_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_390_fu_3375_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_388_fu_3285_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_386_fu_3187_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_384_fu_3089_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_382_fu_2987_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_380_fu_2888_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_378_fu_2790_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_376_fu_2664_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_374_fu_2524_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_372_fu_2368_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_370_fu_2252_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_368_fu_2136_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_366_fu_2012_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p0 = tmp_362_fu_1906_p1.read();
    } else {
        grp_fu_533_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_533_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_533_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_533_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_537_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_429_fu_3545_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_427_fu_3462_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_425_fu_3379_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_423_fu_3290_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_421_fu_3192_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_419_fu_3094_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_417_fu_2992_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_415_fu_2892_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_413_fu_2795_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_411_fu_2669_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_409_fu_2533_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_407_fu_2373_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_405_fu_2257_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_403_fu_2141_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_401_fu_2017_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p0 = tmp_397_fu_1911_p1.read();
    } else {
        grp_fu_537_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_537_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_537_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_537_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_541_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_464_fu_3549_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_462_fu_3466_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_460_fu_3383_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_458_fu_3295_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_456_fu_3197_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_454_fu_3099_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_452_fu_2997_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_450_fu_2896_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_448_fu_2800_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_446_fu_2674_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_444_fu_2542_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_442_fu_2378_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_440_fu_2262_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_438_fu_2146_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_436_fu_2022_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p0 = tmp_432_fu_1916_p1.read();
    } else {
        grp_fu_541_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_541_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_541_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_541_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_545_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_499_fu_3553_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_497_fu_3470_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_495_fu_3387_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_493_fu_3300_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_491_fu_3202_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_489_fu_3104_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_487_fu_3002_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_485_fu_2900_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_483_fu_2805_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_481_fu_2679_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_479_fu_2551_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_477_fu_2383_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_475_fu_2267_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_473_fu_2151_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_471_fu_2027_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p0 = tmp_467_fu_1921_p1.read();
    } else {
        grp_fu_545_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_545_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_545_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_545_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_549_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_534_fu_3557_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_532_fu_3474_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_530_fu_3391_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_528_fu_3305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_526_fu_3207_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_524_fu_3109_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_522_fu_3007_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_520_fu_2904_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_518_fu_2810_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_516_fu_2684_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_514_fu_2560_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_512_fu_2388_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_510_fu_2272_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_508_fu_2156_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_506_fu_2032_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p0 = tmp_502_fu_1926_p1.read();
    } else {
        grp_fu_549_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_549_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_549_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_549_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_553_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_569_fu_3561_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_567_fu_3478_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_565_fu_3395_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_563_fu_3310_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_561_fu_3212_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_559_fu_3114_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_557_fu_3012_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_555_fu_2908_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_553_fu_2815_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_551_fu_2689_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_549_fu_2569_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_547_fu_2393_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_545_fu_2277_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_543_fu_2161_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_541_fu_2037_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p0 = tmp_537_fu_1931_p1.read();
    } else {
        grp_fu_553_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_553_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_553_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_553_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_557_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_604_fu_3565_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_602_fu_3482_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_600_fu_3399_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_598_fu_3315_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_596_fu_3217_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_594_fu_3119_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_592_fu_3017_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_590_fu_2912_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_588_fu_2820_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_586_fu_2694_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_584_fu_2578_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_582_fu_2398_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_580_fu_2282_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_578_fu_2166_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_576_fu_2042_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p0 = tmp_572_fu_1936_p1.read();
    } else {
        grp_fu_557_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_557_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_78_fu_3490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_74_fu_3407_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_70_fu_3324_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_66_fu_3226_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_62_fu_3128_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_58_fu_3026_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_54_fu_2924_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_50_fu_2833_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_46_fu_2727_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_42_fu_2601_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_38_fu_2425_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_34_fu_2305_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_30_fu_2189_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_26_fu_2073_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_22_fu_1949_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_557_p1 = tmp_16_fu_1843_p1.read();
    } else {
        grp_fu_557_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_i_1_fu_1087_p2() {
    i_1_fu_1087_p2 = (!ap_const_lv3_1.is_01() || !i_reg_362.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(i_reg_362.read()));
}

void convolve_kernel::thread_i_phi_fu_366_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        i_phi_fu_366_p4 = tmp_1_mid2_v_reg_3722.read();
    } else {
        i_phi_fu_366_p4 = i_reg_362.read();
    }
}

void convolve_kernel::thread_indvar_flatten1_phi_fu_355_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten1_phi_fu_355_p4 = indvar_flatten_next2_reg_3679.read();
    } else {
        indvar_flatten1_phi_fu_355_p4 = indvar_flatten1_reg_351.read();
    }
}

void convolve_kernel::thread_indvar_flatten2_phi_fu_378_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten2_phi_fu_378_p4 = indvar_flatten_next1_reg_3757.read();
    } else {
        indvar_flatten2_phi_fu_378_p4 = indvar_flatten2_reg_374.read();
    }
}

void convolve_kernel::thread_indvar_flatten40_op_fu_1081_p2() {
    indvar_flatten40_op_fu_1081_p2 = (!ap_const_lv12_1.is_01() || !indvar_flatten2_phi_fu_378_p4.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1) + sc_biguint<12>(indvar_flatten2_phi_fu_378_p4.read()));
}

void convolve_kernel::thread_indvar_flatten_next1_fu_1150_p3() {
    indvar_flatten_next1_fu_1150_p3 = (!exitcond_flatten_reg_3684.read()[0].is_01())? sc_lv<12>(): ((exitcond_flatten_reg_3684.read()[0].to_bool())? ap_const_lv12_1: indvar_flatten40_op_reg_3707.read());
}

void convolve_kernel::thread_indvar_flatten_next2_fu_1057_p2() {
    indvar_flatten_next2_fu_1057_p2 = (!ap_const_lv13_1.is_01() || !indvar_flatten1_phi_fu_355_p4.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1) + sc_biguint<13>(indvar_flatten1_phi_fu_355_p4.read()));
}

void convolve_kernel::thread_indvar_flatten_next_fu_1258_p3() {
    indvar_flatten_next_fu_1258_p3 = (!tmp_39_fu_1207_p2.read()[0].is_01())? sc_lv<10>(): ((tmp_39_fu_1207_p2.read()[0].to_bool())? ap_const_lv10_1: indvar_flatten_op_reg_3752.read());
}

void convolve_kernel::thread_indvar_flatten_op_fu_1144_p2() {
    indvar_flatten_op_fu_1144_p2 = (!ap_const_lv10_1.is_01() || !indvar_flatten_reg_397.read().is_01())? sc_lv<10>(): (sc_biguint<10>(ap_const_lv10_1) + sc_biguint<10>(indvar_flatten_reg_397.read()));
}

void convolve_kernel::thread_indvar_flatten_phi_fu_401_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten_phi_fu_401_p4 = indvar_flatten_next_reg_3809.read();
    } else {
        indvar_flatten_phi_fu_401_p4 = indvar_flatten_reg_397.read();
    }
}

void convolve_kernel::thread_j_1_fu_1122_p2() {
    j_1_fu_1122_p2 = (!ap_const_lv3_1.is_01() || !j_mid_fu_1093_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(j_mid_fu_1093_p3.read()));
}

void convolve_kernel::thread_j_mid_fu_1093_p3() {
    j_mid_fu_1093_p3 = (!exitcond_flatten_reg_3684.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3684.read()[0].to_bool())? ap_const_lv3_0: j_phi_fu_389_p4.read());
}

void convolve_kernel::thread_j_phi_fu_389_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp0_iter1_exitcond_flatten2_reg_3675.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        j_phi_fu_389_p4 = tmp_4_mid2_reg_3783.read();
    } else {
        j_phi_fu_389_p4 = j_reg_385.read();
    }
}

void convolve_kernel::thread_not_exitcond_flatten_1_fu_1133_p2() {
    not_exitcond_flatten_1_fu_1133_p2 = (exitcond_flatten_reg_3684.read() | exitcond_flatten_not_fu_1128_p2.read());
}

void convolve_kernel::thread_not_exitcond_flatten_fu_1107_p2() {
    not_exitcond_flatten_fu_1107_p2 = (exitcond_flatten_reg_3684.read() ^ ap_const_lv1_1);
}

void convolve_kernel::thread_p_shl2_cast_fu_1436_p1() {
    p_shl2_cast_fu_1436_p1 = esl_zext<12,8>(tmp_620_fu_1429_p3.read());
}

void convolve_kernel::thread_p_shl3_cast_fu_1183_p4() {
    p_shl3_cast_fu_1183_p4 = esl_concat<8,2>(esl_concat<5,3>(ap_const_lv5_5, tmp_1_mid2_v_reg_3722.read()), ap_const_lv2_0);
}

void convolve_kernel::thread_p_shl4_cast_fu_1166_p1() {
    p_shl4_cast_fu_1166_p1 = esl_zext<6,5>(tmp_1_fu_1159_p3.read());
}

void convolve_kernel::thread_p_shl_cast_fu_1425_p1() {
    p_shl_cast_fu_1425_p1 = esl_zext<12,11>(tmp_619_fu_1418_p3.read());
}

void convolve_kernel::thread_p_v_fu_1303_p3() {
    p_v_fu_1303_p3 = (!tmp_9_mid1_reg_3744.read()[0].is_01())? sc_lv<5>(): ((tmp_9_mid1_reg_3744.read()[0].to_bool())? row_b_1_reg_3834.read(): row_b_mid_reg_3776.read());
}

void convolve_kernel::thread_row_b_1_fu_1282_p2() {
    row_b_1_fu_1282_p2 = (!ap_const_lv5_1.is_01() || !row_b_mid_reg_3776.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(row_b_mid_reg_3776.read()));
}

void convolve_kernel::thread_row_b_mid2_fu_1334_p3() {
    row_b_mid2_fu_1334_p3 = (!tmp_9_mid1_reg_3744.read()[0].is_01())? sc_lv<5>(): ((tmp_9_mid1_reg_3744.read()[0].to_bool())? row_b_1_reg_3834.read(): row_b_mid_reg_3776.read());
}

void convolve_kernel::thread_row_b_mid_fu_1211_p3() {
    row_b_mid_fu_1211_p3 = (!tmp_39_fu_1207_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_39_fu_1207_p2.read()[0].to_bool())? ap_const_lv5_0: row_b_reg_409.read());
}

void convolve_kernel::thread_row_b_phi_fu_413_p4() {
    if ((esl_seteq<1,1,1>(exitcond_flatten2_reg_3675.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        row_b_phi_fu_413_p4 = row_b_mid2_reg_3862.read();
    } else {
        row_b_phi_fu_413_p4 = row_b_reg_409.read();
    }
}

void convolve_kernel::thread_tmp_101_fu_2947_p1() {
    tmp_101_fu_2947_p1 = reg_711.read();
}

void convolve_kernel::thread_tmp_103_fu_3049_p1() {
    tmp_103_fu_3049_p1 = reg_771.read();
}

void convolve_kernel::thread_tmp_105_fu_3147_p1() {
    tmp_105_fu_3147_p1 = reg_831.read();
}

void convolve_kernel::thread_tmp_107_fu_3245_p1() {
    tmp_107_fu_3245_p1 = reg_891.read();
}

void convolve_kernel::thread_tmp_109_fu_3343_p1() {
    tmp_109_fu_3343_p1 = tmp_108_reg_5607.read();
}

void convolve_kernel::thread_tmp_10_fu_1820_p2() {
    tmp_10_fu_1820_p2 = (!ap_const_lv8_AF.is_01() || !tmp_2_cast2_reg_4083.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_AF) + sc_biguint<8>(tmp_2_cast2_reg_4083.read()));
}

void convolve_kernel::thread_tmp_111_fu_3426_p1() {
    tmp_111_fu_3426_p1 = tmp_110_reg_5872.read();
}

void convolve_kernel::thread_tmp_113_fu_3509_p1() {
    tmp_113_fu_3509_p1 = tmp_112_reg_6132.read();
}

void convolve_kernel::thread_tmp_114_fu_3573_p1() {
    tmp_114_fu_3573_p1 = reg_956.read();
}

void convolve_kernel::thread_tmp_117_fu_1871_p1() {
    tmp_117_fu_1871_p1 = reg_715.read();
}

void convolve_kernel::thread_tmp_119_fu_2457_p1() {
    tmp_119_fu_2457_p1 = tmp_118_reg_4013.read();
}

void convolve_kernel::thread_tmp_11_fu_1192_p2() {
    tmp_11_fu_1192_p2 = (!p_shl3_cast_fu_1183_p4.read().is_01() || !tmp_611_cast_fu_1176_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl3_cast_fu_1183_p4.read()) + sc_biguint<10>(tmp_611_cast_fu_1176_p3.read()));
}

void convolve_kernel::thread_tmp_121_fu_1977_p1() {
    tmp_121_fu_1977_p1 = reg_775.read();
}

void convolve_kernel::thread_tmp_123_fu_2101_p1() {
    tmp_123_fu_2101_p1 = reg_835.read();
}

void convolve_kernel::thread_tmp_125_fu_2217_p1() {
    tmp_125_fu_2217_p1 = reg_895.read();
}

void convolve_kernel::thread_tmp_127_fu_2333_p1() {
    tmp_127_fu_2333_p1 = reg_715.read();
}

void convolve_kernel::thread_tmp_129_fu_2461_p1() {
    tmp_129_fu_2461_p1 = reg_775.read();
}

void convolve_kernel::thread_tmp_131_fu_2629_p1() {
    tmp_131_fu_2629_p1 = reg_835.read();
}

void convolve_kernel::thread_tmp_133_fu_2755_p1() {
    tmp_133_fu_2755_p1 = reg_895.read();
}

void convolve_kernel::thread_tmp_135_fu_2860_p1() {
    tmp_135_fu_2860_p1 = tmp_134_reg_3887.read();
}

void convolve_kernel::thread_tmp_137_fu_2952_p1() {
    tmp_137_fu_2952_p1 = reg_715.read();
}

void convolve_kernel::thread_tmp_139_fu_3054_p1() {
    tmp_139_fu_3054_p1 = reg_775.read();
}

void convolve_kernel::thread_tmp_13_fu_2050_p2() {
    tmp_13_fu_2050_p2 = (!ap_const_lv9_E1.is_01() || !tmp_2_cast1_fu_2047_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_E1) + sc_biguint<9>(tmp_2_cast1_fu_2047_p1.read()));
}

void convolve_kernel::thread_tmp_141_fu_3152_p1() {
    tmp_141_fu_3152_p1 = reg_835.read();
}

void convolve_kernel::thread_tmp_143_fu_3250_p1() {
    tmp_143_fu_3250_p1 = reg_895.read();
}

void convolve_kernel::thread_tmp_145_fu_3347_p1() {
    tmp_145_fu_3347_p1 = tmp_144_reg_5622.read();
}

void convolve_kernel::thread_tmp_147_fu_3430_p1() {
    tmp_147_fu_3430_p1 = tmp_146_reg_5887.read();
}

void convolve_kernel::thread_tmp_149_fu_3513_p1() {
    tmp_149_fu_3513_p1 = tmp_148_reg_6147.read();
}

void convolve_kernel::thread_tmp_14_fu_1839_p1() {
    tmp_14_fu_1839_p1 = tmp_625_reg_3983.read();
}

void convolve_kernel::thread_tmp_150_fu_3577_p1() {
    tmp_150_fu_3577_p1 = reg_961.read();
}

void convolve_kernel::thread_tmp_152_fu_1876_p1() {
    tmp_152_fu_1876_p1 = reg_719.read();
}

void convolve_kernel::thread_tmp_154_fu_2466_p1() {
    tmp_154_fu_2466_p1 = tmp_153_reg_4018.read();
}

void convolve_kernel::thread_tmp_156_fu_1982_p1() {
    tmp_156_fu_1982_p1 = reg_779.read();
}

void convolve_kernel::thread_tmp_158_fu_2106_p1() {
    tmp_158_fu_2106_p1 = reg_839.read();
}

void convolve_kernel::thread_tmp_15_fu_2171_p2() {
    tmp_15_fu_2171_p2 = (!ap_const_lv9_FA.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_FA) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_160_fu_2222_p1() {
    tmp_160_fu_2222_p1 = reg_899.read();
}

void convolve_kernel::thread_tmp_162_fu_2338_p1() {
    tmp_162_fu_2338_p1 = reg_719.read();
}

void convolve_kernel::thread_tmp_164_fu_2470_p1() {
    tmp_164_fu_2470_p1 = reg_779.read();
}

void convolve_kernel::thread_tmp_166_fu_2634_p1() {
    tmp_166_fu_2634_p1 = reg_839.read();
}

void convolve_kernel::thread_tmp_168_fu_2760_p1() {
    tmp_168_fu_2760_p1 = reg_899.read();
}

void convolve_kernel::thread_tmp_16_fu_1843_p1() {
    tmp_16_fu_1843_p1 = tmp_626_reg_4127.read();
}

void convolve_kernel::thread_tmp_170_fu_2864_p1() {
    tmp_170_fu_2864_p1 = tmp_169_reg_3892.read();
}

void convolve_kernel::thread_tmp_172_fu_2957_p1() {
    tmp_172_fu_2957_p1 = reg_719.read();
}

void convolve_kernel::thread_tmp_174_fu_3059_p1() {
    tmp_174_fu_3059_p1 = reg_779.read();
}

void convolve_kernel::thread_tmp_176_fu_3157_p1() {
    tmp_176_fu_3157_p1 = reg_839.read();
}

void convolve_kernel::thread_tmp_178_fu_3255_p1() {
    tmp_178_fu_3255_p1 = reg_899.read();
}

void convolve_kernel::thread_tmp_17_fu_2287_p2() {
    tmp_17_fu_2287_p2 = (!ap_const_lv9_113.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_113) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_180_fu_3351_p1() {
    tmp_180_fu_3351_p1 = tmp_179_reg_5637.read();
}

void convolve_kernel::thread_tmp_182_fu_3434_p1() {
    tmp_182_fu_3434_p1 = tmp_181_reg_5902.read();
}

void convolve_kernel::thread_tmp_184_fu_3517_p1() {
    tmp_184_fu_3517_p1 = tmp_183_reg_6162.read();
}

void convolve_kernel::thread_tmp_185_fu_3581_p1() {
    tmp_185_fu_3581_p1 = reg_966.read();
}

void convolve_kernel::thread_tmp_187_fu_1881_p1() {
    tmp_187_fu_1881_p1 = reg_723.read();
}

void convolve_kernel::thread_tmp_189_fu_2475_p1() {
    tmp_189_fu_2475_p1 = tmp_188_reg_4023.read();
}

void convolve_kernel::thread_tmp_18_fu_2417_p1() {
    tmp_18_fu_2417_p1 = tmp_627_reg_3998.read();
}

void convolve_kernel::thread_tmp_191_fu_1987_p1() {
    tmp_191_fu_1987_p1 = reg_783.read();
}

void convolve_kernel::thread_tmp_193_fu_2111_p1() {
    tmp_193_fu_2111_p1 = reg_843.read();
}

void convolve_kernel::thread_tmp_195_fu_2227_p1() {
    tmp_195_fu_2227_p1 = reg_903.read();
}

void convolve_kernel::thread_tmp_197_fu_2343_p1() {
    tmp_197_fu_2343_p1 = reg_723.read();
}

void convolve_kernel::thread_tmp_199_fu_2479_p1() {
    tmp_199_fu_2479_p1 = reg_783.read();
}

void convolve_kernel::thread_tmp_19_fu_2403_p2() {
    tmp_19_fu_2403_p2 = (!ap_const_lv9_12C.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_12C) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_1_cast_fu_1031_p1() {
    tmp_1_cast_fu_1031_p1 = esl_zext<6,3>(i_phi_fu_366_p4.read());
}

void convolve_kernel::thread_tmp_1_fu_1159_p3() {
    tmp_1_fu_1159_p3 = esl_concat<3,2>(tmp_1_mid2_v_reg_3722.read(), ap_const_lv2_0);
}

void convolve_kernel::thread_tmp_1_mid2_cast_fu_1156_p1() {
    tmp_1_mid2_cast_fu_1156_p1 = esl_zext<6,3>(tmp_1_mid2_v_reg_3722.read());
}

void convolve_kernel::thread_tmp_1_mid2_v_fu_1100_p3() {
    tmp_1_mid2_v_fu_1100_p3 = (!exitcond_flatten_reg_3684.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3684.read()[0].to_bool())? i_1_fu_1087_p2.read(): i_reg_362.read());
}

void convolve_kernel::thread_tmp_201_fu_2639_p1() {
    tmp_201_fu_2639_p1 = reg_843.read();
}

void convolve_kernel::thread_tmp_203_fu_2765_p1() {
    tmp_203_fu_2765_p1 = reg_903.read();
}

void convolve_kernel::thread_tmp_205_fu_2868_p1() {
    tmp_205_fu_2868_p1 = tmp_204_reg_3897.read();
}

void convolve_kernel::thread_tmp_207_fu_2962_p1() {
    tmp_207_fu_2962_p1 = reg_723.read();
}

void convolve_kernel::thread_tmp_209_fu_3064_p1() {
    tmp_209_fu_3064_p1 = reg_783.read();
}

void convolve_kernel::thread_tmp_20_fu_1945_p1() {
    tmp_20_fu_1945_p1 = tmp_628_reg_4003.read();
}

void convolve_kernel::thread_tmp_211_fu_3162_p1() {
    tmp_211_fu_3162_p1 = reg_843.read();
}

void convolve_kernel::thread_tmp_213_fu_3260_p1() {
    tmp_213_fu_3260_p1 = reg_903.read();
}

void convolve_kernel::thread_tmp_215_fu_3355_p1() {
    tmp_215_fu_3355_p1 = tmp_214_reg_5652.read();
}

void convolve_kernel::thread_tmp_217_fu_3438_p1() {
    tmp_217_fu_3438_p1 = tmp_216_reg_5917.read();
}

void convolve_kernel::thread_tmp_219_fu_3521_p1() {
    tmp_219_fu_3521_p1 = tmp_218_reg_6177.read();
}

void convolve_kernel::thread_tmp_220_fu_3585_p1() {
    tmp_220_fu_3585_p1 = reg_971.read();
}

void convolve_kernel::thread_tmp_222_fu_1886_p1() {
    tmp_222_fu_1886_p1 = reg_727.read();
}

void convolve_kernel::thread_tmp_224_fu_2484_p1() {
    tmp_224_fu_2484_p1 = tmp_223_reg_4028.read();
}

void convolve_kernel::thread_tmp_226_fu_1992_p1() {
    tmp_226_fu_1992_p1 = reg_787.read();
}

void convolve_kernel::thread_tmp_228_fu_2116_p1() {
    tmp_228_fu_2116_p1 = reg_847.read();
}

void convolve_kernel::thread_tmp_22_fu_1949_p1() {
    tmp_22_fu_1949_p1 = tmp_21_reg_4132.read();
}

void convolve_kernel::thread_tmp_230_fu_2232_p1() {
    tmp_230_fu_2232_p1 = reg_907.read();
}

void convolve_kernel::thread_tmp_232_fu_2348_p1() {
    tmp_232_fu_2348_p1 = reg_727.read();
}

void convolve_kernel::thread_tmp_234_fu_2488_p1() {
    tmp_234_fu_2488_p1 = reg_787.read();
}

void convolve_kernel::thread_tmp_236_fu_2644_p1() {
    tmp_236_fu_2644_p1 = reg_847.read();
}

void convolve_kernel::thread_tmp_238_fu_2770_p1() {
    tmp_238_fu_2770_p1 = reg_907.read();
}

void convolve_kernel::thread_tmp_23_fu_2583_p2() {
    tmp_23_fu_2583_p2 = (!ap_const_lv9_145.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_145) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_240_fu_2872_p1() {
    tmp_240_fu_2872_p1 = tmp_239_reg_3902.read();
}

void convolve_kernel::thread_tmp_242_fu_2967_p1() {
    tmp_242_fu_2967_p1 = reg_727.read();
}

void convolve_kernel::thread_tmp_244_fu_3069_p1() {
    tmp_244_fu_3069_p1 = reg_787.read();
}

void convolve_kernel::thread_tmp_246_fu_3167_p1() {
    tmp_246_fu_3167_p1 = reg_847.read();
}

void convolve_kernel::thread_tmp_248_fu_3265_p1() {
    tmp_248_fu_3265_p1 = reg_907.read();
}

void convolve_kernel::thread_tmp_24_fu_2069_p1() {
    tmp_24_fu_2069_p1 = tmp_629_reg_4112.read();
}

void convolve_kernel::thread_tmp_250_fu_3359_p1() {
    tmp_250_fu_3359_p1 = tmp_249_reg_5667.read();
}

void convolve_kernel::thread_tmp_252_fu_3442_p1() {
    tmp_252_fu_3442_p1 = tmp_251_reg_5932.read();
}

void convolve_kernel::thread_tmp_254_fu_3525_p1() {
    tmp_254_fu_3525_p1 = tmp_253_reg_6192.read();
}

void convolve_kernel::thread_tmp_255_fu_3589_p1() {
    tmp_255_fu_3589_p1 = reg_976.read();
}

void convolve_kernel::thread_tmp_257_fu_1891_p1() {
    tmp_257_fu_1891_p1 = reg_731.read();
}

void convolve_kernel::thread_tmp_259_fu_2493_p1() {
    tmp_259_fu_2493_p1 = tmp_258_reg_4033.read();
}

void convolve_kernel::thread_tmp_261_fu_1997_p1() {
    tmp_261_fu_1997_p1 = reg_791.read();
}

void convolve_kernel::thread_tmp_263_fu_2121_p1() {
    tmp_263_fu_2121_p1 = reg_851.read();
}

void convolve_kernel::thread_tmp_265_fu_2237_p1() {
    tmp_265_fu_2237_p1 = reg_911.read();
}

void convolve_kernel::thread_tmp_267_fu_2353_p1() {
    tmp_267_fu_2353_p1 = reg_731.read();
}

void convolve_kernel::thread_tmp_269_fu_2497_p1() {
    tmp_269_fu_2497_p1 = reg_791.read();
}

void convolve_kernel::thread_tmp_26_fu_2073_p1() {
    tmp_26_fu_2073_p1 = tmp_25_reg_4137.read();
}

void convolve_kernel::thread_tmp_271_fu_2649_p1() {
    tmp_271_fu_2649_p1 = reg_851.read();
}

void convolve_kernel::thread_tmp_273_fu_2775_p1() {
    tmp_273_fu_2775_p1 = reg_911.read();
}

void convolve_kernel::thread_tmp_275_fu_2876_p1() {
    tmp_275_fu_2876_p1 = tmp_274_reg_3907.read();
}

void convolve_kernel::thread_tmp_277_fu_2972_p1() {
    tmp_277_fu_2972_p1 = reg_731.read();
}

void convolve_kernel::thread_tmp_279_fu_3074_p1() {
    tmp_279_fu_3074_p1 = reg_791.read();
}

void convolve_kernel::thread_tmp_27_fu_2699_p2() {
    tmp_27_fu_2699_p2 = (!ap_const_lv9_15E.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_15E) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_281_fu_3172_p1() {
    tmp_281_fu_3172_p1 = reg_851.read();
}

void convolve_kernel::thread_tmp_283_fu_3270_p1() {
    tmp_283_fu_3270_p1 = reg_911.read();
}

void convolve_kernel::thread_tmp_285_fu_3363_p1() {
    tmp_285_fu_3363_p1 = tmp_284_reg_5682.read();
}

void convolve_kernel::thread_tmp_287_fu_3446_p1() {
    tmp_287_fu_3446_p1 = tmp_286_reg_5947.read();
}

void convolve_kernel::thread_tmp_289_fu_3529_p1() {
    tmp_289_fu_3529_p1 = tmp_288_reg_6207.read();
}

void convolve_kernel::thread_tmp_28_fu_2185_p1() {
    tmp_28_fu_2185_p1 = tmp_630_reg_4142.read();
}

void convolve_kernel::thread_tmp_290_fu_3593_p1() {
    tmp_290_fu_3593_p1 = reg_981.read();
}

void convolve_kernel::thread_tmp_292_fu_1896_p1() {
    tmp_292_fu_1896_p1 = reg_735.read();
}

void convolve_kernel::thread_tmp_294_fu_2502_p1() {
    tmp_294_fu_2502_p1 = tmp_293_reg_4038.read();
}

void convolve_kernel::thread_tmp_296_fu_2002_p1() {
    tmp_296_fu_2002_p1 = reg_795.read();
}

void convolve_kernel::thread_tmp_298_fu_2126_p1() {
    tmp_298_fu_2126_p1 = reg_855.read();
}

void convolve_kernel::thread_tmp_2_cast1_fu_2047_p1() {
    tmp_2_cast1_fu_2047_p1 = esl_zext<9,6>(tmp_2_reg_3767.read());
}

void convolve_kernel::thread_tmp_2_cast2_fu_1613_p1() {
    tmp_2_cast2_fu_1613_p1 = esl_zext<8,6>(tmp_2_reg_3767.read());
}

void convolve_kernel::thread_tmp_2_cast_fu_1376_p1() {
    tmp_2_cast_fu_1376_p1 = esl_zext<7,6>(tmp_2_reg_3767.read());
}

void convolve_kernel::thread_tmp_2_fu_1170_p2() {
    tmp_2_fu_1170_p2 = (!p_shl4_cast_fu_1166_p1.read().is_01() || !tmp_1_mid2_cast_fu_1156_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(p_shl4_cast_fu_1166_p1.read()) + sc_biguint<6>(tmp_1_mid2_cast_fu_1156_p1.read()));
}

void convolve_kernel::thread_tmp_300_fu_2242_p1() {
    tmp_300_fu_2242_p1 = reg_915.read();
}

void convolve_kernel::thread_tmp_302_fu_2358_p1() {
    tmp_302_fu_2358_p1 = reg_735.read();
}

void convolve_kernel::thread_tmp_304_fu_2506_p1() {
    tmp_304_fu_2506_p1 = reg_795.read();
}

void convolve_kernel::thread_tmp_306_fu_2654_p1() {
    tmp_306_fu_2654_p1 = reg_855.read();
}

void convolve_kernel::thread_tmp_308_fu_2780_p1() {
    tmp_308_fu_2780_p1 = reg_915.read();
}

void convolve_kernel::thread_tmp_30_fu_2189_p1() {
    tmp_30_fu_2189_p1 = tmp_29_reg_4147.read();
}

void convolve_kernel::thread_tmp_310_fu_2880_p1() {
    tmp_310_fu_2880_p1 = tmp_309_reg_3912.read();
}

void convolve_kernel::thread_tmp_312_fu_2977_p1() {
    tmp_312_fu_2977_p1 = reg_735.read();
}

void convolve_kernel::thread_tmp_314_fu_3079_p1() {
    tmp_314_fu_3079_p1 = reg_795.read();
}

void convolve_kernel::thread_tmp_316_fu_3177_p1() {
    tmp_316_fu_3177_p1 = reg_855.read();
}

void convolve_kernel::thread_tmp_318_fu_3275_p1() {
    tmp_318_fu_3275_p1 = reg_915.read();
}

void convolve_kernel::thread_tmp_31_fu_2704_p2() {
    tmp_31_fu_2704_p2 = (!ap_const_lv9_177.is_01() || !tmp_2_cast1_reg_4442.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_177) + sc_biguint<9>(tmp_2_cast1_reg_4442.read()));
}

void convolve_kernel::thread_tmp_320_fu_3367_p1() {
    tmp_320_fu_3367_p1 = tmp_319_reg_5697.read();
}

void convolve_kernel::thread_tmp_322_fu_3450_p1() {
    tmp_322_fu_3450_p1 = tmp_321_reg_5962.read();
}

void convolve_kernel::thread_tmp_324_fu_3533_p1() {
    tmp_324_fu_3533_p1 = tmp_323_reg_6222.read();
}

void convolve_kernel::thread_tmp_325_fu_3597_p1() {
    tmp_325_fu_3597_p1 = reg_986.read();
}

void convolve_kernel::thread_tmp_327_fu_1901_p1() {
    tmp_327_fu_1901_p1 = reg_739.read();
}

void convolve_kernel::thread_tmp_329_fu_2511_p1() {
    tmp_329_fu_2511_p1 = tmp_328_reg_4043.read();
}

void convolve_kernel::thread_tmp_32_fu_2301_p1() {
    tmp_32_fu_2301_p1 = tmp_631_reg_4252.read();
}

void convolve_kernel::thread_tmp_331_fu_2007_p1() {
    tmp_331_fu_2007_p1 = reg_799.read();
}

void convolve_kernel::thread_tmp_333_fu_2131_p1() {
    tmp_333_fu_2131_p1 = reg_859.read();
}

void convolve_kernel::thread_tmp_335_fu_2247_p1() {
    tmp_335_fu_2247_p1 = reg_919.read();
}

void convolve_kernel::thread_tmp_337_fu_2363_p1() {
    tmp_337_fu_2363_p1 = reg_739.read();
}

void convolve_kernel::thread_tmp_339_fu_2515_p1() {
    tmp_339_fu_2515_p1 = reg_799.read();
}

void convolve_kernel::thread_tmp_341_fu_2659_p1() {
    tmp_341_fu_2659_p1 = reg_859.read();
}

void convolve_kernel::thread_tmp_343_fu_2785_p1() {
    tmp_343_fu_2785_p1 = reg_919.read();
}

void convolve_kernel::thread_tmp_345_fu_2884_p1() {
    tmp_345_fu_2884_p1 = tmp_344_reg_3917.read();
}

void convolve_kernel::thread_tmp_347_fu_2982_p1() {
    tmp_347_fu_2982_p1 = reg_739.read();
}

void convolve_kernel::thread_tmp_349_fu_3084_p1() {
    tmp_349_fu_3084_p1 = reg_799.read();
}

void convolve_kernel::thread_tmp_34_fu_2305_p1() {
    tmp_34_fu_2305_p1 = tmp_33_reg_4152.read();
}

void convolve_kernel::thread_tmp_351_fu_3182_p1() {
    tmp_351_fu_3182_p1 = reg_859.read();
}

void convolve_kernel::thread_tmp_353_fu_3280_p1() {
    tmp_353_fu_3280_p1 = reg_919.read();
}

void convolve_kernel::thread_tmp_355_fu_3371_p1() {
    tmp_355_fu_3371_p1 = tmp_354_reg_5712.read();
}

void convolve_kernel::thread_tmp_357_fu_3454_p1() {
    tmp_357_fu_3454_p1 = tmp_356_reg_5977.read();
}

void convolve_kernel::thread_tmp_359_fu_3537_p1() {
    tmp_359_fu_3537_p1 = tmp_358_reg_6237.read();
}

void convolve_kernel::thread_tmp_35_fu_1069_p2() {
    tmp_35_fu_1069_p2 = (!col_b_phi_fu_425_p4.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(col_b_phi_fu_425_p4.read() == ap_const_lv5_10);
}

void convolve_kernel::thread_tmp_360_fu_3601_p1() {
    tmp_360_fu_3601_p1 = reg_991.read();
}

void convolve_kernel::thread_tmp_362_fu_1906_p1() {
    tmp_362_fu_1906_p1 = reg_743.read();
}

void convolve_kernel::thread_tmp_364_fu_2520_p1() {
    tmp_364_fu_2520_p1 = tmp_363_reg_4048.read();
}

void convolve_kernel::thread_tmp_366_fu_2012_p1() {
    tmp_366_fu_2012_p1 = reg_803.read();
}

void convolve_kernel::thread_tmp_368_fu_2136_p1() {
    tmp_368_fu_2136_p1 = reg_863.read();
}

void convolve_kernel::thread_tmp_36_fu_2421_p1() {
    tmp_36_fu_2421_p1 = tmp_632_reg_4362.read();
}

void convolve_kernel::thread_tmp_370_fu_2252_p1() {
    tmp_370_fu_2252_p1 = reg_923.read();
}

void convolve_kernel::thread_tmp_372_fu_2368_p1() {
    tmp_372_fu_2368_p1 = reg_743.read();
}

void convolve_kernel::thread_tmp_374_fu_2524_p1() {
    tmp_374_fu_2524_p1 = reg_803.read();
}

void convolve_kernel::thread_tmp_376_fu_2664_p1() {
    tmp_376_fu_2664_p1 = reg_863.read();
}

void convolve_kernel::thread_tmp_378_fu_2790_p1() {
    tmp_378_fu_2790_p1 = reg_923.read();
}

void convolve_kernel::thread_tmp_380_fu_2888_p1() {
    tmp_380_fu_2888_p1 = tmp_379_reg_3922.read();
}

void convolve_kernel::thread_tmp_382_fu_2987_p1() {
    tmp_382_fu_2987_p1 = reg_743.read();
}

void convolve_kernel::thread_tmp_384_fu_3089_p1() {
    tmp_384_fu_3089_p1 = reg_803.read();
}

void convolve_kernel::thread_tmp_386_fu_3187_p1() {
    tmp_386_fu_3187_p1 = reg_863.read();
}

void convolve_kernel::thread_tmp_388_fu_3285_p1() {
    tmp_388_fu_3285_p1 = reg_923.read();
}

void convolve_kernel::thread_tmp_38_fu_2425_p1() {
    tmp_38_fu_2425_p1 = tmp_37_reg_4157.read();
}

void convolve_kernel::thread_tmp_390_fu_3375_p1() {
    tmp_390_fu_3375_p1 = tmp_389_reg_5727.read();
}

void convolve_kernel::thread_tmp_392_fu_3458_p1() {
    tmp_392_fu_3458_p1 = tmp_391_reg_5992.read();
}

void convolve_kernel::thread_tmp_394_fu_3541_p1() {
    tmp_394_fu_3541_p1 = tmp_393_reg_6252.read();
}

void convolve_kernel::thread_tmp_395_fu_3605_p1() {
    tmp_395_fu_3605_p1 = reg_996.read();
}

void convolve_kernel::thread_tmp_397_fu_1911_p1() {
    tmp_397_fu_1911_p1 = reg_747.read();
}

void convolve_kernel::thread_tmp_399_fu_2529_p1() {
    tmp_399_fu_2529_p1 = tmp_398_reg_4053.read();
}

void convolve_kernel::thread_tmp_39_fu_1207_p2() {
    tmp_39_fu_1207_p2 = (exitcond_flatten_mid_reg_3731.read() | exitcond_flatten_reg_3684.read());
}

void convolve_kernel::thread_tmp_3_cast_cast_fu_1446_p1() {
    tmp_3_cast_cast_fu_1446_p1 = esl_zext<12,6>(tmp_3_reg_3872.read());
}

void convolve_kernel::thread_tmp_3_fu_1362_p2() {
    tmp_3_fu_1362_p2 = (!tmp_cast_fu_1358_p1.read().is_01() || !tmp_4_mid2_cast_reg_3819.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_cast_fu_1358_p1.read()) + sc_biguint<6>(tmp_4_mid2_cast_reg_3819.read()));
}

void convolve_kernel::thread_tmp_401_fu_2017_p1() {
    tmp_401_fu_2017_p1 = reg_807.read();
}

void convolve_kernel::thread_tmp_403_fu_2141_p1() {
    tmp_403_fu_2141_p1 = reg_867.read();
}

void convolve_kernel::thread_tmp_405_fu_2257_p1() {
    tmp_405_fu_2257_p1 = reg_927.read();
}

void convolve_kernel::thread_tmp_407_fu_2373_p1() {
    tmp_407_fu_2373_p1 = reg_747.read();
}

void convolve_kernel::thread_tmp_409_fu_2533_p1() {
    tmp_409_fu_2533_p1 = reg_807.read();
}

void convolve_kernel::thread_tmp_40_fu_2597_p1() {
    tmp_40_fu_2597_p1 = tmp_633_reg_4497.read();
}

void convolve_kernel::thread_tmp_411_fu_2669_p1() {
    tmp_411_fu_2669_p1 = reg_867.read();
}

void convolve_kernel::thread_tmp_413_fu_2795_p1() {
    tmp_413_fu_2795_p1 = reg_927.read();
}

void convolve_kernel::thread_tmp_415_fu_2892_p1() {
    tmp_415_fu_2892_p1 = tmp_414_reg_3927.read();
}

void convolve_kernel::thread_tmp_417_fu_2992_p1() {
    tmp_417_fu_2992_p1 = reg_747.read();
}

void convolve_kernel::thread_tmp_419_fu_3094_p1() {
    tmp_419_fu_3094_p1 = reg_807.read();
}

void convolve_kernel::thread_tmp_421_fu_3192_p1() {
    tmp_421_fu_3192_p1 = reg_867.read();
}

void convolve_kernel::thread_tmp_423_fu_3290_p1() {
    tmp_423_fu_3290_p1 = reg_927.read();
}

void convolve_kernel::thread_tmp_425_fu_3379_p1() {
    tmp_425_fu_3379_p1 = tmp_424_reg_5742.read();
}

void convolve_kernel::thread_tmp_427_fu_3462_p1() {
    tmp_427_fu_3462_p1 = tmp_426_reg_6007.read();
}

void convolve_kernel::thread_tmp_429_fu_3545_p1() {
    tmp_429_fu_3545_p1 = tmp_428_reg_6267.read();
}

void convolve_kernel::thread_tmp_42_fu_2601_p1() {
    tmp_42_fu_2601_p1 = tmp_41_reg_4162.read();
}

void convolve_kernel::thread_tmp_430_fu_3609_p1() {
    tmp_430_fu_3609_p1 = reg_1001.read();
}

void convolve_kernel::thread_tmp_432_fu_1916_p1() {
    tmp_432_fu_1916_p1 = reg_751.read();
}

void convolve_kernel::thread_tmp_434_fu_2538_p1() {
    tmp_434_fu_2538_p1 = tmp_433_reg_4058.read();
}

void convolve_kernel::thread_tmp_436_fu_2022_p1() {
    tmp_436_fu_2022_p1 = reg_811.read();
}

void convolve_kernel::thread_tmp_438_fu_2146_p1() {
    tmp_438_fu_2146_p1 = reg_871.read();
}

void convolve_kernel::thread_tmp_43_fu_1273_p2() {
    tmp_43_fu_1273_p2 = (!tmp_4_mid2_cast_fu_1270_p1.read().is_01() || !tmp_2_reg_3767.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_4_mid2_cast_fu_1270_p1.read()) + sc_biguint<6>(tmp_2_reg_3767.read()));
}

void convolve_kernel::thread_tmp_440_fu_2262_p1() {
    tmp_440_fu_2262_p1 = reg_931.read();
}

void convolve_kernel::thread_tmp_442_fu_2378_p1() {
    tmp_442_fu_2378_p1 = reg_751.read();
}

void convolve_kernel::thread_tmp_444_fu_2542_p1() {
    tmp_444_fu_2542_p1 = reg_811.read();
}

void convolve_kernel::thread_tmp_446_fu_2674_p1() {
    tmp_446_fu_2674_p1 = reg_871.read();
}

void convolve_kernel::thread_tmp_448_fu_2800_p1() {
    tmp_448_fu_2800_p1 = reg_931.read();
}

void convolve_kernel::thread_tmp_44_fu_2723_p1() {
    tmp_44_fu_2723_p1 = tmp_634_reg_4612.read();
}

void convolve_kernel::thread_tmp_450_fu_2896_p1() {
    tmp_450_fu_2896_p1 = tmp_449_reg_3932.read();
}

void convolve_kernel::thread_tmp_452_fu_2997_p1() {
    tmp_452_fu_2997_p1 = reg_751.read();
}

void convolve_kernel::thread_tmp_454_fu_3099_p1() {
    tmp_454_fu_3099_p1 = reg_811.read();
}

void convolve_kernel::thread_tmp_456_fu_3197_p1() {
    tmp_456_fu_3197_p1 = reg_871.read();
}

void convolve_kernel::thread_tmp_458_fu_3295_p1() {
    tmp_458_fu_3295_p1 = reg_931.read();
}

void convolve_kernel::thread_tmp_460_fu_3383_p1() {
    tmp_460_fu_3383_p1 = tmp_459_reg_5757.read();
}

void convolve_kernel::thread_tmp_462_fu_3466_p1() {
    tmp_462_fu_3466_p1 = tmp_461_reg_6022.read();
}

void convolve_kernel::thread_tmp_464_fu_3549_p1() {
    tmp_464_fu_3549_p1 = tmp_463_reg_6282.read();
}

void convolve_kernel::thread_tmp_465_fu_3613_p1() {
    tmp_465_fu_3613_p1 = reg_1006.read();
}

void convolve_kernel::thread_tmp_467_fu_1921_p1() {
    tmp_467_fu_1921_p1 = reg_755.read();
}

void convolve_kernel::thread_tmp_469_fu_2547_p1() {
    tmp_469_fu_2547_p1 = tmp_468_reg_4063.read();
}

void convolve_kernel::thread_tmp_46_fu_2727_p1() {
    tmp_46_fu_2727_p1 = tmp_45_reg_4167.read();
}

void convolve_kernel::thread_tmp_471_fu_2027_p1() {
    tmp_471_fu_2027_p1 = reg_815.read();
}

void convolve_kernel::thread_tmp_473_fu_2151_p1() {
    tmp_473_fu_2151_p1 = reg_875.read();
}

void convolve_kernel::thread_tmp_475_fu_2267_p1() {
    tmp_475_fu_2267_p1 = reg_935.read();
}

void convolve_kernel::thread_tmp_477_fu_2383_p1() {
    tmp_477_fu_2383_p1 = reg_755.read();
}

void convolve_kernel::thread_tmp_479_fu_2551_p1() {
    tmp_479_fu_2551_p1 = reg_815.read();
}

void convolve_kernel::thread_tmp_47_fu_1297_p2() {
    tmp_47_fu_1297_p2 = (!tmp_4_mid2_cast4_fu_1290_p1.read().is_01() || !tmp_5_cast_fu_1287_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_4_mid2_cast4_fu_1290_p1.read()) + sc_biguint<7>(tmp_5_cast_fu_1287_p1.read()));
}

void convolve_kernel::thread_tmp_481_fu_2679_p1() {
    tmp_481_fu_2679_p1 = reg_875.read();
}

void convolve_kernel::thread_tmp_483_fu_2805_p1() {
    tmp_483_fu_2805_p1 = reg_935.read();
}

void convolve_kernel::thread_tmp_485_fu_2900_p1() {
    tmp_485_fu_2900_p1 = tmp_484_reg_3937.read();
}

void convolve_kernel::thread_tmp_487_fu_3002_p1() {
    tmp_487_fu_3002_p1 = reg_755.read();
}

void convolve_kernel::thread_tmp_489_fu_3104_p1() {
    tmp_489_fu_3104_p1 = reg_815.read();
}

void convolve_kernel::thread_tmp_48_fu_2829_p1() {
    tmp_48_fu_2829_p1 = tmp_635_reg_3877.read();
}

void convolve_kernel::thread_tmp_491_fu_3202_p1() {
    tmp_491_fu_3202_p1 = reg_875.read();
}

void convolve_kernel::thread_tmp_493_fu_3300_p1() {
    tmp_493_fu_3300_p1 = reg_935.read();
}

void convolve_kernel::thread_tmp_495_fu_3387_p1() {
    tmp_495_fu_3387_p1 = tmp_494_reg_5772.read();
}

void convolve_kernel::thread_tmp_497_fu_3470_p1() {
    tmp_497_fu_3470_p1 = tmp_496_reg_6037.read();
}

void convolve_kernel::thread_tmp_499_fu_3553_p1() {
    tmp_499_fu_3553_p1 = tmp_498_reg_6297.read();
}

void convolve_kernel::thread_tmp_4_fu_1616_p2() {
    tmp_4_fu_1616_p2 = (!ap_const_lv8_64.is_01() || !tmp_2_cast2_fu_1613_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_64) + sc_biguint<8>(tmp_2_cast2_fu_1613_p1.read()));
}

void convolve_kernel::thread_tmp_4_mid2_cast1_fu_2056_p1() {
    tmp_4_mid2_cast1_fu_2056_p1 = esl_zext<9,3>(tmp_4_mid2_reg_3783.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast2_fu_1224_p1() {
    tmp_4_mid2_cast2_fu_1224_p1 = esl_zext<10,3>(tmp_4_mid2_fu_1219_p3.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast3_fu_1622_p1() {
    tmp_4_mid2_cast3_fu_1622_p1 = esl_zext<8,3>(tmp_4_mid2_reg_3783.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast4_fu_1290_p1() {
    tmp_4_mid2_cast4_fu_1290_p1 = esl_zext<7,3>(tmp_4_mid2_reg_3783.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast_fu_1270_p1() {
    tmp_4_mid2_cast_fu_1270_p1 = esl_zext<6,3>(tmp_4_mid2_reg_3783.read());
}

void convolve_kernel::thread_tmp_4_mid2_fu_1219_p3() {
    tmp_4_mid2_fu_1219_p3 = (!exitcond_flatten_mid_reg_3731.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_mid_reg_3731.read()[0].to_bool())? j_1_reg_3739.read(): j_mid_reg_3717.read());
}

void convolve_kernel::thread_tmp_500_fu_3617_p1() {
    tmp_500_fu_3617_p1 = reg_1011.read();
}

void convolve_kernel::thread_tmp_502_fu_1926_p1() {
    tmp_502_fu_1926_p1 = reg_759.read();
}

void convolve_kernel::thread_tmp_504_fu_2556_p1() {
    tmp_504_fu_2556_p1 = tmp_503_reg_4068.read();
}

void convolve_kernel::thread_tmp_506_fu_2032_p1() {
    tmp_506_fu_2032_p1 = reg_819.read();
}

void convolve_kernel::thread_tmp_508_fu_2156_p1() {
    tmp_508_fu_2156_p1 = reg_879.read();
}

void convolve_kernel::thread_tmp_50_fu_2833_p1() {
    tmp_50_fu_2833_p1 = tmp_49_reg_4172.read();
}

void convolve_kernel::thread_tmp_510_fu_2272_p1() {
    tmp_510_fu_2272_p1 = reg_939.read();
}

void convolve_kernel::thread_tmp_512_fu_2388_p1() {
    tmp_512_fu_2388_p1 = reg_759.read();
}

void convolve_kernel::thread_tmp_514_fu_2560_p1() {
    tmp_514_fu_2560_p1 = reg_819.read();
}

void convolve_kernel::thread_tmp_516_fu_2684_p1() {
    tmp_516_fu_2684_p1 = reg_879.read();
}

void convolve_kernel::thread_tmp_518_fu_2810_p1() {
    tmp_518_fu_2810_p1 = reg_939.read();
}

void convolve_kernel::thread_tmp_51_fu_1395_p2() {
    tmp_51_fu_1395_p2 = (!tmp_4_mid2_cast4_reg_3841.read().is_01() || !tmp_6_fu_1379_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_4_mid2_cast4_reg_3841.read()) + sc_biguint<7>(tmp_6_fu_1379_p2.read()));
}

void convolve_kernel::thread_tmp_520_fu_2904_p1() {
    tmp_520_fu_2904_p1 = tmp_519_reg_3942.read();
}

void convolve_kernel::thread_tmp_522_fu_3007_p1() {
    tmp_522_fu_3007_p1 = reg_759.read();
}

void convolve_kernel::thread_tmp_524_fu_3109_p1() {
    tmp_524_fu_3109_p1 = reg_819.read();
}

void convolve_kernel::thread_tmp_526_fu_3207_p1() {
    tmp_526_fu_3207_p1 = reg_879.read();
}

void convolve_kernel::thread_tmp_528_fu_3305_p1() {
    tmp_528_fu_3305_p1 = reg_939.read();
}

void convolve_kernel::thread_tmp_52_fu_2920_p1() {
    tmp_52_fu_2920_p1 = tmp_636_reg_4732.read();
}

void convolve_kernel::thread_tmp_530_fu_3391_p1() {
    tmp_530_fu_3391_p1 = tmp_529_reg_5787.read();
}

void convolve_kernel::thread_tmp_532_fu_3474_p1() {
    tmp_532_fu_3474_p1 = tmp_531_reg_6052.read();
}

void convolve_kernel::thread_tmp_534_fu_3557_p1() {
    tmp_534_fu_3557_p1 = tmp_533_reg_6312.read();
}

void convolve_kernel::thread_tmp_535_fu_3621_p1() {
    tmp_535_fu_3621_p1 = reg_1016.read();
}

void convolve_kernel::thread_tmp_537_fu_1931_p1() {
    tmp_537_fu_1931_p1 = reg_763.read();
}

void convolve_kernel::thread_tmp_539_fu_2565_p1() {
    tmp_539_fu_2565_p1 = tmp_538_reg_4073.read();
}

void convolve_kernel::thread_tmp_541_fu_2037_p1() {
    tmp_541_fu_2037_p1 = reg_823.read();
}

void convolve_kernel::thread_tmp_543_fu_2161_p1() {
    tmp_543_fu_2161_p1 = reg_883.read();
}

void convolve_kernel::thread_tmp_545_fu_2277_p1() {
    tmp_545_fu_2277_p1 = reg_943.read();
}

void convolve_kernel::thread_tmp_547_fu_2393_p1() {
    tmp_547_fu_2393_p1 = reg_763.read();
}

void convolve_kernel::thread_tmp_549_fu_2569_p1() {
    tmp_549_fu_2569_p1 = reg_823.read();
}

void convolve_kernel::thread_tmp_54_fu_2924_p1() {
    tmp_54_fu_2924_p1 = tmp_53_reg_4177.read();
}

void convolve_kernel::thread_tmp_551_fu_2689_p1() {
    tmp_551_fu_2689_p1 = reg_883.read();
}

void convolve_kernel::thread_tmp_553_fu_2815_p1() {
    tmp_553_fu_2815_p1 = reg_943.read();
}

void convolve_kernel::thread_tmp_555_fu_2908_p1() {
    tmp_555_fu_2908_p1 = tmp_554_reg_3947.read();
}

void convolve_kernel::thread_tmp_557_fu_3012_p1() {
    tmp_557_fu_3012_p1 = reg_763.read();
}

void convolve_kernel::thread_tmp_559_fu_3114_p1() {
    tmp_559_fu_3114_p1 = reg_823.read();
}

void convolve_kernel::thread_tmp_55_fu_1400_p2() {
    tmp_55_fu_1400_p2 = (!tmp_4_mid2_cast4_reg_3841.read().is_01() || !tmp_s_fu_1385_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_4_mid2_cast4_reg_3841.read()) + sc_biguint<7>(tmp_s_fu_1385_p2.read()));
}

void convolve_kernel::thread_tmp_561_fu_3212_p1() {
    tmp_561_fu_3212_p1 = reg_883.read();
}

void convolve_kernel::thread_tmp_563_fu_3310_p1() {
    tmp_563_fu_3310_p1 = reg_943.read();
}

void convolve_kernel::thread_tmp_565_fu_3395_p1() {
    tmp_565_fu_3395_p1 = tmp_564_reg_5802.read();
}

void convolve_kernel::thread_tmp_567_fu_3478_p1() {
    tmp_567_fu_3478_p1 = tmp_566_reg_6067.read();
}

void convolve_kernel::thread_tmp_569_fu_3561_p1() {
    tmp_569_fu_3561_p1 = tmp_568_reg_6327.read();
}

void convolve_kernel::thread_tmp_56_fu_3022_p1() {
    tmp_56_fu_3022_p1 = tmp_637_reg_4932.read();
}

void convolve_kernel::thread_tmp_570_fu_3625_p1() {
    tmp_570_fu_3625_p1 = reg_1021.read();
}

void convolve_kernel::thread_tmp_572_fu_1936_p1() {
    tmp_572_fu_1936_p1 = reg_767.read();
}

void convolve_kernel::thread_tmp_574_fu_2574_p1() {
    tmp_574_fu_2574_p1 = tmp_573_reg_4078.read();
}

void convolve_kernel::thread_tmp_576_fu_2042_p1() {
    tmp_576_fu_2042_p1 = reg_827.read();
}

void convolve_kernel::thread_tmp_578_fu_2166_p1() {
    tmp_578_fu_2166_p1 = reg_887.read();
}

void convolve_kernel::thread_tmp_580_fu_2282_p1() {
    tmp_580_fu_2282_p1 = reg_947.read();
}

void convolve_kernel::thread_tmp_582_fu_2398_p1() {
    tmp_582_fu_2398_p1 = reg_767.read();
}

void convolve_kernel::thread_tmp_584_fu_2578_p1() {
    tmp_584_fu_2578_p1 = reg_827.read();
}

void convolve_kernel::thread_tmp_586_fu_2694_p1() {
    tmp_586_fu_2694_p1 = reg_887.read();
}

void convolve_kernel::thread_tmp_588_fu_2820_p1() {
    tmp_588_fu_2820_p1 = reg_947.read();
}

void convolve_kernel::thread_tmp_58_fu_3026_p1() {
    tmp_58_fu_3026_p1 = tmp_57_reg_4182.read();
}

void convolve_kernel::thread_tmp_590_fu_2912_p1() {
    tmp_590_fu_2912_p1 = tmp_589_reg_3952.read();
}

void convolve_kernel::thread_tmp_592_fu_3017_p1() {
    tmp_592_fu_3017_p1 = reg_767.read();
}

void convolve_kernel::thread_tmp_594_fu_3119_p1() {
    tmp_594_fu_3119_p1 = reg_827.read();
}

void convolve_kernel::thread_tmp_596_fu_3217_p1() {
    tmp_596_fu_3217_p1 = reg_887.read();
}

void convolve_kernel::thread_tmp_598_fu_3315_p1() {
    tmp_598_fu_3315_p1 = reg_947.read();
}

void convolve_kernel::thread_tmp_59_fu_1629_p2() {
    tmp_59_fu_1629_p2 = (!tmp_4_mid2_cast3_fu_1622_p1.read().is_01() || !tmp_4_fu_1616_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_4_mid2_cast3_fu_1622_p1.read()) + sc_biguint<8>(tmp_4_fu_1616_p2.read()));
}

void convolve_kernel::thread_tmp_5_cast_fu_1287_p1() {
    tmp_5_cast_fu_1287_p1 = esl_zext<7,6>(tmp_5_reg_3814.read());
}

void convolve_kernel::thread_tmp_5_fu_1265_p2() {
    tmp_5_fu_1265_p2 = (!ap_const_lv6_19.is_01() || !tmp_2_reg_3767.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_19) + sc_biguint<6>(tmp_2_reg_3767.read()));
}

void convolve_kernel::thread_tmp_600_fu_3399_p1() {
    tmp_600_fu_3399_p1 = tmp_599_reg_5817.read();
}

void convolve_kernel::thread_tmp_602_fu_3482_p1() {
    tmp_602_fu_3482_p1 = tmp_601_reg_6082.read();
}

void convolve_kernel::thread_tmp_604_fu_3565_p1() {
    tmp_604_fu_3565_p1 = tmp_603_reg_6342.read();
}

void convolve_kernel::thread_tmp_605_fu_3629_p1() {
    tmp_605_fu_3629_p1 = reg_1026.read();
}

void convolve_kernel::thread_tmp_608_fu_2063_p2() {
    tmp_608_fu_2063_p2 = (!tmp_4_mid2_cast1_fu_2056_p1.read().is_01() || !tmp_13_fu_2050_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_fu_2056_p1.read()) + sc_biguint<9>(tmp_13_fu_2050_p2.read()));
}

void convolve_kernel::thread_tmp_609_fu_2180_p2() {
    tmp_609_fu_2180_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_15_fu_2171_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_15_fu_2171_p2.read()));
}

void convolve_kernel::thread_tmp_60_fu_3124_p1() {
    tmp_60_fu_3124_p1 = tmp_638_reg_5202.read();
}

void convolve_kernel::thread_tmp_610_fu_2296_p2() {
    tmp_610_fu_2296_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_17_fu_2287_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_17_fu_2287_p2.read()));
}

void convolve_kernel::thread_tmp_611_cast_fu_1176_p3() {
    tmp_611_cast_fu_1176_p3 = esl_concat<7,3>(ap_const_lv7_5, tmp_1_mid2_v_reg_3722.read());
}

void convolve_kernel::thread_tmp_611_fu_2412_p2() {
    tmp_611_fu_2412_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_19_fu_2403_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_19_fu_2403_p2.read()));
}

void convolve_kernel::thread_tmp_612_fu_2592_p2() {
    tmp_612_fu_2592_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_23_fu_2583_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_23_fu_2583_p2.read()));
}

void convolve_kernel::thread_tmp_613_fu_2713_p2() {
    tmp_613_fu_2713_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_27_fu_2699_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_27_fu_2699_p2.read()));
}

void convolve_kernel::thread_tmp_614_fu_2718_p2() {
    tmp_614_fu_2718_p2 = (!tmp_4_mid2_cast1_reg_4452.read().is_01() || !tmp_31_fu_2704_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_4_mid2_cast1_reg_4452.read()) + sc_biguint<9>(tmp_31_fu_2704_p2.read()));
}

void convolve_kernel::thread_tmp_615_fu_1241_p2() {
    tmp_615_fu_1241_p2 = (tmp_9_mid1_reg_3744.read() | exitcond_flatten_mid_reg_3731.read());
}

void convolve_kernel::thread_tmp_616_fu_1245_p2() {
    tmp_616_fu_1245_p2 = (tmp_615_fu_1241_p2.read() | exitcond_flatten_reg_3684.read());
}

void convolve_kernel::thread_tmp_617_fu_1308_p3() {
    tmp_617_fu_1308_p3 = esl_concat<5,4>(p_v_fu_1303_p3.read(), ap_const_lv4_0);
}

void convolve_kernel::thread_tmp_618_fu_1320_p2() {
    tmp_618_fu_1320_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): row_b_1_reg_3834.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void convolve_kernel::thread_tmp_619_fu_1418_p3() {
    tmp_619_fu_1418_p3 = esl_concat<6,5>(tmp_8_cast_mid2_reg_3977.read(), ap_const_lv5_0);
}

void convolve_kernel::thread_tmp_620_fu_1429_p3() {
    tmp_620_fu_1429_p3 = esl_concat<6,2>(tmp_8_cast_mid2_reg_3977.read(), ap_const_lv2_0);
}

void convolve_kernel::thread_tmp_621_cast_fu_1293_p1() {
    tmp_621_cast_fu_1293_p1 = esl_zext<64,6>(tmp_43_reg_3824.read());
}

void convolve_kernel::thread_tmp_621_fu_1440_p2() {
    tmp_621_fu_1440_p2 = (!p_shl_cast_fu_1425_p1.read().is_01() || !p_shl2_cast_fu_1436_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl_cast_fu_1425_p1.read()) + sc_biguint<12>(p_shl2_cast_fu_1436_p1.read()));
}

void convolve_kernel::thread_tmp_622_cast_fu_1391_p1() {
    tmp_622_cast_fu_1391_p1 = esl_zext<64,7>(tmp_47_reg_3852.read());
}

void convolve_kernel::thread_tmp_622_fu_1342_p2() {
    tmp_622_fu_1342_p2 = (!col_b_cast1_cast_fu_1339_p1.read().is_01() || !tmp_642_cast_fu_1316_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(col_b_cast1_cast_fu_1339_p1.read()) + sc_biguint<10>(tmp_642_cast_fu_1316_p1.read()));
}

void convolve_kernel::thread_tmp_623_cast_fu_1414_p1() {
    tmp_623_cast_fu_1414_p1 = esl_zext<64,7>(tmp_51_reg_3967.read());
}

void convolve_kernel::thread_tmp_623_fu_1353_p2() {
    tmp_623_fu_1353_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): col_b_mid2_reg_3802.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void convolve_kernel::thread_tmp_624_cast_fu_1625_p1() {
    tmp_624_cast_fu_1625_p1 = esl_zext<64,7>(tmp_55_reg_3972.read());
}

void convolve_kernel::thread_tmp_624_fu_1449_p2() {
    tmp_624_fu_1449_p2 = (!tmp_3_cast_cast_fu_1446_p1.read().is_01() || !tmp_621_fu_1440_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_cast_cast_fu_1446_p1.read()) + sc_biguint<12>(tmp_621_fu_1440_p2.read()));
}

void convolve_kernel::thread_tmp_625_cast_fu_1648_p1() {
    tmp_625_cast_fu_1648_p1 = esl_zext<64,8>(tmp_59_reg_4102.read());
}

void convolve_kernel::thread_tmp_625_fu_1410_p1() {
    tmp_625_fu_1410_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_626_cast_fu_1825_p1() {
    tmp_626_cast_fu_1825_p1 = esl_zext<64,8>(tmp_63_reg_4122.read());
}

void convolve_kernel::thread_tmp_626_fu_1657_p1() {
    tmp_626_fu_1657_p1 = bufi_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_627_cast_fu_1941_p1() {
    tmp_627_cast_fu_1941_p1 = esl_zext<64,8>(tmp_67_reg_4217.read());
}

void convolve_kernel::thread_tmp_627_fu_1455_p1() {
    tmp_627_fu_1455_p1 = bufo_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_628_cast_fu_2059_p1() {
    tmp_628_cast_fu_2059_p1 = esl_zext<64,8>(tmp_71_reg_4222.read());
}

void convolve_kernel::thread_tmp_628_fu_1459_p1() {
    tmp_628_fu_1459_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_629_cast_fu_1278_p1() {
    tmp_629_cast_fu_1278_p1 = esl_zext<64,10>(tmp_75_reg_3792.read());
}

void convolve_kernel::thread_tmp_629_fu_1639_p1() {
    tmp_629_fu_1639_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_62_fu_3128_p1() {
    tmp_62_fu_3128_p1 = tmp_61_reg_4187.read();
}

void convolve_kernel::thread_tmp_630_cast_fu_2176_p1() {
    tmp_630_cast_fu_2176_p1 = esl_zext<64,9>(tmp_608_reg_4467.read());
}

void convolve_kernel::thread_tmp_630_fu_1681_p1() {
    tmp_630_fu_1681_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_631_cast_fu_2292_p1() {
    tmp_631_cast_fu_2292_p1 = esl_zext<64,9>(tmp_609_reg_4582.read());
}

void convolve_kernel::thread_tmp_631_fu_1862_p1() {
    tmp_631_fu_1862_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_632_cast_fu_2408_p1() {
    tmp_632_cast_fu_2408_p1 = esl_zext<64,9>(tmp_610_reg_4697.read());
}

void convolve_kernel::thread_tmp_632_fu_1968_p1() {
    tmp_632_fu_1968_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_633_cast_fu_2588_p1() {
    tmp_633_cast_fu_2588_p1 = esl_zext<64,9>(tmp_611_reg_4892.read());
}

void convolve_kernel::thread_tmp_633_fu_2092_p1() {
    tmp_633_fu_2092_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_634_cast_fu_2709_p1() {
    tmp_634_cast_fu_2709_p1 = esl_zext<64,9>(tmp_612_reg_5167.read());
}

void convolve_kernel::thread_tmp_634_fu_2208_p1() {
    tmp_634_fu_2208_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_635_cast_fu_2825_p1() {
    tmp_635_cast_fu_2825_p1 = esl_zext<64,9>(tmp_613_reg_5362.read());
}

void convolve_kernel::thread_tmp_635_fu_1367_p1() {
    tmp_635_fu_1367_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_636_cast_fu_2916_p1() {
    tmp_636_cast_fu_2916_p1 = esl_zext<64,9>(tmp_614_reg_5367.read());
}

void convolve_kernel::thread_tmp_636_fu_2324_p1() {
    tmp_636_fu_2324_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_637_fu_2444_p1() {
    tmp_637_fu_2444_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_638_fu_2620_p1() {
    tmp_638_fu_2620_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_639_fu_2746_p1() {
    tmp_639_fu_2746_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_63_fu_1652_p2() {
    tmp_63_fu_1652_p2 = (!tmp_4_mid2_cast3_reg_4090.read().is_01() || !tmp_7_fu_1643_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_4_mid2_cast3_reg_4090.read()) + sc_biguint<8>(tmp_7_fu_1643_p2.read()));
}

void convolve_kernel::thread_tmp_640_fu_2852_p1() {
    tmp_640_fu_2852_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_641_fu_2943_p1() {
    tmp_641_fu_2943_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_642_cast_fu_1316_p1() {
    tmp_642_cast_fu_1316_p1 = esl_zext<10,9>(tmp_617_fu_1308_p3.read());
}

void convolve_kernel::thread_tmp_642_fu_3045_p1() {
    tmp_642_fu_3045_p1 = bufw_Dout_A.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_647_cast_fu_1348_p1() {
    tmp_647_cast_fu_1348_p1 = esl_zext<64,10>(tmp_622_fu_1342_p2.read());
}

void convolve_kernel::thread_tmp_649_cast_fu_1635_p1() {
    tmp_649_cast_fu_1635_p1 = esl_zext<64,12>(tmp_624_reg_3993.read());
}

void convolve_kernel::thread_tmp_64_fu_3222_p1() {
    tmp_64_fu_3222_p1 = tmp_639_reg_5402.read();
}

void convolve_kernel::thread_tmp_66_fu_3226_p1() {
    tmp_66_fu_3226_p1 = tmp_65_reg_4192.read();
}

void convolve_kernel::thread_tmp_67_fu_1829_p2() {
    tmp_67_fu_1829_p2 = (!tmp_4_mid2_cast3_reg_4090.read().is_01() || !tmp_9_fu_1815_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_4_mid2_cast3_reg_4090.read()) + sc_biguint<8>(tmp_9_fu_1815_p2.read()));
}

void convolve_kernel::thread_tmp_68_fu_3320_p1() {
    tmp_68_fu_3320_p1 = tmp_640_reg_5592.read();
}

void convolve_kernel::thread_tmp_6_fu_1379_p2() {
    tmp_6_fu_1379_p2 = (!ap_const_lv7_32.is_01() || !tmp_2_cast_fu_1376_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_32) + sc_biguint<7>(tmp_2_cast_fu_1376_p1.read()));
}

void convolve_kernel::thread_tmp_70_fu_3324_p1() {
    tmp_70_fu_3324_p1 = tmp_69_reg_4197.read();
}

void convolve_kernel::thread_tmp_71_fu_1834_p2() {
    tmp_71_fu_1834_p2 = (!tmp_4_mid2_cast3_reg_4090.read().is_01() || !tmp_10_fu_1820_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_4_mid2_cast3_reg_4090.read()) + sc_biguint<8>(tmp_10_fu_1820_p2.read()));
}

void convolve_kernel::thread_tmp_72_fu_3403_p1() {
    tmp_72_fu_3403_p1 = tmp_641_reg_5857.read();
}

void convolve_kernel::thread_tmp_74_fu_3407_p1() {
    tmp_74_fu_3407_p1 = tmp_73_reg_4202.read();
}

void convolve_kernel::thread_tmp_75_fu_1228_p2() {
    tmp_75_fu_1228_p2 = (!tmp_4_mid2_cast2_fu_1224_p1.read().is_01() || !tmp_11_fu_1192_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_4_mid2_cast2_fu_1224_p1.read()) + sc_biguint<10>(tmp_11_fu_1192_p2.read()));
}

void convolve_kernel::thread_tmp_76_fu_3486_p1() {
    tmp_76_fu_3486_p1 = tmp_642_reg_6117.read();
}

void convolve_kernel::thread_tmp_78_fu_3490_p1() {
    tmp_78_fu_3490_p1 = tmp_77_reg_4207.read();
}

void convolve_kernel::thread_tmp_79_fu_3569_p1() {
    tmp_79_fu_3569_p1 = reg_951.read();
}

void convolve_kernel::thread_tmp_7_cast_fu_1041_p1() {
    tmp_7_cast_fu_1041_p1 = esl_zext<6,5>(tmp_fu_1035_p2.read());
}

void convolve_kernel::thread_tmp_7_cast_mid1_fu_1325_p1() {
    tmp_7_cast_mid1_fu_1325_p1 = esl_zext<6,5>(tmp_618_fu_1320_p2.read());
}

void convolve_kernel::thread_tmp_7_fu_1643_p2() {
    tmp_7_fu_1643_p2 = (!ap_const_lv8_7D.is_01() || !tmp_2_cast2_reg_4083.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7D) + sc_biguint<8>(tmp_2_cast2_reg_4083.read()));
}

void convolve_kernel::thread_tmp_81_fu_1866_p1() {
    tmp_81_fu_1866_p1 = reg_711.read();
}

void convolve_kernel::thread_tmp_83_fu_2448_p1() {
    tmp_83_fu_2448_p1 = tmp_82_reg_4008.read();
}

void convolve_kernel::thread_tmp_85_fu_1972_p1() {
    tmp_85_fu_1972_p1 = reg_771.read();
}

void convolve_kernel::thread_tmp_87_fu_2096_p1() {
    tmp_87_fu_2096_p1 = reg_831.read();
}

void convolve_kernel::thread_tmp_89_fu_2212_p1() {
    tmp_89_fu_2212_p1 = reg_891.read();
}

void convolve_kernel::thread_tmp_8_cast_mid2_fu_1405_p3() {
    tmp_8_cast_mid2_fu_1405_p3 = (!tmp_9_mid1_reg_3744.read()[0].is_01())? sc_lv<6>(): ((tmp_9_mid1_reg_3744.read()[0].to_bool())? tmp_8_mid1_reg_3857.read(): tmp_8_cast_mid5_reg_3797.read());
}

void convolve_kernel::thread_tmp_8_cast_mid3_fu_1201_p3() {
    tmp_8_cast_mid3_fu_1201_p3 = (!exitcond_flatten_reg_3684.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_reg_3684.read()[0].to_bool())? tmp_8_cast_mid_cast_fu_1198_p1.read(): tmp_8_reg_3670.read());
}

void convolve_kernel::thread_tmp_8_cast_mid5_fu_1234_p3() {
    tmp_8_cast_mid5_fu_1234_p3 = (!exitcond_flatten_mid_reg_3731.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_mid_reg_3731.read()[0].to_bool())? tmp_1_mid2_cast_fu_1156_p1.read(): tmp_8_cast_mid3_fu_1201_p3.read());
}

void convolve_kernel::thread_tmp_8_cast_mid_cast_fu_1198_p1() {
    tmp_8_cast_mid_cast_fu_1198_p1 = esl_zext<6,3>(i_1_reg_3712.read());
}

void convolve_kernel::thread_tmp_8_fu_1045_p2() {
    tmp_8_fu_1045_p2 = (!tmp_1_cast_fu_1031_p1.read().is_01() || !tmp_7_cast_fu_1041_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_1_cast_fu_1031_p1.read()) + sc_biguint<6>(tmp_7_cast_fu_1041_p1.read()));
}

void convolve_kernel::thread_tmp_8_mid1_fu_1329_p2() {
    tmp_8_mid1_fu_1329_p2 = (!tmp_7_cast_mid1_fu_1325_p1.read().is_01() || !tmp_1_mid2_cast_reg_3762.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_7_cast_mid1_fu_1325_p1.read()) + sc_biguint<6>(tmp_1_mid2_cast_reg_3762.read()));
}

void convolve_kernel::thread_tmp_91_fu_2328_p1() {
    tmp_91_fu_2328_p1 = reg_711.read();
}

void convolve_kernel::thread_tmp_93_fu_2452_p1() {
    tmp_93_fu_2452_p1 = reg_771.read();
}

void convolve_kernel::thread_tmp_95_fu_2624_p1() {
    tmp_95_fu_2624_p1 = reg_831.read();
}

void convolve_kernel::thread_tmp_97_fu_2750_p1() {
    tmp_97_fu_2750_p1 = reg_891.read();
}

void convolve_kernel::thread_tmp_99_fu_2856_p1() {
    tmp_99_fu_2856_p1 = tmp_98_reg_3882.read();
}

void convolve_kernel::thread_tmp_9_fu_1815_p2() {
    tmp_9_fu_1815_p2 = (!ap_const_lv8_96.is_01() || !tmp_2_cast2_reg_4083.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_96) + sc_biguint<8>(tmp_2_cast2_reg_4083.read()));
}

void convolve_kernel::thread_tmp_9_mid1_fu_1138_p2() {
    tmp_9_mid1_fu_1138_p2 = (tmp_9_mid_fu_1112_p2.read() & not_exitcond_flatten_1_fu_1133_p2.read());
}

void convolve_kernel::thread_tmp_9_mid_fu_1112_p2() {
    tmp_9_mid_fu_1112_p2 = (tmp_35_reg_3696.read() & not_exitcond_flatten_fu_1107_p2.read());
}

void convolve_kernel::thread_tmp_cast_fu_1358_p1() {
    tmp_cast_fu_1358_p1 = esl_zext<6,5>(tmp_623_fu_1353_p2.read());
}

void convolve_kernel::thread_tmp_fu_1035_p2() {
    tmp_fu_1035_p2 = (!ap_const_lv5_1.is_01())? sc_lv<5>(): row_b_phi_fu_413_p4.read() << (unsigned short)ap_const_lv5_1.to_uint();
}

void convolve_kernel::thread_tmp_s_fu_1385_p2() {
    tmp_s_fu_1385_p2 = (!ap_const_lv7_4B.is_01() || !tmp_2_cast_fu_1376_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(ap_const_lv7_4B) + sc_biguint<7>(tmp_2_cast_fu_1376_p1.read()));
}

}

