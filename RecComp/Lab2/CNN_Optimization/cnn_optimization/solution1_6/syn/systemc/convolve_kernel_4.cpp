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

void convolve_kernel::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void convolve_kernel::thread_ap_CS_fsm_state77() {
    ap_CS_fsm_state77 = ap_CS_fsm.read()[9];
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

void convolve_kernel::thread_ap_block_state10_pp0_stage0_iter1() {
    ap_block_state10_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state11_pp0_stage1_iter1() {
    ap_block_state11_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state12_pp0_stage2_iter1() {
    ap_block_state12_pp0_stage2_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state13_pp0_stage3_iter1() {
    ap_block_state13_pp0_stage3_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state14_pp0_stage4_iter1() {
    ap_block_state14_pp0_stage4_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state15_pp0_stage5_iter1() {
    ap_block_state15_pp0_stage5_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state16_pp0_stage6_iter1() {
    ap_block_state16_pp0_stage6_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state17_pp0_stage7_iter1() {
    ap_block_state17_pp0_stage7_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state18_pp0_stage0_iter2() {
    ap_block_state18_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state19_pp0_stage1_iter2() {
    ap_block_state19_pp0_stage1_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state20_pp0_stage2_iter2() {
    ap_block_state20_pp0_stage2_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state21_pp0_stage3_iter2() {
    ap_block_state21_pp0_stage3_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state22_pp0_stage4_iter2() {
    ap_block_state22_pp0_stage4_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state23_pp0_stage5_iter2() {
    ap_block_state23_pp0_stage5_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state24_pp0_stage6_iter2() {
    ap_block_state24_pp0_stage6_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state25_pp0_stage7_iter2() {
    ap_block_state25_pp0_stage7_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state26_pp0_stage0_iter3() {
    ap_block_state26_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state27_pp0_stage1_iter3() {
    ap_block_state27_pp0_stage1_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state28_pp0_stage2_iter3() {
    ap_block_state28_pp0_stage2_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state29_pp0_stage3_iter3() {
    ap_block_state29_pp0_stage3_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state30_pp0_stage4_iter3() {
    ap_block_state30_pp0_stage4_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state31_pp0_stage5_iter3() {
    ap_block_state31_pp0_stage5_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state32_pp0_stage6_iter3() {
    ap_block_state32_pp0_stage6_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state33_pp0_stage7_iter3() {
    ap_block_state33_pp0_stage7_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state34_pp0_stage0_iter4() {
    ap_block_state34_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state35_pp0_stage1_iter4() {
    ap_block_state35_pp0_stage1_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state36_pp0_stage2_iter4() {
    ap_block_state36_pp0_stage2_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state37_pp0_stage3_iter4() {
    ap_block_state37_pp0_stage3_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state38_pp0_stage4_iter4() {
    ap_block_state38_pp0_stage4_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state39_pp0_stage5_iter4() {
    ap_block_state39_pp0_stage5_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state40_pp0_stage6_iter4() {
    ap_block_state40_pp0_stage6_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state41_pp0_stage7_iter4() {
    ap_block_state41_pp0_stage7_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state42_pp0_stage0_iter5() {
    ap_block_state42_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state43_pp0_stage1_iter5() {
    ap_block_state43_pp0_stage1_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state44_pp0_stage2_iter5() {
    ap_block_state44_pp0_stage2_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state45_pp0_stage3_iter5() {
    ap_block_state45_pp0_stage3_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state46_pp0_stage4_iter5() {
    ap_block_state46_pp0_stage4_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state47_pp0_stage5_iter5() {
    ap_block_state47_pp0_stage5_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state48_pp0_stage6_iter5() {
    ap_block_state48_pp0_stage6_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state49_pp0_stage7_iter5() {
    ap_block_state49_pp0_stage7_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state4_pp0_stage2_iter0() {
    ap_block_state4_pp0_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state50_pp0_stage0_iter6() {
    ap_block_state50_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state51_pp0_stage1_iter6() {
    ap_block_state51_pp0_stage1_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state52_pp0_stage2_iter6() {
    ap_block_state52_pp0_stage2_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state53_pp0_stage3_iter6() {
    ap_block_state53_pp0_stage3_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state54_pp0_stage4_iter6() {
    ap_block_state54_pp0_stage4_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state55_pp0_stage5_iter6() {
    ap_block_state55_pp0_stage5_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state56_pp0_stage6_iter6() {
    ap_block_state56_pp0_stage6_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state57_pp0_stage7_iter6() {
    ap_block_state57_pp0_stage7_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state58_pp0_stage0_iter7() {
    ap_block_state58_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state59_pp0_stage1_iter7() {
    ap_block_state59_pp0_stage1_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state5_pp0_stage3_iter0() {
    ap_block_state5_pp0_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state60_pp0_stage2_iter7() {
    ap_block_state60_pp0_stage2_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state61_pp0_stage3_iter7() {
    ap_block_state61_pp0_stage3_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state62_pp0_stage4_iter7() {
    ap_block_state62_pp0_stage4_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state63_pp0_stage5_iter7() {
    ap_block_state63_pp0_stage5_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state64_pp0_stage6_iter7() {
    ap_block_state64_pp0_stage6_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state65_pp0_stage7_iter7() {
    ap_block_state65_pp0_stage7_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state66_pp0_stage0_iter8() {
    ap_block_state66_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state67_pp0_stage1_iter8() {
    ap_block_state67_pp0_stage1_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state68_pp0_stage2_iter8() {
    ap_block_state68_pp0_stage2_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state69_pp0_stage3_iter8() {
    ap_block_state69_pp0_stage3_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state6_pp0_stage4_iter0() {
    ap_block_state6_pp0_stage4_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state70_pp0_stage4_iter8() {
    ap_block_state70_pp0_stage4_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state71_pp0_stage5_iter8() {
    ap_block_state71_pp0_stage5_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state72_pp0_stage6_iter8() {
    ap_block_state72_pp0_stage6_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state73_pp0_stage7_iter8() {
    ap_block_state73_pp0_stage7_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state74_pp0_stage0_iter9() {
    ap_block_state74_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state75_pp0_stage1_iter9() {
    ap_block_state75_pp0_stage1_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state76_pp0_stage2_iter9() {
    ap_block_state76_pp0_stage2_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state7_pp0_stage5_iter0() {
    ap_block_state7_pp0_stage5_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state8_pp0_stage6_iter0() {
    ap_block_state8_pp0_stage6_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_block_state9_pp0_stage7_iter0() {
    ap_block_state9_pp0_stage7_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void convolve_kernel::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten1_fu_1535_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void convolve_kernel::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state77.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_0_Addr_A() {
    bufi_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufi_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufi_0_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig = tmp_356_cast_fu_2003_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig = tmp_354_cast_fu_1991_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig = tmp_352_cast_fu_1959_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_A_orig = tmp_350_cast_fu_1873_p1.read();
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
        bufi_0_Addr_B_orig = tmp_357_cast_fu_2009_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_B_orig = tmp_355_cast_fu_1997_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_B_orig = tmp_353_cast_fu_1965_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_0_Addr_B_orig = tmp_351_cast_fu_1879_p1.read();
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufi_0_EN_A = ap_const_logic_1;
    } else {
        bufi_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_0_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig = tmp_356_cast_fu_2003_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig = tmp_354_cast_fu_1991_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig = tmp_352_cast_fu_1959_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_A_orig = tmp_350_cast_fu_1873_p1.read();
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
        bufi_1_Addr_B_orig = tmp_357_cast_fu_2009_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_B_orig = tmp_355_cast_fu_1997_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_B_orig = tmp_353_cast_fu_1965_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_1_Addr_B_orig = tmp_351_cast_fu_1879_p1.read();
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufi_1_EN_A = ap_const_logic_1;
    } else {
        bufi_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_1_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig = tmp_356_cast_fu_2003_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig = tmp_354_cast_fu_1991_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig = tmp_352_cast_fu_1959_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_A_orig = tmp_350_cast_fu_1873_p1.read();
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
        bufi_2_Addr_B_orig = tmp_357_cast_fu_2009_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_B_orig = tmp_355_cast_fu_1997_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_B_orig = tmp_353_cast_fu_1965_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufi_2_Addr_B_orig = tmp_351_cast_fu_1879_p1.read();
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
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufi_2_EN_A = ap_const_logic_1;
    } else {
        bufi_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufi_2_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
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

void convolve_kernel::thread_bufo_Addr_A() {
    bufo_Addr_A = (!ap_const_lv32_6.is_01())? sc_lv<32>(): bufo_Addr_A_orig.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void convolve_kernel::thread_bufo_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (ap_reg_pp0_iter8_bufo_addr_6_reg_4573.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_4_reg_4433.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_2_reg_4423.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_reg_4311.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig = tmp_335_fu_2111_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig = tmp_331_fu_2075_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig = tmp_249_fu_2047_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_A_orig = tmp_89_fu_2022_p1.read();
    } else {
        bufo_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufo_Addr_B() {
    bufo_Addr_B = (!ap_const_lv32_6.is_01())? sc_lv<32>(): bufo_Addr_B_orig.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void convolve_kernel::thread_bufo_Addr_B_orig() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter8_bufo_addr_7_reg_4578.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_5_reg_4438.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_3_reg_4428.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig =  (sc_lv<32>) (ap_reg_pp0_iter7_bufo_addr_1_reg_4316.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig = tmp_337_fu_2125_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig = tmp_333_fu_2089_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig = tmp_329_fu_2061_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Addr_B_orig = tmp_169_fu_2033_p3.read();
    } else {
        bufo_Addr_B_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufo_Clk_A() {
    bufo_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_Clk_B() {
    bufo_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufo_Din_A() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_A =  (sc_lv<512>) (tmp_288_fu_3033_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_A =  (sc_lv<512>) (tmp_208_fu_2893_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_A =  (sc_lv<512>) (tmp_128_fu_2753_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_A =  (sc_lv<512>) (tmp_48_fu_2613_p14.read());
    } else {
        bufo_Din_A =  (sc_lv<512>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void convolve_kernel::thread_bufo_Din_B() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_B =  (sc_lv<512>) (tmp_328_fu_3103_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_B =  (sc_lv<512>) (tmp_248_fu_2963_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_B =  (sc_lv<512>) (tmp_168_fu_2823_p14.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        bufo_Din_B =  (sc_lv<512>) (tmp_88_fu_2683_p14.read());
    } else {
        bufo_Din_B =  (sc_lv<512>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void convolve_kernel::thread_bufo_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read())))) {
        bufo_EN_A = ap_const_logic_1;
    } else {
        bufo_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read())))) {
        bufo_EN_B = ap_const_logic_1;
    } else {
        bufo_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufo_Rst_A() {
    bufo_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufo_Rst_B() {
    bufo_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufo_WEN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter7_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter7_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter8_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter9_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)))) {
        bufo_WEN_A = ap_const_lv64_FFFFFFFFFFFFFFFF;
    } else {
        bufo_WEN_A = ap_const_lv64_0;
    }
}

void convolve_kernel::thread_bufo_WEN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter7.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter7_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter7_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter8_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()) && 
          esl_seteq<1,1,1>(ap_reg_pp0_iter9_exitcond_flatten1_reg_3169.read(), ap_const_lv1_0)))) {
        bufo_WEN_B = ap_const_lv64_FFFFFFFFFFFFFFFF;
    } else {
        bufo_WEN_B = ap_const_lv64_0;
    }
}

void convolve_kernel::thread_bufw_0_Addr_A() {
    bufw_0_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_0_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_0_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_0_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_0_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_0_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_0_Addr_B() {
    bufw_0_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_0_Clk_A() {
    bufw_0_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_Clk_B() {
    bufw_0_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_0_Din_A() {
    bufw_0_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_Din_B() {
    bufw_0_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_0_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_0_EN_A = ap_const_logic_1;
    } else {
        bufw_0_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_0_EN_B = ap_const_logic_1;
    } else {
        bufw_0_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_0_Rst_A() {
    bufw_0_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_Rst_B() {
    bufw_0_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_0_WEN_A() {
    bufw_0_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_0_WEN_B() {
    bufw_0_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_10_Addr_A() {
    bufw_10_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_10_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_10_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_10_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_10_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_10_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_10_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_10_Addr_B() {
    bufw_10_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_10_Clk_A() {
    bufw_10_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_10_Clk_B() {
    bufw_10_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_10_Din_A() {
    bufw_10_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_10_Din_B() {
    bufw_10_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_10_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_10_EN_A = ap_const_logic_1;
    } else {
        bufw_10_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_10_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_10_EN_B = ap_const_logic_1;
    } else {
        bufw_10_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_10_Rst_A() {
    bufw_10_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_10_Rst_B() {
    bufw_10_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_10_WEN_A() {
    bufw_10_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_10_WEN_B() {
    bufw_10_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_11_Addr_A() {
    bufw_11_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_11_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_11_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_11_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_11_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_11_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_11_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_11_Addr_B() {
    bufw_11_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_11_Clk_A() {
    bufw_11_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_11_Clk_B() {
    bufw_11_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_11_Din_A() {
    bufw_11_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_11_Din_B() {
    bufw_11_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_11_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_11_EN_A = ap_const_logic_1;
    } else {
        bufw_11_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_11_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_11_EN_B = ap_const_logic_1;
    } else {
        bufw_11_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_11_Rst_A() {
    bufw_11_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_11_Rst_B() {
    bufw_11_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_11_WEN_A() {
    bufw_11_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_11_WEN_B() {
    bufw_11_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_12_Addr_A() {
    bufw_12_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_12_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_12_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_12_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_12_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_12_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_12_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_12_Addr_B() {
    bufw_12_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_12_Clk_A() {
    bufw_12_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_12_Clk_B() {
    bufw_12_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_12_Din_A() {
    bufw_12_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_12_Din_B() {
    bufw_12_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_12_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_12_EN_A = ap_const_logic_1;
    } else {
        bufw_12_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_12_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_12_EN_B = ap_const_logic_1;
    } else {
        bufw_12_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_12_Rst_A() {
    bufw_12_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_12_Rst_B() {
    bufw_12_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_12_WEN_A() {
    bufw_12_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_12_WEN_B() {
    bufw_12_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_Addr_A() {
    bufw_1_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_1_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_1_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_1_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_1_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_1_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_1_Addr_B() {
    bufw_1_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_1_Clk_A() {
    bufw_1_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_Clk_B() {
    bufw_1_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_1_Din_A() {
    bufw_1_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_Din_B() {
    bufw_1_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_1_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_1_EN_A = ap_const_logic_1;
    } else {
        bufw_1_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_1_EN_B = ap_const_logic_1;
    } else {
        bufw_1_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_1_Rst_A() {
    bufw_1_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_Rst_B() {
    bufw_1_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_1_WEN_A() {
    bufw_1_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_1_WEN_B() {
    bufw_1_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_Addr_A() {
    bufw_2_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_2_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_2_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_2_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_2_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_2_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_2_Addr_B() {
    bufw_2_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_2_Clk_A() {
    bufw_2_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_Clk_B() {
    bufw_2_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_2_Din_A() {
    bufw_2_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_Din_B() {
    bufw_2_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_2_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_2_EN_A = ap_const_logic_1;
    } else {
        bufw_2_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_2_EN_B = ap_const_logic_1;
    } else {
        bufw_2_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_2_Rst_A() {
    bufw_2_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_Rst_B() {
    bufw_2_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_2_WEN_A() {
    bufw_2_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_2_WEN_B() {
    bufw_2_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_Addr_A() {
    bufw_3_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_3_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_3_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_3_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_3_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_3_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_3_Addr_B() {
    bufw_3_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_3_Clk_A() {
    bufw_3_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_Clk_B() {
    bufw_3_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_3_Din_A() {
    bufw_3_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_Din_B() {
    bufw_3_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_3_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_3_EN_A = ap_const_logic_1;
    } else {
        bufw_3_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_3_EN_B = ap_const_logic_1;
    } else {
        bufw_3_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_3_Rst_A() {
    bufw_3_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_Rst_B() {
    bufw_3_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_3_WEN_A() {
    bufw_3_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_3_WEN_B() {
    bufw_3_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_Addr_A() {
    bufw_4_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_4_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_4_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_4_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_4_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_4_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_4_Addr_B() {
    bufw_4_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_4_Clk_A() {
    bufw_4_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_Clk_B() {
    bufw_4_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_4_Din_A() {
    bufw_4_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_Din_B() {
    bufw_4_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_4_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_4_EN_A = ap_const_logic_1;
    } else {
        bufw_4_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_4_EN_B = ap_const_logic_1;
    } else {
        bufw_4_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_4_Rst_A() {
    bufw_4_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_Rst_B() {
    bufw_4_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_4_WEN_A() {
    bufw_4_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_4_WEN_B() {
    bufw_4_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_5_Addr_A() {
    bufw_5_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_5_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_5_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_5_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_5_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_5_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_5_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_5_Addr_B() {
    bufw_5_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_5_Clk_A() {
    bufw_5_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_5_Clk_B() {
    bufw_5_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_5_Din_A() {
    bufw_5_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_5_Din_B() {
    bufw_5_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_5_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_5_EN_A = ap_const_logic_1;
    } else {
        bufw_5_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_5_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_5_EN_B = ap_const_logic_1;
    } else {
        bufw_5_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_5_Rst_A() {
    bufw_5_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_5_Rst_B() {
    bufw_5_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_5_WEN_A() {
    bufw_5_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_5_WEN_B() {
    bufw_5_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_6_Addr_A() {
    bufw_6_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_6_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_6_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_6_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_6_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_6_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_6_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_6_Addr_B() {
    bufw_6_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_6_Clk_A() {
    bufw_6_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_6_Clk_B() {
    bufw_6_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_6_Din_A() {
    bufw_6_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_6_Din_B() {
    bufw_6_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_6_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_6_EN_A = ap_const_logic_1;
    } else {
        bufw_6_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_6_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_6_EN_B = ap_const_logic_1;
    } else {
        bufw_6_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_6_Rst_A() {
    bufw_6_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_6_Rst_B() {
    bufw_6_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_6_WEN_A() {
    bufw_6_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_6_WEN_B() {
    bufw_6_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_7_Addr_A() {
    bufw_7_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_7_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_7_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_7_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_7_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_7_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_7_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_7_Addr_B() {
    bufw_7_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_7_Clk_A() {
    bufw_7_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_7_Clk_B() {
    bufw_7_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_7_Din_A() {
    bufw_7_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_7_Din_B() {
    bufw_7_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_7_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_7_EN_A = ap_const_logic_1;
    } else {
        bufw_7_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_7_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_7_EN_B = ap_const_logic_1;
    } else {
        bufw_7_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_7_Rst_A() {
    bufw_7_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_7_Rst_B() {
    bufw_7_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_7_WEN_A() {
    bufw_7_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_7_WEN_B() {
    bufw_7_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_8_Addr_A() {
    bufw_8_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_8_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_8_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_8_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_8_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_8_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_8_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_8_Addr_B() {
    bufw_8_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_8_Clk_A() {
    bufw_8_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_8_Clk_B() {
    bufw_8_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_8_Din_A() {
    bufw_8_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_8_Din_B() {
    bufw_8_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_8_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_8_EN_A = ap_const_logic_1;
    } else {
        bufw_8_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_8_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_8_EN_B = ap_const_logic_1;
    } else {
        bufw_8_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_8_Rst_A() {
    bufw_8_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_8_Rst_B() {
    bufw_8_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_8_WEN_A() {
    bufw_8_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_8_WEN_B() {
    bufw_8_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_9_Addr_A() {
    bufw_9_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): bufw_9_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_9_Addr_A_orig() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
            bufw_9_Addr_A_orig = tmp_330_cast_fu_1804_p1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
            bufw_9_Addr_A_orig = tmp_7_cast_fu_1731_p1.read();
        } else {
            bufw_9_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        }
    } else {
        bufw_9_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_bufw_9_Addr_B() {
    bufw_9_Addr_B = (!ap_const_lv32_2.is_01())? sc_lv<32>(): tmp_329_cast_fu_1747_p1.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void convolve_kernel::thread_bufw_9_Clk_A() {
    bufw_9_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_9_Clk_B() {
    bufw_9_Clk_B = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void convolve_kernel::thread_bufw_9_Din_A() {
    bufw_9_Din_A = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_9_Din_B() {
    bufw_9_Din_B = ap_const_lv32_0;
}

void convolve_kernel::thread_bufw_9_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_9_EN_A = ap_const_logic_1;
    } else {
        bufw_9_EN_A = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_9_EN_B() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)))) {
        bufw_9_EN_B = ap_const_logic_1;
    } else {
        bufw_9_EN_B = ap_const_logic_0;
    }
}

void convolve_kernel::thread_bufw_9_Rst_A() {
    bufw_9_Rst_A = ap_rst.read();
}

void convolve_kernel::thread_bufw_9_Rst_B() {
    bufw_9_Rst_B = ap_rst.read();
}

void convolve_kernel::thread_bufw_9_WEN_A() {
    bufw_9_WEN_A = ap_const_lv4_0;
}

void convolve_kernel::thread_bufw_9_WEN_B() {
    bufw_9_WEN_B = ap_const_lv4_0;
}

void convolve_kernel::thread_exitcond_flatten1_fu_1535_p2() {
    exitcond_flatten1_fu_1535_p2 = (!indvar_flatten1_phi_fu_883_p4.read().is_01() || !ap_const_lv10_2A3.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_phi_fu_883_p4.read() == ap_const_lv10_2A3);
}

void convolve_kernel::thread_exitcond_flatten_fu_1553_p2() {
    exitcond_flatten_fu_1553_p2 = (!indvar_flatten_phi_fu_906_p4.read().is_01() || !ap_const_lv8_87.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_phi_fu_906_p4.read() == ap_const_lv8_87);
}

void convolve_kernel::thread_grp_fu_1001_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_14_3_3_1_reg_7783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_14_1_3_1_reg_7653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_14_3_3_reg_7263.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_14_1_3_reg_7133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_299_fu_2534_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_219_fu_2430_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_139_fu_2326_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p0 = tmp_59_fu_2222_p1.read();
    } else {
        grp_fu_1001_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1001_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = ap_reg_pp0_iter4_tmp_13_3_3_2_reg_6743.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = ap_reg_pp0_iter4_tmp_13_1_3_2_reg_6548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = ap_reg_pp0_iter3_tmp_13_3_3_1_reg_5833.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = ap_reg_pp0_iter3_tmp_13_1_3_1_reg_5268.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = tmp_13_7_3_reg_6093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = tmp_13_5_3_reg_5768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = tmp_13_3_3_reg_5443.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1001_p1 = tmp_13_1_3_reg_4988.read();
    } else {
        grp_fu_1001_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1005_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_14_3_4_1_reg_7788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_14_1_4_1_reg_7658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_14_3_4_reg_7268.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_14_1_4_reg_7138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_302_fu_2538_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_222_fu_2434_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_142_fu_2330_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p0 = tmp_62_fu_2226_p1.read();
    } else {
        grp_fu_1005_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1005_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = ap_reg_pp0_iter4_tmp_13_3_4_2_reg_6748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = ap_reg_pp0_iter4_tmp_13_1_4_2_reg_6553.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = ap_reg_pp0_iter3_tmp_13_3_4_1_reg_5838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = ap_reg_pp0_iter3_tmp_13_1_4_1_reg_5278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = tmp_13_7_4_reg_6098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = tmp_13_5_4_reg_5773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = tmp_13_3_4_reg_5448.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1005_p1 = tmp_13_1_4_reg_4993.read();
    } else {
        grp_fu_1005_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1009_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_14_3_5_1_reg_7793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_14_1_5_1_reg_7663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_14_3_5_reg_7273.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_14_1_5_reg_7143.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_305_fu_2542_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_225_fu_2438_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_145_fu_2334_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p0 = tmp_65_fu_2230_p1.read();
    } else {
        grp_fu_1009_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1009_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = ap_reg_pp0_iter4_tmp_13_3_5_2_reg_6753.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = ap_reg_pp0_iter4_tmp_13_1_5_2_reg_6558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = ap_reg_pp0_iter3_tmp_13_3_5_1_reg_5843.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = ap_reg_pp0_iter3_tmp_13_1_5_1_reg_5288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = tmp_13_7_5_reg_6103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = tmp_13_5_5_reg_5778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = tmp_13_3_5_reg_5453.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1009_p1 = tmp_13_1_5_reg_4998.read();
    } else {
        grp_fu_1009_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1013_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_14_3_6_1_reg_7798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_14_1_6_1_reg_7668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_14_3_6_reg_7278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_14_1_6_reg_7148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_308_fu_2546_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_228_fu_2442_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_148_fu_2338_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p0 = tmp_68_fu_2234_p1.read();
    } else {
        grp_fu_1013_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1013_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = ap_reg_pp0_iter4_tmp_13_3_6_2_reg_6758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = ap_reg_pp0_iter4_tmp_13_1_6_2_reg_6563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = ap_reg_pp0_iter3_tmp_13_3_6_1_reg_5848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = ap_reg_pp0_iter3_tmp_13_1_6_1_reg_5298.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = tmp_13_7_6_reg_6108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = tmp_13_5_6_reg_5783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = tmp_13_3_6_reg_5458.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1013_p1 = tmp_13_1_6_reg_5003.read();
    } else {
        grp_fu_1013_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1017_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_14_3_7_1_reg_7803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_14_1_7_1_reg_7673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_14_3_7_reg_7283.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_14_1_7_reg_7153.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_311_fu_2550_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_231_fu_2446_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_151_fu_2342_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p0 = tmp_71_fu_2238_p1.read();
    } else {
        grp_fu_1017_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1017_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = ap_reg_pp0_iter4_tmp_13_3_7_2_reg_6763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = ap_reg_pp0_iter4_tmp_13_1_7_2_reg_6568.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = ap_reg_pp0_iter3_tmp_13_3_7_1_reg_5853.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = ap_reg_pp0_iter3_tmp_13_1_7_1_reg_5308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = tmp_13_7_7_reg_6113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = tmp_13_5_7_reg_5788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = tmp_13_3_7_reg_5463.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1017_p1 = tmp_13_1_7_reg_5008.read();
    } else {
        grp_fu_1017_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1021_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_14_3_8_1_reg_7808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_14_1_8_1_reg_7678.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_14_3_8_reg_7288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_14_1_8_reg_7158.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_314_fu_2554_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_234_fu_2450_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_154_fu_2346_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p0 = tmp_74_fu_2242_p1.read();
    } else {
        grp_fu_1021_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1021_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = ap_reg_pp0_iter4_tmp_13_3_8_2_reg_6768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = ap_reg_pp0_iter4_tmp_13_1_8_2_reg_6573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = ap_reg_pp0_iter3_tmp_13_3_8_1_reg_5858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = ap_reg_pp0_iter3_tmp_13_1_8_1_reg_5318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = tmp_13_7_8_reg_6118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = tmp_13_5_8_reg_5793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = tmp_13_3_8_reg_5468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1021_p1 = tmp_13_1_8_reg_5013.read();
    } else {
        grp_fu_1021_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1025_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_14_3_9_1_reg_7813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_14_1_9_1_reg_7683.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_14_3_9_reg_7293.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_14_1_9_reg_7163.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_317_fu_2558_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_237_fu_2454_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_157_fu_2350_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p0 = tmp_77_fu_2246_p1.read();
    } else {
        grp_fu_1025_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1025_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = ap_reg_pp0_iter4_tmp_13_3_9_2_reg_6773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = ap_reg_pp0_iter4_tmp_13_1_9_2_reg_6578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = ap_reg_pp0_iter3_tmp_13_3_9_1_reg_5863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = ap_reg_pp0_iter3_tmp_13_1_9_1_reg_5328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = tmp_13_7_9_reg_6123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = tmp_13_5_9_reg_5798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = tmp_13_3_9_reg_5473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1025_p1 = tmp_13_1_9_reg_5018.read();
    } else {
        grp_fu_1025_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1029_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_14_3_10_1_reg_7818.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_14_1_10_1_reg_7688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_14_3_s_reg_7298.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_14_1_s_reg_7168.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_320_fu_2562_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_240_fu_2458_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_160_fu_2354_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p0 = tmp_80_fu_2250_p1.read();
    } else {
        grp_fu_1029_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1029_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = ap_reg_pp0_iter4_tmp_13_3_10_2_reg_6778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = ap_reg_pp0_iter4_tmp_13_1_10_2_reg_6583.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = ap_reg_pp0_iter3_tmp_13_3_10_1_reg_5868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = ap_reg_pp0_iter3_tmp_13_1_10_1_reg_5338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = tmp_13_7_s_reg_6128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = tmp_13_5_s_reg_5803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = tmp_13_3_s_reg_5478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1029_p1 = tmp_13_1_s_reg_5023.read();
    } else {
        grp_fu_1029_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1033_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_14_3_11_1_reg_7823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_14_1_11_1_reg_7693.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_14_3_10_reg_7303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_14_1_10_reg_7173.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_323_fu_2566_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_243_fu_2462_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_163_fu_2358_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p0 = tmp_83_fu_2254_p1.read();
    } else {
        grp_fu_1033_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1033_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = ap_reg_pp0_iter4_tmp_13_3_11_2_reg_6783.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = ap_reg_pp0_iter4_tmp_13_1_11_2_reg_6588.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = ap_reg_pp0_iter3_tmp_13_3_11_1_reg_5873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = ap_reg_pp0_iter3_tmp_13_1_11_1_reg_5348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = tmp_13_7_10_reg_6133.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = tmp_13_5_10_reg_5808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = tmp_13_3_10_reg_5483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1033_p1 = tmp_13_1_10_reg_5028.read();
    } else {
        grp_fu_1033_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1037_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_14_3_12_1_reg_7828.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_14_1_12_1_reg_7698.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_14_3_11_reg_7308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_14_1_11_reg_7178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_326_fu_2570_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_246_fu_2466_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_166_fu_2362_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p0 = tmp_86_fu_2258_p1.read();
    } else {
        grp_fu_1037_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1037_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = ap_reg_pp0_iter4_tmp_13_3_12_2_reg_6788.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = ap_reg_pp0_iter4_tmp_13_1_12_2_reg_6593.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = ap_reg_pp0_iter3_tmp_13_3_12_1_reg_5878.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = ap_reg_pp0_iter3_tmp_13_1_12_1_reg_5358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = tmp_13_7_11_reg_6138.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = tmp_13_5_11_reg_5813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = tmp_13_3_11_reg_5488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1037_p1 = tmp_13_1_11_reg_5033.read();
    } else {
        grp_fu_1037_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1041_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_7_0_1_reg_8028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_6_0_1_reg_7963.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_5_0_1_reg_7898.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_4_0_1_reg_7833.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_7_reg_7508.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_6_reg_7443.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_5_reg_7378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p0 = tmp_14_4_reg_7313.read();
    } else {
        grp_fu_1041_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1041_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter5_tmp_13_7_0_2_reg_6988.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter5_tmp_13_6_0_2_reg_6923.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter5_tmp_13_5_0_2_reg_6858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter5_tmp_13_4_0_2_reg_6793.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter3_tmp_13_7_0_1_reg_6598.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter3_tmp_13_6_0_1_reg_6278.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter3_tmp_13_5_0_1_reg_6208.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1041_p1 = ap_reg_pp0_iter3_tmp_13_4_0_1_reg_6143.read();
    } else {
        grp_fu_1041_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1045_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_7_1_1_reg_8033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_6_1_1_reg_7968.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_5_1_1_reg_7903.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_4_1_1_reg_7838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_7_1_reg_7513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_6_1_reg_7448.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_5_1_reg_7383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p0 = tmp_14_4_1_reg_7318.read();
    } else {
        grp_fu_1045_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1045_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter5_tmp_13_7_1_2_reg_6993.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter5_tmp_13_6_1_2_reg_6928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter5_tmp_13_5_1_2_reg_6863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter5_tmp_13_4_1_2_reg_6798.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter3_tmp_13_7_1_1_reg_6603.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter3_tmp_13_6_1_1_reg_6288.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter3_tmp_13_5_1_1_reg_6213.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1045_p1 = ap_reg_pp0_iter3_tmp_13_4_1_1_reg_6148.read();
    } else {
        grp_fu_1045_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1049_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_7_2_1_reg_8038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_6_2_1_reg_7973.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_5_2_1_reg_7908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_4_2_1_reg_7843.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_7_2_reg_7518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_6_2_reg_7453.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_5_2_reg_7388.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p0 = tmp_14_4_2_reg_7323.read();
    } else {
        grp_fu_1049_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1049_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter5_tmp_13_7_2_2_reg_6998.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter5_tmp_13_6_2_2_reg_6933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter5_tmp_13_5_2_2_reg_6868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter5_tmp_13_4_2_2_reg_6803.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter3_tmp_13_7_2_1_reg_6608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter3_tmp_13_6_2_1_reg_6298.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter3_tmp_13_5_2_1_reg_6218.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1049_p1 = ap_reg_pp0_iter3_tmp_13_4_2_1_reg_6153.read();
    } else {
        grp_fu_1049_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1053_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_7_3_1_reg_8043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_6_3_1_reg_7978.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_5_3_1_reg_7913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_4_3_1_reg_7848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_7_3_reg_7523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_6_3_reg_7458.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_5_3_reg_7393.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p0 = tmp_14_4_3_reg_7328.read();
    } else {
        grp_fu_1053_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1053_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter5_tmp_13_7_3_2_reg_7003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter5_tmp_13_6_3_2_reg_6938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter5_tmp_13_5_3_2_reg_6873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter5_tmp_13_4_3_2_reg_6808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter3_tmp_13_7_3_1_reg_6613.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter3_tmp_13_6_3_1_reg_6308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter3_tmp_13_5_3_1_reg_6223.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1053_p1 = ap_reg_pp0_iter3_tmp_13_4_3_1_reg_6158.read();
    } else {
        grp_fu_1053_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1057_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_7_4_1_reg_8048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_6_4_1_reg_7983.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_5_4_1_reg_7918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_4_4_1_reg_7853.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_7_4_reg_7528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_6_4_reg_7463.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_5_4_reg_7398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p0 = tmp_14_4_4_reg_7333.read();
    } else {
        grp_fu_1057_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1057_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter5_tmp_13_7_4_2_reg_7008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter5_tmp_13_6_4_2_reg_6943.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter5_tmp_13_5_4_2_reg_6878.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter5_tmp_13_4_4_2_reg_6813.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter3_tmp_13_7_4_1_reg_6618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter3_tmp_13_6_4_1_reg_6318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter3_tmp_13_5_4_1_reg_6228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1057_p1 = ap_reg_pp0_iter3_tmp_13_4_4_1_reg_6163.read();
    } else {
        grp_fu_1057_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1061_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_7_5_1_reg_8053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_6_5_1_reg_7988.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_5_5_1_reg_7923.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_4_5_1_reg_7858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_7_5_reg_7533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_6_5_reg_7468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_5_5_reg_7403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p0 = tmp_14_4_5_reg_7338.read();
    } else {
        grp_fu_1061_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1061_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter5_tmp_13_7_5_2_reg_7013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter5_tmp_13_6_5_2_reg_6948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter5_tmp_13_5_5_2_reg_6883.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter5_tmp_13_4_5_2_reg_6818.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter3_tmp_13_7_5_1_reg_6623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter3_tmp_13_6_5_1_reg_6328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter3_tmp_13_5_5_1_reg_6233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1061_p1 = ap_reg_pp0_iter3_tmp_13_4_5_1_reg_6168.read();
    } else {
        grp_fu_1061_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1065_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_7_6_1_reg_8058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_6_6_1_reg_7993.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_5_6_1_reg_7928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_4_6_1_reg_7863.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_7_6_reg_7538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_6_6_reg_7473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_5_6_reg_7408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p0 = tmp_14_4_6_reg_7343.read();
    } else {
        grp_fu_1065_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1065_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter5_tmp_13_7_6_2_reg_7018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter5_tmp_13_6_6_2_reg_6953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter5_tmp_13_5_6_2_reg_6888.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter5_tmp_13_4_6_2_reg_6823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter3_tmp_13_7_6_1_reg_6628.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter3_tmp_13_6_6_1_reg_6338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter3_tmp_13_5_6_1_reg_6238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1065_p1 = ap_reg_pp0_iter3_tmp_13_4_6_1_reg_6173.read();
    } else {
        grp_fu_1065_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1069_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_7_7_1_reg_8063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_6_7_1_reg_7998.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_5_7_1_reg_7933.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_4_7_1_reg_7868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_7_7_reg_7543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_6_7_reg_7478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_5_7_reg_7413.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p0 = tmp_14_4_7_reg_7348.read();
    } else {
        grp_fu_1069_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1069_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter5_tmp_13_7_7_2_reg_7023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter5_tmp_13_6_7_2_reg_6958.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter5_tmp_13_5_7_2_reg_6893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter5_tmp_13_4_7_2_reg_6828.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter3_tmp_13_7_7_1_reg_6633.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter3_tmp_13_6_7_1_reg_6348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter3_tmp_13_5_7_1_reg_6243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1069_p1 = ap_reg_pp0_iter3_tmp_13_4_7_1_reg_6178.read();
    } else {
        grp_fu_1069_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1073_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_7_8_1_reg_8068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_6_8_1_reg_8003.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_5_8_1_reg_7938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_4_8_1_reg_7873.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_7_8_reg_7548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_6_8_reg_7483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_5_8_reg_7418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p0 = tmp_14_4_8_reg_7353.read();
    } else {
        grp_fu_1073_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1073_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter5_tmp_13_7_8_2_reg_7028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter5_tmp_13_6_8_2_reg_6963.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter5_tmp_13_5_8_2_reg_6898.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter5_tmp_13_4_8_2_reg_6833.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter3_tmp_13_7_8_1_reg_6638.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter3_tmp_13_6_8_1_reg_6358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter3_tmp_13_5_8_1_reg_6248.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1073_p1 = ap_reg_pp0_iter3_tmp_13_4_8_1_reg_6183.read();
    } else {
        grp_fu_1073_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1077_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_7_9_1_reg_8073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_6_9_1_reg_8008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_5_9_1_reg_7943.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_4_9_1_reg_7878.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_7_9_reg_7553.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_6_9_reg_7488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_5_9_reg_7423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p0 = tmp_14_4_9_reg_7358.read();
    } else {
        grp_fu_1077_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1077_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter5_tmp_13_7_9_2_reg_7033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter5_tmp_13_6_9_2_reg_6968.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter5_tmp_13_5_9_2_reg_6903.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter5_tmp_13_4_9_2_reg_6838.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter3_tmp_13_7_9_1_reg_6643.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter3_tmp_13_6_9_1_reg_6368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter3_tmp_13_5_9_1_reg_6253.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1077_p1 = ap_reg_pp0_iter3_tmp_13_4_9_1_reg_6188.read();
    } else {
        grp_fu_1077_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1081_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_7_10_1_reg_8078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_6_10_1_reg_8013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_5_10_1_reg_7948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_4_10_1_reg_7883.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_7_s_reg_7558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_6_s_reg_7493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_5_s_reg_7428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p0 = tmp_14_4_s_reg_7363.read();
    } else {
        grp_fu_1081_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1081_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter5_tmp_13_7_10_2_reg_7038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter5_tmp_13_6_10_2_reg_6973.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter5_tmp_13_5_10_2_reg_6908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter5_tmp_13_4_10_2_reg_6843.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter3_tmp_13_7_10_1_reg_6648.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter3_tmp_13_6_10_1_reg_6378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter3_tmp_13_5_10_1_reg_6258.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1081_p1 = ap_reg_pp0_iter3_tmp_13_4_10_1_reg_6193.read();
    } else {
        grp_fu_1081_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1085_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_7_11_1_reg_8083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_6_11_1_reg_8018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_5_11_1_reg_7953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_4_11_1_reg_7888.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_7_10_reg_7563.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_6_10_reg_7498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_5_10_reg_7433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p0 = tmp_14_4_10_reg_7368.read();
    } else {
        grp_fu_1085_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1085_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter5_tmp_13_7_11_2_reg_7043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter5_tmp_13_6_11_2_reg_6978.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter5_tmp_13_5_11_2_reg_6913.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter5_tmp_13_4_11_2_reg_6848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter3_tmp_13_7_11_1_reg_6653.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter3_tmp_13_6_11_1_reg_6388.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter3_tmp_13_5_11_1_reg_6263.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1085_p1 = ap_reg_pp0_iter3_tmp_13_4_11_1_reg_6198.read();
    } else {
        grp_fu_1085_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1089_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_7_12_1_reg_8088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_6_12_1_reg_8023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_5_12_1_reg_7958.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_4_12_1_reg_7893.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_7_11_reg_7568.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_6_11_reg_7503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_5_11_reg_7438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p0 = tmp_14_4_11_reg_7373.read();
    } else {
        grp_fu_1089_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1089_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter5_tmp_13_7_12_2_reg_7048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter5_tmp_13_6_12_2_reg_6983.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter6.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter5_tmp_13_5_12_2_reg_6918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter5_tmp_13_4_12_2_reg_6853.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter3_tmp_13_7_12_1_reg_6658.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter3_tmp_13_6_12_1_reg_6398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter3_tmp_13_5_12_1_reg_6268.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1089_p1 = ap_reg_pp0_iter3_tmp_13_4_12_1_reg_6203.read();
    } else {
        grp_fu_1089_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1093_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1093_p0 = bufw_0_load_2_reg_3908.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1093_p0 = bufw_0_load_1_reg_3657.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p0 = bufw_0_load_reg_3650.read();
    } else {
        grp_fu_1093_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1093_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1093_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1093_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1097_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1097_p0 = bufw_1_load_2_reg_3932.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1097_p0 = bufw_1_load_1_reg_3672.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p0 = bufw_0_load_1_reg_3657.read();
    } else {
        grp_fu_1097_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1097_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1097_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1097_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1101_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1101_p0 = bufw_2_load_2_reg_3939.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1101_p0 = bufw_2_load_1_reg_3687.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p0 = bufw_1_load_reg_3665.read();
    } else {
        grp_fu_1101_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1101_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1101_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1101_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1105_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1105_p0 = bufw_3_load_2_reg_3946.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1105_p0 = bufw_3_load_1_reg_3702.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p0 = bufw_1_load_1_reg_3672.read();
    } else {
        grp_fu_1105_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1105_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1105_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1105_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1109_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1109_p0 = bufw_4_load_2_reg_3953.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1109_p0 = bufw_4_load_1_reg_3717.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p0 = bufw_2_load_reg_3680.read();
    } else {
        grp_fu_1109_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1109_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1109_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1109_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1113_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1113_p0 = bufw_5_load_2_reg_3960.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1113_p0 = bufw_5_load_1_reg_3732.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p0 = bufw_2_load_1_reg_3687.read();
    } else {
        grp_fu_1113_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1113_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1113_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1113_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1117_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1117_p0 = bufw_6_load_2_reg_3967.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1117_p0 = bufw_6_load_1_reg_3747.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p0 = bufw_3_load_reg_3695.read();
    } else {
        grp_fu_1117_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1117_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1117_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1117_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1121_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1121_p0 = bufw_7_load_2_reg_3974.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1121_p0 = bufw_7_load_1_reg_3762.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p0 = bufw_3_load_1_reg_3702.read();
    } else {
        grp_fu_1121_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1121_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1121_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1121_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1125_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1125_p0 = bufw_8_load_2_reg_3981.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1125_p0 = bufw_8_load_1_reg_3777.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p0 = bufw_4_load_reg_3710.read();
    } else {
        grp_fu_1125_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1125_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1125_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1125_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1129_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1129_p0 = bufw_9_load_2_reg_3988.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1129_p0 = bufw_9_load_1_reg_3792.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p0 = bufw_4_load_1_reg_3717.read();
    } else {
        grp_fu_1129_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1129_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1129_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1129_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1133_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1133_p0 = bufw_10_load_2_reg_3995.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1133_p0 = bufw_10_load_1_reg_3807.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p0 = bufw_5_load_reg_3725.read();
    } else {
        grp_fu_1133_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1133_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1133_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1133_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1137_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1137_p0 = bufw_11_load_2_reg_4002.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1137_p0 = bufw_11_load_1_reg_3822.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p0 = bufw_5_load_1_reg_3732.read();
    } else {
        grp_fu_1137_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1137_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1137_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1137_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1141_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1141_p0 = bufw_12_load_2_reg_4009.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1141_p0 = bufw_12_load_1_reg_3837.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p0 = bufw_6_load_reg_3740.read();
    } else {
        grp_fu_1141_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1141_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_2_load_5_reg_4284.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_2_load_2_reg_4131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_2_load_reg_3915.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_1_load_4_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_1_load_3_reg_4165.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_1_load_2_reg_4114.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_1_load_1_reg_4033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1141_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1141_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1145_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1145_p0 = bufw_0_load_2_reg_3908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p0 = bufw_0_load_1_reg_3657.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1145_p0 = bufw_0_load_reg_3650.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p0 = bufw_6_load_1_reg_3747.read();
    } else {
        grp_fu_1145_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1145_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1145_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1145_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1149_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1149_p0 = bufw_1_load_2_reg_3932.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p0 = bufw_1_load_1_reg_3672.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1149_p0 = bufw_1_load_reg_3665.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p0 = bufw_7_load_reg_3755.read();
    } else {
        grp_fu_1149_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1149_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1149_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1149_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1153_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1153_p0 = bufw_2_load_2_reg_3939.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p0 = bufw_2_load_1_reg_3687.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1153_p0 = bufw_2_load_reg_3680.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p0 = bufw_7_load_1_reg_3762.read();
    } else {
        grp_fu_1153_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1153_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1153_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1153_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1157_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1157_p0 = bufw_3_load_2_reg_3946.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p0 = bufw_3_load_1_reg_3702.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1157_p0 = bufw_3_load_reg_3695.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p0 = bufw_8_load_reg_3770.read();
    } else {
        grp_fu_1157_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1157_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1157_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1157_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1161_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1161_p0 = bufw_4_load_2_reg_3953.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p0 = bufw_4_load_1_reg_3717.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1161_p0 = bufw_4_load_reg_3710.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p0 = bufw_8_load_1_reg_3777.read();
    } else {
        grp_fu_1161_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1161_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1161_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1161_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1165_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1165_p0 = bufw_5_load_2_reg_3960.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p0 = bufw_5_load_1_reg_3732.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1165_p0 = bufw_5_load_reg_3725.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p0 = bufw_9_load_reg_3785.read();
    } else {
        grp_fu_1165_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1165_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1165_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1165_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1169_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1169_p0 = bufw_6_load_2_reg_3967.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p0 = bufw_6_load_1_reg_3747.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1169_p0 = bufw_6_load_reg_3740.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p0 = bufw_9_load_1_reg_3792.read();
    } else {
        grp_fu_1169_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1169_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1169_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1169_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1173_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1173_p0 = bufw_7_load_2_reg_3974.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p0 = bufw_7_load_1_reg_3762.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1173_p0 = bufw_7_load_reg_3755.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p0 = bufw_10_load_reg_3800.read();
    } else {
        grp_fu_1173_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1173_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1173_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1173_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1177_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1177_p0 = bufw_8_load_2_reg_3981.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p0 = bufw_8_load_1_reg_3777.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1177_p0 = bufw_8_load_reg_3770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p0 = bufw_10_load_1_reg_3807.read();
    } else {
        grp_fu_1177_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1177_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1177_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1177_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1181_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1181_p0 = bufw_9_load_2_reg_3988.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p0 = bufw_9_load_1_reg_3792.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1181_p0 = bufw_9_load_reg_3785.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p0 = bufw_11_load_reg_3815.read();
    } else {
        grp_fu_1181_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1181_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1181_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1181_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1185_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1185_p0 = bufw_10_load_2_reg_3995.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p0 = bufw_10_load_1_reg_3807.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1185_p0 = bufw_10_load_reg_3800.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p0 = bufw_11_load_1_reg_3822.read();
    } else {
        grp_fu_1185_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1185_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1185_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1185_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1189_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1189_p0 = bufw_11_load_2_reg_4002.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p0 = bufw_11_load_1_reg_3822.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1189_p0 = bufw_11_load_reg_3815.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p0 = bufw_12_load_reg_3830.read();
    } else {
        grp_fu_1189_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1189_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1189_p1 = bufi_0_load_reg_3874.read();
    } else {
        grp_fu_1189_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1193_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1193_p0 = bufw_12_load_2_reg_4009.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1193_p0 = bufw_12_load_reg_3830.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1193_p0 = bufw_12_load_1_reg_3837.read();
    } else {
        grp_fu_1193_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1193_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_2_load_6_reg_4355.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_2_load_3_reg_4182.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_2_load_1_reg_4050.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_1_load_5_reg_4267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_0_load_6_reg_4321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_0_load_4_reg_4199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_0_load_2_reg_4097.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1193_p1 = bufi_1_load_reg_3891.read();
    } else {
        grp_fu_1193_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1197_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1197_p0 = bufw_0_load_2_reg_3908.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1197_p0 = bufw_0_load_1_reg_3657.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1197_p0 = bufw_0_load_reg_3650.read();
    } else {
        grp_fu_1197_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1197_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1197_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1197_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1201_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1201_p0 = bufw_1_load_2_reg_3932.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1201_p0 = bufw_1_load_1_reg_3672.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1201_p0 = bufw_1_load_reg_3665.read();
    } else {
        grp_fu_1201_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1201_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1201_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1201_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1205_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1205_p0 = bufw_2_load_2_reg_3939.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1205_p0 = bufw_2_load_1_reg_3687.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1205_p0 = bufw_2_load_reg_3680.read();
    } else {
        grp_fu_1205_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1205_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1205_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1205_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1209_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1209_p0 = bufw_3_load_2_reg_3946.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1209_p0 = bufw_3_load_1_reg_3702.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1209_p0 = bufw_3_load_reg_3695.read();
    } else {
        grp_fu_1209_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1209_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1209_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1209_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1213_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1213_p0 = bufw_4_load_2_reg_3953.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1213_p0 = bufw_4_load_1_reg_3717.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1213_p0 = bufw_4_load_reg_3710.read();
    } else {
        grp_fu_1213_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1213_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1213_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1213_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1217_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1217_p0 = bufw_5_load_2_reg_3960.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1217_p0 = bufw_5_load_1_reg_3732.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1217_p0 = bufw_5_load_reg_3725.read();
    } else {
        grp_fu_1217_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1217_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1217_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1217_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1221_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1221_p0 = bufw_6_load_2_reg_3967.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1221_p0 = bufw_6_load_1_reg_3747.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1221_p0 = bufw_6_load_reg_3740.read();
    } else {
        grp_fu_1221_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1221_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1221_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1221_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1225_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1225_p0 = bufw_7_load_2_reg_3974.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1225_p0 = bufw_7_load_1_reg_3762.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1225_p0 = bufw_7_load_reg_3755.read();
    } else {
        grp_fu_1225_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1225_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1225_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1225_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1229_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1229_p0 = bufw_8_load_2_reg_3981.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1229_p0 = bufw_8_load_1_reg_3777.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1229_p0 = bufw_8_load_reg_3770.read();
    } else {
        grp_fu_1229_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1229_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1229_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1229_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1233_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1233_p0 = bufw_9_load_2_reg_3988.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1233_p0 = bufw_9_load_1_reg_3792.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1233_p0 = bufw_9_load_reg_3785.read();
    } else {
        grp_fu_1233_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1233_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1233_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1233_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1237_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1237_p0 = bufw_10_load_2_reg_3995.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1237_p0 = bufw_10_load_1_reg_3807.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1237_p0 = bufw_10_load_reg_3800.read();
    } else {
        grp_fu_1237_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1237_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1237_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1237_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1241_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1241_p0 = bufw_11_load_2_reg_4002.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1241_p0 = bufw_11_load_1_reg_3822.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1241_p0 = bufw_11_load_reg_3815.read();
    } else {
        grp_fu_1241_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1241_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1241_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1241_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1245_p0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1245_p0 = bufw_12_load_2_reg_4009.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1245_p0 = bufw_12_load_1_reg_3837.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)))) {
        grp_fu_1245_p0 = bufw_12_load_reg_3830.read();
    } else {
        grp_fu_1245_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1245_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_2_load_7_reg_4406.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_2_load_4_reg_4233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_1_load_7_reg_4389.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_1_load_6_reg_4338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_0_load_7_reg_4372.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_0_load_5_reg_4250.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_0_load_3_reg_4148.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_1245_p1 = bufi_0_load_1_reg_4016.read();
    } else {
        grp_fu_1245_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_1249_p1() {
    grp_fu_1249_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1259_p1() {
    grp_fu_1259_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1269_p1() {
    grp_fu_1269_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1279_p1() {
    grp_fu_1279_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1289_p1() {
    grp_fu_1289_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1299_p1() {
    grp_fu_1299_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1309_p1() {
    grp_fu_1309_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1319_p1() {
    grp_fu_1319_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1329_p1() {
    grp_fu_1329_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1339_p1() {
    grp_fu_1339_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1349_p1() {
    grp_fu_1349_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1359_p1() {
    grp_fu_1359_p1 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_grp_fu_1369_p1() {
    grp_fu_1369_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1379_p1() {
    grp_fu_1379_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1389_p1() {
    grp_fu_1389_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1399_p1() {
    grp_fu_1399_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1409_p1() {
    grp_fu_1409_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1419_p1() {
    grp_fu_1419_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1429_p1() {
    grp_fu_1429_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1439_p1() {
    grp_fu_1439_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1449_p1() {
    grp_fu_1449_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1459_p1() {
    grp_fu_1459_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1469_p1() {
    grp_fu_1469_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_1479_p1() {
    grp_fu_1479_p1 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_grp_fu_937_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_14_2_0_1_reg_7703.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_14_0_0_1_reg_7573.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_14_2_reg_7183.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_351_reg_7053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_250_fu_2470_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_170_fu_2366_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_90_fu_2262_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p0 = tmp_10_fu_2158_p1.read();
    } else {
        grp_fu_937_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_937_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = ap_reg_pp0_iter4_tmp_13_2_0_2_reg_6663.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = ap_reg_pp0_iter4_tmp_13_0_0_2_reg_6468.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = ap_reg_pp0_iter3_tmp_13_2_0_1_reg_5498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = ap_reg_pp0_iter3_tmp_13_0_0_1_reg_4848.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = tmp_13_6_reg_6013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = tmp_13_4_reg_5688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = tmp_13_2_reg_5363.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_937_p1 = tmp_349_reg_4843.read();
    } else {
        grp_fu_937_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_941_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_14_2_1_1_reg_7708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_14_0_1_1_reg_7578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_14_2_1_reg_7188.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_14_0_1_reg_7058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_253_fu_2474_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_173_fu_2370_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_93_fu_2266_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p0 = tmp_13_fu_2162_p1.read();
    } else {
        grp_fu_941_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_941_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = ap_reg_pp0_iter4_tmp_13_2_1_2_reg_6668.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = ap_reg_pp0_iter4_tmp_13_0_1_2_reg_6473.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = ap_reg_pp0_iter3_tmp_13_2_1_1_reg_5508.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = ap_reg_pp0_iter3_tmp_13_0_1_1_reg_4858.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = tmp_13_6_1_reg_6018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = tmp_13_4_1_reg_5693.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = tmp_13_2_1_reg_5368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_941_p1 = tmp_13_0_1_reg_4853.read();
    } else {
        grp_fu_941_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_945_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_14_2_2_1_reg_7713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_14_0_2_1_reg_7583.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_14_2_2_reg_7193.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_14_0_2_reg_7063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_256_fu_2478_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_176_fu_2374_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_96_fu_2270_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p0 = tmp_16_fu_2166_p1.read();
    } else {
        grp_fu_945_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_945_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = ap_reg_pp0_iter4_tmp_13_2_2_2_reg_6673.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = ap_reg_pp0_iter4_tmp_13_0_2_2_reg_6478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = ap_reg_pp0_iter3_tmp_13_2_2_1_reg_5518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = ap_reg_pp0_iter3_tmp_13_0_2_1_reg_4868.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = tmp_13_6_2_reg_6023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = tmp_13_4_2_reg_5698.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = tmp_13_2_2_reg_5373.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_945_p1 = tmp_13_0_2_reg_4863.read();
    } else {
        grp_fu_945_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_949_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_14_2_3_1_reg_7718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_14_0_3_1_reg_7588.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_14_2_3_reg_7198.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_14_0_3_reg_7068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_259_fu_2482_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_179_fu_2378_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_99_fu_2274_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p0 = tmp_19_fu_2170_p1.read();
    } else {
        grp_fu_949_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_949_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = ap_reg_pp0_iter4_tmp_13_2_3_2_reg_6678.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = ap_reg_pp0_iter4_tmp_13_0_3_2_reg_6483.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = ap_reg_pp0_iter3_tmp_13_2_3_1_reg_5528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = ap_reg_pp0_iter3_tmp_13_0_3_1_reg_4878.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = tmp_13_6_3_reg_6028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = tmp_13_4_3_reg_5703.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = tmp_13_2_3_reg_5378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_949_p1 = tmp_13_0_3_reg_4873.read();
    } else {
        grp_fu_949_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_953_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_14_2_4_1_reg_7723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_14_0_4_1_reg_7593.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_14_2_4_reg_7203.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_14_0_4_reg_7073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_262_fu_2486_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_182_fu_2382_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_102_fu_2278_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p0 = tmp_22_fu_2174_p1.read();
    } else {
        grp_fu_953_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_953_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = ap_reg_pp0_iter4_tmp_13_2_4_2_reg_6683.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = ap_reg_pp0_iter4_tmp_13_0_4_2_reg_6488.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = ap_reg_pp0_iter3_tmp_13_2_4_1_reg_5538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = ap_reg_pp0_iter3_tmp_13_0_4_1_reg_4888.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = tmp_13_6_4_reg_6033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = tmp_13_4_4_reg_5708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = tmp_13_2_4_reg_5383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_953_p1 = tmp_13_0_4_reg_4883.read();
    } else {
        grp_fu_953_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_957_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_14_2_5_1_reg_7728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_14_0_5_1_reg_7598.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_14_2_5_reg_7208.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_14_0_5_reg_7078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_265_fu_2490_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_185_fu_2386_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_105_fu_2282_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p0 = tmp_25_fu_2178_p1.read();
    } else {
        grp_fu_957_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_957_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = ap_reg_pp0_iter4_tmp_13_2_5_2_reg_6688.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = ap_reg_pp0_iter4_tmp_13_0_5_2_reg_6493.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = ap_reg_pp0_iter3_tmp_13_2_5_1_reg_5548.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = ap_reg_pp0_iter3_tmp_13_0_5_1_reg_4898.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = tmp_13_6_5_reg_6038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = tmp_13_4_5_reg_5713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = tmp_13_2_5_reg_5388.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_957_p1 = tmp_13_0_5_reg_4893.read();
    } else {
        grp_fu_957_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_961_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_14_2_6_1_reg_7733.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_14_0_6_1_reg_7603.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_14_2_6_reg_7213.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_14_0_6_reg_7083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_268_fu_2494_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_188_fu_2390_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_108_fu_2286_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p0 = tmp_28_fu_2182_p1.read();
    } else {
        grp_fu_961_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_961_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = ap_reg_pp0_iter4_tmp_13_2_6_2_reg_6693.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = ap_reg_pp0_iter4_tmp_13_0_6_2_reg_6498.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = ap_reg_pp0_iter3_tmp_13_2_6_1_reg_5558.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = ap_reg_pp0_iter3_tmp_13_0_6_1_reg_4908.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = tmp_13_6_6_reg_6043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = tmp_13_4_6_reg_5718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = tmp_13_2_6_reg_5393.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_961_p1 = tmp_13_0_6_reg_4903.read();
    } else {
        grp_fu_961_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_965_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_14_2_7_1_reg_7738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_14_0_7_1_reg_7608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_14_2_7_reg_7218.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_14_0_7_reg_7088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_271_fu_2498_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_191_fu_2394_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_111_fu_2290_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p0 = tmp_31_fu_2186_p1.read();
    } else {
        grp_fu_965_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_965_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = ap_reg_pp0_iter4_tmp_13_2_7_2_reg_6698.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = ap_reg_pp0_iter4_tmp_13_0_7_2_reg_6503.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = ap_reg_pp0_iter3_tmp_13_2_7_1_reg_5568.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = ap_reg_pp0_iter3_tmp_13_0_7_1_reg_4918.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = tmp_13_6_7_reg_6048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = tmp_13_4_7_reg_5723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = tmp_13_2_7_reg_5398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_965_p1 = tmp_13_0_7_reg_4913.read();
    } else {
        grp_fu_965_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_969_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_14_2_8_1_reg_7743.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_14_0_8_1_reg_7613.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_14_2_8_reg_7223.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_14_0_8_reg_7093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_274_fu_2502_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_194_fu_2398_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_114_fu_2294_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p0 = tmp_34_fu_2190_p1.read();
    } else {
        grp_fu_969_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_969_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = ap_reg_pp0_iter4_tmp_13_2_8_2_reg_6703.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = ap_reg_pp0_iter4_tmp_13_0_8_2_reg_6508.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = ap_reg_pp0_iter3_tmp_13_2_8_1_reg_5578.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = ap_reg_pp0_iter3_tmp_13_0_8_1_reg_4928.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = tmp_13_6_8_reg_6053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = tmp_13_4_8_reg_5728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = tmp_13_2_8_reg_5403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_969_p1 = tmp_13_0_8_reg_4923.read();
    } else {
        grp_fu_969_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_973_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_14_2_9_1_reg_7748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_14_0_9_1_reg_7618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_14_2_9_reg_7228.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_14_0_9_reg_7098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_277_fu_2506_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_197_fu_2402_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_117_fu_2298_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p0 = tmp_37_fu_2194_p1.read();
    } else {
        grp_fu_973_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_973_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = ap_reg_pp0_iter4_tmp_13_2_9_2_reg_6708.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = ap_reg_pp0_iter4_tmp_13_0_9_2_reg_6513.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = ap_reg_pp0_iter3_tmp_13_2_9_1_reg_5588.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = ap_reg_pp0_iter3_tmp_13_0_9_1_reg_4938.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = tmp_13_6_9_reg_6058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = tmp_13_4_9_reg_5733.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = tmp_13_2_9_reg_5408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_973_p1 = tmp_13_0_9_reg_4933.read();
    } else {
        grp_fu_973_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_977_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_14_2_10_1_reg_7753.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_14_0_10_1_reg_7623.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_14_2_s_reg_7233.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_14_0_s_reg_7103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_280_fu_2510_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_200_fu_2406_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_120_fu_2302_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p0 = tmp_40_fu_2198_p1.read();
    } else {
        grp_fu_977_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_977_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = ap_reg_pp0_iter4_tmp_13_2_10_2_reg_6713.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = ap_reg_pp0_iter4_tmp_13_0_10_2_reg_6518.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = ap_reg_pp0_iter3_tmp_13_2_10_1_reg_5598.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = ap_reg_pp0_iter3_tmp_13_0_10_1_reg_4948.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = tmp_13_6_s_reg_6063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = tmp_13_4_s_reg_5738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = tmp_13_2_s_reg_5413.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_977_p1 = tmp_13_0_s_reg_4943.read();
    } else {
        grp_fu_977_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_981_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_14_2_11_1_reg_7758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_14_0_11_1_reg_7628.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_14_2_10_reg_7238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_14_0_10_reg_7108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_283_fu_2514_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_203_fu_2410_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_123_fu_2306_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p0 = tmp_43_fu_2202_p1.read();
    } else {
        grp_fu_981_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_981_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = ap_reg_pp0_iter4_tmp_13_2_11_2_reg_6718.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = ap_reg_pp0_iter4_tmp_13_0_11_2_reg_6523.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = ap_reg_pp0_iter3_tmp_13_2_11_1_reg_5608.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = ap_reg_pp0_iter3_tmp_13_0_11_1_reg_4958.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = tmp_13_6_10_reg_6068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = tmp_13_4_10_reg_5743.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = tmp_13_2_10_reg_5418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_981_p1 = tmp_13_0_10_reg_4953.read();
    } else {
        grp_fu_981_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_985_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_14_2_12_1_reg_7763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_14_0_12_1_reg_7633.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_14_2_11_reg_7243.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_14_0_11_reg_7113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_286_fu_2518_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_206_fu_2414_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_126_fu_2310_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p0 = tmp_46_fu_2206_p1.read();
    } else {
        grp_fu_985_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_985_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = ap_reg_pp0_iter4_tmp_13_2_12_2_reg_6723.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = ap_reg_pp0_iter4_tmp_13_0_12_2_reg_6528.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = ap_reg_pp0_iter3_tmp_13_2_12_1_reg_5618.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = ap_reg_pp0_iter3_tmp_13_0_12_1_reg_4968.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = tmp_13_6_11_reg_6073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = tmp_13_4_11_reg_5748.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = tmp_13_2_11_reg_5423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_985_p1 = tmp_13_0_11_reg_4963.read();
    } else {
        grp_fu_985_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_989_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_14_3_0_1_reg_7768.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_14_1_0_1_reg_7638.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_14_3_reg_7248.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_14_1_reg_7118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_290_fu_2522_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_210_fu_2418_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_130_fu_2314_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p0 = tmp_50_fu_2210_p1.read();
    } else {
        grp_fu_989_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_989_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = ap_reg_pp0_iter4_tmp_13_3_0_2_reg_6728.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = ap_reg_pp0_iter4_tmp_13_1_0_2_reg_6533.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = ap_reg_pp0_iter3_tmp_13_3_0_1_reg_5818.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = ap_reg_pp0_iter3_tmp_13_1_0_1_reg_5238.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = tmp_13_7_reg_6078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = tmp_13_5_reg_5753.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = tmp_13_3_reg_5428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_989_p1 = tmp_13_1_reg_4973.read();
    } else {
        grp_fu_989_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_993_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_14_3_1_1_reg_7773.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_14_1_1_1_reg_7643.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_14_3_1_reg_7253.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_14_1_1_reg_7123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_293_fu_2526_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_213_fu_2422_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_133_fu_2318_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p0 = tmp_53_fu_2214_p1.read();
    } else {
        grp_fu_993_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_993_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = ap_reg_pp0_iter4_tmp_13_3_1_2_reg_6733.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = ap_reg_pp0_iter4_tmp_13_1_1_2_reg_6538.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = ap_reg_pp0_iter3_tmp_13_3_1_1_reg_5823.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = ap_reg_pp0_iter3_tmp_13_1_1_1_reg_5248.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = tmp_13_7_1_reg_6083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = tmp_13_5_1_reg_5758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = tmp_13_3_1_reg_5433.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_993_p1 = tmp_13_1_1_reg_4978.read();
    } else {
        grp_fu_993_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_997_p0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_14_3_2_1_reg_7778.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_14_1_2_1_reg_7648.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_14_3_2_reg_7258.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_14_1_2_reg_7128.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_296_fu_2530_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_216_fu_2426_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_136_fu_2322_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p0 = tmp_56_fu_2218_p1.read();
    } else {
        grp_fu_997_p0 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_grp_fu_997_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = ap_reg_pp0_iter4_tmp_13_3_2_2_reg_6738.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter5.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = ap_reg_pp0_iter4_tmp_13_1_2_2_reg_6543.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = ap_reg_pp0_iter3_tmp_13_3_2_1_reg_5828.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = ap_reg_pp0_iter3_tmp_13_1_2_1_reg_5258.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = tmp_13_7_2_reg_6088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = tmp_13_5_2_reg_5763.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = tmp_13_3_2_reg_5438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0))) {
        grp_fu_997_p1 = tmp_13_1_2_reg_4983.read();
    } else {
        grp_fu_997_p1 = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void convolve_kernel::thread_i_1_fu_1547_p2() {
    i_1_fu_1547_p2 = (!ap_const_lv3_1.is_01() || !i_phi_fu_894_p4.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(i_phi_fu_894_p4.read()));
}

void convolve_kernel::thread_i_phi_fu_894_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        i_phi_fu_894_p4 = tmp_1_mid2_v_reg_3218.read();
    } else {
        i_phi_fu_894_p4 = i_reg_890.read();
    }
}

void convolve_kernel::thread_indvar_flatten1_phi_fu_883_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten1_phi_fu_883_p4 = indvar_flatten_next1_reg_3173.read();
    } else {
        indvar_flatten1_phi_fu_883_p4 = indvar_flatten1_reg_879.read();
    }
}

void convolve_kernel::thread_indvar_flatten_next1_fu_1541_p2() {
    indvar_flatten_next1_fu_1541_p2 = (!indvar_flatten1_phi_fu_883_p4.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten1_phi_fu_883_p4.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void convolve_kernel::thread_indvar_flatten_next_fu_1594_p3() {
    indvar_flatten_next_fu_1594_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv8_1: indvar_flatten_op_reg_3204.read());
}

void convolve_kernel::thread_indvar_flatten_op_fu_1565_p2() {
    indvar_flatten_op_fu_1565_p2 = (!ap_const_lv8_1.is_01() || !indvar_flatten_phi_fu_906_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(indvar_flatten_phi_fu_906_p4.read()));
}

void convolve_kernel::thread_indvar_flatten_phi_fu_906_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        indvar_flatten_phi_fu_906_p4 = indvar_flatten_next_reg_3239.read();
    } else {
        indvar_flatten_phi_fu_906_p4 = indvar_flatten_reg_902.read();
    }
}

void convolve_kernel::thread_j_1_fu_1620_p2() {
    j_1_fu_1620_p2 = (!ap_const_lv3_1.is_01() || !j_mid_reg_3209.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(j_mid_reg_3209.read()));
}

void convolve_kernel::thread_j_mid_fu_1571_p3() {
    j_mid_fu_1571_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv3_0: j_reg_913.read());
}

void convolve_kernel::thread_j_phi_fu_917_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        j_phi_fu_917_p4 = tmp_4_mid2_reg_3269.read();
    } else {
        j_phi_fu_917_p4 = j_reg_913.read();
    }
}

void convolve_kernel::thread_not_exitcond_flatten_fu_1584_p2() {
    not_exitcond_flatten_fu_1584_p2 = (exitcond_flatten_reg_3183.read() ^ ap_const_lv1_1);
}

void convolve_kernel::thread_p_shl1_cast_fu_1712_p1() {
    p_shl1_cast_fu_1712_p1 = esl_zext<10,7>(tmp_339_fu_1705_p3.read());
}

void convolve_kernel::thread_p_shl2_cast_fu_1610_p1() {
    p_shl2_cast_fu_1610_p1 = esl_zext<6,5>(tmp_fu_1603_p3.read());
}

void convolve_kernel::thread_p_shl_cast_fu_1701_p1() {
    p_shl_cast_fu_1701_p1 = esl_zext<10,9>(tmp_338_fu_1694_p3.read());
}

void convolve_kernel::thread_row_b_1_fu_1655_p2() {
    row_b_1_fu_1655_p2 = (!ap_const_lv5_1.is_01() || !row_b_mid2_reg_3257.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(row_b_mid2_reg_3257.read()));
}

void convolve_kernel::thread_row_b_mid2_fu_1629_p3() {
    row_b_mid2_fu_1629_p3 = (!tmp_6_fu_1625_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_6_fu_1625_p2.read()[0].to_bool())? ap_const_lv5_0: row_b_reg_925.read());
}

void convolve_kernel::thread_row_b_phi_fu_929_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten1_reg_3169.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        row_b_phi_fu_929_p4 = row_b_1_reg_3283.read();
    } else {
        row_b_phi_fu_929_p4 = row_b_reg_925.read();
    }
}

void convolve_kernel::thread_tmp_100_fu_2723_p1() {
    tmp_100_fu_2723_p1 = tmp_14_2_3_2_reg_8238.read();
}

void convolve_kernel::thread_tmp_102_fu_2278_p1() {
    tmp_102_fu_2278_p1 = tmp_101_reg_4603.read();
}

void convolve_kernel::thread_tmp_103_fu_2726_p1() {
    tmp_103_fu_2726_p1 = tmp_14_2_4_2_reg_8243.read();
}

void convolve_kernel::thread_tmp_105_fu_2282_p1() {
    tmp_105_fu_2282_p1 = tmp_104_reg_4608.read();
}

void convolve_kernel::thread_tmp_106_fu_2729_p1() {
    tmp_106_fu_2729_p1 = tmp_14_2_5_2_reg_8248.read();
}

void convolve_kernel::thread_tmp_108_fu_2286_p1() {
    tmp_108_fu_2286_p1 = tmp_107_reg_4613.read();
}

void convolve_kernel::thread_tmp_109_fu_2732_p1() {
    tmp_109_fu_2732_p1 = tmp_14_2_6_2_reg_8253.read();
}

void convolve_kernel::thread_tmp_10_fu_2158_p1() {
    tmp_10_fu_2158_p1 = tmp_350_reg_4443.read();
}

void convolve_kernel::thread_tmp_111_fu_2290_p1() {
    tmp_111_fu_2290_p1 = tmp_110_reg_4618.read();
}

void convolve_kernel::thread_tmp_112_fu_2735_p1() {
    tmp_112_fu_2735_p1 = tmp_14_2_7_2_reg_8258.read();
}

void convolve_kernel::thread_tmp_114_fu_2294_p1() {
    tmp_114_fu_2294_p1 = tmp_113_reg_4623.read();
}

void convolve_kernel::thread_tmp_115_fu_2738_p1() {
    tmp_115_fu_2738_p1 = tmp_14_2_8_2_reg_8263.read();
}

void convolve_kernel::thread_tmp_117_fu_2298_p1() {
    tmp_117_fu_2298_p1 = tmp_116_reg_4628.read();
}

void convolve_kernel::thread_tmp_118_fu_2741_p1() {
    tmp_118_fu_2741_p1 = tmp_14_2_9_2_reg_8268.read();
}

void convolve_kernel::thread_tmp_11_fu_2574_p1() {
    tmp_11_fu_2574_p1 = tmp_14_0_0_2_reg_8093.read();
}

void convolve_kernel::thread_tmp_120_fu_2302_p1() {
    tmp_120_fu_2302_p1 = tmp_119_reg_4633.read();
}

void convolve_kernel::thread_tmp_121_fu_2744_p1() {
    tmp_121_fu_2744_p1 = tmp_14_2_10_2_reg_8273.read();
}

void convolve_kernel::thread_tmp_123_fu_2306_p1() {
    tmp_123_fu_2306_p1 = tmp_122_reg_4638.read();
}

void convolve_kernel::thread_tmp_124_fu_2747_p1() {
    tmp_124_fu_2747_p1 = tmp_14_2_11_2_reg_8278.read();
}

void convolve_kernel::thread_tmp_126_fu_2310_p1() {
    tmp_126_fu_2310_p1 = tmp_125_reg_4643.read();
}

void convolve_kernel::thread_tmp_127_fu_2750_p1() {
    tmp_127_fu_2750_p1 = tmp_14_2_12_2_reg_8283.read();
}

void convolve_kernel::thread_tmp_128_fu_2753_p14() {
    tmp_128_fu_2753_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_127_fu_2750_p1.read(), tmp_124_fu_2747_p1.read()), tmp_121_fu_2744_p1.read()), tmp_118_fu_2741_p1.read()), tmp_115_fu_2738_p1.read()), tmp_112_fu_2735_p1.read()), tmp_109_fu_2732_p1.read()), tmp_106_fu_2729_p1.read()), tmp_103_fu_2726_p1.read()), tmp_100_fu_2723_p1.read()), tmp_97_fu_2720_p1.read()), tmp_94_fu_2717_p1.read()), tmp_91_fu_2714_p1.read());
}

void convolve_kernel::thread_tmp_129_fu_2027_p2() {
    tmp_129_fu_2027_p2 = (tmp_49_fu_2015_p3.read() | ap_const_lv8_1);
}

void convolve_kernel::thread_tmp_130_fu_2314_p1() {
    tmp_130_fu_2314_p1 = tmp_354_reg_4648.read();
}

void convolve_kernel::thread_tmp_131_fu_2784_p1() {
    tmp_131_fu_2784_p1 = tmp_14_3_0_2_reg_8288.read();
}

void convolve_kernel::thread_tmp_133_fu_2318_p1() {
    tmp_133_fu_2318_p1 = tmp_132_reg_4653.read();
}

void convolve_kernel::thread_tmp_134_fu_2787_p1() {
    tmp_134_fu_2787_p1 = tmp_14_3_1_2_reg_8293.read();
}

void convolve_kernel::thread_tmp_136_fu_2322_p1() {
    tmp_136_fu_2322_p1 = tmp_135_reg_4658.read();
}

void convolve_kernel::thread_tmp_137_fu_2790_p1() {
    tmp_137_fu_2790_p1 = tmp_14_3_2_2_reg_8298.read();
}

void convolve_kernel::thread_tmp_139_fu_2326_p1() {
    tmp_139_fu_2326_p1 = tmp_138_reg_4663.read();
}

void convolve_kernel::thread_tmp_13_fu_2162_p1() {
    tmp_13_fu_2162_p1 = tmp_12_reg_4448.read();
}

void convolve_kernel::thread_tmp_140_fu_2793_p1() {
    tmp_140_fu_2793_p1 = tmp_14_3_3_2_reg_8303.read();
}

void convolve_kernel::thread_tmp_142_fu_2330_p1() {
    tmp_142_fu_2330_p1 = tmp_141_reg_4668.read();
}

void convolve_kernel::thread_tmp_143_fu_2796_p1() {
    tmp_143_fu_2796_p1 = tmp_14_3_4_2_reg_8308.read();
}

void convolve_kernel::thread_tmp_145_fu_2334_p1() {
    tmp_145_fu_2334_p1 = tmp_144_reg_4673.read();
}

void convolve_kernel::thread_tmp_146_fu_2799_p1() {
    tmp_146_fu_2799_p1 = tmp_14_3_5_2_reg_8313.read();
}

void convolve_kernel::thread_tmp_148_fu_2338_p1() {
    tmp_148_fu_2338_p1 = tmp_147_reg_4678.read();
}

void convolve_kernel::thread_tmp_149_fu_2802_p1() {
    tmp_149_fu_2802_p1 = tmp_14_3_6_2_reg_8318.read();
}

void convolve_kernel::thread_tmp_14_fu_2577_p1() {
    tmp_14_fu_2577_p1 = tmp_14_0_1_2_reg_8098.read();
}

void convolve_kernel::thread_tmp_151_fu_2342_p1() {
    tmp_151_fu_2342_p1 = tmp_150_reg_4683.read();
}

void convolve_kernel::thread_tmp_152_fu_2805_p1() {
    tmp_152_fu_2805_p1 = tmp_14_3_7_2_reg_8323.read();
}

void convolve_kernel::thread_tmp_154_fu_2346_p1() {
    tmp_154_fu_2346_p1 = tmp_153_reg_4688.read();
}

void convolve_kernel::thread_tmp_155_fu_2808_p1() {
    tmp_155_fu_2808_p1 = tmp_14_3_8_2_reg_8328.read();
}

void convolve_kernel::thread_tmp_157_fu_2350_p1() {
    tmp_157_fu_2350_p1 = tmp_156_reg_4693.read();
}

void convolve_kernel::thread_tmp_158_fu_2811_p1() {
    tmp_158_fu_2811_p1 = tmp_14_3_9_2_reg_8333.read();
}

void convolve_kernel::thread_tmp_160_fu_2354_p1() {
    tmp_160_fu_2354_p1 = tmp_159_reg_4698.read();
}

void convolve_kernel::thread_tmp_161_fu_2814_p1() {
    tmp_161_fu_2814_p1 = tmp_14_3_10_2_reg_8338.read();
}

void convolve_kernel::thread_tmp_163_fu_2358_p1() {
    tmp_163_fu_2358_p1 = tmp_162_reg_4703.read();
}

void convolve_kernel::thread_tmp_164_fu_2817_p1() {
    tmp_164_fu_2817_p1 = tmp_14_3_11_2_reg_8343.read();
}

void convolve_kernel::thread_tmp_166_fu_2362_p1() {
    tmp_166_fu_2362_p1 = tmp_165_reg_4708.read();
}

void convolve_kernel::thread_tmp_167_fu_2820_p1() {
    tmp_167_fu_2820_p1 = tmp_14_3_12_2_reg_8348.read();
}

void convolve_kernel::thread_tmp_168_fu_2823_p14() {
    tmp_168_fu_2823_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_167_fu_2820_p1.read(), tmp_164_fu_2817_p1.read()), tmp_161_fu_2814_p1.read()), tmp_158_fu_2811_p1.read()), tmp_155_fu_2808_p1.read()), tmp_152_fu_2805_p1.read()), tmp_149_fu_2802_p1.read()), tmp_146_fu_2799_p1.read()), tmp_143_fu_2796_p1.read()), tmp_140_fu_2793_p1.read()), tmp_137_fu_2790_p1.read()), tmp_134_fu_2787_p1.read()), tmp_131_fu_2784_p1.read());
}

void convolve_kernel::thread_tmp_169_fu_2033_p3() {
    tmp_169_fu_2033_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_129_fu_2027_p2.read());
}

void convolve_kernel::thread_tmp_16_fu_2166_p1() {
    tmp_16_fu_2166_p1 = tmp_15_reg_4453.read();
}

void convolve_kernel::thread_tmp_170_fu_2366_p1() {
    tmp_170_fu_2366_p1 = tmp_355_reg_4713.read();
}

void convolve_kernel::thread_tmp_171_fu_2854_p1() {
    tmp_171_fu_2854_p1 = tmp_14_4_0_2_reg_8353.read();
}

void convolve_kernel::thread_tmp_173_fu_2370_p1() {
    tmp_173_fu_2370_p1 = tmp_172_reg_4718.read();
}

void convolve_kernel::thread_tmp_174_fu_2857_p1() {
    tmp_174_fu_2857_p1 = tmp_14_4_1_2_reg_8358.read();
}

void convolve_kernel::thread_tmp_176_fu_2374_p1() {
    tmp_176_fu_2374_p1 = tmp_175_reg_4723.read();
}

void convolve_kernel::thread_tmp_177_fu_2860_p1() {
    tmp_177_fu_2860_p1 = tmp_14_4_2_2_reg_8363.read();
}

void convolve_kernel::thread_tmp_179_fu_2378_p1() {
    tmp_179_fu_2378_p1 = tmp_178_reg_4728.read();
}

void convolve_kernel::thread_tmp_17_fu_2580_p1() {
    tmp_17_fu_2580_p1 = tmp_14_0_2_2_reg_8103.read();
}

void convolve_kernel::thread_tmp_180_fu_2863_p1() {
    tmp_180_fu_2863_p1 = tmp_14_4_3_2_reg_8368.read();
}

void convolve_kernel::thread_tmp_182_fu_2382_p1() {
    tmp_182_fu_2382_p1 = tmp_181_reg_4733.read();
}

void convolve_kernel::thread_tmp_183_fu_2866_p1() {
    tmp_183_fu_2866_p1 = tmp_14_4_4_2_reg_8373.read();
}

void convolve_kernel::thread_tmp_185_fu_2386_p1() {
    tmp_185_fu_2386_p1 = tmp_184_reg_4738.read();
}

void convolve_kernel::thread_tmp_186_fu_2869_p1() {
    tmp_186_fu_2869_p1 = tmp_14_4_5_2_reg_8378.read();
}

void convolve_kernel::thread_tmp_188_fu_2390_p1() {
    tmp_188_fu_2390_p1 = tmp_187_reg_4743.read();
}

void convolve_kernel::thread_tmp_189_fu_2872_p1() {
    tmp_189_fu_2872_p1 = tmp_14_4_6_2_reg_8383.read();
}

void convolve_kernel::thread_tmp_191_fu_2394_p1() {
    tmp_191_fu_2394_p1 = tmp_190_reg_4748.read();
}

void convolve_kernel::thread_tmp_192_fu_2875_p1() {
    tmp_192_fu_2875_p1 = tmp_14_4_7_2_reg_8388.read();
}

void convolve_kernel::thread_tmp_194_fu_2398_p1() {
    tmp_194_fu_2398_p1 = tmp_193_reg_4753.read();
}

void convolve_kernel::thread_tmp_195_fu_2878_p1() {
    tmp_195_fu_2878_p1 = tmp_14_4_8_2_reg_8393.read();
}

void convolve_kernel::thread_tmp_197_fu_2402_p1() {
    tmp_197_fu_2402_p1 = tmp_196_reg_4758.read();
}

void convolve_kernel::thread_tmp_198_fu_2881_p1() {
    tmp_198_fu_2881_p1 = tmp_14_4_9_2_reg_8398.read();
}

void convolve_kernel::thread_tmp_19_fu_2170_p1() {
    tmp_19_fu_2170_p1 = tmp_18_reg_4458.read();
}

void convolve_kernel::thread_tmp_1_cast_fu_1660_p1() {
    tmp_1_cast_fu_1660_p1 = esl_zext<7,6>(tmp_1_reg_3244.read());
}

void convolve_kernel::thread_tmp_1_cast_mid2_fu_1642_p1() {
    tmp_1_cast_mid2_fu_1642_p1 = esl_zext<5,3>(tmp_1_mid2_v_reg_3218.read());
}

void convolve_kernel::thread_tmp_1_fu_1614_p2() {
    tmp_1_fu_1614_p2 = (!tmp_1_mid2_cast_fu_1600_p1.read().is_01() || !p_shl2_cast_fu_1610_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_1_mid2_cast_fu_1600_p1.read()) + sc_biguint<6>(p_shl2_cast_fu_1610_p1.read()));
}

void convolve_kernel::thread_tmp_1_mid2_cast_fu_1600_p1() {
    tmp_1_mid2_cast_fu_1600_p1 = esl_zext<6,3>(tmp_1_mid2_v_reg_3218.read());
}

void convolve_kernel::thread_tmp_1_mid2_v_fu_1578_p3() {
    tmp_1_mid2_v_fu_1578_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? i_1_reg_3178.read(): i_reg_890.read());
}

void convolve_kernel::thread_tmp_200_fu_2406_p1() {
    tmp_200_fu_2406_p1 = tmp_199_reg_4763.read();
}

void convolve_kernel::thread_tmp_201_fu_2884_p1() {
    tmp_201_fu_2884_p1 = tmp_14_4_10_2_reg_8403.read();
}

void convolve_kernel::thread_tmp_203_fu_2410_p1() {
    tmp_203_fu_2410_p1 = tmp_202_reg_4768.read();
}

void convolve_kernel::thread_tmp_204_fu_2887_p1() {
    tmp_204_fu_2887_p1 = tmp_14_4_11_2_reg_8408.read();
}

void convolve_kernel::thread_tmp_206_fu_2414_p1() {
    tmp_206_fu_2414_p1 = tmp_205_reg_4773.read();
}

void convolve_kernel::thread_tmp_207_fu_2890_p1() {
    tmp_207_fu_2890_p1 = tmp_14_4_12_2_reg_8413.read();
}

void convolve_kernel::thread_tmp_208_fu_2893_p14() {
    tmp_208_fu_2893_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_207_fu_2890_p1.read(), tmp_204_fu_2887_p1.read()), tmp_201_fu_2884_p1.read()), tmp_198_fu_2881_p1.read()), tmp_195_fu_2878_p1.read()), tmp_192_fu_2875_p1.read()), tmp_189_fu_2872_p1.read()), tmp_186_fu_2869_p1.read()), tmp_183_fu_2866_p1.read()), tmp_180_fu_2863_p1.read()), tmp_177_fu_2860_p1.read()), tmp_174_fu_2857_p1.read()), tmp_171_fu_2854_p1.read());
}

void convolve_kernel::thread_tmp_209_fu_2042_p2() {
    tmp_209_fu_2042_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_2);
}

void convolve_kernel::thread_tmp_20_fu_2583_p1() {
    tmp_20_fu_2583_p1 = tmp_14_0_3_2_reg_8108.read();
}

void convolve_kernel::thread_tmp_210_fu_2418_p1() {
    tmp_210_fu_2418_p1 = tmp_356_reg_4778.read();
}

void convolve_kernel::thread_tmp_211_fu_2924_p1() {
    tmp_211_fu_2924_p1 = tmp_14_5_0_2_reg_8418.read();
}

void convolve_kernel::thread_tmp_213_fu_2422_p1() {
    tmp_213_fu_2422_p1 = tmp_212_reg_4783.read();
}

void convolve_kernel::thread_tmp_214_fu_2927_p1() {
    tmp_214_fu_2927_p1 = tmp_14_5_1_2_reg_8423.read();
}

void convolve_kernel::thread_tmp_216_fu_2426_p1() {
    tmp_216_fu_2426_p1 = tmp_215_reg_4788.read();
}

void convolve_kernel::thread_tmp_217_fu_2930_p1() {
    tmp_217_fu_2930_p1 = tmp_14_5_2_2_reg_8428.read();
}

void convolve_kernel::thread_tmp_219_fu_2430_p1() {
    tmp_219_fu_2430_p1 = tmp_218_reg_4793.read();
}

void convolve_kernel::thread_tmp_220_fu_2933_p1() {
    tmp_220_fu_2933_p1 = tmp_14_5_3_2_reg_8433.read();
}

void convolve_kernel::thread_tmp_222_fu_2434_p1() {
    tmp_222_fu_2434_p1 = tmp_221_reg_4798.read();
}

void convolve_kernel::thread_tmp_223_fu_2936_p1() {
    tmp_223_fu_2936_p1 = tmp_14_5_4_2_reg_8438.read();
}

void convolve_kernel::thread_tmp_225_fu_2438_p1() {
    tmp_225_fu_2438_p1 = tmp_224_reg_4803.read();
}

void convolve_kernel::thread_tmp_226_fu_2939_p1() {
    tmp_226_fu_2939_p1 = tmp_14_5_5_2_reg_8443.read();
}

void convolve_kernel::thread_tmp_228_fu_2442_p1() {
    tmp_228_fu_2442_p1 = tmp_227_reg_4808.read();
}

void convolve_kernel::thread_tmp_229_fu_2942_p1() {
    tmp_229_fu_2942_p1 = tmp_14_5_6_2_reg_8448.read();
}

void convolve_kernel::thread_tmp_22_fu_2174_p1() {
    tmp_22_fu_2174_p1 = tmp_21_reg_4463.read();
}

void convolve_kernel::thread_tmp_231_fu_2446_p1() {
    tmp_231_fu_2446_p1 = tmp_230_reg_4813.read();
}

void convolve_kernel::thread_tmp_232_fu_2945_p1() {
    tmp_232_fu_2945_p1 = tmp_14_5_7_2_reg_8453.read();
}

void convolve_kernel::thread_tmp_234_fu_2450_p1() {
    tmp_234_fu_2450_p1 = tmp_233_reg_4818.read();
}

void convolve_kernel::thread_tmp_235_fu_2948_p1() {
    tmp_235_fu_2948_p1 = tmp_14_5_8_2_reg_8458.read();
}

void convolve_kernel::thread_tmp_237_fu_2454_p1() {
    tmp_237_fu_2454_p1 = tmp_236_reg_4823.read();
}

void convolve_kernel::thread_tmp_238_fu_2951_p1() {
    tmp_238_fu_2951_p1 = tmp_14_5_9_2_reg_8463.read();
}

void convolve_kernel::thread_tmp_23_fu_2586_p1() {
    tmp_23_fu_2586_p1 = tmp_14_0_4_2_reg_8113.read();
}

void convolve_kernel::thread_tmp_240_fu_2458_p1() {
    tmp_240_fu_2458_p1 = tmp_239_reg_4828.read();
}

void convolve_kernel::thread_tmp_241_fu_2954_p1() {
    tmp_241_fu_2954_p1 = tmp_14_5_10_2_reg_8468.read();
}

void convolve_kernel::thread_tmp_243_fu_2462_p1() {
    tmp_243_fu_2462_p1 = tmp_242_reg_4833.read();
}

void convolve_kernel::thread_tmp_244_fu_2957_p1() {
    tmp_244_fu_2957_p1 = tmp_14_5_11_2_reg_8473.read();
}

void convolve_kernel::thread_tmp_246_fu_2466_p1() {
    tmp_246_fu_2466_p1 = tmp_245_reg_4838.read();
}

void convolve_kernel::thread_tmp_247_fu_2960_p1() {
    tmp_247_fu_2960_p1 = tmp_14_5_12_2_reg_8478.read();
}

void convolve_kernel::thread_tmp_248_fu_2963_p14() {
    tmp_248_fu_2963_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_247_fu_2960_p1.read(), tmp_244_fu_2957_p1.read()), tmp_241_fu_2954_p1.read()), tmp_238_fu_2951_p1.read()), tmp_235_fu_2948_p1.read()), tmp_232_fu_2945_p1.read()), tmp_229_fu_2942_p1.read()), tmp_226_fu_2939_p1.read()), tmp_223_fu_2936_p1.read()), tmp_220_fu_2933_p1.read()), tmp_217_fu_2930_p1.read()), tmp_214_fu_2927_p1.read()), tmp_211_fu_2924_p1.read());
}

void convolve_kernel::thread_tmp_249_fu_2047_p3() {
    tmp_249_fu_2047_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_209_fu_2042_p2.read());
}

void convolve_kernel::thread_tmp_250_fu_2470_p1() {
    tmp_250_fu_2470_p1 = tmp_357_reg_5038.read();
}

void convolve_kernel::thread_tmp_251_fu_2994_p1() {
    tmp_251_fu_2994_p1 = tmp_14_6_0_2_reg_8483.read();
}

void convolve_kernel::thread_tmp_253_fu_2474_p1() {
    tmp_253_fu_2474_p1 = tmp_252_reg_5043.read();
}

void convolve_kernel::thread_tmp_254_fu_2997_p1() {
    tmp_254_fu_2997_p1 = tmp_14_6_1_2_reg_8488.read();
}

void convolve_kernel::thread_tmp_256_fu_2478_p1() {
    tmp_256_fu_2478_p1 = tmp_255_reg_5048.read();
}

void convolve_kernel::thread_tmp_257_fu_3000_p1() {
    tmp_257_fu_3000_p1 = tmp_14_6_2_2_reg_8493.read();
}

void convolve_kernel::thread_tmp_259_fu_2482_p1() {
    tmp_259_fu_2482_p1 = tmp_258_reg_5053.read();
}

void convolve_kernel::thread_tmp_25_fu_2178_p1() {
    tmp_25_fu_2178_p1 = tmp_24_reg_4468.read();
}

void convolve_kernel::thread_tmp_260_fu_3003_p1() {
    tmp_260_fu_3003_p1 = tmp_14_6_3_2_reg_8498.read();
}

void convolve_kernel::thread_tmp_262_fu_2486_p1() {
    tmp_262_fu_2486_p1 = tmp_261_reg_5058.read();
}

void convolve_kernel::thread_tmp_263_fu_3006_p1() {
    tmp_263_fu_3006_p1 = tmp_14_6_4_2_reg_8503.read();
}

void convolve_kernel::thread_tmp_265_fu_2490_p1() {
    tmp_265_fu_2490_p1 = tmp_264_reg_5063.read();
}

void convolve_kernel::thread_tmp_266_fu_3009_p1() {
    tmp_266_fu_3009_p1 = tmp_14_6_5_2_reg_8508.read();
}

void convolve_kernel::thread_tmp_268_fu_2494_p1() {
    tmp_268_fu_2494_p1 = tmp_267_reg_5068.read();
}

void convolve_kernel::thread_tmp_269_fu_3012_p1() {
    tmp_269_fu_3012_p1 = tmp_14_6_6_2_reg_8513.read();
}

void convolve_kernel::thread_tmp_26_fu_2589_p1() {
    tmp_26_fu_2589_p1 = tmp_14_0_5_2_reg_8118.read();
}

void convolve_kernel::thread_tmp_271_fu_2498_p1() {
    tmp_271_fu_2498_p1 = tmp_270_reg_5073.read();
}

void convolve_kernel::thread_tmp_272_fu_3015_p1() {
    tmp_272_fu_3015_p1 = tmp_14_6_7_2_reg_8518.read();
}

void convolve_kernel::thread_tmp_274_fu_2502_p1() {
    tmp_274_fu_2502_p1 = tmp_273_reg_5078.read();
}

void convolve_kernel::thread_tmp_275_fu_3018_p1() {
    tmp_275_fu_3018_p1 = tmp_14_6_8_2_reg_8523.read();
}

void convolve_kernel::thread_tmp_277_fu_2506_p1() {
    tmp_277_fu_2506_p1 = tmp_276_reg_5083.read();
}

void convolve_kernel::thread_tmp_278_fu_3021_p1() {
    tmp_278_fu_3021_p1 = tmp_14_6_9_2_reg_8528.read();
}

void convolve_kernel::thread_tmp_280_fu_2510_p1() {
    tmp_280_fu_2510_p1 = tmp_279_reg_5088.read();
}

void convolve_kernel::thread_tmp_281_fu_3024_p1() {
    tmp_281_fu_3024_p1 = tmp_14_6_10_2_reg_8533.read();
}

void convolve_kernel::thread_tmp_283_fu_2514_p1() {
    tmp_283_fu_2514_p1 = tmp_282_reg_5093.read();
}

void convolve_kernel::thread_tmp_284_fu_3027_p1() {
    tmp_284_fu_3027_p1 = tmp_14_6_11_2_reg_8538.read();
}

void convolve_kernel::thread_tmp_286_fu_2518_p1() {
    tmp_286_fu_2518_p1 = tmp_285_reg_5098.read();
}

void convolve_kernel::thread_tmp_287_fu_3030_p1() {
    tmp_287_fu_3030_p1 = tmp_14_6_12_2_reg_8543.read();
}

void convolve_kernel::thread_tmp_288_fu_3033_p14() {
    tmp_288_fu_3033_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_287_fu_3030_p1.read(), tmp_284_fu_3027_p1.read()), tmp_281_fu_3024_p1.read()), tmp_278_fu_3021_p1.read()), tmp_275_fu_3018_p1.read()), tmp_272_fu_3015_p1.read()), tmp_269_fu_3012_p1.read()), tmp_266_fu_3009_p1.read()), tmp_263_fu_3006_p1.read()), tmp_260_fu_3003_p1.read()), tmp_257_fu_3000_p1.read()), tmp_254_fu_2997_p1.read()), tmp_251_fu_2994_p1.read());
}

void convolve_kernel::thread_tmp_289_fu_2056_p2() {
    tmp_289_fu_2056_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_3);
}

void convolve_kernel::thread_tmp_28_fu_2182_p1() {
    tmp_28_fu_2182_p1 = tmp_27_reg_4473.read();
}

void convolve_kernel::thread_tmp_290_fu_2522_p1() {
    tmp_290_fu_2522_p1 = tmp_358_reg_5103.read();
}

void convolve_kernel::thread_tmp_291_fu_3064_p1() {
    tmp_291_fu_3064_p1 = tmp_14_7_0_2_reg_8548.read();
}

void convolve_kernel::thread_tmp_293_fu_2526_p1() {
    tmp_293_fu_2526_p1 = tmp_292_reg_5108.read();
}

void convolve_kernel::thread_tmp_294_fu_3067_p1() {
    tmp_294_fu_3067_p1 = tmp_14_7_1_2_reg_8553.read();
}

void convolve_kernel::thread_tmp_296_fu_2530_p1() {
    tmp_296_fu_2530_p1 = tmp_295_reg_5113.read();
}

void convolve_kernel::thread_tmp_297_fu_3070_p1() {
    tmp_297_fu_3070_p1 = tmp_14_7_2_2_reg_8558.read();
}

void convolve_kernel::thread_tmp_299_fu_2534_p1() {
    tmp_299_fu_2534_p1 = tmp_298_reg_5118.read();
}

void convolve_kernel::thread_tmp_29_fu_2592_p1() {
    tmp_29_fu_2592_p1 = tmp_14_0_6_2_reg_8123.read();
}

void convolve_kernel::thread_tmp_2_cast_fu_1663_p1() {
    tmp_2_cast_fu_1663_p1 = esl_zext<7,6>(tmp_2_reg_3264.read());
}

void convolve_kernel::thread_tmp_2_fu_1637_p2() {
    tmp_2_fu_1637_p2 = (!ap_const_lv6_19.is_01() || !tmp_1_reg_3244.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_19) + sc_biguint<6>(tmp_1_reg_3244.read()));
}

void convolve_kernel::thread_tmp_300_fu_3073_p1() {
    tmp_300_fu_3073_p1 = tmp_14_7_3_2_reg_8563.read();
}

void convolve_kernel::thread_tmp_302_fu_2538_p1() {
    tmp_302_fu_2538_p1 = tmp_301_reg_5123.read();
}

void convolve_kernel::thread_tmp_303_fu_3076_p1() {
    tmp_303_fu_3076_p1 = tmp_14_7_4_2_reg_8568.read();
}

void convolve_kernel::thread_tmp_305_fu_2542_p1() {
    tmp_305_fu_2542_p1 = tmp_304_reg_5128.read();
}

void convolve_kernel::thread_tmp_306_fu_3079_p1() {
    tmp_306_fu_3079_p1 = tmp_14_7_5_2_reg_8573.read();
}

void convolve_kernel::thread_tmp_308_fu_2546_p1() {
    tmp_308_fu_2546_p1 = tmp_307_reg_5133.read();
}

void convolve_kernel::thread_tmp_309_fu_3082_p1() {
    tmp_309_fu_3082_p1 = tmp_14_7_6_2_reg_8578.read();
}

void convolve_kernel::thread_tmp_311_fu_2550_p1() {
    tmp_311_fu_2550_p1 = tmp_310_reg_5138.read();
}

void convolve_kernel::thread_tmp_312_fu_3085_p1() {
    tmp_312_fu_3085_p1 = tmp_14_7_7_2_reg_8583.read();
}

void convolve_kernel::thread_tmp_314_fu_2554_p1() {
    tmp_314_fu_2554_p1 = tmp_313_reg_5143.read();
}

void convolve_kernel::thread_tmp_315_fu_3088_p1() {
    tmp_315_fu_3088_p1 = tmp_14_7_8_2_reg_8588.read();
}

void convolve_kernel::thread_tmp_317_fu_2558_p1() {
    tmp_317_fu_2558_p1 = tmp_316_reg_5148.read();
}

void convolve_kernel::thread_tmp_318_fu_3091_p1() {
    tmp_318_fu_3091_p1 = tmp_14_7_9_2_reg_8593.read();
}

void convolve_kernel::thread_tmp_31_fu_2186_p1() {
    tmp_31_fu_2186_p1 = tmp_30_reg_4478.read();
}

void convolve_kernel::thread_tmp_320_fu_2562_p1() {
    tmp_320_fu_2562_p1 = tmp_319_reg_5153.read();
}

void convolve_kernel::thread_tmp_321_fu_3094_p1() {
    tmp_321_fu_3094_p1 = tmp_14_7_10_2_reg_8598.read();
}

void convolve_kernel::thread_tmp_323_fu_2566_p1() {
    tmp_323_fu_2566_p1 = tmp_322_reg_5158.read();
}

void convolve_kernel::thread_tmp_324_fu_3097_p1() {
    tmp_324_fu_3097_p1 = tmp_14_7_11_2_reg_8603.read();
}

void convolve_kernel::thread_tmp_326_fu_2570_p1() {
    tmp_326_fu_2570_p1 = tmp_325_reg_5163.read();
}

void convolve_kernel::thread_tmp_327_fu_3100_p1() {
    tmp_327_fu_3100_p1 = tmp_14_7_12_2_reg_8608.read();
}

void convolve_kernel::thread_tmp_328_fu_3103_p14() {
    tmp_328_fu_3103_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_327_fu_3100_p1.read(), tmp_324_fu_3097_p1.read()), tmp_321_fu_3094_p1.read()), tmp_318_fu_3091_p1.read()), tmp_315_fu_3088_p1.read()), tmp_312_fu_3085_p1.read()), tmp_309_fu_3082_p1.read()), tmp_306_fu_3079_p1.read()), tmp_303_fu_3076_p1.read()), tmp_300_fu_3073_p1.read()), tmp_297_fu_3070_p1.read()), tmp_294_fu_3067_p1.read()), tmp_291_fu_3064_p1.read());
}

void convolve_kernel::thread_tmp_329_cast_fu_1747_p1() {
    tmp_329_cast_fu_1747_p1 = esl_zext<32,7>(tmp_4_reg_3303.read());
}

void convolve_kernel::thread_tmp_329_fu_2061_p3() {
    tmp_329_fu_2061_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_289_fu_2056_p2.read());
}

void convolve_kernel::thread_tmp_32_fu_2595_p1() {
    tmp_32_fu_2595_p1 = tmp_14_0_7_2_reg_8128.read();
}

void convolve_kernel::thread_tmp_330_cast_fu_1804_p1() {
    tmp_330_cast_fu_1804_p1 = esl_zext<32,7>(tmp_5_reg_3335.read());
}

void convolve_kernel::thread_tmp_330_fu_2070_p2() {
    tmp_330_fu_2070_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_4);
}

void convolve_kernel::thread_tmp_331_fu_2075_p3() {
    tmp_331_fu_2075_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_330_fu_2070_p2.read());
}

void convolve_kernel::thread_tmp_332_fu_2084_p2() {
    tmp_332_fu_2084_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_5);
}

void convolve_kernel::thread_tmp_333_fu_2089_p3() {
    tmp_333_fu_2089_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_332_fu_2084_p2.read());
}

void convolve_kernel::thread_tmp_334_fu_2106_p2() {
    tmp_334_fu_2106_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_6);
}

void convolve_kernel::thread_tmp_335_fu_2111_p3() {
    tmp_335_fu_2111_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_334_fu_2106_p2.read());
}

void convolve_kernel::thread_tmp_336_fu_2120_p2() {
    tmp_336_fu_2120_p2 = (tmp_49_reg_4301.read() | ap_const_lv8_7);
}

void convolve_kernel::thread_tmp_337_fu_2125_p3() {
    tmp_337_fu_2125_p3 = esl_concat<24,8>(ap_const_lv24_0, tmp_336_fu_2120_p2.read());
}

void convolve_kernel::thread_tmp_338_fu_1694_p3() {
    tmp_338_fu_1694_p3 = esl_concat<5,4>(tmp_8_reg_3277.read(), ap_const_lv4_0);
}

void convolve_kernel::thread_tmp_339_fu_1705_p3() {
    tmp_339_fu_1705_p3 = esl_concat<5,2>(tmp_8_reg_3277.read(), ap_const_lv2_0);
}

void convolve_kernel::thread_tmp_340_fu_1716_p2() {
    tmp_340_fu_1716_p2 = (!p_shl_cast_fu_1701_p1.read().is_01() || !p_shl1_cast_fu_1712_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl_cast_fu_1701_p1.read()) - sc_biguint<10>(p_shl1_cast_fu_1712_p1.read()));
}

void convolve_kernel::thread_tmp_341_fu_1782_p2() {
    tmp_341_fu_1782_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_4_mid2_cast1_fu_1728_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_4_mid2_cast1_fu_1728_p1.read()));
}

void convolve_kernel::thread_tmp_342_fu_1787_p2() {
    tmp_342_fu_1787_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_1_cast_mid2_ca_fu_1773_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_1_cast_mid2_ca_fu_1773_p1.read()));
}

void convolve_kernel::thread_tmp_343_fu_1885_p2() {
    tmp_343_fu_1885_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_2_cast_mid2_ca_fu_1829_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_2_cast_mid2_ca_fu_1829_p1.read()));
}

void convolve_kernel::thread_tmp_344_fu_1890_p2() {
    tmp_344_fu_1890_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_3_cast_mid2_ca_fu_1845_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_3_cast_mid2_ca_fu_1845_p1.read()));
}

void convolve_kernel::thread_tmp_345_fu_1971_p2() {
    tmp_345_fu_1971_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_4_cast_mid2_ca_fu_1925_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_4_cast_mid2_ca_fu_1925_p1.read()));
}

void convolve_kernel::thread_tmp_346_fu_1976_p2() {
    tmp_346_fu_1976_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_5_cast_mid2_ca_fu_1935_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_5_cast_mid2_ca_fu_1935_p1.read()));
}

void convolve_kernel::thread_tmp_347_fu_1981_p2() {
    tmp_347_fu_1981_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_6_cast_mid2_ca_fu_1945_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_6_cast_mid2_ca_fu_1945_p1.read()));
}

void convolve_kernel::thread_tmp_348_fu_1986_p2() {
    tmp_348_fu_1986_p2 = (!tmp_340_reg_3313.read().is_01() || !tmp_3_7_cast_mid2_ca_fu_1955_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_340_reg_3313.read()) + sc_biguint<10>(tmp_3_7_cast_mid2_ca_fu_1955_p1.read()));
}

void convolve_kernel::thread_tmp_34_fu_2190_p1() {
    tmp_34_fu_2190_p1 = tmp_33_reg_4483.read();
}

void convolve_kernel::thread_tmp_350_cast_fu_1873_p1() {
    tmp_350_cast_fu_1873_p1 = esl_sext<32,10>(tmp_341_reg_3465.read());
}

void convolve_kernel::thread_tmp_350_fu_2098_p0() {
    tmp_350_fu_2098_p0 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_tmp_350_fu_2098_p1() {
    tmp_350_fu_2098_p1 = tmp_350_fu_2098_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_351_cast_fu_1879_p1() {
    tmp_351_cast_fu_1879_p1 = esl_sext<32,10>(tmp_342_reg_3470.read());
}

void convolve_kernel::thread_tmp_352_cast_fu_1959_p1() {
    tmp_352_cast_fu_1959_p1 = esl_zext<32,10>(tmp_343_reg_3570.read());
}

void convolve_kernel::thread_tmp_352_fu_2102_p0() {
    tmp_352_fu_2102_p0 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_tmp_352_fu_2102_p1() {
    tmp_352_fu_2102_p1 = tmp_352_fu_2102_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_353_cast_fu_1965_p1() {
    tmp_353_cast_fu_1965_p1 = esl_zext<32,10>(tmp_344_reg_3575.read());
}

void convolve_kernel::thread_tmp_353_fu_2134_p0() {
    tmp_353_fu_2134_p0 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_tmp_353_fu_2134_p1() {
    tmp_353_fu_2134_p1 = tmp_353_fu_2134_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_354_cast_fu_1991_p1() {
    tmp_354_cast_fu_1991_p1 = esl_zext<32,10>(tmp_345_reg_3610.read());
}

void convolve_kernel::thread_tmp_354_fu_2138_p0() {
    tmp_354_fu_2138_p0 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_tmp_354_fu_2138_p1() {
    tmp_354_fu_2138_p1 = tmp_354_fu_2138_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_355_cast_fu_1997_p1() {
    tmp_355_cast_fu_1997_p1 = esl_zext<32,10>(tmp_346_reg_3615.read());
}

void convolve_kernel::thread_tmp_355_fu_2142_p0() {
    tmp_355_fu_2142_p0 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_tmp_355_fu_2142_p1() {
    tmp_355_fu_2142_p1 = tmp_355_fu_2142_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_356_cast_fu_2003_p1() {
    tmp_356_cast_fu_2003_p1 = esl_zext<32,10>(tmp_347_reg_3620.read());
}

void convolve_kernel::thread_tmp_356_fu_2146_p0() {
    tmp_356_fu_2146_p0 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_tmp_356_fu_2146_p1() {
    tmp_356_fu_2146_p1 = tmp_356_fu_2146_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_357_cast_fu_2009_p1() {
    tmp_357_cast_fu_2009_p1 = esl_zext<32,10>(tmp_348_reg_3625.read());
}

void convolve_kernel::thread_tmp_357_fu_2150_p0() {
    tmp_357_fu_2150_p0 =  (sc_lv<416>) (bufo_Dout_A.read());
}

void convolve_kernel::thread_tmp_357_fu_2150_p1() {
    tmp_357_fu_2150_p1 = tmp_357_fu_2150_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_358_fu_2154_p0() {
    tmp_358_fu_2154_p0 =  (sc_lv<416>) (bufo_Dout_B.read());
}

void convolve_kernel::thread_tmp_358_fu_2154_p1() {
    tmp_358_fu_2154_p1 = tmp_358_fu_2154_p0.read().range(32-1, 0);
}

void convolve_kernel::thread_tmp_35_fu_2598_p1() {
    tmp_35_fu_2598_p1 = tmp_14_0_8_2_reg_8133.read();
}

void convolve_kernel::thread_tmp_37_fu_2194_p1() {
    tmp_37_fu_2194_p1 = tmp_36_reg_4488.read();
}

void convolve_kernel::thread_tmp_38_fu_2601_p1() {
    tmp_38_fu_2601_p1 = tmp_14_0_9_2_reg_8138.read();
}

void convolve_kernel::thread_tmp_3_1_cast_mid2_ca_fu_1773_p1() {
    tmp_3_1_cast_mid2_ca_fu_1773_p1 = esl_zext<10,3>(tmp_3_1_cast_mid2_fu_1767_p3.read());
}

void convolve_kernel::thread_tmp_3_1_cast_mid2_fu_1767_p3() {
    tmp_3_1_cast_mid2_fu_1767_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<3>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_1_mid1_reg_3308.read(): tmp_3_1_cast_mid_fu_1722_p3.read());
}

void convolve_kernel::thread_tmp_3_1_cast_mid_fu_1722_p3() {
    tmp_3_1_cast_mid_fu_1722_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv3_1: tmp_3_1_reg_3134.read());
}

void convolve_kernel::thread_tmp_3_1_fu_1493_p2() {
    tmp_3_1_fu_1493_p2 = (!j_phi_fu_917_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_phi_fu_917_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void convolve_kernel::thread_tmp_3_1_mid1_fu_1689_p2() {
    tmp_3_1_mid1_fu_1689_p2 = (!ap_const_lv3_2.is_01() || !j_mid_reg_3209.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_2) + sc_biguint<3>(j_mid_reg_3209.read()));
}

void convolve_kernel::thread_tmp_3_2_cast_mid2_ca_fu_1829_p1() {
    tmp_3_2_cast_mid2_ca_fu_1829_p1 = esl_zext<10,3>(tmp_3_2_cast_mid2_fu_1823_p3.read());
}

void convolve_kernel::thread_tmp_3_2_cast_mid2_fu_1823_p3() {
    tmp_3_2_cast_mid2_fu_1823_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<3>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_2_mid1_reg_3460.read(): tmp_3_2_cast_mid_fu_1792_p3.read());
}

void convolve_kernel::thread_tmp_3_2_cast_mid_fu_1792_p3() {
    tmp_3_2_cast_mid_fu_1792_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv3_2: tmp_3_2_reg_3139.read());
}

void convolve_kernel::thread_tmp_3_2_fu_1499_p2() {
    tmp_3_2_fu_1499_p2 = (!j_phi_fu_917_p4.read().is_01() || !ap_const_lv3_2.is_01())? sc_lv<3>(): (sc_biguint<3>(j_phi_fu_917_p4.read()) + sc_biguint<3>(ap_const_lv3_2));
}

void convolve_kernel::thread_tmp_3_2_mid1_fu_1777_p2() {
    tmp_3_2_mid1_fu_1777_p2 = (!ap_const_lv3_3.is_01() || !j_mid_reg_3209.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_3) + sc_biguint<3>(j_mid_reg_3209.read()));
}

void convolve_kernel::thread_tmp_3_3_cast_mid2_ca_fu_1845_p1() {
    tmp_3_3_cast_mid2_ca_fu_1845_p1 = esl_zext<10,3>(tmp_3_3_cast_mid2_fu_1838_p3.read());
}

void convolve_kernel::thread_tmp_3_3_cast_mid2_fu_1838_p3() {
    tmp_3_3_cast_mid2_fu_1838_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<3>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_3_mid1_fu_1833_p2.read(): tmp_3_3_cast_mid_fu_1798_p3.read());
}

void convolve_kernel::thread_tmp_3_3_cast_mid_fu_1798_p3() {
    tmp_3_3_cast_mid_fu_1798_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv3_3: tmp_3_3_reg_3144.read());
}

void convolve_kernel::thread_tmp_3_3_fu_1505_p2() {
    tmp_3_3_fu_1505_p2 = (!j_phi_fu_917_p4.read().is_01() || !ap_const_lv3_3.is_01())? sc_lv<3>(): (sc_biguint<3>(j_phi_fu_917_p4.read()) + sc_biguint<3>(ap_const_lv3_3));
}

void convolve_kernel::thread_tmp_3_3_mid1_fu_1833_p2() {
    tmp_3_3_mid1_fu_1833_p2 = (j_mid_reg_3209.read() ^ ap_const_lv3_4);
}

void convolve_kernel::thread_tmp_3_4_cast_mid2_ca_fu_1925_p1() {
    tmp_3_4_cast_mid2_ca_fu_1925_p1 = esl_zext<10,4>(tmp_3_4_cast_mid2_fu_1919_p3.read());
}

void convolve_kernel::thread_tmp_3_4_cast_mid2_fu_1919_p3() {
    tmp_3_4_cast_mid2_fu_1919_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<4>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_4_mid1_reg_3540.read(): tmp_3_4_cast_mid_fu_1895_p3.read());
}

void convolve_kernel::thread_tmp_3_4_cast_mid_fu_1895_p3() {
    tmp_3_4_cast_mid_fu_1895_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv4_4: tmp_3_4_reg_3149.read());
}

void convolve_kernel::thread_tmp_3_4_fu_1511_p2() {
    tmp_3_4_fu_1511_p2 = (!tmp_4_cast2_fu_1489_p1.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_4_cast2_fu_1489_p1.read()) + sc_biguint<4>(ap_const_lv4_4));
}

void convolve_kernel::thread_tmp_3_4_mid1_fu_1849_p2() {
    tmp_3_4_mid1_fu_1849_p2 = (!ap_const_lv4_4.is_01() || !tmp_4_cast2_mid1_fu_1820_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_4) + sc_biguint<4>(tmp_4_cast2_mid1_fu_1820_p1.read()));
}

void convolve_kernel::thread_tmp_3_5_cast_mid2_ca_fu_1935_p1() {
    tmp_3_5_cast_mid2_ca_fu_1935_p1 = esl_zext<10,4>(tmp_3_5_cast_mid2_fu_1929_p3.read());
}

void convolve_kernel::thread_tmp_3_5_cast_mid2_fu_1929_p3() {
    tmp_3_5_cast_mid2_fu_1929_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<4>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_5_mid1_reg_3545.read(): tmp_3_5_cast_mid_fu_1901_p3.read());
}

void convolve_kernel::thread_tmp_3_5_cast_mid_fu_1901_p3() {
    tmp_3_5_cast_mid_fu_1901_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv4_5: tmp_3_5_reg_3154.read());
}

void convolve_kernel::thread_tmp_3_5_fu_1517_p2() {
    tmp_3_5_fu_1517_p2 = (!tmp_4_cast2_fu_1489_p1.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_4_cast2_fu_1489_p1.read()) + sc_biguint<4>(ap_const_lv4_5));
}

void convolve_kernel::thread_tmp_3_5_mid1_fu_1855_p2() {
    tmp_3_5_mid1_fu_1855_p2 = (!ap_const_lv4_5.is_01() || !tmp_4_cast2_mid1_fu_1820_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_5) + sc_biguint<4>(tmp_4_cast2_mid1_fu_1820_p1.read()));
}

void convolve_kernel::thread_tmp_3_6_cast_mid2_ca_fu_1945_p1() {
    tmp_3_6_cast_mid2_ca_fu_1945_p1 = esl_zext<10,4>(tmp_3_6_cast_mid2_fu_1939_p3.read());
}

void convolve_kernel::thread_tmp_3_6_cast_mid2_fu_1939_p3() {
    tmp_3_6_cast_mid2_fu_1939_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<4>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_6_mid1_reg_3550.read(): tmp_3_6_cast_mid_fu_1907_p3.read());
}

void convolve_kernel::thread_tmp_3_6_cast_mid_fu_1907_p3() {
    tmp_3_6_cast_mid_fu_1907_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv4_6: tmp_3_6_reg_3159.read());
}

void convolve_kernel::thread_tmp_3_6_fu_1523_p2() {
    tmp_3_6_fu_1523_p2 = (!tmp_4_cast2_fu_1489_p1.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_4_cast2_fu_1489_p1.read()) + sc_biguint<4>(ap_const_lv4_6));
}

void convolve_kernel::thread_tmp_3_6_mid1_fu_1861_p2() {
    tmp_3_6_mid1_fu_1861_p2 = (!ap_const_lv4_6.is_01() || !tmp_4_cast2_mid1_fu_1820_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_6) + sc_biguint<4>(tmp_4_cast2_mid1_fu_1820_p1.read()));
}

void convolve_kernel::thread_tmp_3_7_cast_mid2_ca_fu_1955_p1() {
    tmp_3_7_cast_mid2_ca_fu_1955_p1 = esl_zext<10,4>(tmp_3_7_cast_mid2_fu_1949_p3.read());
}

void convolve_kernel::thread_tmp_3_7_cast_mid2_fu_1949_p3() {
    tmp_3_7_cast_mid2_fu_1949_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<4>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? tmp_3_7_mid1_reg_3555.read(): tmp_3_7_cast_mid_fu_1913_p3.read());
}

void convolve_kernel::thread_tmp_3_7_cast_mid_fu_1913_p3() {
    tmp_3_7_cast_mid_fu_1913_p3 = (!exitcond_flatten_reg_3183.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_3183.read()[0].to_bool())? ap_const_lv4_7: tmp_3_7_reg_3164.read());
}

void convolve_kernel::thread_tmp_3_7_fu_1529_p2() {
    tmp_3_7_fu_1529_p2 = (!tmp_4_cast2_fu_1489_p1.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_4_cast2_fu_1489_p1.read()) + sc_biguint<4>(ap_const_lv4_7));
}

void convolve_kernel::thread_tmp_3_7_mid1_fu_1867_p2() {
    tmp_3_7_mid1_fu_1867_p2 = (!ap_const_lv4_7.is_01() || !tmp_4_cast2_mid1_fu_1820_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_7) + sc_biguint<4>(tmp_4_cast2_mid1_fu_1820_p1.read()));
}

void convolve_kernel::thread_tmp_3_fu_1666_p2() {
    tmp_3_fu_1666_p2 = (!ap_const_lv7_32.is_01() || !tmp_1_cast_fu_1660_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_32) + sc_biguint<7>(tmp_1_cast_fu_1660_p1.read()));
}

void convolve_kernel::thread_tmp_40_fu_2198_p1() {
    tmp_40_fu_2198_p1 = tmp_39_reg_4493.read();
}

void convolve_kernel::thread_tmp_41_fu_2604_p1() {
    tmp_41_fu_2604_p1 = tmp_14_0_10_2_reg_8143.read();
}

void convolve_kernel::thread_tmp_43_fu_2202_p1() {
    tmp_43_fu_2202_p1 = tmp_42_reg_4498.read();
}

void convolve_kernel::thread_tmp_44_fu_2607_p1() {
    tmp_44_fu_2607_p1 = tmp_14_0_11_2_reg_8148.read();
}

void convolve_kernel::thread_tmp_46_fu_2206_p1() {
    tmp_46_fu_2206_p1 = tmp_45_reg_4503.read();
}

void convolve_kernel::thread_tmp_47_fu_2610_p1() {
    tmp_47_fu_2610_p1 = tmp_14_0_12_2_reg_8153.read();
}

void convolve_kernel::thread_tmp_48_fu_2613_p14() {
    tmp_48_fu_2613_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_47_fu_2610_p1.read(), tmp_44_fu_2607_p1.read()), tmp_41_fu_2604_p1.read()), tmp_38_fu_2601_p1.read()), tmp_35_fu_2598_p1.read()), tmp_32_fu_2595_p1.read()), tmp_29_fu_2592_p1.read()), tmp_26_fu_2589_p1.read()), tmp_23_fu_2586_p1.read()), tmp_20_fu_2583_p1.read()), tmp_17_fu_2580_p1.read()), tmp_14_fu_2577_p1.read()), tmp_11_fu_2574_p1.read());
}

void convolve_kernel::thread_tmp_49_fu_2015_p3() {
    tmp_49_fu_2015_p3 = esl_concat<5,3>(ap_reg_pp0_iter1_row_b_mid2_reg_3257.read(), ap_const_lv3_0);
}

void convolve_kernel::thread_tmp_4_cast2_fu_1489_p1() {
    tmp_4_cast2_fu_1489_p1 = esl_zext<4,3>(j_phi_fu_917_p4.read());
}

void convolve_kernel::thread_tmp_4_cast2_mid1_fu_1820_p1() {
    tmp_4_cast2_mid1_fu_1820_p1 = esl_zext<4,3>(j_1_reg_3251.read());
}

void convolve_kernel::thread_tmp_4_fu_1683_p2() {
    tmp_4_fu_1683_p2 = (!tmp_2_cast_fu_1663_p1.read().is_01() || !tmp_4_mid2_cast2_fu_1672_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_2_cast_fu_1663_p1.read()) + sc_biguint<7>(tmp_4_mid2_cast2_fu_1672_p1.read()));
}

void convolve_kernel::thread_tmp_4_mid2_cast1_fu_1728_p1() {
    tmp_4_mid2_cast1_fu_1728_p1 = esl_zext<10,3>(tmp_4_mid2_reg_3269.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast2_fu_1672_p1() {
    tmp_4_mid2_cast2_fu_1672_p1 = esl_zext<7,3>(tmp_4_mid2_reg_3269.read());
}

void convolve_kernel::thread_tmp_4_mid2_cast_fu_1675_p1() {
    tmp_4_mid2_cast_fu_1675_p1 = esl_zext<6,3>(tmp_4_mid2_reg_3269.read());
}

void convolve_kernel::thread_tmp_4_mid2_fu_1645_p3() {
    tmp_4_mid2_fu_1645_p3 = (!tmp_5_mid_reg_3226.read()[0].is_01())? sc_lv<3>(): ((tmp_5_mid_reg_3226.read()[0].to_bool())? j_1_reg_3251.read(): j_mid_reg_3209.read());
}

void convolve_kernel::thread_tmp_50_fu_2210_p1() {
    tmp_50_fu_2210_p1 = tmp_352_reg_4508.read();
}

void convolve_kernel::thread_tmp_51_fu_2644_p1() {
    tmp_51_fu_2644_p1 = tmp_14_1_0_2_reg_8158.read();
}

void convolve_kernel::thread_tmp_53_fu_2214_p1() {
    tmp_53_fu_2214_p1 = tmp_52_reg_4513.read();
}

void convolve_kernel::thread_tmp_54_fu_2647_p1() {
    tmp_54_fu_2647_p1 = tmp_14_1_1_2_reg_8163.read();
}

void convolve_kernel::thread_tmp_56_fu_2218_p1() {
    tmp_56_fu_2218_p1 = tmp_55_reg_4518.read();
}

void convolve_kernel::thread_tmp_57_fu_2650_p1() {
    tmp_57_fu_2650_p1 = tmp_14_1_2_2_reg_8168.read();
}

void convolve_kernel::thread_tmp_59_fu_2222_p1() {
    tmp_59_fu_2222_p1 = tmp_58_reg_4523.read();
}

void convolve_kernel::thread_tmp_5_fu_1763_p2() {
    tmp_5_fu_1763_p2 = (!tmp_3_reg_3288.read().is_01() || !tmp_4_mid2_cast2_reg_3293.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_3_reg_3288.read()) + sc_biguint<7>(tmp_4_mid2_cast2_reg_3293.read()));
}

void convolve_kernel::thread_tmp_5_mid_fu_1589_p2() {
    tmp_5_mid_fu_1589_p2 = (tmp_s_reg_3199.read() & not_exitcond_flatten_fu_1584_p2.read());
}

void convolve_kernel::thread_tmp_60_fu_2653_p1() {
    tmp_60_fu_2653_p1 = tmp_14_1_3_2_reg_8173.read();
}

void convolve_kernel::thread_tmp_62_fu_2226_p1() {
    tmp_62_fu_2226_p1 = tmp_61_reg_4528.read();
}

void convolve_kernel::thread_tmp_63_fu_2656_p1() {
    tmp_63_fu_2656_p1 = tmp_14_1_4_2_reg_8178.read();
}

void convolve_kernel::thread_tmp_65_fu_2230_p1() {
    tmp_65_fu_2230_p1 = tmp_64_reg_4533.read();
}

void convolve_kernel::thread_tmp_66_fu_2659_p1() {
    tmp_66_fu_2659_p1 = tmp_14_1_5_2_reg_8183.read();
}

void convolve_kernel::thread_tmp_68_fu_2234_p1() {
    tmp_68_fu_2234_p1 = tmp_67_reg_4538.read();
}

void convolve_kernel::thread_tmp_69_fu_2662_p1() {
    tmp_69_fu_2662_p1 = tmp_14_1_6_2_reg_8188.read();
}

void convolve_kernel::thread_tmp_6_fu_1625_p2() {
    tmp_6_fu_1625_p2 = (tmp_5_mid_reg_3226.read() | exitcond_flatten_reg_3183.read());
}

void convolve_kernel::thread_tmp_71_fu_2238_p1() {
    tmp_71_fu_2238_p1 = tmp_70_reg_4543.read();
}

void convolve_kernel::thread_tmp_72_fu_2665_p1() {
    tmp_72_fu_2665_p1 = tmp_14_1_7_2_reg_8193.read();
}

void convolve_kernel::thread_tmp_74_fu_2242_p1() {
    tmp_74_fu_2242_p1 = tmp_73_reg_4548.read();
}

void convolve_kernel::thread_tmp_75_fu_2668_p1() {
    tmp_75_fu_2668_p1 = tmp_14_1_8_2_reg_8198.read();
}

void convolve_kernel::thread_tmp_77_fu_2246_p1() {
    tmp_77_fu_2246_p1 = tmp_76_reg_4553.read();
}

void convolve_kernel::thread_tmp_78_fu_2671_p1() {
    tmp_78_fu_2671_p1 = tmp_14_1_9_2_reg_8203.read();
}

void convolve_kernel::thread_tmp_7_cast_fu_1731_p1() {
    tmp_7_cast_fu_1731_p1 = esl_zext<32,6>(tmp_7_reg_3298.read());
}

void convolve_kernel::thread_tmp_7_fu_1678_p2() {
    tmp_7_fu_1678_p2 = (!tmp_1_reg_3244.read().is_01() || !tmp_4_mid2_cast_fu_1675_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_1_reg_3244.read()) + sc_biguint<6>(tmp_4_mid2_cast_fu_1675_p1.read()));
}

void convolve_kernel::thread_tmp_80_fu_2250_p1() {
    tmp_80_fu_2250_p1 = tmp_79_reg_4558.read();
}

void convolve_kernel::thread_tmp_81_fu_2674_p1() {
    tmp_81_fu_2674_p1 = tmp_14_1_10_2_reg_8208.read();
}

void convolve_kernel::thread_tmp_83_fu_2254_p1() {
    tmp_83_fu_2254_p1 = tmp_82_reg_4563.read();
}

void convolve_kernel::thread_tmp_84_fu_2677_p1() {
    tmp_84_fu_2677_p1 = tmp_14_1_11_2_reg_8213.read();
}

void convolve_kernel::thread_tmp_86_fu_2258_p1() {
    tmp_86_fu_2258_p1 = tmp_85_reg_4568.read();
}

void convolve_kernel::thread_tmp_87_fu_2680_p1() {
    tmp_87_fu_2680_p1 = tmp_14_1_12_2_reg_8218.read();
}

void convolve_kernel::thread_tmp_88_fu_2683_p14() {
    tmp_88_fu_2683_p14 = esl_concat<384,32>(esl_concat<352,32>(esl_concat<320,32>(esl_concat<288,32>(esl_concat<256,32>(esl_concat<224,32>(esl_concat<192,32>(esl_concat<160,32>(esl_concat<128,32>(esl_concat<96,32>(esl_concat<64,32>(esl_concat<32,32>(tmp_87_fu_2680_p1.read(), tmp_84_fu_2677_p1.read()), tmp_81_fu_2674_p1.read()), tmp_78_fu_2671_p1.read()), tmp_75_fu_2668_p1.read()), tmp_72_fu_2665_p1.read()), tmp_69_fu_2662_p1.read()), tmp_66_fu_2659_p1.read()), tmp_63_fu_2656_p1.read()), tmp_60_fu_2653_p1.read()), tmp_57_fu_2650_p1.read()), tmp_54_fu_2647_p1.read()), tmp_51_fu_2644_p1.read());
}

void convolve_kernel::thread_tmp_89_fu_2022_p1() {
    tmp_89_fu_2022_p1 = esl_zext<32,8>(tmp_49_fu_2015_p3.read());
}

void convolve_kernel::thread_tmp_8_fu_1650_p2() {
    tmp_8_fu_1650_p2 = (!tmp_1_cast_mid2_fu_1642_p1.read().is_01() || !row_b_mid2_reg_3257.read().is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_1_cast_mid2_fu_1642_p1.read()) + sc_biguint<5>(row_b_mid2_reg_3257.read()));
}

void convolve_kernel::thread_tmp_90_fu_2262_p1() {
    tmp_90_fu_2262_p1 = tmp_353_reg_4583.read();
}

void convolve_kernel::thread_tmp_91_fu_2714_p1() {
    tmp_91_fu_2714_p1 = tmp_14_2_0_2_reg_8223.read();
}

void convolve_kernel::thread_tmp_93_fu_2266_p1() {
    tmp_93_fu_2266_p1 = tmp_92_reg_4588.read();
}

void convolve_kernel::thread_tmp_94_fu_2717_p1() {
    tmp_94_fu_2717_p1 = tmp_14_2_1_2_reg_8228.read();
}

void convolve_kernel::thread_tmp_96_fu_2270_p1() {
    tmp_96_fu_2270_p1 = tmp_95_reg_4593.read();
}

void convolve_kernel::thread_tmp_97_fu_2720_p1() {
    tmp_97_fu_2720_p1 = tmp_14_2_2_2_reg_8233.read();
}

void convolve_kernel::thread_tmp_99_fu_2274_p1() {
    tmp_99_fu_2274_p1 = tmp_98_reg_4598.read();
}

void convolve_kernel::thread_tmp_fu_1603_p3() {
    tmp_fu_1603_p3 = esl_concat<3,2>(tmp_1_mid2_v_reg_3218.read(), ap_const_lv2_0);
}

void convolve_kernel::thread_tmp_s_fu_1559_p2() {
    tmp_s_fu_1559_p2 = (!row_b_phi_fu_929_p4.read().is_01() || !ap_const_lv5_1B.is_01())? sc_lv<1>(): sc_lv<1>(row_b_phi_fu_929_p4.read() == ap_const_lv5_1B);
}

}

