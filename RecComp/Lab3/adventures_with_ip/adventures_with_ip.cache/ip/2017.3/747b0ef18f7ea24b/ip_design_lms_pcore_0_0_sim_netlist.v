// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
// Date        : Tue Oct 17 19:49:37 2017
// Host        : TacitMonolith running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ ip_design_lms_pcore_0_0_sim_netlist.v
// Design      : ip_design_lms_pcore_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_LMS
   (mul_temp_16,
    filter_sum,
    \write_reg_x_k_reg[15] ,
    cop_dut_enable,
    IPCORE_CLK,
    AR,
    \write_reg_d_k_reg[3] ,
    DI,
    Q,
    \write_reg_d_k_reg[3]_0 ,
    \write_reg_d_k_reg[7] ,
    \write_reg_d_k_reg[11] ,
    S);
  output [15:0]mul_temp_16;
  output [15:0]filter_sum;
  input [15:0]\write_reg_x_k_reg[15] ;
  input cop_dut_enable;
  input IPCORE_CLK;
  input [0:0]AR;
  input [2:0]\write_reg_d_k_reg[3] ;
  input [0:0]DI;
  input [14:0]Q;
  input [3:0]\write_reg_d_k_reg[3]_0 ;
  input [3:0]\write_reg_d_k_reg[7] ;
  input [3:0]\write_reg_d_k_reg[11] ;
  input [3:0]S;

  wire [0:0]AR;
  wire ARG__0_i_1_n_0;
  wire ARG__0_n_100;
  wire ARG__0_n_101;
  wire ARG__0_n_102;
  wire ARG__0_n_103;
  wire ARG__0_n_104;
  wire ARG__0_n_105;
  wire ARG__0_n_92;
  wire ARG__0_n_93;
  wire ARG__0_n_94;
  wire ARG__0_n_95;
  wire ARG__0_n_96;
  wire ARG__0_n_97;
  wire ARG__0_n_98;
  wire ARG__0_n_99;
  wire ARG__10_i_1_n_0;
  wire ARG__10_n_100;
  wire ARG__10_n_101;
  wire ARG__10_n_102;
  wire ARG__10_n_103;
  wire ARG__10_n_104;
  wire ARG__10_n_105;
  wire ARG__10_n_92;
  wire ARG__10_n_93;
  wire ARG__10_n_94;
  wire ARG__10_n_95;
  wire ARG__10_n_96;
  wire ARG__10_n_97;
  wire ARG__10_n_98;
  wire ARG__10_n_99;
  wire ARG__11_i_1_n_0;
  wire ARG__11_n_100;
  wire ARG__11_n_101;
  wire ARG__11_n_102;
  wire ARG__11_n_103;
  wire ARG__11_n_104;
  wire ARG__11_n_105;
  wire ARG__11_n_76;
  wire ARG__11_n_77;
  wire ARG__11_n_78;
  wire ARG__11_n_79;
  wire ARG__11_n_80;
  wire ARG__11_n_81;
  wire ARG__11_n_82;
  wire ARG__11_n_83;
  wire ARG__11_n_84;
  wire ARG__11_n_85;
  wire ARG__11_n_86;
  wire ARG__11_n_87;
  wire ARG__11_n_88;
  wire ARG__11_n_89;
  wire ARG__11_n_90;
  wire ARG__11_n_91;
  wire ARG__11_n_92;
  wire ARG__11_n_93;
  wire ARG__11_n_94;
  wire ARG__11_n_95;
  wire ARG__11_n_96;
  wire ARG__11_n_97;
  wire ARG__11_n_98;
  wire ARG__11_n_99;
  wire ARG__12_i_1_n_0;
  wire ARG__12_n_100;
  wire ARG__12_n_101;
  wire ARG__12_n_102;
  wire ARG__12_n_103;
  wire ARG__12_n_104;
  wire ARG__12_n_105;
  wire ARG__12_n_92;
  wire ARG__12_n_93;
  wire ARG__12_n_94;
  wire ARG__12_n_95;
  wire ARG__12_n_96;
  wire ARG__12_n_97;
  wire ARG__12_n_98;
  wire ARG__12_n_99;
  wire ARG__13_i_1_n_0;
  wire ARG__13_n_100;
  wire ARG__13_n_101;
  wire ARG__13_n_102;
  wire ARG__13_n_103;
  wire ARG__13_n_104;
  wire ARG__13_n_105;
  wire ARG__13_n_76;
  wire ARG__13_n_77;
  wire ARG__13_n_78;
  wire ARG__13_n_79;
  wire ARG__13_n_80;
  wire ARG__13_n_81;
  wire ARG__13_n_82;
  wire ARG__13_n_83;
  wire ARG__13_n_84;
  wire ARG__13_n_85;
  wire ARG__13_n_86;
  wire ARG__13_n_87;
  wire ARG__13_n_88;
  wire ARG__13_n_89;
  wire ARG__13_n_90;
  wire ARG__13_n_91;
  wire ARG__13_n_92;
  wire ARG__13_n_93;
  wire ARG__13_n_94;
  wire ARG__13_n_95;
  wire ARG__13_n_96;
  wire ARG__13_n_97;
  wire ARG__13_n_98;
  wire ARG__13_n_99;
  wire ARG__14_i_1_n_0;
  wire ARG__14_n_100;
  wire ARG__14_n_101;
  wire ARG__14_n_102;
  wire ARG__14_n_103;
  wire ARG__14_n_104;
  wire ARG__14_n_105;
  wire ARG__14_n_92;
  wire ARG__14_n_93;
  wire ARG__14_n_94;
  wire ARG__14_n_95;
  wire ARG__14_n_96;
  wire ARG__14_n_97;
  wire ARG__14_n_98;
  wire ARG__14_n_99;
  wire ARG__15_i_1_n_0;
  wire ARG__15_n_100;
  wire ARG__15_n_101;
  wire ARG__15_n_102;
  wire ARG__15_n_103;
  wire ARG__15_n_104;
  wire ARG__15_n_105;
  wire ARG__15_n_76;
  wire ARG__15_n_77;
  wire ARG__15_n_78;
  wire ARG__15_n_79;
  wire ARG__15_n_80;
  wire ARG__15_n_81;
  wire ARG__15_n_82;
  wire ARG__15_n_83;
  wire ARG__15_n_84;
  wire ARG__15_n_85;
  wire ARG__15_n_86;
  wire ARG__15_n_87;
  wire ARG__15_n_88;
  wire ARG__15_n_89;
  wire ARG__15_n_90;
  wire ARG__15_n_91;
  wire ARG__15_n_92;
  wire ARG__15_n_93;
  wire ARG__15_n_94;
  wire ARG__15_n_95;
  wire ARG__15_n_96;
  wire ARG__15_n_97;
  wire ARG__15_n_98;
  wire ARG__15_n_99;
  wire ARG__16_i_1_n_0;
  wire ARG__16_n_100;
  wire ARG__16_n_101;
  wire ARG__16_n_102;
  wire ARG__16_n_103;
  wire ARG__16_n_104;
  wire ARG__16_n_105;
  wire ARG__16_n_92;
  wire ARG__16_n_93;
  wire ARG__16_n_94;
  wire ARG__16_n_95;
  wire ARG__16_n_96;
  wire ARG__16_n_97;
  wire ARG__16_n_98;
  wire ARG__16_n_99;
  wire ARG__17_i_1_n_0;
  wire ARG__17_n_100;
  wire ARG__17_n_101;
  wire ARG__17_n_102;
  wire ARG__17_n_103;
  wire ARG__17_n_104;
  wire ARG__17_n_105;
  wire ARG__17_n_76;
  wire ARG__17_n_77;
  wire ARG__17_n_78;
  wire ARG__17_n_79;
  wire ARG__17_n_80;
  wire ARG__17_n_81;
  wire ARG__17_n_82;
  wire ARG__17_n_83;
  wire ARG__17_n_84;
  wire ARG__17_n_85;
  wire ARG__17_n_86;
  wire ARG__17_n_87;
  wire ARG__17_n_88;
  wire ARG__17_n_89;
  wire ARG__17_n_90;
  wire ARG__17_n_91;
  wire ARG__17_n_92;
  wire ARG__17_n_93;
  wire ARG__17_n_94;
  wire ARG__17_n_95;
  wire ARG__17_n_96;
  wire ARG__17_n_97;
  wire ARG__17_n_98;
  wire ARG__17_n_99;
  wire ARG__18_i_1_n_0;
  wire ARG__18_n_100;
  wire ARG__18_n_101;
  wire ARG__18_n_102;
  wire ARG__18_n_103;
  wire ARG__18_n_104;
  wire ARG__18_n_105;
  wire ARG__18_n_92;
  wire ARG__18_n_93;
  wire ARG__18_n_94;
  wire ARG__18_n_95;
  wire ARG__18_n_96;
  wire ARG__18_n_97;
  wire ARG__18_n_98;
  wire ARG__18_n_99;
  wire ARG__19_i_1_n_0;
  wire ARG__19_n_100;
  wire ARG__19_n_101;
  wire ARG__19_n_102;
  wire ARG__19_n_103;
  wire ARG__19_n_104;
  wire ARG__19_n_105;
  wire ARG__19_n_76;
  wire ARG__19_n_77;
  wire ARG__19_n_78;
  wire ARG__19_n_79;
  wire ARG__19_n_80;
  wire ARG__19_n_81;
  wire ARG__19_n_82;
  wire ARG__19_n_83;
  wire ARG__19_n_84;
  wire ARG__19_n_85;
  wire ARG__19_n_86;
  wire ARG__19_n_87;
  wire ARG__19_n_88;
  wire ARG__19_n_89;
  wire ARG__19_n_90;
  wire ARG__19_n_91;
  wire ARG__19_n_92;
  wire ARG__19_n_93;
  wire ARG__19_n_94;
  wire ARG__19_n_95;
  wire ARG__19_n_96;
  wire ARG__19_n_97;
  wire ARG__19_n_98;
  wire ARG__19_n_99;
  wire ARG__1_i_1_n_0;
  wire ARG__1_n_100;
  wire ARG__1_n_101;
  wire ARG__1_n_102;
  wire ARG__1_n_103;
  wire ARG__1_n_104;
  wire ARG__1_n_105;
  wire ARG__1_n_76;
  wire ARG__1_n_77;
  wire ARG__1_n_78;
  wire ARG__1_n_79;
  wire ARG__1_n_80;
  wire ARG__1_n_81;
  wire ARG__1_n_82;
  wire ARG__1_n_83;
  wire ARG__1_n_84;
  wire ARG__1_n_85;
  wire ARG__1_n_86;
  wire ARG__1_n_87;
  wire ARG__1_n_88;
  wire ARG__1_n_89;
  wire ARG__1_n_90;
  wire ARG__1_n_91;
  wire ARG__1_n_92;
  wire ARG__1_n_93;
  wire ARG__1_n_94;
  wire ARG__1_n_95;
  wire ARG__1_n_96;
  wire ARG__1_n_97;
  wire ARG__1_n_98;
  wire ARG__1_n_99;
  wire ARG__20_i_1_n_0;
  wire ARG__20_n_100;
  wire ARG__20_n_101;
  wire ARG__20_n_102;
  wire ARG__20_n_103;
  wire ARG__20_n_104;
  wire ARG__20_n_105;
  wire ARG__20_n_92;
  wire ARG__20_n_93;
  wire ARG__20_n_94;
  wire ARG__20_n_95;
  wire ARG__20_n_96;
  wire ARG__20_n_97;
  wire ARG__20_n_98;
  wire ARG__20_n_99;
  wire ARG__21_i_1_n_0;
  wire ARG__21_n_100;
  wire ARG__21_n_101;
  wire ARG__21_n_102;
  wire ARG__21_n_103;
  wire ARG__21_n_104;
  wire ARG__21_n_105;
  wire ARG__21_n_76;
  wire ARG__21_n_77;
  wire ARG__21_n_78;
  wire ARG__21_n_79;
  wire ARG__21_n_80;
  wire ARG__21_n_81;
  wire ARG__21_n_82;
  wire ARG__21_n_83;
  wire ARG__21_n_84;
  wire ARG__21_n_85;
  wire ARG__21_n_86;
  wire ARG__21_n_87;
  wire ARG__21_n_88;
  wire ARG__21_n_89;
  wire ARG__21_n_90;
  wire ARG__21_n_91;
  wire ARG__21_n_92;
  wire ARG__21_n_93;
  wire ARG__21_n_94;
  wire ARG__21_n_95;
  wire ARG__21_n_96;
  wire ARG__21_n_97;
  wire ARG__21_n_98;
  wire ARG__21_n_99;
  wire ARG__22_i_1_n_0;
  wire ARG__22_n_100;
  wire ARG__22_n_101;
  wire ARG__22_n_102;
  wire ARG__22_n_103;
  wire ARG__22_n_104;
  wire ARG__22_n_105;
  wire ARG__22_n_92;
  wire ARG__22_n_93;
  wire ARG__22_n_94;
  wire ARG__22_n_95;
  wire ARG__22_n_96;
  wire ARG__22_n_97;
  wire ARG__22_n_98;
  wire ARG__22_n_99;
  wire ARG__23_i_1_n_0;
  wire ARG__23_n_100;
  wire ARG__23_n_101;
  wire ARG__23_n_102;
  wire ARG__23_n_103;
  wire ARG__23_n_104;
  wire ARG__23_n_105;
  wire ARG__23_n_76;
  wire ARG__23_n_77;
  wire ARG__23_n_78;
  wire ARG__23_n_79;
  wire ARG__23_n_80;
  wire ARG__23_n_81;
  wire ARG__23_n_82;
  wire ARG__23_n_83;
  wire ARG__23_n_84;
  wire ARG__23_n_85;
  wire ARG__23_n_86;
  wire ARG__23_n_87;
  wire ARG__23_n_88;
  wire ARG__23_n_89;
  wire ARG__23_n_90;
  wire ARG__23_n_91;
  wire ARG__23_n_92;
  wire ARG__23_n_93;
  wire ARG__23_n_94;
  wire ARG__23_n_95;
  wire ARG__23_n_96;
  wire ARG__23_n_97;
  wire ARG__23_n_98;
  wire ARG__23_n_99;
  wire ARG__24_i_1_n_0;
  wire ARG__24_n_100;
  wire ARG__24_n_101;
  wire ARG__24_n_102;
  wire ARG__24_n_103;
  wire ARG__24_n_104;
  wire ARG__24_n_105;
  wire ARG__24_n_92;
  wire ARG__24_n_93;
  wire ARG__24_n_94;
  wire ARG__24_n_95;
  wire ARG__24_n_96;
  wire ARG__24_n_97;
  wire ARG__24_n_98;
  wire ARG__24_n_99;
  wire ARG__25_i_1_n_0;
  wire ARG__25_n_100;
  wire ARG__25_n_101;
  wire ARG__25_n_102;
  wire ARG__25_n_103;
  wire ARG__25_n_104;
  wire ARG__25_n_105;
  wire ARG__25_n_76;
  wire ARG__25_n_77;
  wire ARG__25_n_78;
  wire ARG__25_n_79;
  wire ARG__25_n_80;
  wire ARG__25_n_81;
  wire ARG__25_n_82;
  wire ARG__25_n_83;
  wire ARG__25_n_84;
  wire ARG__25_n_85;
  wire ARG__25_n_86;
  wire ARG__25_n_87;
  wire ARG__25_n_88;
  wire ARG__25_n_89;
  wire ARG__25_n_90;
  wire ARG__25_n_91;
  wire ARG__25_n_92;
  wire ARG__25_n_93;
  wire ARG__25_n_94;
  wire ARG__25_n_95;
  wire ARG__25_n_96;
  wire ARG__25_n_97;
  wire ARG__25_n_98;
  wire ARG__25_n_99;
  wire ARG__26_i_1_n_0;
  wire ARG__26_n_100;
  wire ARG__26_n_101;
  wire ARG__26_n_102;
  wire ARG__26_n_103;
  wire ARG__26_n_104;
  wire ARG__26_n_105;
  wire ARG__26_n_92;
  wire ARG__26_n_93;
  wire ARG__26_n_94;
  wire ARG__26_n_95;
  wire ARG__26_n_96;
  wire ARG__26_n_97;
  wire ARG__26_n_98;
  wire ARG__26_n_99;
  wire ARG__27_i_1_n_0;
  wire ARG__27_n_100;
  wire ARG__27_n_101;
  wire ARG__27_n_102;
  wire ARG__27_n_103;
  wire ARG__27_n_104;
  wire ARG__27_n_105;
  wire ARG__27_n_76;
  wire ARG__27_n_77;
  wire ARG__27_n_78;
  wire ARG__27_n_79;
  wire ARG__27_n_80;
  wire ARG__27_n_81;
  wire ARG__27_n_82;
  wire ARG__27_n_83;
  wire ARG__27_n_84;
  wire ARG__27_n_85;
  wire ARG__27_n_86;
  wire ARG__27_n_87;
  wire ARG__27_n_88;
  wire ARG__27_n_89;
  wire ARG__27_n_90;
  wire ARG__27_n_91;
  wire ARG__27_n_92;
  wire ARG__27_n_93;
  wire ARG__27_n_94;
  wire ARG__27_n_95;
  wire ARG__27_n_96;
  wire ARG__27_n_97;
  wire ARG__27_n_98;
  wire ARG__27_n_99;
  wire ARG__28_i_1_n_0;
  wire ARG__28_n_100;
  wire ARG__28_n_101;
  wire ARG__28_n_102;
  wire ARG__28_n_103;
  wire ARG__28_n_104;
  wire ARG__28_n_105;
  wire ARG__28_n_92;
  wire ARG__28_n_93;
  wire ARG__28_n_94;
  wire ARG__28_n_95;
  wire ARG__28_n_96;
  wire ARG__28_n_97;
  wire ARG__28_n_98;
  wire ARG__28_n_99;
  wire ARG__29_i_1_n_0;
  wire ARG__29_n_100;
  wire ARG__29_n_101;
  wire ARG__29_n_102;
  wire ARG__29_n_103;
  wire ARG__29_n_104;
  wire ARG__29_n_105;
  wire ARG__29_n_76;
  wire ARG__29_n_77;
  wire ARG__29_n_78;
  wire ARG__29_n_79;
  wire ARG__29_n_80;
  wire ARG__29_n_81;
  wire ARG__29_n_82;
  wire ARG__29_n_83;
  wire ARG__29_n_84;
  wire ARG__29_n_85;
  wire ARG__29_n_86;
  wire ARG__29_n_87;
  wire ARG__29_n_88;
  wire ARG__29_n_89;
  wire ARG__29_n_90;
  wire ARG__29_n_91;
  wire ARG__29_n_92;
  wire ARG__29_n_93;
  wire ARG__29_n_94;
  wire ARG__29_n_95;
  wire ARG__29_n_96;
  wire ARG__29_n_97;
  wire ARG__29_n_98;
  wire ARG__29_n_99;
  wire ARG__2_i_1_n_0;
  wire ARG__2_n_100;
  wire ARG__2_n_101;
  wire ARG__2_n_102;
  wire ARG__2_n_103;
  wire ARG__2_n_104;
  wire ARG__2_n_105;
  wire ARG__2_n_92;
  wire ARG__2_n_93;
  wire ARG__2_n_94;
  wire ARG__2_n_95;
  wire ARG__2_n_96;
  wire ARG__2_n_97;
  wire ARG__2_n_98;
  wire ARG__2_n_99;
  wire ARG__30_i_1_n_0;
  wire ARG__30_n_100;
  wire ARG__30_n_101;
  wire ARG__30_n_102;
  wire ARG__30_n_103;
  wire ARG__30_n_104;
  wire ARG__30_n_105;
  wire ARG__30_n_92;
  wire ARG__30_n_93;
  wire ARG__30_n_94;
  wire ARG__30_n_95;
  wire ARG__30_n_96;
  wire ARG__30_n_97;
  wire ARG__30_n_98;
  wire ARG__30_n_99;
  wire [32:17]ARG__31;
  wire ARG__3_i_1_n_0;
  wire ARG__3_n_100;
  wire ARG__3_n_101;
  wire ARG__3_n_102;
  wire ARG__3_n_103;
  wire ARG__3_n_104;
  wire ARG__3_n_105;
  wire ARG__3_n_76;
  wire ARG__3_n_77;
  wire ARG__3_n_78;
  wire ARG__3_n_79;
  wire ARG__3_n_80;
  wire ARG__3_n_81;
  wire ARG__3_n_82;
  wire ARG__3_n_83;
  wire ARG__3_n_84;
  wire ARG__3_n_85;
  wire ARG__3_n_86;
  wire ARG__3_n_87;
  wire ARG__3_n_88;
  wire ARG__3_n_89;
  wire ARG__3_n_90;
  wire ARG__3_n_91;
  wire ARG__3_n_92;
  wire ARG__3_n_93;
  wire ARG__3_n_94;
  wire ARG__3_n_95;
  wire ARG__3_n_96;
  wire ARG__3_n_97;
  wire ARG__3_n_98;
  wire ARG__3_n_99;
  wire ARG__4_i_1_n_0;
  wire ARG__4_n_100;
  wire ARG__4_n_101;
  wire ARG__4_n_102;
  wire ARG__4_n_103;
  wire ARG__4_n_104;
  wire ARG__4_n_105;
  wire ARG__4_n_92;
  wire ARG__4_n_93;
  wire ARG__4_n_94;
  wire ARG__4_n_95;
  wire ARG__4_n_96;
  wire ARG__4_n_97;
  wire ARG__4_n_98;
  wire ARG__4_n_99;
  wire ARG__5_i_1_n_0;
  wire ARG__5_n_100;
  wire ARG__5_n_101;
  wire ARG__5_n_102;
  wire ARG__5_n_103;
  wire ARG__5_n_104;
  wire ARG__5_n_105;
  wire ARG__5_n_76;
  wire ARG__5_n_77;
  wire ARG__5_n_78;
  wire ARG__5_n_79;
  wire ARG__5_n_80;
  wire ARG__5_n_81;
  wire ARG__5_n_82;
  wire ARG__5_n_83;
  wire ARG__5_n_84;
  wire ARG__5_n_85;
  wire ARG__5_n_86;
  wire ARG__5_n_87;
  wire ARG__5_n_88;
  wire ARG__5_n_89;
  wire ARG__5_n_90;
  wire ARG__5_n_91;
  wire ARG__5_n_92;
  wire ARG__5_n_93;
  wire ARG__5_n_94;
  wire ARG__5_n_95;
  wire ARG__5_n_96;
  wire ARG__5_n_97;
  wire ARG__5_n_98;
  wire ARG__5_n_99;
  wire ARG__6_i_1_n_0;
  wire ARG__6_n_100;
  wire ARG__6_n_101;
  wire ARG__6_n_102;
  wire ARG__6_n_103;
  wire ARG__6_n_104;
  wire ARG__6_n_105;
  wire ARG__6_n_92;
  wire ARG__6_n_93;
  wire ARG__6_n_94;
  wire ARG__6_n_95;
  wire ARG__6_n_96;
  wire ARG__6_n_97;
  wire ARG__6_n_98;
  wire ARG__6_n_99;
  wire ARG__7_i_1_n_0;
  wire ARG__7_n_100;
  wire ARG__7_n_101;
  wire ARG__7_n_102;
  wire ARG__7_n_103;
  wire ARG__7_n_104;
  wire ARG__7_n_105;
  wire ARG__7_n_76;
  wire ARG__7_n_77;
  wire ARG__7_n_78;
  wire ARG__7_n_79;
  wire ARG__7_n_80;
  wire ARG__7_n_81;
  wire ARG__7_n_82;
  wire ARG__7_n_83;
  wire ARG__7_n_84;
  wire ARG__7_n_85;
  wire ARG__7_n_86;
  wire ARG__7_n_87;
  wire ARG__7_n_88;
  wire ARG__7_n_89;
  wire ARG__7_n_90;
  wire ARG__7_n_91;
  wire ARG__7_n_92;
  wire ARG__7_n_93;
  wire ARG__7_n_94;
  wire ARG__7_n_95;
  wire ARG__7_n_96;
  wire ARG__7_n_97;
  wire ARG__7_n_98;
  wire ARG__7_n_99;
  wire ARG__8_i_1_n_0;
  wire ARG__8_n_100;
  wire ARG__8_n_101;
  wire ARG__8_n_102;
  wire ARG__8_n_103;
  wire ARG__8_n_104;
  wire ARG__8_n_105;
  wire ARG__8_n_92;
  wire ARG__8_n_93;
  wire ARG__8_n_94;
  wire ARG__8_n_95;
  wire ARG__8_n_96;
  wire ARG__8_n_97;
  wire ARG__8_n_98;
  wire ARG__8_n_99;
  wire ARG__9_i_1_n_0;
  wire ARG__9_n_100;
  wire ARG__9_n_101;
  wire ARG__9_n_102;
  wire ARG__9_n_103;
  wire ARG__9_n_104;
  wire ARG__9_n_105;
  wire ARG__9_n_76;
  wire ARG__9_n_77;
  wire ARG__9_n_78;
  wire ARG__9_n_79;
  wire ARG__9_n_80;
  wire ARG__9_n_81;
  wire ARG__9_n_82;
  wire ARG__9_n_83;
  wire ARG__9_n_84;
  wire ARG__9_n_85;
  wire ARG__9_n_86;
  wire ARG__9_n_87;
  wire ARG__9_n_88;
  wire ARG__9_n_89;
  wire ARG__9_n_90;
  wire ARG__9_n_91;
  wire ARG__9_n_92;
  wire ARG__9_n_93;
  wire ARG__9_n_94;
  wire ARG__9_n_95;
  wire ARG__9_n_96;
  wire ARG__9_n_97;
  wire ARG__9_n_98;
  wire ARG__9_n_99;
  wire ARG_carry__0_i_2_n_0;
  wire ARG_carry__0_i_3_n_0;
  wire ARG_carry__0_i_4_n_0;
  wire ARG_carry__0_n_0;
  wire ARG_carry__0_n_1;
  wire ARG_carry__0_n_2;
  wire ARG_carry__0_n_3;
  wire ARG_carry__1_i_1_n_0;
  wire ARG_carry__1_i_2_n_0;
  wire ARG_carry__1_i_3_n_0;
  wire ARG_carry__1_i_4_n_0;
  wire ARG_carry__1_n_0;
  wire ARG_carry__1_n_1;
  wire ARG_carry__1_n_2;
  wire ARG_carry__1_n_3;
  wire ARG_carry__2_i_1_n_0;
  wire ARG_carry__2_i_2_n_0;
  wire ARG_carry__2_i_3_n_0;
  wire ARG_carry__2_i_4_n_0;
  wire ARG_carry__2_n_0;
  wire ARG_carry__2_n_1;
  wire ARG_carry__2_n_2;
  wire ARG_carry__2_n_3;
  wire ARG_carry__3_i_1_n_0;
  wire ARG_carry__3_n_3;
  wire ARG_carry_n_0;
  wire ARG_carry_n_1;
  wire ARG_carry_n_2;
  wire ARG_carry_n_3;
  wire ARG_i_1_n_0;
  wire ARG_n_100;
  wire ARG_n_101;
  wire ARG_n_102;
  wire ARG_n_103;
  wire ARG_n_104;
  wire ARG_n_105;
  wire ARG_n_92;
  wire ARG_n_93;
  wire ARG_n_94;
  wire ARG_n_95;
  wire ARG_n_96;
  wire ARG_n_97;
  wire ARG_n_98;
  wire ARG_n_99;
  wire [0:0]DI;
  wire IPCORE_CLK;
  wire [14:0]Q;
  wire [15:0]RESIZE15;
  wire [15:0]RESIZE16;
  wire [15:0]RESIZE18;
  wire [15:0]RESIZE20;
  wire [15:0]RESIZE22;
  wire [15:0]RESIZE24;
  wire [15:0]RESIZE26;
  wire [15:0]RESIZE28;
  wire [15:0]RESIZE30;
  wire [15:0]RESIZE32;
  wire [15:0]RESIZE34;
  wire [15:0]RESIZE36;
  wire [15:0]RESIZE38;
  wire [15:0]RESIZE40;
  wire [15:0]RESIZE42;
  wire [15:0]RESIZE44;
  wire [3:0]S;
  wire add_temp_14__0_carry__0_i_1_n_0;
  wire add_temp_14__0_carry__0_i_2_n_0;
  wire add_temp_14__0_carry__0_i_3_n_0;
  wire add_temp_14__0_carry__0_i_4_n_0;
  wire add_temp_14__0_carry__0_i_5_n_0;
  wire add_temp_14__0_carry__0_i_6_n_0;
  wire add_temp_14__0_carry__0_i_7_n_0;
  wire add_temp_14__0_carry__0_i_8_n_0;
  wire add_temp_14__0_carry__0_n_0;
  wire add_temp_14__0_carry__0_n_1;
  wire add_temp_14__0_carry__0_n_2;
  wire add_temp_14__0_carry__0_n_3;
  wire add_temp_14__0_carry__0_n_4;
  wire add_temp_14__0_carry__0_n_5;
  wire add_temp_14__0_carry__0_n_6;
  wire add_temp_14__0_carry__0_n_7;
  wire add_temp_14__0_carry__1_i_1_n_0;
  wire add_temp_14__0_carry__1_i_2_n_0;
  wire add_temp_14__0_carry__1_i_3_n_0;
  wire add_temp_14__0_carry__1_i_4_n_0;
  wire add_temp_14__0_carry__1_i_5_n_0;
  wire add_temp_14__0_carry__1_i_6_n_0;
  wire add_temp_14__0_carry__1_i_7_n_0;
  wire add_temp_14__0_carry__1_i_8_n_0;
  wire add_temp_14__0_carry__1_n_0;
  wire add_temp_14__0_carry__1_n_1;
  wire add_temp_14__0_carry__1_n_2;
  wire add_temp_14__0_carry__1_n_3;
  wire add_temp_14__0_carry__1_n_4;
  wire add_temp_14__0_carry__1_n_5;
  wire add_temp_14__0_carry__1_n_6;
  wire add_temp_14__0_carry__1_n_7;
  wire add_temp_14__0_carry__2_i_1_n_0;
  wire add_temp_14__0_carry__2_i_2_n_0;
  wire add_temp_14__0_carry__2_i_3_n_0;
  wire add_temp_14__0_carry__2_i_4_n_0;
  wire add_temp_14__0_carry__2_i_5_n_0;
  wire add_temp_14__0_carry__2_i_6_n_0;
  wire add_temp_14__0_carry__2_i_7_n_0;
  wire add_temp_14__0_carry__2_n_1;
  wire add_temp_14__0_carry__2_n_2;
  wire add_temp_14__0_carry__2_n_3;
  wire add_temp_14__0_carry__2_n_4;
  wire add_temp_14__0_carry__2_n_5;
  wire add_temp_14__0_carry__2_n_6;
  wire add_temp_14__0_carry__2_n_7;
  wire add_temp_14__0_carry_i_1_n_0;
  wire add_temp_14__0_carry_i_2_n_0;
  wire add_temp_14__0_carry_i_3_n_0;
  wire add_temp_14__0_carry_i_4_n_0;
  wire add_temp_14__0_carry_i_5_n_0;
  wire add_temp_14__0_carry_i_6_n_0;
  wire add_temp_14__0_carry_i_7_n_0;
  wire add_temp_14__0_carry_n_0;
  wire add_temp_14__0_carry_n_1;
  wire add_temp_14__0_carry_n_2;
  wire add_temp_14__0_carry_n_3;
  wire add_temp_14__0_carry_n_4;
  wire add_temp_14__0_carry_n_5;
  wire add_temp_14__0_carry_n_6;
  wire add_temp_14__0_carry_n_7;
  wire add_temp_14__138_carry__0_i_1_n_0;
  wire add_temp_14__138_carry__0_i_2_n_0;
  wire add_temp_14__138_carry__0_i_3_n_0;
  wire add_temp_14__138_carry__0_i_4_n_0;
  wire add_temp_14__138_carry__0_i_5_n_0;
  wire add_temp_14__138_carry__0_i_6_n_0;
  wire add_temp_14__138_carry__0_i_7_n_0;
  wire add_temp_14__138_carry__0_i_8_n_0;
  wire add_temp_14__138_carry__0_n_0;
  wire add_temp_14__138_carry__0_n_1;
  wire add_temp_14__138_carry__0_n_2;
  wire add_temp_14__138_carry__0_n_3;
  wire add_temp_14__138_carry__0_n_4;
  wire add_temp_14__138_carry__0_n_5;
  wire add_temp_14__138_carry__0_n_6;
  wire add_temp_14__138_carry__0_n_7;
  wire add_temp_14__138_carry__1_i_1_n_0;
  wire add_temp_14__138_carry__1_i_2_n_0;
  wire add_temp_14__138_carry__1_i_3_n_0;
  wire add_temp_14__138_carry__1_i_4_n_0;
  wire add_temp_14__138_carry__1_i_5_n_0;
  wire add_temp_14__138_carry__1_i_6_n_0;
  wire add_temp_14__138_carry__1_i_7_n_0;
  wire add_temp_14__138_carry__1_i_8_n_0;
  wire add_temp_14__138_carry__1_n_0;
  wire add_temp_14__138_carry__1_n_1;
  wire add_temp_14__138_carry__1_n_2;
  wire add_temp_14__138_carry__1_n_3;
  wire add_temp_14__138_carry__1_n_4;
  wire add_temp_14__138_carry__1_n_5;
  wire add_temp_14__138_carry__1_n_6;
  wire add_temp_14__138_carry__1_n_7;
  wire add_temp_14__138_carry__2_i_1_n_0;
  wire add_temp_14__138_carry__2_i_2_n_0;
  wire add_temp_14__138_carry__2_i_3_n_0;
  wire add_temp_14__138_carry__2_i_4_n_0;
  wire add_temp_14__138_carry__2_i_5_n_0;
  wire add_temp_14__138_carry__2_i_6_n_0;
  wire add_temp_14__138_carry__2_i_7_n_0;
  wire add_temp_14__138_carry__2_n_1;
  wire add_temp_14__138_carry__2_n_2;
  wire add_temp_14__138_carry__2_n_3;
  wire add_temp_14__138_carry__2_n_4;
  wire add_temp_14__138_carry__2_n_5;
  wire add_temp_14__138_carry__2_n_6;
  wire add_temp_14__138_carry__2_n_7;
  wire add_temp_14__138_carry_i_1_n_0;
  wire add_temp_14__138_carry_i_2_n_0;
  wire add_temp_14__138_carry_i_3_n_0;
  wire add_temp_14__138_carry_i_4_n_0;
  wire add_temp_14__138_carry_i_5_n_0;
  wire add_temp_14__138_carry_i_6_n_0;
  wire add_temp_14__138_carry_i_7_n_0;
  wire add_temp_14__138_carry_n_0;
  wire add_temp_14__138_carry_n_1;
  wire add_temp_14__138_carry_n_2;
  wire add_temp_14__138_carry_n_3;
  wire add_temp_14__138_carry_n_4;
  wire add_temp_14__138_carry_n_5;
  wire add_temp_14__138_carry_n_6;
  wire add_temp_14__138_carry_n_7;
  wire add_temp_14__184_carry__0_i_1_n_0;
  wire add_temp_14__184_carry__0_i_2_n_0;
  wire add_temp_14__184_carry__0_i_3_n_0;
  wire add_temp_14__184_carry__0_i_4_n_0;
  wire add_temp_14__184_carry__0_i_5_n_0;
  wire add_temp_14__184_carry__0_i_6_n_0;
  wire add_temp_14__184_carry__0_i_7_n_0;
  wire add_temp_14__184_carry__0_i_8_n_0;
  wire add_temp_14__184_carry__0_n_0;
  wire add_temp_14__184_carry__0_n_1;
  wire add_temp_14__184_carry__0_n_2;
  wire add_temp_14__184_carry__0_n_3;
  wire add_temp_14__184_carry__0_n_4;
  wire add_temp_14__184_carry__0_n_5;
  wire add_temp_14__184_carry__0_n_6;
  wire add_temp_14__184_carry__0_n_7;
  wire add_temp_14__184_carry__1_i_1_n_0;
  wire add_temp_14__184_carry__1_i_2_n_0;
  wire add_temp_14__184_carry__1_i_3_n_0;
  wire add_temp_14__184_carry__1_i_4_n_0;
  wire add_temp_14__184_carry__1_i_5_n_0;
  wire add_temp_14__184_carry__1_i_6_n_0;
  wire add_temp_14__184_carry__1_i_7_n_0;
  wire add_temp_14__184_carry__1_i_8_n_0;
  wire add_temp_14__184_carry__1_n_0;
  wire add_temp_14__184_carry__1_n_1;
  wire add_temp_14__184_carry__1_n_2;
  wire add_temp_14__184_carry__1_n_3;
  wire add_temp_14__184_carry__1_n_4;
  wire add_temp_14__184_carry__1_n_5;
  wire add_temp_14__184_carry__1_n_6;
  wire add_temp_14__184_carry__1_n_7;
  wire add_temp_14__184_carry__2_i_1_n_0;
  wire add_temp_14__184_carry__2_i_2_n_0;
  wire add_temp_14__184_carry__2_i_3_n_0;
  wire add_temp_14__184_carry__2_i_4_n_0;
  wire add_temp_14__184_carry__2_i_5_n_0;
  wire add_temp_14__184_carry__2_i_6_n_0;
  wire add_temp_14__184_carry__2_i_7_n_0;
  wire add_temp_14__184_carry__2_n_1;
  wire add_temp_14__184_carry__2_n_2;
  wire add_temp_14__184_carry__2_n_3;
  wire add_temp_14__184_carry__2_n_4;
  wire add_temp_14__184_carry__2_n_5;
  wire add_temp_14__184_carry__2_n_6;
  wire add_temp_14__184_carry__2_n_7;
  wire add_temp_14__184_carry_i_1_n_0;
  wire add_temp_14__184_carry_i_2_n_0;
  wire add_temp_14__184_carry_i_3_n_0;
  wire add_temp_14__184_carry_i_4_n_0;
  wire add_temp_14__184_carry_i_5_n_0;
  wire add_temp_14__184_carry_i_6_n_0;
  wire add_temp_14__184_carry_i_7_n_0;
  wire add_temp_14__184_carry_n_0;
  wire add_temp_14__184_carry_n_1;
  wire add_temp_14__184_carry_n_2;
  wire add_temp_14__184_carry_n_3;
  wire add_temp_14__184_carry_n_4;
  wire add_temp_14__184_carry_n_5;
  wire add_temp_14__184_carry_n_6;
  wire add_temp_14__184_carry_n_7;
  wire add_temp_14__230_carry__0_i_1_n_0;
  wire add_temp_14__230_carry__0_i_2_n_0;
  wire add_temp_14__230_carry__0_i_3_n_0;
  wire add_temp_14__230_carry__0_i_4_n_0;
  wire add_temp_14__230_carry__0_i_5_n_0;
  wire add_temp_14__230_carry__0_i_6_n_0;
  wire add_temp_14__230_carry__0_i_7_n_0;
  wire add_temp_14__230_carry__0_i_8_n_0;
  wire add_temp_14__230_carry__0_n_0;
  wire add_temp_14__230_carry__0_n_1;
  wire add_temp_14__230_carry__0_n_2;
  wire add_temp_14__230_carry__0_n_3;
  wire add_temp_14__230_carry__0_n_4;
  wire add_temp_14__230_carry__0_n_5;
  wire add_temp_14__230_carry__0_n_6;
  wire add_temp_14__230_carry__0_n_7;
  wire add_temp_14__230_carry__1_i_1_n_0;
  wire add_temp_14__230_carry__1_i_2_n_0;
  wire add_temp_14__230_carry__1_i_3_n_0;
  wire add_temp_14__230_carry__1_i_4_n_0;
  wire add_temp_14__230_carry__1_i_5_n_0;
  wire add_temp_14__230_carry__1_i_6_n_0;
  wire add_temp_14__230_carry__1_i_7_n_0;
  wire add_temp_14__230_carry__1_i_8_n_0;
  wire add_temp_14__230_carry__1_n_0;
  wire add_temp_14__230_carry__1_n_1;
  wire add_temp_14__230_carry__1_n_2;
  wire add_temp_14__230_carry__1_n_3;
  wire add_temp_14__230_carry__1_n_4;
  wire add_temp_14__230_carry__1_n_5;
  wire add_temp_14__230_carry__1_n_6;
  wire add_temp_14__230_carry__1_n_7;
  wire add_temp_14__230_carry__2_i_1_n_0;
  wire add_temp_14__230_carry__2_i_2_n_0;
  wire add_temp_14__230_carry__2_i_3_n_0;
  wire add_temp_14__230_carry__2_i_4_n_0;
  wire add_temp_14__230_carry__2_i_5_n_0;
  wire add_temp_14__230_carry__2_i_6_n_0;
  wire add_temp_14__230_carry__2_i_7_n_0;
  wire add_temp_14__230_carry__2_n_1;
  wire add_temp_14__230_carry__2_n_2;
  wire add_temp_14__230_carry__2_n_3;
  wire add_temp_14__230_carry__2_n_4;
  wire add_temp_14__230_carry__2_n_5;
  wire add_temp_14__230_carry__2_n_6;
  wire add_temp_14__230_carry__2_n_7;
  wire add_temp_14__230_carry_i_1_n_0;
  wire add_temp_14__230_carry_i_2_n_0;
  wire add_temp_14__230_carry_i_3_n_0;
  wire add_temp_14__230_carry_i_4_n_0;
  wire add_temp_14__230_carry_i_5_n_0;
  wire add_temp_14__230_carry_i_6_n_0;
  wire add_temp_14__230_carry_i_7_n_0;
  wire add_temp_14__230_carry_n_0;
  wire add_temp_14__230_carry_n_1;
  wire add_temp_14__230_carry_n_2;
  wire add_temp_14__230_carry_n_3;
  wire add_temp_14__230_carry_n_4;
  wire add_temp_14__230_carry_n_5;
  wire add_temp_14__230_carry_n_6;
  wire add_temp_14__230_carry_n_7;
  wire add_temp_14__278_carry__0_i_10_n_0;
  wire add_temp_14__278_carry__0_i_11_n_0;
  wire add_temp_14__278_carry__0_i_12_n_0;
  wire add_temp_14__278_carry__0_i_1_n_0;
  wire add_temp_14__278_carry__0_i_2_n_0;
  wire add_temp_14__278_carry__0_i_3_n_0;
  wire add_temp_14__278_carry__0_i_4_n_0;
  wire add_temp_14__278_carry__0_i_5_n_0;
  wire add_temp_14__278_carry__0_i_6_n_0;
  wire add_temp_14__278_carry__0_i_7_n_0;
  wire add_temp_14__278_carry__0_i_8_n_0;
  wire add_temp_14__278_carry__0_i_9_n_0;
  wire add_temp_14__278_carry__0_n_0;
  wire add_temp_14__278_carry__0_n_1;
  wire add_temp_14__278_carry__0_n_2;
  wire add_temp_14__278_carry__0_n_3;
  wire add_temp_14__278_carry__1_i_10_n_0;
  wire add_temp_14__278_carry__1_i_11_n_0;
  wire add_temp_14__278_carry__1_i_12_n_0;
  wire add_temp_14__278_carry__1_i_1_n_0;
  wire add_temp_14__278_carry__1_i_2_n_0;
  wire add_temp_14__278_carry__1_i_3_n_0;
  wire add_temp_14__278_carry__1_i_4_n_0;
  wire add_temp_14__278_carry__1_i_5_n_0;
  wire add_temp_14__278_carry__1_i_6_n_0;
  wire add_temp_14__278_carry__1_i_7_n_0;
  wire add_temp_14__278_carry__1_i_8_n_0;
  wire add_temp_14__278_carry__1_i_9_n_0;
  wire add_temp_14__278_carry__1_n_0;
  wire add_temp_14__278_carry__1_n_1;
  wire add_temp_14__278_carry__1_n_2;
  wire add_temp_14__278_carry__1_n_3;
  wire add_temp_14__278_carry__2_i_10_n_0;
  wire add_temp_14__278_carry__2_i_11_n_0;
  wire add_temp_14__278_carry__2_i_1_n_0;
  wire add_temp_14__278_carry__2_i_2_n_0;
  wire add_temp_14__278_carry__2_i_3_n_0;
  wire add_temp_14__278_carry__2_i_4_n_0;
  wire add_temp_14__278_carry__2_i_5_n_0;
  wire add_temp_14__278_carry__2_i_6_n_0;
  wire add_temp_14__278_carry__2_i_7_n_0;
  wire add_temp_14__278_carry__2_i_8_n_0;
  wire add_temp_14__278_carry__2_i_9_n_0;
  wire add_temp_14__278_carry__2_n_1;
  wire add_temp_14__278_carry__2_n_2;
  wire add_temp_14__278_carry__2_n_3;
  wire add_temp_14__278_carry_i_10_n_0;
  wire add_temp_14__278_carry_i_1_n_0;
  wire add_temp_14__278_carry_i_2_n_0;
  wire add_temp_14__278_carry_i_3_n_0;
  wire add_temp_14__278_carry_i_4_n_0;
  wire add_temp_14__278_carry_i_5_n_0;
  wire add_temp_14__278_carry_i_6_n_0;
  wire add_temp_14__278_carry_i_7_n_0;
  wire add_temp_14__278_carry_i_8_n_0;
  wire add_temp_14__278_carry_i_9_n_0;
  wire add_temp_14__278_carry_n_0;
  wire add_temp_14__278_carry_n_1;
  wire add_temp_14__278_carry_n_2;
  wire add_temp_14__278_carry_n_3;
  wire add_temp_14__46_carry__0_i_1_n_0;
  wire add_temp_14__46_carry__0_i_2_n_0;
  wire add_temp_14__46_carry__0_i_3_n_0;
  wire add_temp_14__46_carry__0_i_4_n_0;
  wire add_temp_14__46_carry__0_i_5_n_0;
  wire add_temp_14__46_carry__0_i_6_n_0;
  wire add_temp_14__46_carry__0_i_7_n_0;
  wire add_temp_14__46_carry__0_i_8_n_0;
  wire add_temp_14__46_carry__0_n_0;
  wire add_temp_14__46_carry__0_n_1;
  wire add_temp_14__46_carry__0_n_2;
  wire add_temp_14__46_carry__0_n_3;
  wire add_temp_14__46_carry__0_n_4;
  wire add_temp_14__46_carry__0_n_5;
  wire add_temp_14__46_carry__0_n_6;
  wire add_temp_14__46_carry__0_n_7;
  wire add_temp_14__46_carry__1_i_1_n_0;
  wire add_temp_14__46_carry__1_i_2_n_0;
  wire add_temp_14__46_carry__1_i_3_n_0;
  wire add_temp_14__46_carry__1_i_4_n_0;
  wire add_temp_14__46_carry__1_i_5_n_0;
  wire add_temp_14__46_carry__1_i_6_n_0;
  wire add_temp_14__46_carry__1_i_7_n_0;
  wire add_temp_14__46_carry__1_i_8_n_0;
  wire add_temp_14__46_carry__1_n_0;
  wire add_temp_14__46_carry__1_n_1;
  wire add_temp_14__46_carry__1_n_2;
  wire add_temp_14__46_carry__1_n_3;
  wire add_temp_14__46_carry__1_n_4;
  wire add_temp_14__46_carry__1_n_5;
  wire add_temp_14__46_carry__1_n_6;
  wire add_temp_14__46_carry__1_n_7;
  wire add_temp_14__46_carry__2_i_1_n_0;
  wire add_temp_14__46_carry__2_i_2_n_0;
  wire add_temp_14__46_carry__2_i_3_n_0;
  wire add_temp_14__46_carry__2_i_4_n_0;
  wire add_temp_14__46_carry__2_i_5_n_0;
  wire add_temp_14__46_carry__2_i_6_n_0;
  wire add_temp_14__46_carry__2_i_7_n_0;
  wire add_temp_14__46_carry__2_n_1;
  wire add_temp_14__46_carry__2_n_2;
  wire add_temp_14__46_carry__2_n_3;
  wire add_temp_14__46_carry__2_n_4;
  wire add_temp_14__46_carry__2_n_5;
  wire add_temp_14__46_carry__2_n_6;
  wire add_temp_14__46_carry__2_n_7;
  wire add_temp_14__46_carry_i_1_n_0;
  wire add_temp_14__46_carry_i_2_n_0;
  wire add_temp_14__46_carry_i_3_n_0;
  wire add_temp_14__46_carry_i_4_n_0;
  wire add_temp_14__46_carry_i_5_n_0;
  wire add_temp_14__46_carry_i_6_n_0;
  wire add_temp_14__46_carry_i_7_n_0;
  wire add_temp_14__46_carry_n_0;
  wire add_temp_14__46_carry_n_1;
  wire add_temp_14__46_carry_n_2;
  wire add_temp_14__46_carry_n_3;
  wire add_temp_14__46_carry_n_4;
  wire add_temp_14__46_carry_n_5;
  wire add_temp_14__46_carry_n_6;
  wire add_temp_14__46_carry_n_7;
  wire add_temp_14__92_carry__0_i_1_n_0;
  wire add_temp_14__92_carry__0_i_2_n_0;
  wire add_temp_14__92_carry__0_i_3_n_0;
  wire add_temp_14__92_carry__0_i_4_n_0;
  wire add_temp_14__92_carry__0_i_5_n_0;
  wire add_temp_14__92_carry__0_i_6_n_0;
  wire add_temp_14__92_carry__0_i_7_n_0;
  wire add_temp_14__92_carry__0_i_8_n_0;
  wire add_temp_14__92_carry__0_n_0;
  wire add_temp_14__92_carry__0_n_1;
  wire add_temp_14__92_carry__0_n_2;
  wire add_temp_14__92_carry__0_n_3;
  wire add_temp_14__92_carry__0_n_4;
  wire add_temp_14__92_carry__0_n_5;
  wire add_temp_14__92_carry__0_n_6;
  wire add_temp_14__92_carry__0_n_7;
  wire add_temp_14__92_carry__1_i_1_n_0;
  wire add_temp_14__92_carry__1_i_2_n_0;
  wire add_temp_14__92_carry__1_i_3_n_0;
  wire add_temp_14__92_carry__1_i_4_n_0;
  wire add_temp_14__92_carry__1_i_5_n_0;
  wire add_temp_14__92_carry__1_i_6_n_0;
  wire add_temp_14__92_carry__1_i_7_n_0;
  wire add_temp_14__92_carry__1_i_8_n_0;
  wire add_temp_14__92_carry__1_n_0;
  wire add_temp_14__92_carry__1_n_1;
  wire add_temp_14__92_carry__1_n_2;
  wire add_temp_14__92_carry__1_n_3;
  wire add_temp_14__92_carry__1_n_4;
  wire add_temp_14__92_carry__1_n_5;
  wire add_temp_14__92_carry__1_n_6;
  wire add_temp_14__92_carry__1_n_7;
  wire add_temp_14__92_carry__2_i_1_n_0;
  wire add_temp_14__92_carry__2_i_2_n_0;
  wire add_temp_14__92_carry__2_i_3_n_0;
  wire add_temp_14__92_carry__2_i_4_n_0;
  wire add_temp_14__92_carry__2_i_5_n_0;
  wire add_temp_14__92_carry__2_i_6_n_0;
  wire add_temp_14__92_carry__2_i_7_n_0;
  wire add_temp_14__92_carry__2_n_1;
  wire add_temp_14__92_carry__2_n_2;
  wire add_temp_14__92_carry__2_n_3;
  wire add_temp_14__92_carry__2_n_4;
  wire add_temp_14__92_carry__2_n_5;
  wire add_temp_14__92_carry__2_n_6;
  wire add_temp_14__92_carry__2_n_7;
  wire add_temp_14__92_carry_i_1_n_0;
  wire add_temp_14__92_carry_i_2_n_0;
  wire add_temp_14__92_carry_i_3_n_0;
  wire add_temp_14__92_carry_i_4_n_0;
  wire add_temp_14__92_carry_i_5_n_0;
  wire add_temp_14__92_carry_i_6_n_0;
  wire add_temp_14__92_carry_i_7_n_0;
  wire add_temp_14__92_carry_n_0;
  wire add_temp_14__92_carry_n_1;
  wire add_temp_14__92_carry_n_2;
  wire add_temp_14__92_carry_n_3;
  wire add_temp_14__92_carry_n_4;
  wire add_temp_14__92_carry_n_5;
  wire add_temp_14__92_carry_n_6;
  wire add_temp_14__92_carry_n_7;
  wire cop_dut_enable;
  wire [15:0]\data_pipeline_tmp_reg[0] ;
  wire [15:0]\data_pipeline_tmp_reg[10] ;
  wire [15:0]\data_pipeline_tmp_reg[11] ;
  wire [15:0]\data_pipeline_tmp_reg[12] ;
  wire [15:0]\data_pipeline_tmp_reg[13] ;
  wire [15:0]\data_pipeline_tmp_reg[14] ;
  wire [15:0]\data_pipeline_tmp_reg[1] ;
  wire [15:0]\data_pipeline_tmp_reg[2] ;
  wire [15:0]\data_pipeline_tmp_reg[3] ;
  wire [15:0]\data_pipeline_tmp_reg[4] ;
  wire [15:0]\data_pipeline_tmp_reg[5] ;
  wire [15:0]\data_pipeline_tmp_reg[6] ;
  wire [15:0]\data_pipeline_tmp_reg[7] ;
  wire [15:0]\data_pipeline_tmp_reg[8] ;
  wire [15:0]\data_pipeline_tmp_reg[9] ;
  wire [15:0]filter_sum;
  wire [15:0]in;
  wire [14:14]\^mul_temp ;
  wire [14:14]\^mul_temp_1 ;
  wire [14:14]\^mul_temp_10 ;
  wire mul_temp_10_n_100;
  wire mul_temp_10_n_101;
  wire mul_temp_10_n_102;
  wire mul_temp_10_n_103;
  wire mul_temp_10_n_104;
  wire mul_temp_10_n_105;
  wire mul_temp_10_n_74;
  wire mul_temp_10_n_75;
  wire mul_temp_10_n_76;
  wire mul_temp_10_n_77;
  wire mul_temp_10_n_78;
  wire mul_temp_10_n_79;
  wire mul_temp_10_n_80;
  wire mul_temp_10_n_81;
  wire mul_temp_10_n_82;
  wire mul_temp_10_n_83;
  wire mul_temp_10_n_84;
  wire mul_temp_10_n_85;
  wire mul_temp_10_n_86;
  wire mul_temp_10_n_87;
  wire mul_temp_10_n_88;
  wire mul_temp_10_n_89;
  wire mul_temp_10_n_90;
  wire mul_temp_10_n_92;
  wire mul_temp_10_n_93;
  wire mul_temp_10_n_94;
  wire mul_temp_10_n_95;
  wire mul_temp_10_n_96;
  wire mul_temp_10_n_97;
  wire mul_temp_10_n_98;
  wire mul_temp_10_n_99;
  wire [14:14]\^mul_temp_11 ;
  wire mul_temp_11_n_100;
  wire mul_temp_11_n_101;
  wire mul_temp_11_n_102;
  wire mul_temp_11_n_103;
  wire mul_temp_11_n_104;
  wire mul_temp_11_n_105;
  wire mul_temp_11_n_74;
  wire mul_temp_11_n_75;
  wire mul_temp_11_n_76;
  wire mul_temp_11_n_77;
  wire mul_temp_11_n_78;
  wire mul_temp_11_n_79;
  wire mul_temp_11_n_80;
  wire mul_temp_11_n_81;
  wire mul_temp_11_n_82;
  wire mul_temp_11_n_83;
  wire mul_temp_11_n_84;
  wire mul_temp_11_n_85;
  wire mul_temp_11_n_86;
  wire mul_temp_11_n_87;
  wire mul_temp_11_n_88;
  wire mul_temp_11_n_89;
  wire mul_temp_11_n_90;
  wire mul_temp_11_n_92;
  wire mul_temp_11_n_93;
  wire mul_temp_11_n_94;
  wire mul_temp_11_n_95;
  wire mul_temp_11_n_96;
  wire mul_temp_11_n_97;
  wire mul_temp_11_n_98;
  wire mul_temp_11_n_99;
  wire [14:14]\^mul_temp_12 ;
  wire mul_temp_12_n_100;
  wire mul_temp_12_n_101;
  wire mul_temp_12_n_102;
  wire mul_temp_12_n_103;
  wire mul_temp_12_n_104;
  wire mul_temp_12_n_105;
  wire mul_temp_12_n_74;
  wire mul_temp_12_n_75;
  wire mul_temp_12_n_76;
  wire mul_temp_12_n_77;
  wire mul_temp_12_n_78;
  wire mul_temp_12_n_79;
  wire mul_temp_12_n_80;
  wire mul_temp_12_n_81;
  wire mul_temp_12_n_82;
  wire mul_temp_12_n_83;
  wire mul_temp_12_n_84;
  wire mul_temp_12_n_85;
  wire mul_temp_12_n_86;
  wire mul_temp_12_n_87;
  wire mul_temp_12_n_88;
  wire mul_temp_12_n_89;
  wire mul_temp_12_n_90;
  wire mul_temp_12_n_92;
  wire mul_temp_12_n_93;
  wire mul_temp_12_n_94;
  wire mul_temp_12_n_95;
  wire mul_temp_12_n_96;
  wire mul_temp_12_n_97;
  wire mul_temp_12_n_98;
  wire mul_temp_12_n_99;
  wire [14:14]\^mul_temp_13 ;
  wire mul_temp_13_n_100;
  wire mul_temp_13_n_101;
  wire mul_temp_13_n_102;
  wire mul_temp_13_n_103;
  wire mul_temp_13_n_104;
  wire mul_temp_13_n_105;
  wire mul_temp_13_n_74;
  wire mul_temp_13_n_75;
  wire mul_temp_13_n_76;
  wire mul_temp_13_n_77;
  wire mul_temp_13_n_78;
  wire mul_temp_13_n_79;
  wire mul_temp_13_n_80;
  wire mul_temp_13_n_81;
  wire mul_temp_13_n_82;
  wire mul_temp_13_n_83;
  wire mul_temp_13_n_84;
  wire mul_temp_13_n_85;
  wire mul_temp_13_n_86;
  wire mul_temp_13_n_87;
  wire mul_temp_13_n_88;
  wire mul_temp_13_n_89;
  wire mul_temp_13_n_90;
  wire mul_temp_13_n_92;
  wire mul_temp_13_n_93;
  wire mul_temp_13_n_94;
  wire mul_temp_13_n_95;
  wire mul_temp_13_n_96;
  wire mul_temp_13_n_97;
  wire mul_temp_13_n_98;
  wire mul_temp_13_n_99;
  wire [14:14]\^mul_temp_14 ;
  wire mul_temp_14_n_100;
  wire mul_temp_14_n_101;
  wire mul_temp_14_n_102;
  wire mul_temp_14_n_103;
  wire mul_temp_14_n_104;
  wire mul_temp_14_n_105;
  wire mul_temp_14_n_74;
  wire mul_temp_14_n_75;
  wire mul_temp_14_n_76;
  wire mul_temp_14_n_77;
  wire mul_temp_14_n_78;
  wire mul_temp_14_n_79;
  wire mul_temp_14_n_80;
  wire mul_temp_14_n_81;
  wire mul_temp_14_n_82;
  wire mul_temp_14_n_83;
  wire mul_temp_14_n_84;
  wire mul_temp_14_n_85;
  wire mul_temp_14_n_86;
  wire mul_temp_14_n_87;
  wire mul_temp_14_n_88;
  wire mul_temp_14_n_89;
  wire mul_temp_14_n_90;
  wire mul_temp_14_n_92;
  wire mul_temp_14_n_93;
  wire mul_temp_14_n_94;
  wire mul_temp_14_n_95;
  wire mul_temp_14_n_96;
  wire mul_temp_14_n_97;
  wire mul_temp_14_n_98;
  wire mul_temp_14_n_99;
  wire [14:14]\^mul_temp_15 ;
  wire mul_temp_15_n_100;
  wire mul_temp_15_n_101;
  wire mul_temp_15_n_102;
  wire mul_temp_15_n_103;
  wire mul_temp_15_n_104;
  wire mul_temp_15_n_105;
  wire mul_temp_15_n_74;
  wire mul_temp_15_n_75;
  wire mul_temp_15_n_76;
  wire mul_temp_15_n_77;
  wire mul_temp_15_n_78;
  wire mul_temp_15_n_79;
  wire mul_temp_15_n_80;
  wire mul_temp_15_n_81;
  wire mul_temp_15_n_82;
  wire mul_temp_15_n_83;
  wire mul_temp_15_n_84;
  wire mul_temp_15_n_85;
  wire mul_temp_15_n_86;
  wire mul_temp_15_n_87;
  wire mul_temp_15_n_88;
  wire mul_temp_15_n_89;
  wire mul_temp_15_n_90;
  wire mul_temp_15_n_92;
  wire mul_temp_15_n_93;
  wire mul_temp_15_n_94;
  wire mul_temp_15_n_95;
  wire mul_temp_15_n_96;
  wire mul_temp_15_n_97;
  wire mul_temp_15_n_98;
  wire mul_temp_15_n_99;
  wire [15:0]mul_temp_16;
  wire [14:14]\^mul_temp_17 ;
  wire mul_temp_17_n_100;
  wire mul_temp_17_n_101;
  wire mul_temp_17_n_102;
  wire mul_temp_17_n_103;
  wire mul_temp_17_n_104;
  wire mul_temp_17_n_105;
  wire mul_temp_17_n_74;
  wire mul_temp_17_n_75;
  wire mul_temp_17_n_76;
  wire mul_temp_17_n_77;
  wire mul_temp_17_n_78;
  wire mul_temp_17_n_79;
  wire mul_temp_17_n_80;
  wire mul_temp_17_n_81;
  wire mul_temp_17_n_82;
  wire mul_temp_17_n_83;
  wire mul_temp_17_n_84;
  wire mul_temp_17_n_85;
  wire mul_temp_17_n_86;
  wire mul_temp_17_n_87;
  wire mul_temp_17_n_88;
  wire mul_temp_17_n_89;
  wire mul_temp_17_n_90;
  wire mul_temp_17_n_92;
  wire mul_temp_17_n_93;
  wire mul_temp_17_n_94;
  wire mul_temp_17_n_95;
  wire mul_temp_17_n_96;
  wire mul_temp_17_n_97;
  wire mul_temp_17_n_98;
  wire mul_temp_17_n_99;
  wire [14:14]\^mul_temp_18 ;
  wire mul_temp_18_n_100;
  wire mul_temp_18_n_101;
  wire mul_temp_18_n_102;
  wire mul_temp_18_n_103;
  wire mul_temp_18_n_104;
  wire mul_temp_18_n_105;
  wire mul_temp_18_n_74;
  wire mul_temp_18_n_75;
  wire mul_temp_18_n_76;
  wire mul_temp_18_n_77;
  wire mul_temp_18_n_78;
  wire mul_temp_18_n_79;
  wire mul_temp_18_n_80;
  wire mul_temp_18_n_81;
  wire mul_temp_18_n_82;
  wire mul_temp_18_n_83;
  wire mul_temp_18_n_84;
  wire mul_temp_18_n_85;
  wire mul_temp_18_n_86;
  wire mul_temp_18_n_87;
  wire mul_temp_18_n_88;
  wire mul_temp_18_n_89;
  wire mul_temp_18_n_90;
  wire mul_temp_18_n_92;
  wire mul_temp_18_n_93;
  wire mul_temp_18_n_94;
  wire mul_temp_18_n_95;
  wire mul_temp_18_n_96;
  wire mul_temp_18_n_97;
  wire mul_temp_18_n_98;
  wire mul_temp_18_n_99;
  wire [14:14]\^mul_temp_19 ;
  wire mul_temp_19_n_100;
  wire mul_temp_19_n_101;
  wire mul_temp_19_n_102;
  wire mul_temp_19_n_103;
  wire mul_temp_19_n_104;
  wire mul_temp_19_n_105;
  wire mul_temp_19_n_74;
  wire mul_temp_19_n_75;
  wire mul_temp_19_n_76;
  wire mul_temp_19_n_77;
  wire mul_temp_19_n_78;
  wire mul_temp_19_n_79;
  wire mul_temp_19_n_80;
  wire mul_temp_19_n_81;
  wire mul_temp_19_n_82;
  wire mul_temp_19_n_83;
  wire mul_temp_19_n_84;
  wire mul_temp_19_n_85;
  wire mul_temp_19_n_86;
  wire mul_temp_19_n_87;
  wire mul_temp_19_n_88;
  wire mul_temp_19_n_89;
  wire mul_temp_19_n_90;
  wire mul_temp_19_n_92;
  wire mul_temp_19_n_93;
  wire mul_temp_19_n_94;
  wire mul_temp_19_n_95;
  wire mul_temp_19_n_96;
  wire mul_temp_19_n_97;
  wire mul_temp_19_n_98;
  wire mul_temp_19_n_99;
  wire mul_temp_1_n_100;
  wire mul_temp_1_n_101;
  wire mul_temp_1_n_102;
  wire mul_temp_1_n_103;
  wire mul_temp_1_n_104;
  wire mul_temp_1_n_105;
  wire mul_temp_1_n_74;
  wire mul_temp_1_n_75;
  wire mul_temp_1_n_76;
  wire mul_temp_1_n_77;
  wire mul_temp_1_n_78;
  wire mul_temp_1_n_79;
  wire mul_temp_1_n_80;
  wire mul_temp_1_n_81;
  wire mul_temp_1_n_82;
  wire mul_temp_1_n_83;
  wire mul_temp_1_n_84;
  wire mul_temp_1_n_85;
  wire mul_temp_1_n_86;
  wire mul_temp_1_n_87;
  wire mul_temp_1_n_88;
  wire mul_temp_1_n_89;
  wire mul_temp_1_n_90;
  wire mul_temp_1_n_92;
  wire mul_temp_1_n_93;
  wire mul_temp_1_n_94;
  wire mul_temp_1_n_95;
  wire mul_temp_1_n_96;
  wire mul_temp_1_n_97;
  wire mul_temp_1_n_98;
  wire mul_temp_1_n_99;
  wire [14:14]\^mul_temp_2 ;
  wire [14:14]\^mul_temp_20 ;
  wire mul_temp_20_n_100;
  wire mul_temp_20_n_101;
  wire mul_temp_20_n_102;
  wire mul_temp_20_n_103;
  wire mul_temp_20_n_104;
  wire mul_temp_20_n_105;
  wire mul_temp_20_n_74;
  wire mul_temp_20_n_75;
  wire mul_temp_20_n_76;
  wire mul_temp_20_n_77;
  wire mul_temp_20_n_78;
  wire mul_temp_20_n_79;
  wire mul_temp_20_n_80;
  wire mul_temp_20_n_81;
  wire mul_temp_20_n_82;
  wire mul_temp_20_n_83;
  wire mul_temp_20_n_84;
  wire mul_temp_20_n_85;
  wire mul_temp_20_n_86;
  wire mul_temp_20_n_87;
  wire mul_temp_20_n_88;
  wire mul_temp_20_n_89;
  wire mul_temp_20_n_90;
  wire mul_temp_20_n_92;
  wire mul_temp_20_n_93;
  wire mul_temp_20_n_94;
  wire mul_temp_20_n_95;
  wire mul_temp_20_n_96;
  wire mul_temp_20_n_97;
  wire mul_temp_20_n_98;
  wire mul_temp_20_n_99;
  wire [14:14]\^mul_temp_21 ;
  wire mul_temp_21_n_100;
  wire mul_temp_21_n_101;
  wire mul_temp_21_n_102;
  wire mul_temp_21_n_103;
  wire mul_temp_21_n_104;
  wire mul_temp_21_n_105;
  wire mul_temp_21_n_74;
  wire mul_temp_21_n_75;
  wire mul_temp_21_n_76;
  wire mul_temp_21_n_77;
  wire mul_temp_21_n_78;
  wire mul_temp_21_n_79;
  wire mul_temp_21_n_80;
  wire mul_temp_21_n_81;
  wire mul_temp_21_n_82;
  wire mul_temp_21_n_83;
  wire mul_temp_21_n_84;
  wire mul_temp_21_n_85;
  wire mul_temp_21_n_86;
  wire mul_temp_21_n_87;
  wire mul_temp_21_n_88;
  wire mul_temp_21_n_89;
  wire mul_temp_21_n_90;
  wire mul_temp_21_n_92;
  wire mul_temp_21_n_93;
  wire mul_temp_21_n_94;
  wire mul_temp_21_n_95;
  wire mul_temp_21_n_96;
  wire mul_temp_21_n_97;
  wire mul_temp_21_n_98;
  wire mul_temp_21_n_99;
  wire [14:14]\^mul_temp_22 ;
  wire mul_temp_22_n_100;
  wire mul_temp_22_n_101;
  wire mul_temp_22_n_102;
  wire mul_temp_22_n_103;
  wire mul_temp_22_n_104;
  wire mul_temp_22_n_105;
  wire mul_temp_22_n_74;
  wire mul_temp_22_n_75;
  wire mul_temp_22_n_76;
  wire mul_temp_22_n_77;
  wire mul_temp_22_n_78;
  wire mul_temp_22_n_79;
  wire mul_temp_22_n_80;
  wire mul_temp_22_n_81;
  wire mul_temp_22_n_82;
  wire mul_temp_22_n_83;
  wire mul_temp_22_n_84;
  wire mul_temp_22_n_85;
  wire mul_temp_22_n_86;
  wire mul_temp_22_n_87;
  wire mul_temp_22_n_88;
  wire mul_temp_22_n_89;
  wire mul_temp_22_n_90;
  wire mul_temp_22_n_92;
  wire mul_temp_22_n_93;
  wire mul_temp_22_n_94;
  wire mul_temp_22_n_95;
  wire mul_temp_22_n_96;
  wire mul_temp_22_n_97;
  wire mul_temp_22_n_98;
  wire mul_temp_22_n_99;
  wire [14:14]\^mul_temp_23 ;
  wire mul_temp_23_n_100;
  wire mul_temp_23_n_101;
  wire mul_temp_23_n_102;
  wire mul_temp_23_n_103;
  wire mul_temp_23_n_104;
  wire mul_temp_23_n_105;
  wire mul_temp_23_n_74;
  wire mul_temp_23_n_75;
  wire mul_temp_23_n_76;
  wire mul_temp_23_n_77;
  wire mul_temp_23_n_78;
  wire mul_temp_23_n_79;
  wire mul_temp_23_n_80;
  wire mul_temp_23_n_81;
  wire mul_temp_23_n_82;
  wire mul_temp_23_n_83;
  wire mul_temp_23_n_84;
  wire mul_temp_23_n_85;
  wire mul_temp_23_n_86;
  wire mul_temp_23_n_87;
  wire mul_temp_23_n_88;
  wire mul_temp_23_n_89;
  wire mul_temp_23_n_90;
  wire mul_temp_23_n_92;
  wire mul_temp_23_n_93;
  wire mul_temp_23_n_94;
  wire mul_temp_23_n_95;
  wire mul_temp_23_n_96;
  wire mul_temp_23_n_97;
  wire mul_temp_23_n_98;
  wire mul_temp_23_n_99;
  wire [14:14]\^mul_temp_24 ;
  wire mul_temp_24_n_100;
  wire mul_temp_24_n_101;
  wire mul_temp_24_n_102;
  wire mul_temp_24_n_103;
  wire mul_temp_24_n_104;
  wire mul_temp_24_n_105;
  wire mul_temp_24_n_74;
  wire mul_temp_24_n_75;
  wire mul_temp_24_n_76;
  wire mul_temp_24_n_77;
  wire mul_temp_24_n_78;
  wire mul_temp_24_n_79;
  wire mul_temp_24_n_80;
  wire mul_temp_24_n_81;
  wire mul_temp_24_n_82;
  wire mul_temp_24_n_83;
  wire mul_temp_24_n_84;
  wire mul_temp_24_n_85;
  wire mul_temp_24_n_86;
  wire mul_temp_24_n_87;
  wire mul_temp_24_n_88;
  wire mul_temp_24_n_89;
  wire mul_temp_24_n_90;
  wire mul_temp_24_n_92;
  wire mul_temp_24_n_93;
  wire mul_temp_24_n_94;
  wire mul_temp_24_n_95;
  wire mul_temp_24_n_96;
  wire mul_temp_24_n_97;
  wire mul_temp_24_n_98;
  wire mul_temp_24_n_99;
  wire [14:14]\^mul_temp_25 ;
  wire mul_temp_25_n_100;
  wire mul_temp_25_n_101;
  wire mul_temp_25_n_102;
  wire mul_temp_25_n_103;
  wire mul_temp_25_n_104;
  wire mul_temp_25_n_105;
  wire mul_temp_25_n_74;
  wire mul_temp_25_n_75;
  wire mul_temp_25_n_76;
  wire mul_temp_25_n_77;
  wire mul_temp_25_n_78;
  wire mul_temp_25_n_79;
  wire mul_temp_25_n_80;
  wire mul_temp_25_n_81;
  wire mul_temp_25_n_82;
  wire mul_temp_25_n_83;
  wire mul_temp_25_n_84;
  wire mul_temp_25_n_85;
  wire mul_temp_25_n_86;
  wire mul_temp_25_n_87;
  wire mul_temp_25_n_88;
  wire mul_temp_25_n_89;
  wire mul_temp_25_n_90;
  wire mul_temp_25_n_92;
  wire mul_temp_25_n_93;
  wire mul_temp_25_n_94;
  wire mul_temp_25_n_95;
  wire mul_temp_25_n_96;
  wire mul_temp_25_n_97;
  wire mul_temp_25_n_98;
  wire mul_temp_25_n_99;
  wire [14:14]\^mul_temp_26 ;
  wire mul_temp_26_n_100;
  wire mul_temp_26_n_101;
  wire mul_temp_26_n_102;
  wire mul_temp_26_n_103;
  wire mul_temp_26_n_104;
  wire mul_temp_26_n_105;
  wire mul_temp_26_n_74;
  wire mul_temp_26_n_75;
  wire mul_temp_26_n_76;
  wire mul_temp_26_n_77;
  wire mul_temp_26_n_78;
  wire mul_temp_26_n_79;
  wire mul_temp_26_n_80;
  wire mul_temp_26_n_81;
  wire mul_temp_26_n_82;
  wire mul_temp_26_n_83;
  wire mul_temp_26_n_84;
  wire mul_temp_26_n_85;
  wire mul_temp_26_n_86;
  wire mul_temp_26_n_87;
  wire mul_temp_26_n_88;
  wire mul_temp_26_n_89;
  wire mul_temp_26_n_90;
  wire mul_temp_26_n_92;
  wire mul_temp_26_n_93;
  wire mul_temp_26_n_94;
  wire mul_temp_26_n_95;
  wire mul_temp_26_n_96;
  wire mul_temp_26_n_97;
  wire mul_temp_26_n_98;
  wire mul_temp_26_n_99;
  wire [14:14]\^mul_temp_27 ;
  wire mul_temp_27_n_100;
  wire mul_temp_27_n_101;
  wire mul_temp_27_n_102;
  wire mul_temp_27_n_103;
  wire mul_temp_27_n_104;
  wire mul_temp_27_n_105;
  wire mul_temp_27_n_74;
  wire mul_temp_27_n_75;
  wire mul_temp_27_n_76;
  wire mul_temp_27_n_77;
  wire mul_temp_27_n_78;
  wire mul_temp_27_n_79;
  wire mul_temp_27_n_80;
  wire mul_temp_27_n_81;
  wire mul_temp_27_n_82;
  wire mul_temp_27_n_83;
  wire mul_temp_27_n_84;
  wire mul_temp_27_n_85;
  wire mul_temp_27_n_86;
  wire mul_temp_27_n_87;
  wire mul_temp_27_n_88;
  wire mul_temp_27_n_89;
  wire mul_temp_27_n_90;
  wire mul_temp_27_n_92;
  wire mul_temp_27_n_93;
  wire mul_temp_27_n_94;
  wire mul_temp_27_n_95;
  wire mul_temp_27_n_96;
  wire mul_temp_27_n_97;
  wire mul_temp_27_n_98;
  wire mul_temp_27_n_99;
  wire [14:14]\^mul_temp_28 ;
  wire mul_temp_28_n_100;
  wire mul_temp_28_n_101;
  wire mul_temp_28_n_102;
  wire mul_temp_28_n_103;
  wire mul_temp_28_n_104;
  wire mul_temp_28_n_105;
  wire mul_temp_28_n_74;
  wire mul_temp_28_n_75;
  wire mul_temp_28_n_76;
  wire mul_temp_28_n_77;
  wire mul_temp_28_n_78;
  wire mul_temp_28_n_79;
  wire mul_temp_28_n_80;
  wire mul_temp_28_n_81;
  wire mul_temp_28_n_82;
  wire mul_temp_28_n_83;
  wire mul_temp_28_n_84;
  wire mul_temp_28_n_85;
  wire mul_temp_28_n_86;
  wire mul_temp_28_n_87;
  wire mul_temp_28_n_88;
  wire mul_temp_28_n_89;
  wire mul_temp_28_n_90;
  wire mul_temp_28_n_92;
  wire mul_temp_28_n_93;
  wire mul_temp_28_n_94;
  wire mul_temp_28_n_95;
  wire mul_temp_28_n_96;
  wire mul_temp_28_n_97;
  wire mul_temp_28_n_98;
  wire mul_temp_28_n_99;
  wire [14:14]\^mul_temp_29 ;
  wire mul_temp_29_n_100;
  wire mul_temp_29_n_101;
  wire mul_temp_29_n_102;
  wire mul_temp_29_n_103;
  wire mul_temp_29_n_104;
  wire mul_temp_29_n_105;
  wire mul_temp_29_n_74;
  wire mul_temp_29_n_75;
  wire mul_temp_29_n_76;
  wire mul_temp_29_n_77;
  wire mul_temp_29_n_78;
  wire mul_temp_29_n_79;
  wire mul_temp_29_n_80;
  wire mul_temp_29_n_81;
  wire mul_temp_29_n_82;
  wire mul_temp_29_n_83;
  wire mul_temp_29_n_84;
  wire mul_temp_29_n_85;
  wire mul_temp_29_n_86;
  wire mul_temp_29_n_87;
  wire mul_temp_29_n_88;
  wire mul_temp_29_n_89;
  wire mul_temp_29_n_90;
  wire mul_temp_29_n_92;
  wire mul_temp_29_n_93;
  wire mul_temp_29_n_94;
  wire mul_temp_29_n_95;
  wire mul_temp_29_n_96;
  wire mul_temp_29_n_97;
  wire mul_temp_29_n_98;
  wire mul_temp_29_n_99;
  wire mul_temp_2_n_100;
  wire mul_temp_2_n_101;
  wire mul_temp_2_n_102;
  wire mul_temp_2_n_103;
  wire mul_temp_2_n_104;
  wire mul_temp_2_n_105;
  wire mul_temp_2_n_74;
  wire mul_temp_2_n_75;
  wire mul_temp_2_n_76;
  wire mul_temp_2_n_77;
  wire mul_temp_2_n_78;
  wire mul_temp_2_n_79;
  wire mul_temp_2_n_80;
  wire mul_temp_2_n_81;
  wire mul_temp_2_n_82;
  wire mul_temp_2_n_83;
  wire mul_temp_2_n_84;
  wire mul_temp_2_n_85;
  wire mul_temp_2_n_86;
  wire mul_temp_2_n_87;
  wire mul_temp_2_n_88;
  wire mul_temp_2_n_89;
  wire mul_temp_2_n_90;
  wire mul_temp_2_n_92;
  wire mul_temp_2_n_93;
  wire mul_temp_2_n_94;
  wire mul_temp_2_n_95;
  wire mul_temp_2_n_96;
  wire mul_temp_2_n_97;
  wire mul_temp_2_n_98;
  wire mul_temp_2_n_99;
  wire [14:14]\^mul_temp_3 ;
  wire [14:14]\^mul_temp_30 ;
  wire mul_temp_30_n_100;
  wire mul_temp_30_n_101;
  wire mul_temp_30_n_102;
  wire mul_temp_30_n_103;
  wire mul_temp_30_n_104;
  wire mul_temp_30_n_105;
  wire mul_temp_30_n_74;
  wire mul_temp_30_n_75;
  wire mul_temp_30_n_76;
  wire mul_temp_30_n_77;
  wire mul_temp_30_n_78;
  wire mul_temp_30_n_79;
  wire mul_temp_30_n_80;
  wire mul_temp_30_n_81;
  wire mul_temp_30_n_82;
  wire mul_temp_30_n_83;
  wire mul_temp_30_n_84;
  wire mul_temp_30_n_85;
  wire mul_temp_30_n_86;
  wire mul_temp_30_n_87;
  wire mul_temp_30_n_88;
  wire mul_temp_30_n_89;
  wire mul_temp_30_n_90;
  wire mul_temp_30_n_92;
  wire mul_temp_30_n_93;
  wire mul_temp_30_n_94;
  wire mul_temp_30_n_95;
  wire mul_temp_30_n_96;
  wire mul_temp_30_n_97;
  wire mul_temp_30_n_98;
  wire mul_temp_30_n_99;
  wire [14:14]\^mul_temp_31 ;
  wire mul_temp_31_n_100;
  wire mul_temp_31_n_101;
  wire mul_temp_31_n_102;
  wire mul_temp_31_n_103;
  wire mul_temp_31_n_104;
  wire mul_temp_31_n_105;
  wire mul_temp_31_n_74;
  wire mul_temp_31_n_75;
  wire mul_temp_31_n_76;
  wire mul_temp_31_n_77;
  wire mul_temp_31_n_78;
  wire mul_temp_31_n_79;
  wire mul_temp_31_n_80;
  wire mul_temp_31_n_81;
  wire mul_temp_31_n_82;
  wire mul_temp_31_n_83;
  wire mul_temp_31_n_84;
  wire mul_temp_31_n_85;
  wire mul_temp_31_n_86;
  wire mul_temp_31_n_87;
  wire mul_temp_31_n_88;
  wire mul_temp_31_n_89;
  wire mul_temp_31_n_90;
  wire mul_temp_31_n_92;
  wire mul_temp_31_n_93;
  wire mul_temp_31_n_94;
  wire mul_temp_31_n_95;
  wire mul_temp_31_n_96;
  wire mul_temp_31_n_97;
  wire mul_temp_31_n_98;
  wire mul_temp_31_n_99;
  wire [14:14]\^mul_temp_32 ;
  wire mul_temp_32_n_100;
  wire mul_temp_32_n_101;
  wire mul_temp_32_n_102;
  wire mul_temp_32_n_103;
  wire mul_temp_32_n_104;
  wire mul_temp_32_n_105;
  wire mul_temp_32_n_74;
  wire mul_temp_32_n_75;
  wire mul_temp_32_n_76;
  wire mul_temp_32_n_77;
  wire mul_temp_32_n_78;
  wire mul_temp_32_n_79;
  wire mul_temp_32_n_80;
  wire mul_temp_32_n_81;
  wire mul_temp_32_n_82;
  wire mul_temp_32_n_83;
  wire mul_temp_32_n_84;
  wire mul_temp_32_n_85;
  wire mul_temp_32_n_86;
  wire mul_temp_32_n_87;
  wire mul_temp_32_n_88;
  wire mul_temp_32_n_89;
  wire mul_temp_32_n_90;
  wire mul_temp_32_n_92;
  wire mul_temp_32_n_93;
  wire mul_temp_32_n_94;
  wire mul_temp_32_n_95;
  wire mul_temp_32_n_96;
  wire mul_temp_32_n_97;
  wire mul_temp_32_n_98;
  wire mul_temp_32_n_99;
  wire mul_temp_3_n_100;
  wire mul_temp_3_n_101;
  wire mul_temp_3_n_102;
  wire mul_temp_3_n_103;
  wire mul_temp_3_n_104;
  wire mul_temp_3_n_105;
  wire mul_temp_3_n_74;
  wire mul_temp_3_n_75;
  wire mul_temp_3_n_76;
  wire mul_temp_3_n_77;
  wire mul_temp_3_n_78;
  wire mul_temp_3_n_79;
  wire mul_temp_3_n_80;
  wire mul_temp_3_n_81;
  wire mul_temp_3_n_82;
  wire mul_temp_3_n_83;
  wire mul_temp_3_n_84;
  wire mul_temp_3_n_85;
  wire mul_temp_3_n_86;
  wire mul_temp_3_n_87;
  wire mul_temp_3_n_88;
  wire mul_temp_3_n_89;
  wire mul_temp_3_n_90;
  wire mul_temp_3_n_92;
  wire mul_temp_3_n_93;
  wire mul_temp_3_n_94;
  wire mul_temp_3_n_95;
  wire mul_temp_3_n_96;
  wire mul_temp_3_n_97;
  wire mul_temp_3_n_98;
  wire mul_temp_3_n_99;
  wire [14:14]\^mul_temp_4 ;
  wire mul_temp_4_n_100;
  wire mul_temp_4_n_101;
  wire mul_temp_4_n_102;
  wire mul_temp_4_n_103;
  wire mul_temp_4_n_104;
  wire mul_temp_4_n_105;
  wire mul_temp_4_n_74;
  wire mul_temp_4_n_75;
  wire mul_temp_4_n_76;
  wire mul_temp_4_n_77;
  wire mul_temp_4_n_78;
  wire mul_temp_4_n_79;
  wire mul_temp_4_n_80;
  wire mul_temp_4_n_81;
  wire mul_temp_4_n_82;
  wire mul_temp_4_n_83;
  wire mul_temp_4_n_84;
  wire mul_temp_4_n_85;
  wire mul_temp_4_n_86;
  wire mul_temp_4_n_87;
  wire mul_temp_4_n_88;
  wire mul_temp_4_n_89;
  wire mul_temp_4_n_90;
  wire mul_temp_4_n_92;
  wire mul_temp_4_n_93;
  wire mul_temp_4_n_94;
  wire mul_temp_4_n_95;
  wire mul_temp_4_n_96;
  wire mul_temp_4_n_97;
  wire mul_temp_4_n_98;
  wire mul_temp_4_n_99;
  wire [14:14]\^mul_temp_5 ;
  wire mul_temp_5_n_100;
  wire mul_temp_5_n_101;
  wire mul_temp_5_n_102;
  wire mul_temp_5_n_103;
  wire mul_temp_5_n_104;
  wire mul_temp_5_n_105;
  wire mul_temp_5_n_74;
  wire mul_temp_5_n_75;
  wire mul_temp_5_n_76;
  wire mul_temp_5_n_77;
  wire mul_temp_5_n_78;
  wire mul_temp_5_n_79;
  wire mul_temp_5_n_80;
  wire mul_temp_5_n_81;
  wire mul_temp_5_n_82;
  wire mul_temp_5_n_83;
  wire mul_temp_5_n_84;
  wire mul_temp_5_n_85;
  wire mul_temp_5_n_86;
  wire mul_temp_5_n_87;
  wire mul_temp_5_n_88;
  wire mul_temp_5_n_89;
  wire mul_temp_5_n_90;
  wire mul_temp_5_n_92;
  wire mul_temp_5_n_93;
  wire mul_temp_5_n_94;
  wire mul_temp_5_n_95;
  wire mul_temp_5_n_96;
  wire mul_temp_5_n_97;
  wire mul_temp_5_n_98;
  wire mul_temp_5_n_99;
  wire [14:14]\^mul_temp_6 ;
  wire mul_temp_6_n_100;
  wire mul_temp_6_n_101;
  wire mul_temp_6_n_102;
  wire mul_temp_6_n_103;
  wire mul_temp_6_n_104;
  wire mul_temp_6_n_105;
  wire mul_temp_6_n_74;
  wire mul_temp_6_n_75;
  wire mul_temp_6_n_76;
  wire mul_temp_6_n_77;
  wire mul_temp_6_n_78;
  wire mul_temp_6_n_79;
  wire mul_temp_6_n_80;
  wire mul_temp_6_n_81;
  wire mul_temp_6_n_82;
  wire mul_temp_6_n_83;
  wire mul_temp_6_n_84;
  wire mul_temp_6_n_85;
  wire mul_temp_6_n_86;
  wire mul_temp_6_n_87;
  wire mul_temp_6_n_88;
  wire mul_temp_6_n_89;
  wire mul_temp_6_n_90;
  wire mul_temp_6_n_92;
  wire mul_temp_6_n_93;
  wire mul_temp_6_n_94;
  wire mul_temp_6_n_95;
  wire mul_temp_6_n_96;
  wire mul_temp_6_n_97;
  wire mul_temp_6_n_98;
  wire mul_temp_6_n_99;
  wire [14:14]\^mul_temp_7 ;
  wire mul_temp_7_n_100;
  wire mul_temp_7_n_101;
  wire mul_temp_7_n_102;
  wire mul_temp_7_n_103;
  wire mul_temp_7_n_104;
  wire mul_temp_7_n_105;
  wire mul_temp_7_n_74;
  wire mul_temp_7_n_75;
  wire mul_temp_7_n_76;
  wire mul_temp_7_n_77;
  wire mul_temp_7_n_78;
  wire mul_temp_7_n_79;
  wire mul_temp_7_n_80;
  wire mul_temp_7_n_81;
  wire mul_temp_7_n_82;
  wire mul_temp_7_n_83;
  wire mul_temp_7_n_84;
  wire mul_temp_7_n_85;
  wire mul_temp_7_n_86;
  wire mul_temp_7_n_87;
  wire mul_temp_7_n_88;
  wire mul_temp_7_n_89;
  wire mul_temp_7_n_90;
  wire mul_temp_7_n_92;
  wire mul_temp_7_n_93;
  wire mul_temp_7_n_94;
  wire mul_temp_7_n_95;
  wire mul_temp_7_n_96;
  wire mul_temp_7_n_97;
  wire mul_temp_7_n_98;
  wire mul_temp_7_n_99;
  wire [14:14]\^mul_temp_8 ;
  wire mul_temp_8_n_100;
  wire mul_temp_8_n_101;
  wire mul_temp_8_n_102;
  wire mul_temp_8_n_103;
  wire mul_temp_8_n_104;
  wire mul_temp_8_n_105;
  wire mul_temp_8_n_74;
  wire mul_temp_8_n_75;
  wire mul_temp_8_n_76;
  wire mul_temp_8_n_77;
  wire mul_temp_8_n_78;
  wire mul_temp_8_n_79;
  wire mul_temp_8_n_80;
  wire mul_temp_8_n_81;
  wire mul_temp_8_n_82;
  wire mul_temp_8_n_83;
  wire mul_temp_8_n_84;
  wire mul_temp_8_n_85;
  wire mul_temp_8_n_86;
  wire mul_temp_8_n_87;
  wire mul_temp_8_n_88;
  wire mul_temp_8_n_89;
  wire mul_temp_8_n_90;
  wire mul_temp_8_n_92;
  wire mul_temp_8_n_93;
  wire mul_temp_8_n_94;
  wire mul_temp_8_n_95;
  wire mul_temp_8_n_96;
  wire mul_temp_8_n_97;
  wire mul_temp_8_n_98;
  wire mul_temp_8_n_99;
  wire [14:14]\^mul_temp_9 ;
  wire mul_temp_9_n_100;
  wire mul_temp_9_n_101;
  wire mul_temp_9_n_102;
  wire mul_temp_9_n_103;
  wire mul_temp_9_n_104;
  wire mul_temp_9_n_105;
  wire mul_temp_9_n_74;
  wire mul_temp_9_n_75;
  wire mul_temp_9_n_76;
  wire mul_temp_9_n_77;
  wire mul_temp_9_n_78;
  wire mul_temp_9_n_79;
  wire mul_temp_9_n_80;
  wire mul_temp_9_n_81;
  wire mul_temp_9_n_82;
  wire mul_temp_9_n_83;
  wire mul_temp_9_n_84;
  wire mul_temp_9_n_85;
  wire mul_temp_9_n_86;
  wire mul_temp_9_n_87;
  wire mul_temp_9_n_88;
  wire mul_temp_9_n_89;
  wire mul_temp_9_n_90;
  wire mul_temp_9_n_92;
  wire mul_temp_9_n_93;
  wire mul_temp_9_n_94;
  wire mul_temp_9_n_95;
  wire mul_temp_9_n_96;
  wire mul_temp_9_n_97;
  wire mul_temp_9_n_98;
  wire mul_temp_9_n_99;
  wire mul_temp_n_100;
  wire mul_temp_n_101;
  wire mul_temp_n_102;
  wire mul_temp_n_103;
  wire mul_temp_n_104;
  wire mul_temp_n_105;
  wire mul_temp_n_74;
  wire mul_temp_n_75;
  wire mul_temp_n_76;
  wire mul_temp_n_77;
  wire mul_temp_n_78;
  wire mul_temp_n_79;
  wire mul_temp_n_80;
  wire mul_temp_n_81;
  wire mul_temp_n_82;
  wire mul_temp_n_83;
  wire mul_temp_n_84;
  wire mul_temp_n_85;
  wire mul_temp_n_86;
  wire mul_temp_n_87;
  wire mul_temp_n_88;
  wire mul_temp_n_89;
  wire mul_temp_n_90;
  wire mul_temp_n_92;
  wire mul_temp_n_93;
  wire mul_temp_n_94;
  wire mul_temp_n_95;
  wire mul_temp_n_96;
  wire mul_temp_n_97;
  wire mul_temp_n_98;
  wire mul_temp_n_99;
  wire sub_temp_carry__0_n_0;
  wire sub_temp_carry__0_n_1;
  wire sub_temp_carry__0_n_2;
  wire sub_temp_carry__0_n_3;
  wire sub_temp_carry__1_n_0;
  wire sub_temp_carry__1_n_1;
  wire sub_temp_carry__1_n_2;
  wire sub_temp_carry__1_n_3;
  wire sub_temp_carry__2_n_1;
  wire sub_temp_carry__2_n_2;
  wire sub_temp_carry__2_n_3;
  wire sub_temp_carry_n_0;
  wire sub_temp_carry_n_1;
  wire sub_temp_carry_n_2;
  wire sub_temp_carry_n_3;
  wire \weight[0][0]_i_2_n_0 ;
  wire \weight[0][0]_i_3_n_0 ;
  wire \weight[0][0]_i_4_n_0 ;
  wire \weight[0][0]_i_5_n_0 ;
  wire \weight[0][12]_i_2_n_0 ;
  wire \weight[0][12]_i_3_n_0 ;
  wire \weight[0][12]_i_4_n_0 ;
  wire \weight[0][12]_i_5_n_0 ;
  wire \weight[0][4]_i_2_n_0 ;
  wire \weight[0][4]_i_3_n_0 ;
  wire \weight[0][4]_i_4_n_0 ;
  wire \weight[0][4]_i_5_n_0 ;
  wire \weight[0][8]_i_2_n_0 ;
  wire \weight[0][8]_i_3_n_0 ;
  wire \weight[0][8]_i_4_n_0 ;
  wire \weight[0][8]_i_5_n_0 ;
  wire \weight[10][0]_i_2_n_0 ;
  wire \weight[10][0]_i_3_n_0 ;
  wire \weight[10][0]_i_4_n_0 ;
  wire \weight[10][0]_i_5_n_0 ;
  wire \weight[10][12]_i_2_n_0 ;
  wire \weight[10][12]_i_3_n_0 ;
  wire \weight[10][12]_i_4_n_0 ;
  wire \weight[10][12]_i_5_n_0 ;
  wire \weight[10][4]_i_2_n_0 ;
  wire \weight[10][4]_i_3_n_0 ;
  wire \weight[10][4]_i_4_n_0 ;
  wire \weight[10][4]_i_5_n_0 ;
  wire \weight[10][8]_i_2_n_0 ;
  wire \weight[10][8]_i_3_n_0 ;
  wire \weight[10][8]_i_4_n_0 ;
  wire \weight[10][8]_i_5_n_0 ;
  wire \weight[11][0]_i_2_n_0 ;
  wire \weight[11][0]_i_3_n_0 ;
  wire \weight[11][0]_i_4_n_0 ;
  wire \weight[11][0]_i_5_n_0 ;
  wire \weight[11][12]_i_2_n_0 ;
  wire \weight[11][12]_i_3_n_0 ;
  wire \weight[11][12]_i_4_n_0 ;
  wire \weight[11][12]_i_5_n_0 ;
  wire \weight[11][4]_i_2_n_0 ;
  wire \weight[11][4]_i_3_n_0 ;
  wire \weight[11][4]_i_4_n_0 ;
  wire \weight[11][4]_i_5_n_0 ;
  wire \weight[11][8]_i_2_n_0 ;
  wire \weight[11][8]_i_3_n_0 ;
  wire \weight[11][8]_i_4_n_0 ;
  wire \weight[11][8]_i_5_n_0 ;
  wire \weight[12][0]_i_2_n_0 ;
  wire \weight[12][0]_i_3_n_0 ;
  wire \weight[12][0]_i_4_n_0 ;
  wire \weight[12][0]_i_5_n_0 ;
  wire \weight[12][12]_i_2_n_0 ;
  wire \weight[12][12]_i_3_n_0 ;
  wire \weight[12][12]_i_4_n_0 ;
  wire \weight[12][12]_i_5_n_0 ;
  wire \weight[12][4]_i_2_n_0 ;
  wire \weight[12][4]_i_3_n_0 ;
  wire \weight[12][4]_i_4_n_0 ;
  wire \weight[12][4]_i_5_n_0 ;
  wire \weight[12][8]_i_2_n_0 ;
  wire \weight[12][8]_i_3_n_0 ;
  wire \weight[12][8]_i_4_n_0 ;
  wire \weight[12][8]_i_5_n_0 ;
  wire \weight[13][0]_i_2_n_0 ;
  wire \weight[13][0]_i_3_n_0 ;
  wire \weight[13][0]_i_4_n_0 ;
  wire \weight[13][0]_i_5_n_0 ;
  wire \weight[13][12]_i_2_n_0 ;
  wire \weight[13][12]_i_3_n_0 ;
  wire \weight[13][12]_i_4_n_0 ;
  wire \weight[13][12]_i_5_n_0 ;
  wire \weight[13][4]_i_2_n_0 ;
  wire \weight[13][4]_i_3_n_0 ;
  wire \weight[13][4]_i_4_n_0 ;
  wire \weight[13][4]_i_5_n_0 ;
  wire \weight[13][8]_i_2_n_0 ;
  wire \weight[13][8]_i_3_n_0 ;
  wire \weight[13][8]_i_4_n_0 ;
  wire \weight[13][8]_i_5_n_0 ;
  wire \weight[14][0]_i_2_n_0 ;
  wire \weight[14][0]_i_3_n_0 ;
  wire \weight[14][0]_i_4_n_0 ;
  wire \weight[14][0]_i_5_n_0 ;
  wire \weight[14][12]_i_2_n_0 ;
  wire \weight[14][12]_i_3_n_0 ;
  wire \weight[14][12]_i_4_n_0 ;
  wire \weight[14][12]_i_5_n_0 ;
  wire \weight[14][4]_i_2_n_0 ;
  wire \weight[14][4]_i_3_n_0 ;
  wire \weight[14][4]_i_4_n_0 ;
  wire \weight[14][4]_i_5_n_0 ;
  wire \weight[14][8]_i_2_n_0 ;
  wire \weight[14][8]_i_3_n_0 ;
  wire \weight[14][8]_i_4_n_0 ;
  wire \weight[14][8]_i_5_n_0 ;
  wire \weight[15][0]_i_2_n_0 ;
  wire \weight[15][0]_i_3_n_0 ;
  wire \weight[15][0]_i_4_n_0 ;
  wire \weight[15][0]_i_5_n_0 ;
  wire \weight[15][12]_i_2_n_0 ;
  wire \weight[15][12]_i_3_n_0 ;
  wire \weight[15][12]_i_4_n_0 ;
  wire \weight[15][12]_i_5_n_0 ;
  wire \weight[15][4]_i_2_n_0 ;
  wire \weight[15][4]_i_3_n_0 ;
  wire \weight[15][4]_i_4_n_0 ;
  wire \weight[15][4]_i_5_n_0 ;
  wire \weight[15][8]_i_2_n_0 ;
  wire \weight[15][8]_i_3_n_0 ;
  wire \weight[15][8]_i_4_n_0 ;
  wire \weight[15][8]_i_5_n_0 ;
  wire \weight[1][0]_i_2_n_0 ;
  wire \weight[1][0]_i_3_n_0 ;
  wire \weight[1][0]_i_4_n_0 ;
  wire \weight[1][0]_i_5_n_0 ;
  wire \weight[1][12]_i_2_n_0 ;
  wire \weight[1][12]_i_3_n_0 ;
  wire \weight[1][12]_i_4_n_0 ;
  wire \weight[1][12]_i_5_n_0 ;
  wire \weight[1][4]_i_2_n_0 ;
  wire \weight[1][4]_i_3_n_0 ;
  wire \weight[1][4]_i_4_n_0 ;
  wire \weight[1][4]_i_5_n_0 ;
  wire \weight[1][8]_i_2_n_0 ;
  wire \weight[1][8]_i_3_n_0 ;
  wire \weight[1][8]_i_4_n_0 ;
  wire \weight[1][8]_i_5_n_0 ;
  wire \weight[2][0]_i_2_n_0 ;
  wire \weight[2][0]_i_3_n_0 ;
  wire \weight[2][0]_i_4_n_0 ;
  wire \weight[2][0]_i_5_n_0 ;
  wire \weight[2][12]_i_2_n_0 ;
  wire \weight[2][12]_i_3_n_0 ;
  wire \weight[2][12]_i_4_n_0 ;
  wire \weight[2][12]_i_5_n_0 ;
  wire \weight[2][4]_i_2_n_0 ;
  wire \weight[2][4]_i_3_n_0 ;
  wire \weight[2][4]_i_4_n_0 ;
  wire \weight[2][4]_i_5_n_0 ;
  wire \weight[2][8]_i_2_n_0 ;
  wire \weight[2][8]_i_3_n_0 ;
  wire \weight[2][8]_i_4_n_0 ;
  wire \weight[2][8]_i_5_n_0 ;
  wire \weight[3][0]_i_2_n_0 ;
  wire \weight[3][0]_i_3_n_0 ;
  wire \weight[3][0]_i_4_n_0 ;
  wire \weight[3][0]_i_5_n_0 ;
  wire \weight[3][12]_i_2_n_0 ;
  wire \weight[3][12]_i_3_n_0 ;
  wire \weight[3][12]_i_4_n_0 ;
  wire \weight[3][12]_i_5_n_0 ;
  wire \weight[3][4]_i_2_n_0 ;
  wire \weight[3][4]_i_3_n_0 ;
  wire \weight[3][4]_i_4_n_0 ;
  wire \weight[3][4]_i_5_n_0 ;
  wire \weight[3][8]_i_2_n_0 ;
  wire \weight[3][8]_i_3_n_0 ;
  wire \weight[3][8]_i_4_n_0 ;
  wire \weight[3][8]_i_5_n_0 ;
  wire \weight[4][0]_i_2_n_0 ;
  wire \weight[4][0]_i_3_n_0 ;
  wire \weight[4][0]_i_4_n_0 ;
  wire \weight[4][0]_i_5_n_0 ;
  wire \weight[4][12]_i_2_n_0 ;
  wire \weight[4][12]_i_3_n_0 ;
  wire \weight[4][12]_i_4_n_0 ;
  wire \weight[4][12]_i_5_n_0 ;
  wire \weight[4][4]_i_2_n_0 ;
  wire \weight[4][4]_i_3_n_0 ;
  wire \weight[4][4]_i_4_n_0 ;
  wire \weight[4][4]_i_5_n_0 ;
  wire \weight[4][8]_i_2_n_0 ;
  wire \weight[4][8]_i_3_n_0 ;
  wire \weight[4][8]_i_4_n_0 ;
  wire \weight[4][8]_i_5_n_0 ;
  wire \weight[5][0]_i_2_n_0 ;
  wire \weight[5][0]_i_3_n_0 ;
  wire \weight[5][0]_i_4_n_0 ;
  wire \weight[5][0]_i_5_n_0 ;
  wire \weight[5][12]_i_2_n_0 ;
  wire \weight[5][12]_i_3_n_0 ;
  wire \weight[5][12]_i_4_n_0 ;
  wire \weight[5][12]_i_5_n_0 ;
  wire \weight[5][4]_i_2_n_0 ;
  wire \weight[5][4]_i_3_n_0 ;
  wire \weight[5][4]_i_4_n_0 ;
  wire \weight[5][4]_i_5_n_0 ;
  wire \weight[5][8]_i_2_n_0 ;
  wire \weight[5][8]_i_3_n_0 ;
  wire \weight[5][8]_i_4_n_0 ;
  wire \weight[5][8]_i_5_n_0 ;
  wire \weight[6][0]_i_2_n_0 ;
  wire \weight[6][0]_i_3_n_0 ;
  wire \weight[6][0]_i_4_n_0 ;
  wire \weight[6][0]_i_5_n_0 ;
  wire \weight[6][12]_i_2_n_0 ;
  wire \weight[6][12]_i_3_n_0 ;
  wire \weight[6][12]_i_4_n_0 ;
  wire \weight[6][12]_i_5_n_0 ;
  wire \weight[6][4]_i_2_n_0 ;
  wire \weight[6][4]_i_3_n_0 ;
  wire \weight[6][4]_i_4_n_0 ;
  wire \weight[6][4]_i_5_n_0 ;
  wire \weight[6][8]_i_2_n_0 ;
  wire \weight[6][8]_i_3_n_0 ;
  wire \weight[6][8]_i_4_n_0 ;
  wire \weight[6][8]_i_5_n_0 ;
  wire \weight[7][0]_i_2_n_0 ;
  wire \weight[7][0]_i_3_n_0 ;
  wire \weight[7][0]_i_4_n_0 ;
  wire \weight[7][0]_i_5_n_0 ;
  wire \weight[7][12]_i_2_n_0 ;
  wire \weight[7][12]_i_3_n_0 ;
  wire \weight[7][12]_i_4_n_0 ;
  wire \weight[7][12]_i_5_n_0 ;
  wire \weight[7][4]_i_2_n_0 ;
  wire \weight[7][4]_i_3_n_0 ;
  wire \weight[7][4]_i_4_n_0 ;
  wire \weight[7][4]_i_5_n_0 ;
  wire \weight[7][8]_i_2_n_0 ;
  wire \weight[7][8]_i_3_n_0 ;
  wire \weight[7][8]_i_4_n_0 ;
  wire \weight[7][8]_i_5_n_0 ;
  wire \weight[8][0]_i_2_n_0 ;
  wire \weight[8][0]_i_3_n_0 ;
  wire \weight[8][0]_i_4_n_0 ;
  wire \weight[8][0]_i_5_n_0 ;
  wire \weight[8][12]_i_2_n_0 ;
  wire \weight[8][12]_i_3_n_0 ;
  wire \weight[8][12]_i_4_n_0 ;
  wire \weight[8][12]_i_5_n_0 ;
  wire \weight[8][4]_i_2_n_0 ;
  wire \weight[8][4]_i_3_n_0 ;
  wire \weight[8][4]_i_4_n_0 ;
  wire \weight[8][4]_i_5_n_0 ;
  wire \weight[8][8]_i_2_n_0 ;
  wire \weight[8][8]_i_3_n_0 ;
  wire \weight[8][8]_i_4_n_0 ;
  wire \weight[8][8]_i_5_n_0 ;
  wire \weight[9][0]_i_2_n_0 ;
  wire \weight[9][0]_i_3_n_0 ;
  wire \weight[9][0]_i_4_n_0 ;
  wire \weight[9][0]_i_5_n_0 ;
  wire \weight[9][12]_i_2_n_0 ;
  wire \weight[9][12]_i_3_n_0 ;
  wire \weight[9][12]_i_4_n_0 ;
  wire \weight[9][12]_i_5_n_0 ;
  wire \weight[9][4]_i_2_n_0 ;
  wire \weight[9][4]_i_3_n_0 ;
  wire \weight[9][4]_i_4_n_0 ;
  wire \weight[9][4]_i_5_n_0 ;
  wire \weight[9][8]_i_2_n_0 ;
  wire \weight[9][8]_i_3_n_0 ;
  wire \weight[9][8]_i_4_n_0 ;
  wire \weight[9][8]_i_5_n_0 ;
  wire \weight_reg[0][0]_i_1_n_0 ;
  wire \weight_reg[0][0]_i_1_n_1 ;
  wire \weight_reg[0][0]_i_1_n_2 ;
  wire \weight_reg[0][0]_i_1_n_3 ;
  wire \weight_reg[0][0]_i_1_n_4 ;
  wire \weight_reg[0][0]_i_1_n_5 ;
  wire \weight_reg[0][0]_i_1_n_6 ;
  wire \weight_reg[0][0]_i_1_n_7 ;
  wire \weight_reg[0][12]_i_1_n_1 ;
  wire \weight_reg[0][12]_i_1_n_2 ;
  wire \weight_reg[0][12]_i_1_n_3 ;
  wire \weight_reg[0][12]_i_1_n_4 ;
  wire \weight_reg[0][12]_i_1_n_5 ;
  wire \weight_reg[0][12]_i_1_n_6 ;
  wire \weight_reg[0][12]_i_1_n_7 ;
  wire \weight_reg[0][4]_i_1_n_0 ;
  wire \weight_reg[0][4]_i_1_n_1 ;
  wire \weight_reg[0][4]_i_1_n_2 ;
  wire \weight_reg[0][4]_i_1_n_3 ;
  wire \weight_reg[0][4]_i_1_n_4 ;
  wire \weight_reg[0][4]_i_1_n_5 ;
  wire \weight_reg[0][4]_i_1_n_6 ;
  wire \weight_reg[0][4]_i_1_n_7 ;
  wire \weight_reg[0][8]_i_1_n_0 ;
  wire \weight_reg[0][8]_i_1_n_1 ;
  wire \weight_reg[0][8]_i_1_n_2 ;
  wire \weight_reg[0][8]_i_1_n_3 ;
  wire \weight_reg[0][8]_i_1_n_4 ;
  wire \weight_reg[0][8]_i_1_n_5 ;
  wire \weight_reg[0][8]_i_1_n_6 ;
  wire \weight_reg[0][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[0]_15 ;
  wire \weight_reg[10][0]_i_1_n_0 ;
  wire \weight_reg[10][0]_i_1_n_1 ;
  wire \weight_reg[10][0]_i_1_n_2 ;
  wire \weight_reg[10][0]_i_1_n_3 ;
  wire \weight_reg[10][0]_i_1_n_4 ;
  wire \weight_reg[10][0]_i_1_n_5 ;
  wire \weight_reg[10][0]_i_1_n_6 ;
  wire \weight_reg[10][0]_i_1_n_7 ;
  wire \weight_reg[10][12]_i_1_n_1 ;
  wire \weight_reg[10][12]_i_1_n_2 ;
  wire \weight_reg[10][12]_i_1_n_3 ;
  wire \weight_reg[10][12]_i_1_n_4 ;
  wire \weight_reg[10][12]_i_1_n_5 ;
  wire \weight_reg[10][12]_i_1_n_6 ;
  wire \weight_reg[10][12]_i_1_n_7 ;
  wire \weight_reg[10][4]_i_1_n_0 ;
  wire \weight_reg[10][4]_i_1_n_1 ;
  wire \weight_reg[10][4]_i_1_n_2 ;
  wire \weight_reg[10][4]_i_1_n_3 ;
  wire \weight_reg[10][4]_i_1_n_4 ;
  wire \weight_reg[10][4]_i_1_n_5 ;
  wire \weight_reg[10][4]_i_1_n_6 ;
  wire \weight_reg[10][4]_i_1_n_7 ;
  wire \weight_reg[10][8]_i_1_n_0 ;
  wire \weight_reg[10][8]_i_1_n_1 ;
  wire \weight_reg[10][8]_i_1_n_2 ;
  wire \weight_reg[10][8]_i_1_n_3 ;
  wire \weight_reg[10][8]_i_1_n_4 ;
  wire \weight_reg[10][8]_i_1_n_5 ;
  wire \weight_reg[10][8]_i_1_n_6 ;
  wire \weight_reg[10][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[10]_9 ;
  wire \weight_reg[11][0]_i_1_n_0 ;
  wire \weight_reg[11][0]_i_1_n_1 ;
  wire \weight_reg[11][0]_i_1_n_2 ;
  wire \weight_reg[11][0]_i_1_n_3 ;
  wire \weight_reg[11][0]_i_1_n_4 ;
  wire \weight_reg[11][0]_i_1_n_5 ;
  wire \weight_reg[11][0]_i_1_n_6 ;
  wire \weight_reg[11][0]_i_1_n_7 ;
  wire \weight_reg[11][12]_i_1_n_1 ;
  wire \weight_reg[11][12]_i_1_n_2 ;
  wire \weight_reg[11][12]_i_1_n_3 ;
  wire \weight_reg[11][12]_i_1_n_4 ;
  wire \weight_reg[11][12]_i_1_n_5 ;
  wire \weight_reg[11][12]_i_1_n_6 ;
  wire \weight_reg[11][12]_i_1_n_7 ;
  wire \weight_reg[11][4]_i_1_n_0 ;
  wire \weight_reg[11][4]_i_1_n_1 ;
  wire \weight_reg[11][4]_i_1_n_2 ;
  wire \weight_reg[11][4]_i_1_n_3 ;
  wire \weight_reg[11][4]_i_1_n_4 ;
  wire \weight_reg[11][4]_i_1_n_5 ;
  wire \weight_reg[11][4]_i_1_n_6 ;
  wire \weight_reg[11][4]_i_1_n_7 ;
  wire \weight_reg[11][8]_i_1_n_0 ;
  wire \weight_reg[11][8]_i_1_n_1 ;
  wire \weight_reg[11][8]_i_1_n_2 ;
  wire \weight_reg[11][8]_i_1_n_3 ;
  wire \weight_reg[11][8]_i_1_n_4 ;
  wire \weight_reg[11][8]_i_1_n_5 ;
  wire \weight_reg[11][8]_i_1_n_6 ;
  wire \weight_reg[11][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[11]_10 ;
  wire \weight_reg[12][0]_i_1_n_0 ;
  wire \weight_reg[12][0]_i_1_n_1 ;
  wire \weight_reg[12][0]_i_1_n_2 ;
  wire \weight_reg[12][0]_i_1_n_3 ;
  wire \weight_reg[12][0]_i_1_n_4 ;
  wire \weight_reg[12][0]_i_1_n_5 ;
  wire \weight_reg[12][0]_i_1_n_6 ;
  wire \weight_reg[12][0]_i_1_n_7 ;
  wire \weight_reg[12][12]_i_1_n_1 ;
  wire \weight_reg[12][12]_i_1_n_2 ;
  wire \weight_reg[12][12]_i_1_n_3 ;
  wire \weight_reg[12][12]_i_1_n_4 ;
  wire \weight_reg[12][12]_i_1_n_5 ;
  wire \weight_reg[12][12]_i_1_n_6 ;
  wire \weight_reg[12][12]_i_1_n_7 ;
  wire \weight_reg[12][4]_i_1_n_0 ;
  wire \weight_reg[12][4]_i_1_n_1 ;
  wire \weight_reg[12][4]_i_1_n_2 ;
  wire \weight_reg[12][4]_i_1_n_3 ;
  wire \weight_reg[12][4]_i_1_n_4 ;
  wire \weight_reg[12][4]_i_1_n_5 ;
  wire \weight_reg[12][4]_i_1_n_6 ;
  wire \weight_reg[12][4]_i_1_n_7 ;
  wire \weight_reg[12][8]_i_1_n_0 ;
  wire \weight_reg[12][8]_i_1_n_1 ;
  wire \weight_reg[12][8]_i_1_n_2 ;
  wire \weight_reg[12][8]_i_1_n_3 ;
  wire \weight_reg[12][8]_i_1_n_4 ;
  wire \weight_reg[12][8]_i_1_n_5 ;
  wire \weight_reg[12][8]_i_1_n_6 ;
  wire \weight_reg[12][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[12]_11 ;
  wire \weight_reg[13][0]_i_1_n_0 ;
  wire \weight_reg[13][0]_i_1_n_1 ;
  wire \weight_reg[13][0]_i_1_n_2 ;
  wire \weight_reg[13][0]_i_1_n_3 ;
  wire \weight_reg[13][0]_i_1_n_4 ;
  wire \weight_reg[13][0]_i_1_n_5 ;
  wire \weight_reg[13][0]_i_1_n_6 ;
  wire \weight_reg[13][0]_i_1_n_7 ;
  wire \weight_reg[13][12]_i_1_n_1 ;
  wire \weight_reg[13][12]_i_1_n_2 ;
  wire \weight_reg[13][12]_i_1_n_3 ;
  wire \weight_reg[13][12]_i_1_n_4 ;
  wire \weight_reg[13][12]_i_1_n_5 ;
  wire \weight_reg[13][12]_i_1_n_6 ;
  wire \weight_reg[13][12]_i_1_n_7 ;
  wire \weight_reg[13][4]_i_1_n_0 ;
  wire \weight_reg[13][4]_i_1_n_1 ;
  wire \weight_reg[13][4]_i_1_n_2 ;
  wire \weight_reg[13][4]_i_1_n_3 ;
  wire \weight_reg[13][4]_i_1_n_4 ;
  wire \weight_reg[13][4]_i_1_n_5 ;
  wire \weight_reg[13][4]_i_1_n_6 ;
  wire \weight_reg[13][4]_i_1_n_7 ;
  wire \weight_reg[13][8]_i_1_n_0 ;
  wire \weight_reg[13][8]_i_1_n_1 ;
  wire \weight_reg[13][8]_i_1_n_2 ;
  wire \weight_reg[13][8]_i_1_n_3 ;
  wire \weight_reg[13][8]_i_1_n_4 ;
  wire \weight_reg[13][8]_i_1_n_5 ;
  wire \weight_reg[13][8]_i_1_n_6 ;
  wire \weight_reg[13][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[13]_12 ;
  wire \weight_reg[14][0]_i_1_n_0 ;
  wire \weight_reg[14][0]_i_1_n_1 ;
  wire \weight_reg[14][0]_i_1_n_2 ;
  wire \weight_reg[14][0]_i_1_n_3 ;
  wire \weight_reg[14][0]_i_1_n_4 ;
  wire \weight_reg[14][0]_i_1_n_5 ;
  wire \weight_reg[14][0]_i_1_n_6 ;
  wire \weight_reg[14][0]_i_1_n_7 ;
  wire \weight_reg[14][12]_i_1_n_1 ;
  wire \weight_reg[14][12]_i_1_n_2 ;
  wire \weight_reg[14][12]_i_1_n_3 ;
  wire \weight_reg[14][12]_i_1_n_4 ;
  wire \weight_reg[14][12]_i_1_n_5 ;
  wire \weight_reg[14][12]_i_1_n_6 ;
  wire \weight_reg[14][12]_i_1_n_7 ;
  wire \weight_reg[14][4]_i_1_n_0 ;
  wire \weight_reg[14][4]_i_1_n_1 ;
  wire \weight_reg[14][4]_i_1_n_2 ;
  wire \weight_reg[14][4]_i_1_n_3 ;
  wire \weight_reg[14][4]_i_1_n_4 ;
  wire \weight_reg[14][4]_i_1_n_5 ;
  wire \weight_reg[14][4]_i_1_n_6 ;
  wire \weight_reg[14][4]_i_1_n_7 ;
  wire \weight_reg[14][8]_i_1_n_0 ;
  wire \weight_reg[14][8]_i_1_n_1 ;
  wire \weight_reg[14][8]_i_1_n_2 ;
  wire \weight_reg[14][8]_i_1_n_3 ;
  wire \weight_reg[14][8]_i_1_n_4 ;
  wire \weight_reg[14][8]_i_1_n_5 ;
  wire \weight_reg[14][8]_i_1_n_6 ;
  wire \weight_reg[14][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[14]_13 ;
  wire \weight_reg[15][0]_i_1_n_0 ;
  wire \weight_reg[15][0]_i_1_n_1 ;
  wire \weight_reg[15][0]_i_1_n_2 ;
  wire \weight_reg[15][0]_i_1_n_3 ;
  wire \weight_reg[15][0]_i_1_n_4 ;
  wire \weight_reg[15][0]_i_1_n_5 ;
  wire \weight_reg[15][0]_i_1_n_6 ;
  wire \weight_reg[15][0]_i_1_n_7 ;
  wire \weight_reg[15][12]_i_1_n_1 ;
  wire \weight_reg[15][12]_i_1_n_2 ;
  wire \weight_reg[15][12]_i_1_n_3 ;
  wire \weight_reg[15][12]_i_1_n_4 ;
  wire \weight_reg[15][12]_i_1_n_5 ;
  wire \weight_reg[15][12]_i_1_n_6 ;
  wire \weight_reg[15][12]_i_1_n_7 ;
  wire \weight_reg[15][4]_i_1_n_0 ;
  wire \weight_reg[15][4]_i_1_n_1 ;
  wire \weight_reg[15][4]_i_1_n_2 ;
  wire \weight_reg[15][4]_i_1_n_3 ;
  wire \weight_reg[15][4]_i_1_n_4 ;
  wire \weight_reg[15][4]_i_1_n_5 ;
  wire \weight_reg[15][4]_i_1_n_6 ;
  wire \weight_reg[15][4]_i_1_n_7 ;
  wire \weight_reg[15][8]_i_1_n_0 ;
  wire \weight_reg[15][8]_i_1_n_1 ;
  wire \weight_reg[15][8]_i_1_n_2 ;
  wire \weight_reg[15][8]_i_1_n_3 ;
  wire \weight_reg[15][8]_i_1_n_4 ;
  wire \weight_reg[15][8]_i_1_n_5 ;
  wire \weight_reg[15][8]_i_1_n_6 ;
  wire \weight_reg[15][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[15]_14 ;
  wire \weight_reg[1][0]_i_1_n_0 ;
  wire \weight_reg[1][0]_i_1_n_1 ;
  wire \weight_reg[1][0]_i_1_n_2 ;
  wire \weight_reg[1][0]_i_1_n_3 ;
  wire \weight_reg[1][0]_i_1_n_4 ;
  wire \weight_reg[1][0]_i_1_n_5 ;
  wire \weight_reg[1][0]_i_1_n_6 ;
  wire \weight_reg[1][0]_i_1_n_7 ;
  wire \weight_reg[1][12]_i_1_n_1 ;
  wire \weight_reg[1][12]_i_1_n_2 ;
  wire \weight_reg[1][12]_i_1_n_3 ;
  wire \weight_reg[1][12]_i_1_n_4 ;
  wire \weight_reg[1][12]_i_1_n_5 ;
  wire \weight_reg[1][12]_i_1_n_6 ;
  wire \weight_reg[1][12]_i_1_n_7 ;
  wire \weight_reg[1][4]_i_1_n_0 ;
  wire \weight_reg[1][4]_i_1_n_1 ;
  wire \weight_reg[1][4]_i_1_n_2 ;
  wire \weight_reg[1][4]_i_1_n_3 ;
  wire \weight_reg[1][4]_i_1_n_4 ;
  wire \weight_reg[1][4]_i_1_n_5 ;
  wire \weight_reg[1][4]_i_1_n_6 ;
  wire \weight_reg[1][4]_i_1_n_7 ;
  wire \weight_reg[1][8]_i_1_n_0 ;
  wire \weight_reg[1][8]_i_1_n_1 ;
  wire \weight_reg[1][8]_i_1_n_2 ;
  wire \weight_reg[1][8]_i_1_n_3 ;
  wire \weight_reg[1][8]_i_1_n_4 ;
  wire \weight_reg[1][8]_i_1_n_5 ;
  wire \weight_reg[1][8]_i_1_n_6 ;
  wire \weight_reg[1][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[1]_0 ;
  wire \weight_reg[2][0]_i_1_n_0 ;
  wire \weight_reg[2][0]_i_1_n_1 ;
  wire \weight_reg[2][0]_i_1_n_2 ;
  wire \weight_reg[2][0]_i_1_n_3 ;
  wire \weight_reg[2][0]_i_1_n_4 ;
  wire \weight_reg[2][0]_i_1_n_5 ;
  wire \weight_reg[2][0]_i_1_n_6 ;
  wire \weight_reg[2][0]_i_1_n_7 ;
  wire \weight_reg[2][12]_i_1_n_1 ;
  wire \weight_reg[2][12]_i_1_n_2 ;
  wire \weight_reg[2][12]_i_1_n_3 ;
  wire \weight_reg[2][12]_i_1_n_4 ;
  wire \weight_reg[2][12]_i_1_n_5 ;
  wire \weight_reg[2][12]_i_1_n_6 ;
  wire \weight_reg[2][12]_i_1_n_7 ;
  wire \weight_reg[2][4]_i_1_n_0 ;
  wire \weight_reg[2][4]_i_1_n_1 ;
  wire \weight_reg[2][4]_i_1_n_2 ;
  wire \weight_reg[2][4]_i_1_n_3 ;
  wire \weight_reg[2][4]_i_1_n_4 ;
  wire \weight_reg[2][4]_i_1_n_5 ;
  wire \weight_reg[2][4]_i_1_n_6 ;
  wire \weight_reg[2][4]_i_1_n_7 ;
  wire \weight_reg[2][8]_i_1_n_0 ;
  wire \weight_reg[2][8]_i_1_n_1 ;
  wire \weight_reg[2][8]_i_1_n_2 ;
  wire \weight_reg[2][8]_i_1_n_3 ;
  wire \weight_reg[2][8]_i_1_n_4 ;
  wire \weight_reg[2][8]_i_1_n_5 ;
  wire \weight_reg[2][8]_i_1_n_6 ;
  wire \weight_reg[2][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[2]_1 ;
  wire \weight_reg[3][0]_i_1_n_0 ;
  wire \weight_reg[3][0]_i_1_n_1 ;
  wire \weight_reg[3][0]_i_1_n_2 ;
  wire \weight_reg[3][0]_i_1_n_3 ;
  wire \weight_reg[3][0]_i_1_n_4 ;
  wire \weight_reg[3][0]_i_1_n_5 ;
  wire \weight_reg[3][0]_i_1_n_6 ;
  wire \weight_reg[3][0]_i_1_n_7 ;
  wire \weight_reg[3][12]_i_1_n_1 ;
  wire \weight_reg[3][12]_i_1_n_2 ;
  wire \weight_reg[3][12]_i_1_n_3 ;
  wire \weight_reg[3][12]_i_1_n_4 ;
  wire \weight_reg[3][12]_i_1_n_5 ;
  wire \weight_reg[3][12]_i_1_n_6 ;
  wire \weight_reg[3][12]_i_1_n_7 ;
  wire \weight_reg[3][4]_i_1_n_0 ;
  wire \weight_reg[3][4]_i_1_n_1 ;
  wire \weight_reg[3][4]_i_1_n_2 ;
  wire \weight_reg[3][4]_i_1_n_3 ;
  wire \weight_reg[3][4]_i_1_n_4 ;
  wire \weight_reg[3][4]_i_1_n_5 ;
  wire \weight_reg[3][4]_i_1_n_6 ;
  wire \weight_reg[3][4]_i_1_n_7 ;
  wire \weight_reg[3][8]_i_1_n_0 ;
  wire \weight_reg[3][8]_i_1_n_1 ;
  wire \weight_reg[3][8]_i_1_n_2 ;
  wire \weight_reg[3][8]_i_1_n_3 ;
  wire \weight_reg[3][8]_i_1_n_4 ;
  wire \weight_reg[3][8]_i_1_n_5 ;
  wire \weight_reg[3][8]_i_1_n_6 ;
  wire \weight_reg[3][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[3]_2 ;
  wire \weight_reg[4][0]_i_1_n_0 ;
  wire \weight_reg[4][0]_i_1_n_1 ;
  wire \weight_reg[4][0]_i_1_n_2 ;
  wire \weight_reg[4][0]_i_1_n_3 ;
  wire \weight_reg[4][0]_i_1_n_4 ;
  wire \weight_reg[4][0]_i_1_n_5 ;
  wire \weight_reg[4][0]_i_1_n_6 ;
  wire \weight_reg[4][0]_i_1_n_7 ;
  wire \weight_reg[4][12]_i_1_n_1 ;
  wire \weight_reg[4][12]_i_1_n_2 ;
  wire \weight_reg[4][12]_i_1_n_3 ;
  wire \weight_reg[4][12]_i_1_n_4 ;
  wire \weight_reg[4][12]_i_1_n_5 ;
  wire \weight_reg[4][12]_i_1_n_6 ;
  wire \weight_reg[4][12]_i_1_n_7 ;
  wire \weight_reg[4][4]_i_1_n_0 ;
  wire \weight_reg[4][4]_i_1_n_1 ;
  wire \weight_reg[4][4]_i_1_n_2 ;
  wire \weight_reg[4][4]_i_1_n_3 ;
  wire \weight_reg[4][4]_i_1_n_4 ;
  wire \weight_reg[4][4]_i_1_n_5 ;
  wire \weight_reg[4][4]_i_1_n_6 ;
  wire \weight_reg[4][4]_i_1_n_7 ;
  wire \weight_reg[4][8]_i_1_n_0 ;
  wire \weight_reg[4][8]_i_1_n_1 ;
  wire \weight_reg[4][8]_i_1_n_2 ;
  wire \weight_reg[4][8]_i_1_n_3 ;
  wire \weight_reg[4][8]_i_1_n_4 ;
  wire \weight_reg[4][8]_i_1_n_5 ;
  wire \weight_reg[4][8]_i_1_n_6 ;
  wire \weight_reg[4][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[4]_3 ;
  wire \weight_reg[5][0]_i_1_n_0 ;
  wire \weight_reg[5][0]_i_1_n_1 ;
  wire \weight_reg[5][0]_i_1_n_2 ;
  wire \weight_reg[5][0]_i_1_n_3 ;
  wire \weight_reg[5][0]_i_1_n_4 ;
  wire \weight_reg[5][0]_i_1_n_5 ;
  wire \weight_reg[5][0]_i_1_n_6 ;
  wire \weight_reg[5][0]_i_1_n_7 ;
  wire \weight_reg[5][12]_i_1_n_1 ;
  wire \weight_reg[5][12]_i_1_n_2 ;
  wire \weight_reg[5][12]_i_1_n_3 ;
  wire \weight_reg[5][12]_i_1_n_4 ;
  wire \weight_reg[5][12]_i_1_n_5 ;
  wire \weight_reg[5][12]_i_1_n_6 ;
  wire \weight_reg[5][12]_i_1_n_7 ;
  wire \weight_reg[5][4]_i_1_n_0 ;
  wire \weight_reg[5][4]_i_1_n_1 ;
  wire \weight_reg[5][4]_i_1_n_2 ;
  wire \weight_reg[5][4]_i_1_n_3 ;
  wire \weight_reg[5][4]_i_1_n_4 ;
  wire \weight_reg[5][4]_i_1_n_5 ;
  wire \weight_reg[5][4]_i_1_n_6 ;
  wire \weight_reg[5][4]_i_1_n_7 ;
  wire \weight_reg[5][8]_i_1_n_0 ;
  wire \weight_reg[5][8]_i_1_n_1 ;
  wire \weight_reg[5][8]_i_1_n_2 ;
  wire \weight_reg[5][8]_i_1_n_3 ;
  wire \weight_reg[5][8]_i_1_n_4 ;
  wire \weight_reg[5][8]_i_1_n_5 ;
  wire \weight_reg[5][8]_i_1_n_6 ;
  wire \weight_reg[5][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[5]_4 ;
  wire \weight_reg[6][0]_i_1_n_0 ;
  wire \weight_reg[6][0]_i_1_n_1 ;
  wire \weight_reg[6][0]_i_1_n_2 ;
  wire \weight_reg[6][0]_i_1_n_3 ;
  wire \weight_reg[6][0]_i_1_n_4 ;
  wire \weight_reg[6][0]_i_1_n_5 ;
  wire \weight_reg[6][0]_i_1_n_6 ;
  wire \weight_reg[6][0]_i_1_n_7 ;
  wire \weight_reg[6][12]_i_1_n_1 ;
  wire \weight_reg[6][12]_i_1_n_2 ;
  wire \weight_reg[6][12]_i_1_n_3 ;
  wire \weight_reg[6][12]_i_1_n_4 ;
  wire \weight_reg[6][12]_i_1_n_5 ;
  wire \weight_reg[6][12]_i_1_n_6 ;
  wire \weight_reg[6][12]_i_1_n_7 ;
  wire \weight_reg[6][4]_i_1_n_0 ;
  wire \weight_reg[6][4]_i_1_n_1 ;
  wire \weight_reg[6][4]_i_1_n_2 ;
  wire \weight_reg[6][4]_i_1_n_3 ;
  wire \weight_reg[6][4]_i_1_n_4 ;
  wire \weight_reg[6][4]_i_1_n_5 ;
  wire \weight_reg[6][4]_i_1_n_6 ;
  wire \weight_reg[6][4]_i_1_n_7 ;
  wire \weight_reg[6][8]_i_1_n_0 ;
  wire \weight_reg[6][8]_i_1_n_1 ;
  wire \weight_reg[6][8]_i_1_n_2 ;
  wire \weight_reg[6][8]_i_1_n_3 ;
  wire \weight_reg[6][8]_i_1_n_4 ;
  wire \weight_reg[6][8]_i_1_n_5 ;
  wire \weight_reg[6][8]_i_1_n_6 ;
  wire \weight_reg[6][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[6]_5 ;
  wire \weight_reg[7][0]_i_1_n_0 ;
  wire \weight_reg[7][0]_i_1_n_1 ;
  wire \weight_reg[7][0]_i_1_n_2 ;
  wire \weight_reg[7][0]_i_1_n_3 ;
  wire \weight_reg[7][0]_i_1_n_4 ;
  wire \weight_reg[7][0]_i_1_n_5 ;
  wire \weight_reg[7][0]_i_1_n_6 ;
  wire \weight_reg[7][0]_i_1_n_7 ;
  wire \weight_reg[7][12]_i_1_n_1 ;
  wire \weight_reg[7][12]_i_1_n_2 ;
  wire \weight_reg[7][12]_i_1_n_3 ;
  wire \weight_reg[7][12]_i_1_n_4 ;
  wire \weight_reg[7][12]_i_1_n_5 ;
  wire \weight_reg[7][12]_i_1_n_6 ;
  wire \weight_reg[7][12]_i_1_n_7 ;
  wire \weight_reg[7][4]_i_1_n_0 ;
  wire \weight_reg[7][4]_i_1_n_1 ;
  wire \weight_reg[7][4]_i_1_n_2 ;
  wire \weight_reg[7][4]_i_1_n_3 ;
  wire \weight_reg[7][4]_i_1_n_4 ;
  wire \weight_reg[7][4]_i_1_n_5 ;
  wire \weight_reg[7][4]_i_1_n_6 ;
  wire \weight_reg[7][4]_i_1_n_7 ;
  wire \weight_reg[7][8]_i_1_n_0 ;
  wire \weight_reg[7][8]_i_1_n_1 ;
  wire \weight_reg[7][8]_i_1_n_2 ;
  wire \weight_reg[7][8]_i_1_n_3 ;
  wire \weight_reg[7][8]_i_1_n_4 ;
  wire \weight_reg[7][8]_i_1_n_5 ;
  wire \weight_reg[7][8]_i_1_n_6 ;
  wire \weight_reg[7][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[7]_6 ;
  wire \weight_reg[8][0]_i_1_n_0 ;
  wire \weight_reg[8][0]_i_1_n_1 ;
  wire \weight_reg[8][0]_i_1_n_2 ;
  wire \weight_reg[8][0]_i_1_n_3 ;
  wire \weight_reg[8][0]_i_1_n_4 ;
  wire \weight_reg[8][0]_i_1_n_5 ;
  wire \weight_reg[8][0]_i_1_n_6 ;
  wire \weight_reg[8][0]_i_1_n_7 ;
  wire \weight_reg[8][12]_i_1_n_1 ;
  wire \weight_reg[8][12]_i_1_n_2 ;
  wire \weight_reg[8][12]_i_1_n_3 ;
  wire \weight_reg[8][12]_i_1_n_4 ;
  wire \weight_reg[8][12]_i_1_n_5 ;
  wire \weight_reg[8][12]_i_1_n_6 ;
  wire \weight_reg[8][12]_i_1_n_7 ;
  wire \weight_reg[8][4]_i_1_n_0 ;
  wire \weight_reg[8][4]_i_1_n_1 ;
  wire \weight_reg[8][4]_i_1_n_2 ;
  wire \weight_reg[8][4]_i_1_n_3 ;
  wire \weight_reg[8][4]_i_1_n_4 ;
  wire \weight_reg[8][4]_i_1_n_5 ;
  wire \weight_reg[8][4]_i_1_n_6 ;
  wire \weight_reg[8][4]_i_1_n_7 ;
  wire \weight_reg[8][8]_i_1_n_0 ;
  wire \weight_reg[8][8]_i_1_n_1 ;
  wire \weight_reg[8][8]_i_1_n_2 ;
  wire \weight_reg[8][8]_i_1_n_3 ;
  wire \weight_reg[8][8]_i_1_n_4 ;
  wire \weight_reg[8][8]_i_1_n_5 ;
  wire \weight_reg[8][8]_i_1_n_6 ;
  wire \weight_reg[8][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[8]_7 ;
  wire \weight_reg[9][0]_i_1_n_0 ;
  wire \weight_reg[9][0]_i_1_n_1 ;
  wire \weight_reg[9][0]_i_1_n_2 ;
  wire \weight_reg[9][0]_i_1_n_3 ;
  wire \weight_reg[9][0]_i_1_n_4 ;
  wire \weight_reg[9][0]_i_1_n_5 ;
  wire \weight_reg[9][0]_i_1_n_6 ;
  wire \weight_reg[9][0]_i_1_n_7 ;
  wire \weight_reg[9][12]_i_1_n_1 ;
  wire \weight_reg[9][12]_i_1_n_2 ;
  wire \weight_reg[9][12]_i_1_n_3 ;
  wire \weight_reg[9][12]_i_1_n_4 ;
  wire \weight_reg[9][12]_i_1_n_5 ;
  wire \weight_reg[9][12]_i_1_n_6 ;
  wire \weight_reg[9][12]_i_1_n_7 ;
  wire \weight_reg[9][4]_i_1_n_0 ;
  wire \weight_reg[9][4]_i_1_n_1 ;
  wire \weight_reg[9][4]_i_1_n_2 ;
  wire \weight_reg[9][4]_i_1_n_3 ;
  wire \weight_reg[9][4]_i_1_n_4 ;
  wire \weight_reg[9][4]_i_1_n_5 ;
  wire \weight_reg[9][4]_i_1_n_6 ;
  wire \weight_reg[9][4]_i_1_n_7 ;
  wire \weight_reg[9][8]_i_1_n_0 ;
  wire \weight_reg[9][8]_i_1_n_1 ;
  wire \weight_reg[9][8]_i_1_n_2 ;
  wire \weight_reg[9][8]_i_1_n_3 ;
  wire \weight_reg[9][8]_i_1_n_4 ;
  wire \weight_reg[9][8]_i_1_n_5 ;
  wire \weight_reg[9][8]_i_1_n_6 ;
  wire \weight_reg[9][8]_i_1_n_7 ;
  wire [15:0]\weight_reg[9]_8 ;
  wire [3:0]\write_reg_d_k_reg[11] ;
  wire [2:0]\write_reg_d_k_reg[3] ;
  wire [3:0]\write_reg_d_k_reg[3]_0 ;
  wire [3:0]\write_reg_d_k_reg[7] ;
  wire [15:0]\write_reg_x_k_reg[15] ;
  wire NLW_ARG_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG_OVERFLOW_UNCONNECTED;
  wire NLW_ARG_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG_P_UNCONNECTED;
  wire [47:0]NLW_ARG_PCOUT_UNCONNECTED;
  wire NLW_ARG__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__0_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__0_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__0_P_UNCONNECTED;
  wire [47:0]NLW_ARG__0_PCOUT_UNCONNECTED;
  wire NLW_ARG__1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__1_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__1_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__1_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__1_P_UNCONNECTED;
  wire [47:0]NLW_ARG__1_PCOUT_UNCONNECTED;
  wire NLW_ARG__10_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__10_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__10_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__10_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__10_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__10_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__10_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__10_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__10_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__10_P_UNCONNECTED;
  wire [47:0]NLW_ARG__10_PCOUT_UNCONNECTED;
  wire NLW_ARG__11_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__11_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__11_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__11_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__11_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__11_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__11_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__11_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__11_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__11_P_UNCONNECTED;
  wire [47:0]NLW_ARG__11_PCOUT_UNCONNECTED;
  wire NLW_ARG__12_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__12_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__12_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__12_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__12_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__12_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__12_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__12_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__12_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__12_P_UNCONNECTED;
  wire [47:0]NLW_ARG__12_PCOUT_UNCONNECTED;
  wire NLW_ARG__13_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__13_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__13_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__13_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__13_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__13_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__13_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__13_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__13_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__13_P_UNCONNECTED;
  wire [47:0]NLW_ARG__13_PCOUT_UNCONNECTED;
  wire NLW_ARG__14_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__14_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__14_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__14_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__14_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__14_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__14_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__14_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__14_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__14_P_UNCONNECTED;
  wire [47:0]NLW_ARG__14_PCOUT_UNCONNECTED;
  wire NLW_ARG__15_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__15_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__15_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__15_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__15_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__15_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__15_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__15_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__15_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__15_P_UNCONNECTED;
  wire [47:0]NLW_ARG__15_PCOUT_UNCONNECTED;
  wire NLW_ARG__16_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__16_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__16_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__16_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__16_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__16_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__16_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__16_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__16_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__16_P_UNCONNECTED;
  wire [47:0]NLW_ARG__16_PCOUT_UNCONNECTED;
  wire NLW_ARG__17_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__17_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__17_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__17_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__17_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__17_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__17_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__17_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__17_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__17_P_UNCONNECTED;
  wire [47:0]NLW_ARG__17_PCOUT_UNCONNECTED;
  wire NLW_ARG__18_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__18_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__18_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__18_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__18_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__18_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__18_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__18_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__18_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__18_P_UNCONNECTED;
  wire [47:0]NLW_ARG__18_PCOUT_UNCONNECTED;
  wire NLW_ARG__19_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__19_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__19_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__19_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__19_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__19_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__19_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__19_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__19_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__19_P_UNCONNECTED;
  wire [47:0]NLW_ARG__19_PCOUT_UNCONNECTED;
  wire NLW_ARG__2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__2_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__2_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__2_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__2_P_UNCONNECTED;
  wire [47:0]NLW_ARG__2_PCOUT_UNCONNECTED;
  wire NLW_ARG__20_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__20_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__20_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__20_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__20_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__20_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__20_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__20_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__20_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__20_P_UNCONNECTED;
  wire [47:0]NLW_ARG__20_PCOUT_UNCONNECTED;
  wire NLW_ARG__21_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__21_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__21_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__21_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__21_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__21_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__21_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__21_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__21_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__21_P_UNCONNECTED;
  wire [47:0]NLW_ARG__21_PCOUT_UNCONNECTED;
  wire NLW_ARG__22_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__22_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__22_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__22_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__22_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__22_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__22_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__22_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__22_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__22_P_UNCONNECTED;
  wire [47:0]NLW_ARG__22_PCOUT_UNCONNECTED;
  wire NLW_ARG__23_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__23_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__23_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__23_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__23_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__23_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__23_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__23_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__23_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__23_P_UNCONNECTED;
  wire [47:0]NLW_ARG__23_PCOUT_UNCONNECTED;
  wire NLW_ARG__24_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__24_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__24_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__24_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__24_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__24_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__24_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__24_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__24_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__24_P_UNCONNECTED;
  wire [47:0]NLW_ARG__24_PCOUT_UNCONNECTED;
  wire NLW_ARG__25_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__25_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__25_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__25_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__25_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__25_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__25_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__25_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__25_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__25_P_UNCONNECTED;
  wire [47:0]NLW_ARG__25_PCOUT_UNCONNECTED;
  wire NLW_ARG__26_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__26_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__26_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__26_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__26_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__26_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__26_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__26_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__26_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__26_P_UNCONNECTED;
  wire [47:0]NLW_ARG__26_PCOUT_UNCONNECTED;
  wire NLW_ARG__27_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__27_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__27_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__27_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__27_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__27_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__27_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__27_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__27_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__27_P_UNCONNECTED;
  wire [47:0]NLW_ARG__27_PCOUT_UNCONNECTED;
  wire NLW_ARG__28_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__28_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__28_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__28_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__28_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__28_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__28_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__28_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__28_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__28_P_UNCONNECTED;
  wire [47:0]NLW_ARG__28_PCOUT_UNCONNECTED;
  wire NLW_ARG__29_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__29_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__29_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__29_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__29_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__29_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__29_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__29_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__29_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__29_P_UNCONNECTED;
  wire [47:0]NLW_ARG__29_PCOUT_UNCONNECTED;
  wire NLW_ARG__3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__3_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__3_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__3_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__3_P_UNCONNECTED;
  wire [47:0]NLW_ARG__3_PCOUT_UNCONNECTED;
  wire NLW_ARG__30_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__30_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__30_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__30_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__30_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__30_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__30_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__30_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__30_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__30_P_UNCONNECTED;
  wire [47:0]NLW_ARG__30_PCOUT_UNCONNECTED;
  wire NLW_ARG__4_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__4_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__4_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__4_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__4_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__4_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__4_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__4_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__4_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__4_P_UNCONNECTED;
  wire [47:0]NLW_ARG__4_PCOUT_UNCONNECTED;
  wire NLW_ARG__5_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__5_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__5_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__5_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__5_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__5_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__5_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__5_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__5_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__5_P_UNCONNECTED;
  wire [47:0]NLW_ARG__5_PCOUT_UNCONNECTED;
  wire NLW_ARG__6_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__6_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__6_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__6_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__6_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__6_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__6_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__6_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__6_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__6_P_UNCONNECTED;
  wire [47:0]NLW_ARG__6_PCOUT_UNCONNECTED;
  wire NLW_ARG__7_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__7_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__7_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__7_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__7_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__7_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__7_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__7_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__7_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__7_P_UNCONNECTED;
  wire [47:0]NLW_ARG__7_PCOUT_UNCONNECTED;
  wire NLW_ARG__8_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__8_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__8_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__8_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__8_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__8_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__8_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__8_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__8_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__8_P_UNCONNECTED;
  wire [47:0]NLW_ARG__8_PCOUT_UNCONNECTED;
  wire NLW_ARG__9_CARRYCASCOUT_UNCONNECTED;
  wire NLW_ARG__9_MULTSIGNOUT_UNCONNECTED;
  wire NLW_ARG__9_OVERFLOW_UNCONNECTED;
  wire NLW_ARG__9_PATTERNBDETECT_UNCONNECTED;
  wire NLW_ARG__9_PATTERNDETECT_UNCONNECTED;
  wire NLW_ARG__9_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_ARG__9_ACOUT_UNCONNECTED;
  wire [17:0]NLW_ARG__9_BCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG__9_CARRYOUT_UNCONNECTED;
  wire [47:30]NLW_ARG__9_P_UNCONNECTED;
  wire [47:0]NLW_ARG__9_PCOUT_UNCONNECTED;
  wire [3:0]NLW_ARG_carry_O_UNCONNECTED;
  wire [3:1]NLW_ARG_carry__3_CO_UNCONNECTED;
  wire [3:2]NLW_ARG_carry__3_O_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__0_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__138_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__184_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__230_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__278_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__46_carry__2_CO_UNCONNECTED;
  wire [3:3]NLW_add_temp_14__92_carry__2_CO_UNCONNECTED;
  wire NLW_mul_temp_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_1_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_1_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_1_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_1_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_1_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_1_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_1_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_1_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_1_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_1_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_1_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_10_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_10_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_10_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_10_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_10_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_10_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_10_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_10_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_10_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_10_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_10_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_11_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_11_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_11_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_11_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_11_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_11_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_11_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_11_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_11_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_11_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_11_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_12_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_12_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_12_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_12_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_12_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_12_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_12_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_12_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_12_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_12_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_12_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_13_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_13_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_13_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_13_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_13_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_13_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_13_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_13_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_13_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_13_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_13_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_14_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_14_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_14_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_14_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_14_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_14_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_14_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_14_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_14_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_14_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_14_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_15_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_15_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_15_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_15_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_15_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_15_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_15_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_15_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_15_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_15_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_15_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_17_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_17_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_17_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_17_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_17_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_17_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_17_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_17_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_17_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_17_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_17_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_18_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_18_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_18_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_18_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_18_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_18_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_18_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_18_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_18_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_18_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_18_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_19_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_19_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_19_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_19_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_19_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_19_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_19_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_19_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_19_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_19_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_19_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_2_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_2_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_2_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_2_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_2_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_2_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_2_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_2_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_2_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_2_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_2_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_20_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_20_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_20_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_20_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_20_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_20_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_20_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_20_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_20_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_20_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_20_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_21_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_21_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_21_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_21_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_21_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_21_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_21_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_21_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_21_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_21_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_21_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_22_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_22_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_22_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_22_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_22_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_22_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_22_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_22_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_22_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_22_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_22_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_23_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_23_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_23_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_23_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_23_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_23_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_23_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_23_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_23_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_23_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_23_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_24_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_24_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_24_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_24_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_24_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_24_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_24_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_24_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_24_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_24_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_24_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_25_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_25_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_25_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_25_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_25_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_25_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_25_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_25_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_25_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_25_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_25_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_26_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_26_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_26_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_26_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_26_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_26_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_26_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_26_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_26_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_26_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_26_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_27_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_27_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_27_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_27_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_27_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_27_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_27_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_27_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_27_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_27_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_27_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_28_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_28_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_28_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_28_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_28_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_28_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_28_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_28_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_28_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_28_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_28_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_29_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_29_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_29_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_29_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_29_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_29_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_29_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_29_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_29_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_29_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_29_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_3_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_3_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_3_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_3_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_3_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_3_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_3_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_3_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_3_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_3_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_3_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_30_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_30_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_30_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_30_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_30_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_30_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_30_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_30_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_30_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_30_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_30_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_31_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_31_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_31_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_31_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_31_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_31_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_31_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_31_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_31_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_31_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_31_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_32_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_32_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_32_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_32_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_32_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_32_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_32_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_32_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_32_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_32_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_32_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_4_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_4_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_4_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_4_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_4_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_4_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_4_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_4_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_4_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_4_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_4_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_5_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_5_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_5_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_5_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_5_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_5_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_5_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_5_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_5_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_5_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_5_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_6_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_6_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_6_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_6_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_6_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_6_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_6_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_6_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_6_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_6_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_6_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_7_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_7_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_7_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_7_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_7_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_7_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_7_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_7_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_7_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_7_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_7_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_8_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_8_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_8_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_8_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_8_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_8_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_8_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_8_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_8_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_8_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_8_PCOUT_UNCONNECTED;
  wire NLW_mul_temp_9_CARRYCASCOUT_UNCONNECTED;
  wire NLW_mul_temp_9_MULTSIGNOUT_UNCONNECTED;
  wire NLW_mul_temp_9_OVERFLOW_UNCONNECTED;
  wire NLW_mul_temp_9_PATTERNBDETECT_UNCONNECTED;
  wire NLW_mul_temp_9_PATTERNDETECT_UNCONNECTED;
  wire NLW_mul_temp_9_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_mul_temp_9_ACOUT_UNCONNECTED;
  wire [17:0]NLW_mul_temp_9_BCOUT_UNCONNECTED;
  wire [3:0]NLW_mul_temp_9_CARRYOUT_UNCONNECTED;
  wire [47:32]NLW_mul_temp_9_P_UNCONNECTED;
  wire [47:0]NLW_mul_temp_9_PCOUT_UNCONNECTED;
  wire [3:3]NLW_sub_temp_carry__2_CO_UNCONNECTED;
  wire [3:3]\NLW_weight_reg[0][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[10][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[11][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[12][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[13][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[14][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[15][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[1][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[2][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[3][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[4][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[5][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[6][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[7][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[8][12]_i_1_CO_UNCONNECTED ;
  wire [3:3]\NLW_weight_reg[9][12]_i_1_CO_UNCONNECTED ;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG
       (.A({\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_18 ,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0,ARG_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG_P_UNCONNECTED[47:30],in,ARG_n_92,ARG_n_93,ARG_n_94,ARG_n_95,ARG_n_96,ARG_n_97,ARG_n_98,ARG_n_99,ARG_n_100,ARG_n_101,ARG_n_102,ARG_n_103,ARG_n_104,ARG_n_105}),
        .PATTERNBDETECT(NLW_ARG_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__0
       (.A({\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[1]_0 [15],\weight_reg[1]_0 [15],\weight_reg[1]_0 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_1 ,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0,ARG__0_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__0_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__0_P_UNCONNECTED[47:30],RESIZE16,ARG__0_n_92,ARG__0_n_93,ARG__0_n_94,ARG__0_n_95,ARG__0_n_96,ARG__0_n_97,ARG__0_n_98,ARG__0_n_99,ARG__0_n_100,ARG__0_n_101,ARG__0_n_102,ARG__0_n_103,ARG__0_n_104,ARG__0_n_105}),
        .PATTERNBDETECT(NLW_ARG__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__0_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__0_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__0_i_1
       (.I0(\^mul_temp_1 ),
        .O(ARG__0_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__1
       (.A({\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_19 ,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0,ARG__1_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__1_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__1_P_UNCONNECTED[47:30],ARG__1_n_76,ARG__1_n_77,ARG__1_n_78,ARG__1_n_79,ARG__1_n_80,ARG__1_n_81,ARG__1_n_82,ARG__1_n_83,ARG__1_n_84,ARG__1_n_85,ARG__1_n_86,ARG__1_n_87,ARG__1_n_88,ARG__1_n_89,ARG__1_n_90,ARG__1_n_91,ARG__1_n_92,ARG__1_n_93,ARG__1_n_94,ARG__1_n_95,ARG__1_n_96,ARG__1_n_97,ARG__1_n_98,ARG__1_n_99,ARG__1_n_100,ARG__1_n_101,ARG__1_n_102,ARG__1_n_103,ARG__1_n_104,ARG__1_n_105}),
        .PATTERNBDETECT(NLW_ARG__1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__1_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__1_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__10
       (.A({\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__10_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[6]_5 [15],\weight_reg[6]_5 [15],\weight_reg[6]_5 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__10_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_6 ,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0,ARG__10_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__10_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__10_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__10_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__10_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__10_P_UNCONNECTED[47:30],RESIZE26,ARG__10_n_92,ARG__10_n_93,ARG__10_n_94,ARG__10_n_95,ARG__10_n_96,ARG__10_n_97,ARG__10_n_98,ARG__10_n_99,ARG__10_n_100,ARG__10_n_101,ARG__10_n_102,ARG__10_n_103,ARG__10_n_104,ARG__10_n_105}),
        .PATTERNBDETECT(NLW_ARG__10_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__10_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__10_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__10_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__10_i_1
       (.I0(\^mul_temp_6 ),
        .O(ARG__10_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__11
       (.A({\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__11_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__11_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_24 ,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0,ARG__11_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__11_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__11_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__11_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__11_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__11_P_UNCONNECTED[47:30],ARG__11_n_76,ARG__11_n_77,ARG__11_n_78,ARG__11_n_79,ARG__11_n_80,ARG__11_n_81,ARG__11_n_82,ARG__11_n_83,ARG__11_n_84,ARG__11_n_85,ARG__11_n_86,ARG__11_n_87,ARG__11_n_88,ARG__11_n_89,ARG__11_n_90,ARG__11_n_91,ARG__11_n_92,ARG__11_n_93,ARG__11_n_94,ARG__11_n_95,ARG__11_n_96,ARG__11_n_97,ARG__11_n_98,ARG__11_n_99,ARG__11_n_100,ARG__11_n_101,ARG__11_n_102,ARG__11_n_103,ARG__11_n_104,ARG__11_n_105}),
        .PATTERNBDETECT(NLW_ARG__11_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__11_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__11_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__11_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__11_i_1
       (.I0(\^mul_temp_24 ),
        .O(ARG__11_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__12
       (.A({\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__12_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[7]_6 [15],\weight_reg[7]_6 [15],\weight_reg[7]_6 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__12_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_7 ,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0,ARG__12_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__12_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__12_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__12_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__12_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__12_P_UNCONNECTED[47:30],RESIZE28,ARG__12_n_92,ARG__12_n_93,ARG__12_n_94,ARG__12_n_95,ARG__12_n_96,ARG__12_n_97,ARG__12_n_98,ARG__12_n_99,ARG__12_n_100,ARG__12_n_101,ARG__12_n_102,ARG__12_n_103,ARG__12_n_104,ARG__12_n_105}),
        .PATTERNBDETECT(NLW_ARG__12_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__12_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__12_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__12_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__12_i_1
       (.I0(\^mul_temp_7 ),
        .O(ARG__12_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__13
       (.A({\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__13_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__13_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_25 ,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0,ARG__13_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__13_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__13_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__13_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__13_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__13_P_UNCONNECTED[47:30],ARG__13_n_76,ARG__13_n_77,ARG__13_n_78,ARG__13_n_79,ARG__13_n_80,ARG__13_n_81,ARG__13_n_82,ARG__13_n_83,ARG__13_n_84,ARG__13_n_85,ARG__13_n_86,ARG__13_n_87,ARG__13_n_88,ARG__13_n_89,ARG__13_n_90,ARG__13_n_91,ARG__13_n_92,ARG__13_n_93,ARG__13_n_94,ARG__13_n_95,ARG__13_n_96,ARG__13_n_97,ARG__13_n_98,ARG__13_n_99,ARG__13_n_100,ARG__13_n_101,ARG__13_n_102,ARG__13_n_103,ARG__13_n_104,ARG__13_n_105}),
        .PATTERNBDETECT(NLW_ARG__13_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__13_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__13_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__13_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__13_i_1
       (.I0(\^mul_temp_25 ),
        .O(ARG__13_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__14
       (.A({\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__14_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[8]_7 [15],\weight_reg[8]_7 [15],\weight_reg[8]_7 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__14_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_8 ,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0,ARG__14_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__14_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__14_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__14_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__14_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__14_P_UNCONNECTED[47:30],RESIZE30,ARG__14_n_92,ARG__14_n_93,ARG__14_n_94,ARG__14_n_95,ARG__14_n_96,ARG__14_n_97,ARG__14_n_98,ARG__14_n_99,ARG__14_n_100,ARG__14_n_101,ARG__14_n_102,ARG__14_n_103,ARG__14_n_104,ARG__14_n_105}),
        .PATTERNBDETECT(NLW_ARG__14_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__14_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__14_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__14_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__14_i_1
       (.I0(\^mul_temp_8 ),
        .O(ARG__14_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__15
       (.A({\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__15_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__15_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_26 ,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0,ARG__15_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__15_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__15_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__15_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__15_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__15_P_UNCONNECTED[47:30],ARG__15_n_76,ARG__15_n_77,ARG__15_n_78,ARG__15_n_79,ARG__15_n_80,ARG__15_n_81,ARG__15_n_82,ARG__15_n_83,ARG__15_n_84,ARG__15_n_85,ARG__15_n_86,ARG__15_n_87,ARG__15_n_88,ARG__15_n_89,ARG__15_n_90,ARG__15_n_91,ARG__15_n_92,ARG__15_n_93,ARG__15_n_94,ARG__15_n_95,ARG__15_n_96,ARG__15_n_97,ARG__15_n_98,ARG__15_n_99,ARG__15_n_100,ARG__15_n_101,ARG__15_n_102,ARG__15_n_103,ARG__15_n_104,ARG__15_n_105}),
        .PATTERNBDETECT(NLW_ARG__15_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__15_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__15_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__15_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__15_i_1
       (.I0(\^mul_temp_26 ),
        .O(ARG__15_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__16
       (.A({\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__16_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[9]_8 [15],\weight_reg[9]_8 [15],\weight_reg[9]_8 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__16_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_9 ,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0,ARG__16_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__16_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__16_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__16_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__16_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__16_P_UNCONNECTED[47:30],RESIZE32,ARG__16_n_92,ARG__16_n_93,ARG__16_n_94,ARG__16_n_95,ARG__16_n_96,ARG__16_n_97,ARG__16_n_98,ARG__16_n_99,ARG__16_n_100,ARG__16_n_101,ARG__16_n_102,ARG__16_n_103,ARG__16_n_104,ARG__16_n_105}),
        .PATTERNBDETECT(NLW_ARG__16_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__16_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__16_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__16_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__16_i_1
       (.I0(\^mul_temp_9 ),
        .O(ARG__16_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__17
       (.A({\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__17_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__17_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_27 ,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0,ARG__17_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__17_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__17_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__17_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__17_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__17_P_UNCONNECTED[47:30],ARG__17_n_76,ARG__17_n_77,ARG__17_n_78,ARG__17_n_79,ARG__17_n_80,ARG__17_n_81,ARG__17_n_82,ARG__17_n_83,ARG__17_n_84,ARG__17_n_85,ARG__17_n_86,ARG__17_n_87,ARG__17_n_88,ARG__17_n_89,ARG__17_n_90,ARG__17_n_91,ARG__17_n_92,ARG__17_n_93,ARG__17_n_94,ARG__17_n_95,ARG__17_n_96,ARG__17_n_97,ARG__17_n_98,ARG__17_n_99,ARG__17_n_100,ARG__17_n_101,ARG__17_n_102,ARG__17_n_103,ARG__17_n_104,ARG__17_n_105}),
        .PATTERNBDETECT(NLW_ARG__17_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__17_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__17_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__17_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__17_i_1
       (.I0(\^mul_temp_27 ),
        .O(ARG__17_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__18
       (.A({\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__18_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[10]_9 [15],\weight_reg[10]_9 [15],\weight_reg[10]_9 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__18_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_10 ,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0,ARG__18_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__18_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__18_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__18_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__18_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__18_P_UNCONNECTED[47:30],RESIZE34,ARG__18_n_92,ARG__18_n_93,ARG__18_n_94,ARG__18_n_95,ARG__18_n_96,ARG__18_n_97,ARG__18_n_98,ARG__18_n_99,ARG__18_n_100,ARG__18_n_101,ARG__18_n_102,ARG__18_n_103,ARG__18_n_104,ARG__18_n_105}),
        .PATTERNBDETECT(NLW_ARG__18_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__18_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__18_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__18_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__18_i_1
       (.I0(\^mul_temp_10 ),
        .O(ARG__18_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__19
       (.A({\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__19_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__19_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_28 ,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0,ARG__19_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__19_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__19_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__19_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__19_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__19_P_UNCONNECTED[47:30],ARG__19_n_76,ARG__19_n_77,ARG__19_n_78,ARG__19_n_79,ARG__19_n_80,ARG__19_n_81,ARG__19_n_82,ARG__19_n_83,ARG__19_n_84,ARG__19_n_85,ARG__19_n_86,ARG__19_n_87,ARG__19_n_88,ARG__19_n_89,ARG__19_n_90,ARG__19_n_91,ARG__19_n_92,ARG__19_n_93,ARG__19_n_94,ARG__19_n_95,ARG__19_n_96,ARG__19_n_97,ARG__19_n_98,ARG__19_n_99,ARG__19_n_100,ARG__19_n_101,ARG__19_n_102,ARG__19_n_103,ARG__19_n_104,ARG__19_n_105}),
        .PATTERNBDETECT(NLW_ARG__19_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__19_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__19_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__19_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__19_i_1
       (.I0(\^mul_temp_28 ),
        .O(ARG__19_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__1_i_1
       (.I0(\^mul_temp_19 ),
        .O(ARG__1_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__2
       (.A({\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[2]_1 [15],\weight_reg[2]_1 [15],\weight_reg[2]_1 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_2 ,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0,ARG__2_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__2_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__2_P_UNCONNECTED[47:30],RESIZE18,ARG__2_n_92,ARG__2_n_93,ARG__2_n_94,ARG__2_n_95,ARG__2_n_96,ARG__2_n_97,ARG__2_n_98,ARG__2_n_99,ARG__2_n_100,ARG__2_n_101,ARG__2_n_102,ARG__2_n_103,ARG__2_n_104,ARG__2_n_105}),
        .PATTERNBDETECT(NLW_ARG__2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__2_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__2_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__2_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__20
       (.A({\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__20_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[11]_10 [15],\weight_reg[11]_10 [15],\weight_reg[11]_10 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__20_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_11 ,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0,ARG__20_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__20_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__20_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__20_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__20_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__20_P_UNCONNECTED[47:30],RESIZE36,ARG__20_n_92,ARG__20_n_93,ARG__20_n_94,ARG__20_n_95,ARG__20_n_96,ARG__20_n_97,ARG__20_n_98,ARG__20_n_99,ARG__20_n_100,ARG__20_n_101,ARG__20_n_102,ARG__20_n_103,ARG__20_n_104,ARG__20_n_105}),
        .PATTERNBDETECT(NLW_ARG__20_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__20_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__20_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__20_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__20_i_1
       (.I0(\^mul_temp_11 ),
        .O(ARG__20_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__21
       (.A({\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__21_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__21_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_29 ,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0,ARG__21_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__21_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__21_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__21_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__21_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__21_P_UNCONNECTED[47:30],ARG__21_n_76,ARG__21_n_77,ARG__21_n_78,ARG__21_n_79,ARG__21_n_80,ARG__21_n_81,ARG__21_n_82,ARG__21_n_83,ARG__21_n_84,ARG__21_n_85,ARG__21_n_86,ARG__21_n_87,ARG__21_n_88,ARG__21_n_89,ARG__21_n_90,ARG__21_n_91,ARG__21_n_92,ARG__21_n_93,ARG__21_n_94,ARG__21_n_95,ARG__21_n_96,ARG__21_n_97,ARG__21_n_98,ARG__21_n_99,ARG__21_n_100,ARG__21_n_101,ARG__21_n_102,ARG__21_n_103,ARG__21_n_104,ARG__21_n_105}),
        .PATTERNBDETECT(NLW_ARG__21_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__21_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__21_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__21_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__21_i_1
       (.I0(\^mul_temp_29 ),
        .O(ARG__21_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__22
       (.A({\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__22_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[12]_11 [15],\weight_reg[12]_11 [15],\weight_reg[12]_11 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__22_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_12 ,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0,ARG__22_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__22_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__22_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__22_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__22_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__22_P_UNCONNECTED[47:30],RESIZE38,ARG__22_n_92,ARG__22_n_93,ARG__22_n_94,ARG__22_n_95,ARG__22_n_96,ARG__22_n_97,ARG__22_n_98,ARG__22_n_99,ARG__22_n_100,ARG__22_n_101,ARG__22_n_102,ARG__22_n_103,ARG__22_n_104,ARG__22_n_105}),
        .PATTERNBDETECT(NLW_ARG__22_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__22_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__22_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__22_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__22_i_1
       (.I0(\^mul_temp_12 ),
        .O(ARG__22_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__23
       (.A({\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__23_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__23_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_30 ,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0,ARG__23_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__23_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__23_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__23_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__23_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__23_P_UNCONNECTED[47:30],ARG__23_n_76,ARG__23_n_77,ARG__23_n_78,ARG__23_n_79,ARG__23_n_80,ARG__23_n_81,ARG__23_n_82,ARG__23_n_83,ARG__23_n_84,ARG__23_n_85,ARG__23_n_86,ARG__23_n_87,ARG__23_n_88,ARG__23_n_89,ARG__23_n_90,ARG__23_n_91,ARG__23_n_92,ARG__23_n_93,ARG__23_n_94,ARG__23_n_95,ARG__23_n_96,ARG__23_n_97,ARG__23_n_98,ARG__23_n_99,ARG__23_n_100,ARG__23_n_101,ARG__23_n_102,ARG__23_n_103,ARG__23_n_104,ARG__23_n_105}),
        .PATTERNBDETECT(NLW_ARG__23_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__23_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__23_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__23_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__23_i_1
       (.I0(\^mul_temp_30 ),
        .O(ARG__23_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__24
       (.A({\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__24_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[13]_12 [15],\weight_reg[13]_12 [15],\weight_reg[13]_12 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__24_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_13 ,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0,ARG__24_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__24_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__24_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__24_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__24_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__24_P_UNCONNECTED[47:30],RESIZE40,ARG__24_n_92,ARG__24_n_93,ARG__24_n_94,ARG__24_n_95,ARG__24_n_96,ARG__24_n_97,ARG__24_n_98,ARG__24_n_99,ARG__24_n_100,ARG__24_n_101,ARG__24_n_102,ARG__24_n_103,ARG__24_n_104,ARG__24_n_105}),
        .PATTERNBDETECT(NLW_ARG__24_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__24_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__24_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__24_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__24_i_1
       (.I0(\^mul_temp_13 ),
        .O(ARG__24_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__25
       (.A({\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__25_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__25_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_31 ,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0,ARG__25_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__25_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__25_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__25_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__25_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__25_P_UNCONNECTED[47:30],ARG__25_n_76,ARG__25_n_77,ARG__25_n_78,ARG__25_n_79,ARG__25_n_80,ARG__25_n_81,ARG__25_n_82,ARG__25_n_83,ARG__25_n_84,ARG__25_n_85,ARG__25_n_86,ARG__25_n_87,ARG__25_n_88,ARG__25_n_89,ARG__25_n_90,ARG__25_n_91,ARG__25_n_92,ARG__25_n_93,ARG__25_n_94,ARG__25_n_95,ARG__25_n_96,ARG__25_n_97,ARG__25_n_98,ARG__25_n_99,ARG__25_n_100,ARG__25_n_101,ARG__25_n_102,ARG__25_n_103,ARG__25_n_104,ARG__25_n_105}),
        .PATTERNBDETECT(NLW_ARG__25_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__25_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__25_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__25_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__25_i_1
       (.I0(\^mul_temp_31 ),
        .O(ARG__25_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__26
       (.A({\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__26_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[14]_13 [15],\weight_reg[14]_13 [15],\weight_reg[14]_13 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__26_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_14 ,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0,ARG__26_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__26_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__26_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__26_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__26_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__26_P_UNCONNECTED[47:30],RESIZE42,ARG__26_n_92,ARG__26_n_93,ARG__26_n_94,ARG__26_n_95,ARG__26_n_96,ARG__26_n_97,ARG__26_n_98,ARG__26_n_99,ARG__26_n_100,ARG__26_n_101,ARG__26_n_102,ARG__26_n_103,ARG__26_n_104,ARG__26_n_105}),
        .PATTERNBDETECT(NLW_ARG__26_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__26_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__26_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__26_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__26_i_1
       (.I0(\^mul_temp_14 ),
        .O(ARG__26_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__27
       (.A({\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__27_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__27_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_32 ,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0,ARG__27_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__27_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__27_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__27_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__27_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__27_P_UNCONNECTED[47:30],ARG__27_n_76,ARG__27_n_77,ARG__27_n_78,ARG__27_n_79,ARG__27_n_80,ARG__27_n_81,ARG__27_n_82,ARG__27_n_83,ARG__27_n_84,ARG__27_n_85,ARG__27_n_86,ARG__27_n_87,ARG__27_n_88,ARG__27_n_89,ARG__27_n_90,ARG__27_n_91,ARG__27_n_92,ARG__27_n_93,ARG__27_n_94,ARG__27_n_95,ARG__27_n_96,ARG__27_n_97,ARG__27_n_98,ARG__27_n_99,ARG__27_n_100,ARG__27_n_101,ARG__27_n_102,ARG__27_n_103,ARG__27_n_104,ARG__27_n_105}),
        .PATTERNBDETECT(NLW_ARG__27_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__27_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__27_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__27_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__27_i_1
       (.I0(\^mul_temp_32 ),
        .O(ARG__27_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__28
       (.A({\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__28_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[15]_14 [15],\weight_reg[15]_14 [15],\weight_reg[15]_14 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__28_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_15 ,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0,ARG__28_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__28_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__28_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__28_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__28_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__28_P_UNCONNECTED[47:30],RESIZE44,ARG__28_n_92,ARG__28_n_93,ARG__28_n_94,ARG__28_n_95,ARG__28_n_96,ARG__28_n_97,ARG__28_n_98,ARG__28_n_99,ARG__28_n_100,ARG__28_n_101,ARG__28_n_102,ARG__28_n_103,ARG__28_n_104,ARG__28_n_105}),
        .PATTERNBDETECT(NLW_ARG__28_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__28_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__28_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__28_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__28_i_1
       (.I0(\^mul_temp_15 ),
        .O(ARG__28_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__29
       (.A({\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__29_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__29_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_17 ,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0,ARG__29_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__29_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__29_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__29_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__29_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__29_P_UNCONNECTED[47:30],ARG__29_n_76,ARG__29_n_77,ARG__29_n_78,ARG__29_n_79,ARG__29_n_80,ARG__29_n_81,ARG__29_n_82,ARG__29_n_83,ARG__29_n_84,ARG__29_n_85,ARG__29_n_86,ARG__29_n_87,ARG__29_n_88,ARG__29_n_89,ARG__29_n_90,ARG__29_n_91,ARG__29_n_92,ARG__29_n_93,ARG__29_n_94,ARG__29_n_95,ARG__29_n_96,ARG__29_n_97,ARG__29_n_98,ARG__29_n_99,ARG__29_n_100,ARG__29_n_101,ARG__29_n_102,ARG__29_n_103,ARG__29_n_104,ARG__29_n_105}),
        .PATTERNBDETECT(NLW_ARG__29_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__29_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__29_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__29_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__29_i_1
       (.I0(\^mul_temp_17 ),
        .O(ARG__29_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__2_i_1
       (.I0(\^mul_temp_2 ),
        .O(ARG__2_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__3
       (.A({\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_20 ,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0,ARG__3_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__3_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__3_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__3_P_UNCONNECTED[47:30],ARG__3_n_76,ARG__3_n_77,ARG__3_n_78,ARG__3_n_79,ARG__3_n_80,ARG__3_n_81,ARG__3_n_82,ARG__3_n_83,ARG__3_n_84,ARG__3_n_85,ARG__3_n_86,ARG__3_n_87,ARG__3_n_88,ARG__3_n_89,ARG__3_n_90,ARG__3_n_91,ARG__3_n_92,ARG__3_n_93,ARG__3_n_94,ARG__3_n_95,ARG__3_n_96,ARG__3_n_97,ARG__3_n_98,ARG__3_n_99,ARG__3_n_100,ARG__3_n_101,ARG__3_n_102,ARG__3_n_103,ARG__3_n_104,ARG__3_n_105}),
        .PATTERNBDETECT(NLW_ARG__3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__3_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__3_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__3_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__30
       (.A({\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__30_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[0]_15 [15],\weight_reg[0]_15 [15],\weight_reg[0]_15 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__30_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp ,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0,ARG__30_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__30_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__30_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__30_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__30_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__30_P_UNCONNECTED[47:30],RESIZE15,ARG__30_n_92,ARG__30_n_93,ARG__30_n_94,ARG__30_n_95,ARG__30_n_96,ARG__30_n_97,ARG__30_n_98,ARG__30_n_99,ARG__30_n_100,ARG__30_n_101,ARG__30_n_102,ARG__30_n_103,ARG__30_n_104,ARG__30_n_105}),
        .PATTERNBDETECT(NLW_ARG__30_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__30_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__30_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__30_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__30_i_1
       (.I0(\^mul_temp ),
        .O(ARG__30_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__3_i_1
       (.I0(\^mul_temp_20 ),
        .O(ARG__3_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__4
       (.A({\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__4_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[3]_2 [15],\weight_reg[3]_2 [15],\weight_reg[3]_2 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__4_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_3 ,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0,ARG__4_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__4_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__4_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__4_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__4_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__4_P_UNCONNECTED[47:30],RESIZE20,ARG__4_n_92,ARG__4_n_93,ARG__4_n_94,ARG__4_n_95,ARG__4_n_96,ARG__4_n_97,ARG__4_n_98,ARG__4_n_99,ARG__4_n_100,ARG__4_n_101,ARG__4_n_102,ARG__4_n_103,ARG__4_n_104,ARG__4_n_105}),
        .PATTERNBDETECT(NLW_ARG__4_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__4_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__4_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__4_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__4_i_1
       (.I0(\^mul_temp_3 ),
        .O(ARG__4_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__5
       (.A({\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__5_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__5_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_21 ,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0,ARG__5_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__5_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__5_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__5_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__5_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__5_P_UNCONNECTED[47:30],ARG__5_n_76,ARG__5_n_77,ARG__5_n_78,ARG__5_n_79,ARG__5_n_80,ARG__5_n_81,ARG__5_n_82,ARG__5_n_83,ARG__5_n_84,ARG__5_n_85,ARG__5_n_86,ARG__5_n_87,ARG__5_n_88,ARG__5_n_89,ARG__5_n_90,ARG__5_n_91,ARG__5_n_92,ARG__5_n_93,ARG__5_n_94,ARG__5_n_95,ARG__5_n_96,ARG__5_n_97,ARG__5_n_98,ARG__5_n_99,ARG__5_n_100,ARG__5_n_101,ARG__5_n_102,ARG__5_n_103,ARG__5_n_104,ARG__5_n_105}),
        .PATTERNBDETECT(NLW_ARG__5_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__5_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__5_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__5_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__5_i_1
       (.I0(\^mul_temp_21 ),
        .O(ARG__5_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__6
       (.A({\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__6_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[4]_3 [15],\weight_reg[4]_3 [15],\weight_reg[4]_3 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__6_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_4 ,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0,ARG__6_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__6_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__6_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__6_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__6_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__6_P_UNCONNECTED[47:30],RESIZE22,ARG__6_n_92,ARG__6_n_93,ARG__6_n_94,ARG__6_n_95,ARG__6_n_96,ARG__6_n_97,ARG__6_n_98,ARG__6_n_99,ARG__6_n_100,ARG__6_n_101,ARG__6_n_102,ARG__6_n_103,ARG__6_n_104,ARG__6_n_105}),
        .PATTERNBDETECT(NLW_ARG__6_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__6_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__6_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__6_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__6_i_1
       (.I0(\^mul_temp_4 ),
        .O(ARG__6_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__7
       (.A({\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__7_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__7_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_22 ,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0,ARG__7_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__7_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__7_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__7_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__7_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__7_P_UNCONNECTED[47:30],ARG__7_n_76,ARG__7_n_77,ARG__7_n_78,ARG__7_n_79,ARG__7_n_80,ARG__7_n_81,ARG__7_n_82,ARG__7_n_83,ARG__7_n_84,ARG__7_n_85,ARG__7_n_86,ARG__7_n_87,ARG__7_n_88,ARG__7_n_89,ARG__7_n_90,ARG__7_n_91,ARG__7_n_92,ARG__7_n_93,ARG__7_n_94,ARG__7_n_95,ARG__7_n_96,ARG__7_n_97,ARG__7_n_98,ARG__7_n_99,ARG__7_n_100,ARG__7_n_101,ARG__7_n_102,ARG__7_n_103,ARG__7_n_104,ARG__7_n_105}),
        .PATTERNBDETECT(NLW_ARG__7_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__7_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__7_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__7_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__7_i_1
       (.I0(\^mul_temp_22 ),
        .O(ARG__7_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__8
       (.A({\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__8_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[5]_4 [15],\weight_reg[5]_4 [15],\weight_reg[5]_4 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__8_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_5 ,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0,ARG__8_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__8_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__8_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__8_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__8_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__8_P_UNCONNECTED[47:30],RESIZE24,ARG__8_n_92,ARG__8_n_93,ARG__8_n_94,ARG__8_n_95,ARG__8_n_96,ARG__8_n_97,ARG__8_n_98,ARG__8_n_99,ARG__8_n_100,ARG__8_n_101,ARG__8_n_102,ARG__8_n_103,ARG__8_n_104,ARG__8_n_105}),
        .PATTERNBDETECT(NLW_ARG__8_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__8_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__8_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__8_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__8_i_1
       (.I0(\^mul_temp_5 ),
        .O(ARG__8_i_1_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(0),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    ARG__9
       (.A({\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_ARG__9_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_ARG__9_BCOUT_UNCONNECTED[17:0]),
        .C({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\^mul_temp_23 ,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0,ARG__9_i_1_n_0}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_ARG__9_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_ARG__9_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_ARG__9_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b1,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_ARG__9_OVERFLOW_UNCONNECTED),
        .P({NLW_ARG__9_P_UNCONNECTED[47:30],ARG__9_n_76,ARG__9_n_77,ARG__9_n_78,ARG__9_n_79,ARG__9_n_80,ARG__9_n_81,ARG__9_n_82,ARG__9_n_83,ARG__9_n_84,ARG__9_n_85,ARG__9_n_86,ARG__9_n_87,ARG__9_n_88,ARG__9_n_89,ARG__9_n_90,ARG__9_n_91,ARG__9_n_92,ARG__9_n_93,ARG__9_n_94,ARG__9_n_95,ARG__9_n_96,ARG__9_n_97,ARG__9_n_98,ARG__9_n_99,ARG__9_n_100,ARG__9_n_101,ARG__9_n_102,ARG__9_n_103,ARG__9_n_104,ARG__9_n_105}),
        .PATTERNBDETECT(NLW_ARG__9_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_ARG__9_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_ARG__9_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_ARG__9_UNDERFLOW_UNCONNECTED));
  LUT1 #(
    .INIT(2'h1)) 
    ARG__9_i_1
       (.I0(\^mul_temp_23 ),
        .O(ARG__9_i_1_n_0));
  CARRY4 ARG_carry
       (.CI(1'b0),
        .CO({ARG_carry_n_0,ARG_carry_n_1,ARG_carry_n_2,ARG_carry_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,mul_temp_16[1:0],1'b1}),
        .O(NLW_ARG_carry_O_UNCONNECTED[3:0]),
        .S({mul_temp_16[2],\write_reg_d_k_reg[3] }));
  CARRY4 ARG_carry__0
       (.CI(ARG_carry_n_0),
        .CO({ARG_carry__0_n_0,ARG_carry__0_n_1,ARG_carry__0_n_2,ARG_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({mul_temp_16[5],mul_temp_16[3],mul_temp_16[4],DI}),
        .O(ARG__31[20:17]),
        .S({ARG_carry__0_i_2_n_0,ARG_carry__0_i_3_n_0,ARG_carry__0_i_4_n_0,mul_temp_16[3]}));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__0_i_2
       (.I0(mul_temp_16[5]),
        .I1(mul_temp_16[6]),
        .O(ARG_carry__0_i_2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__0_i_3
       (.I0(mul_temp_16[3]),
        .I1(mul_temp_16[5]),
        .O(ARG_carry__0_i_3_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__0_i_4
       (.I0(mul_temp_16[3]),
        .I1(mul_temp_16[4]),
        .O(ARG_carry__0_i_4_n_0));
  CARRY4 ARG_carry__1
       (.CI(ARG_carry__0_n_0),
        .CO({ARG_carry__1_n_0,ARG_carry__1_n_1,ARG_carry__1_n_2,ARG_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI(mul_temp_16[9:6]),
        .O(ARG__31[24:21]),
        .S({ARG_carry__1_i_1_n_0,ARG_carry__1_i_2_n_0,ARG_carry__1_i_3_n_0,ARG_carry__1_i_4_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__1_i_1
       (.I0(mul_temp_16[9]),
        .I1(mul_temp_16[10]),
        .O(ARG_carry__1_i_1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__1_i_2
       (.I0(mul_temp_16[8]),
        .I1(mul_temp_16[9]),
        .O(ARG_carry__1_i_2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__1_i_3
       (.I0(mul_temp_16[7]),
        .I1(mul_temp_16[8]),
        .O(ARG_carry__1_i_3_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__1_i_4
       (.I0(mul_temp_16[6]),
        .I1(mul_temp_16[7]),
        .O(ARG_carry__1_i_4_n_0));
  CARRY4 ARG_carry__2
       (.CI(ARG_carry__1_n_0),
        .CO({ARG_carry__2_n_0,ARG_carry__2_n_1,ARG_carry__2_n_2,ARG_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI(mul_temp_16[13:10]),
        .O(ARG__31[28:25]),
        .S({ARG_carry__2_i_1_n_0,ARG_carry__2_i_2_n_0,ARG_carry__2_i_3_n_0,ARG_carry__2_i_4_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__2_i_1
       (.I0(mul_temp_16[13]),
        .I1(mul_temp_16[14]),
        .O(ARG_carry__2_i_1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__2_i_2
       (.I0(mul_temp_16[12]),
        .I1(mul_temp_16[13]),
        .O(ARG_carry__2_i_2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__2_i_3
       (.I0(mul_temp_16[11]),
        .I1(mul_temp_16[12]),
        .O(ARG_carry__2_i_3_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__2_i_4
       (.I0(mul_temp_16[10]),
        .I1(mul_temp_16[11]),
        .O(ARG_carry__2_i_4_n_0));
  CARRY4 ARG_carry__3
       (.CI(ARG_carry__2_n_0),
        .CO({NLW_ARG_carry__3_CO_UNCONNECTED[3:1],ARG_carry__3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,mul_temp_16[14]}),
        .O({NLW_ARG_carry__3_O_UNCONNECTED[3:2],ARG__31[32],ARG__31[29]}),
        .S({1'b0,1'b0,1'b1,ARG_carry__3_i_1_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    ARG_carry__3_i_1
       (.I0(mul_temp_16[14]),
        .I1(mul_temp_16[15]),
        .O(ARG_carry__3_i_1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    ARG_i_1
       (.I0(\^mul_temp_18 ),
        .O(ARG_i_1_n_0));
  CARRY4 add_temp_14__0_carry
       (.CI(1'b0),
        .CO({add_temp_14__0_carry_n_0,add_temp_14__0_carry_n_1,add_temp_14__0_carry_n_2,add_temp_14__0_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__0_carry_i_1_n_0,add_temp_14__0_carry_i_2_n_0,add_temp_14__0_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__0_carry_n_4,add_temp_14__0_carry_n_5,add_temp_14__0_carry_n_6,add_temp_14__0_carry_n_7}),
        .S({add_temp_14__0_carry_i_4_n_0,add_temp_14__0_carry_i_5_n_0,add_temp_14__0_carry_i_6_n_0,add_temp_14__0_carry_i_7_n_0}));
  CARRY4 add_temp_14__0_carry__0
       (.CI(add_temp_14__0_carry_n_0),
        .CO({add_temp_14__0_carry__0_n_0,add_temp_14__0_carry__0_n_1,add_temp_14__0_carry__0_n_2,add_temp_14__0_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__0_carry__0_i_1_n_0,add_temp_14__0_carry__0_i_2_n_0,add_temp_14__0_carry__0_i_3_n_0,add_temp_14__0_carry__0_i_4_n_0}),
        .O({add_temp_14__0_carry__0_n_4,add_temp_14__0_carry__0_n_5,add_temp_14__0_carry__0_n_6,add_temp_14__0_carry__0_n_7}),
        .S({add_temp_14__0_carry__0_i_5_n_0,add_temp_14__0_carry__0_i_6_n_0,add_temp_14__0_carry__0_i_7_n_0,add_temp_14__0_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__0_i_1
       (.I0(RESIZE44[6]),
        .I1(RESIZE15[6]),
        .I2(RESIZE42[6]),
        .O(add_temp_14__0_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair5" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__0_i_2
       (.I0(RESIZE44[5]),
        .I1(RESIZE15[5]),
        .I2(RESIZE42[5]),
        .O(add_temp_14__0_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair4" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__0_i_3
       (.I0(RESIZE44[4]),
        .I1(RESIZE15[4]),
        .I2(RESIZE42[4]),
        .O(add_temp_14__0_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair3" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__0_i_4
       (.I0(RESIZE44[3]),
        .I1(RESIZE15[3]),
        .I2(RESIZE42[3]),
        .O(add_temp_14__0_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair7" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__0_i_5
       (.I0(RESIZE44[7]),
        .I1(RESIZE15[7]),
        .I2(RESIZE42[7]),
        .I3(add_temp_14__0_carry__0_i_1_n_0),
        .O(add_temp_14__0_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair6" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__0_i_6
       (.I0(RESIZE44[6]),
        .I1(RESIZE15[6]),
        .I2(RESIZE42[6]),
        .I3(add_temp_14__0_carry__0_i_2_n_0),
        .O(add_temp_14__0_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair5" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__0_i_7
       (.I0(RESIZE44[5]),
        .I1(RESIZE15[5]),
        .I2(RESIZE42[5]),
        .I3(add_temp_14__0_carry__0_i_3_n_0),
        .O(add_temp_14__0_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair4" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__0_i_8
       (.I0(RESIZE44[4]),
        .I1(RESIZE15[4]),
        .I2(RESIZE42[4]),
        .I3(add_temp_14__0_carry__0_i_4_n_0),
        .O(add_temp_14__0_carry__0_i_8_n_0));
  CARRY4 add_temp_14__0_carry__1
       (.CI(add_temp_14__0_carry__0_n_0),
        .CO({add_temp_14__0_carry__1_n_0,add_temp_14__0_carry__1_n_1,add_temp_14__0_carry__1_n_2,add_temp_14__0_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__0_carry__1_i_1_n_0,add_temp_14__0_carry__1_i_2_n_0,add_temp_14__0_carry__1_i_3_n_0,add_temp_14__0_carry__1_i_4_n_0}),
        .O({add_temp_14__0_carry__1_n_4,add_temp_14__0_carry__1_n_5,add_temp_14__0_carry__1_n_6,add_temp_14__0_carry__1_n_7}),
        .S({add_temp_14__0_carry__1_i_5_n_0,add_temp_14__0_carry__1_i_6_n_0,add_temp_14__0_carry__1_i_7_n_0,add_temp_14__0_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair10" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__1_i_1
       (.I0(RESIZE44[10]),
        .I1(RESIZE42[10]),
        .I2(RESIZE15[10]),
        .O(add_temp_14__0_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair9" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__1_i_2
       (.I0(RESIZE44[9]),
        .I1(RESIZE42[9]),
        .I2(RESIZE15[9]),
        .O(add_temp_14__0_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__1_i_3
       (.I0(RESIZE44[8]),
        .I1(RESIZE15[8]),
        .I2(RESIZE42[8]),
        .O(add_temp_14__0_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__1_i_4
       (.I0(RESIZE44[7]),
        .I1(RESIZE15[7]),
        .I2(RESIZE42[7]),
        .O(add_temp_14__0_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair11" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__1_i_5
       (.I0(RESIZE44[11]),
        .I1(RESIZE15[11]),
        .I2(RESIZE42[11]),
        .I3(add_temp_14__0_carry__1_i_1_n_0),
        .O(add_temp_14__0_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair10" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__1_i_6
       (.I0(RESIZE44[10]),
        .I1(RESIZE42[10]),
        .I2(RESIZE15[10]),
        .I3(add_temp_14__0_carry__1_i_2_n_0),
        .O(add_temp_14__0_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair9" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__1_i_7
       (.I0(RESIZE44[9]),
        .I1(RESIZE42[9]),
        .I2(RESIZE15[9]),
        .I3(add_temp_14__0_carry__1_i_3_n_0),
        .O(add_temp_14__0_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair8" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__1_i_8
       (.I0(RESIZE44[8]),
        .I1(RESIZE15[8]),
        .I2(RESIZE42[8]),
        .I3(add_temp_14__0_carry__1_i_4_n_0),
        .O(add_temp_14__0_carry__1_i_8_n_0));
  CARRY4 add_temp_14__0_carry__2
       (.CI(add_temp_14__0_carry__1_n_0),
        .CO({NLW_add_temp_14__0_carry__2_CO_UNCONNECTED[3],add_temp_14__0_carry__2_n_1,add_temp_14__0_carry__2_n_2,add_temp_14__0_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__0_carry__2_i_1_n_0,add_temp_14__0_carry__2_i_2_n_0,add_temp_14__0_carry__2_i_3_n_0}),
        .O({add_temp_14__0_carry__2_n_4,add_temp_14__0_carry__2_n_5,add_temp_14__0_carry__2_n_6,add_temp_14__0_carry__2_n_7}),
        .S({add_temp_14__0_carry__2_i_4_n_0,add_temp_14__0_carry__2_i_5_n_0,add_temp_14__0_carry__2_i_6_n_0,add_temp_14__0_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair13" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__2_i_1
       (.I0(RESIZE15[13]),
        .I1(RESIZE42[13]),
        .I2(RESIZE44[13]),
        .O(add_temp_14__0_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair12" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__2_i_2
       (.I0(RESIZE44[12]),
        .I1(RESIZE15[12]),
        .I2(RESIZE42[12]),
        .O(add_temp_14__0_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair11" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry__2_i_3
       (.I0(RESIZE44[11]),
        .I1(RESIZE15[11]),
        .I2(RESIZE42[11]),
        .O(add_temp_14__0_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__0_carry__2_i_4
       (.I0(RESIZE15[14]),
        .I1(RESIZE44[14]),
        .I2(RESIZE42[14]),
        .I3(RESIZE44[15]),
        .I4(RESIZE42[15]),
        .I5(RESIZE15[15]),
        .O(add_temp_14__0_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__2_i_5
       (.I0(add_temp_14__0_carry__2_i_1_n_0),
        .I1(RESIZE44[14]),
        .I2(RESIZE42[14]),
        .I3(RESIZE15[14]),
        .O(add_temp_14__0_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair13" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__2_i_6
       (.I0(RESIZE15[13]),
        .I1(RESIZE42[13]),
        .I2(RESIZE44[13]),
        .I3(add_temp_14__0_carry__2_i_2_n_0),
        .O(add_temp_14__0_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair12" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry__2_i_7
       (.I0(RESIZE44[12]),
        .I1(RESIZE15[12]),
        .I2(RESIZE42[12]),
        .I3(add_temp_14__0_carry__2_i_3_n_0),
        .O(add_temp_14__0_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair2" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry_i_1
       (.I0(RESIZE44[2]),
        .I1(RESIZE15[2]),
        .I2(RESIZE42[2]),
        .O(add_temp_14__0_carry_i_1_n_0));
  (* HLUTNM = "lutpair1" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry_i_2
       (.I0(RESIZE44[1]),
        .I1(RESIZE15[1]),
        .I2(RESIZE42[1]),
        .O(add_temp_14__0_carry_i_2_n_0));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__0_carry_i_3
       (.I0(RESIZE44[0]),
        .I1(RESIZE15[0]),
        .I2(RESIZE42[0]),
        .O(add_temp_14__0_carry_i_3_n_0));
  (* HLUTNM = "lutpair3" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry_i_4
       (.I0(RESIZE44[3]),
        .I1(RESIZE15[3]),
        .I2(RESIZE42[3]),
        .I3(add_temp_14__0_carry_i_1_n_0),
        .O(add_temp_14__0_carry_i_4_n_0));
  (* HLUTNM = "lutpair2" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry_i_5
       (.I0(RESIZE44[2]),
        .I1(RESIZE15[2]),
        .I2(RESIZE42[2]),
        .I3(add_temp_14__0_carry_i_2_n_0),
        .O(add_temp_14__0_carry_i_5_n_0));
  (* HLUTNM = "lutpair1" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__0_carry_i_6
       (.I0(RESIZE44[1]),
        .I1(RESIZE15[1]),
        .I2(RESIZE42[1]),
        .I3(add_temp_14__0_carry_i_3_n_0),
        .O(add_temp_14__0_carry_i_6_n_0));
  (* HLUTNM = "lutpair0" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__0_carry_i_7
       (.I0(RESIZE44[0]),
        .I1(RESIZE15[0]),
        .I2(RESIZE42[0]),
        .O(add_temp_14__0_carry_i_7_n_0));
  CARRY4 add_temp_14__138_carry
       (.CI(1'b0),
        .CO({add_temp_14__138_carry_n_0,add_temp_14__138_carry_n_1,add_temp_14__138_carry_n_2,add_temp_14__138_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__138_carry_i_1_n_0,add_temp_14__138_carry_i_2_n_0,add_temp_14__138_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__138_carry_n_4,add_temp_14__138_carry_n_5,add_temp_14__138_carry_n_6,add_temp_14__138_carry_n_7}),
        .S({add_temp_14__138_carry_i_4_n_0,add_temp_14__138_carry_i_5_n_0,add_temp_14__138_carry_i_6_n_0,add_temp_14__138_carry_i_7_n_0}));
  CARRY4 add_temp_14__138_carry__0
       (.CI(add_temp_14__138_carry_n_0),
        .CO({add_temp_14__138_carry__0_n_0,add_temp_14__138_carry__0_n_1,add_temp_14__138_carry__0_n_2,add_temp_14__138_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__138_carry__0_i_1_n_0,add_temp_14__138_carry__0_i_2_n_0,add_temp_14__138_carry__0_i_3_n_0,add_temp_14__138_carry__0_i_4_n_0}),
        .O({add_temp_14__138_carry__0_n_4,add_temp_14__138_carry__0_n_5,add_temp_14__138_carry__0_n_6,add_temp_14__138_carry__0_n_7}),
        .S({add_temp_14__138_carry__0_i_5_n_0,add_temp_14__138_carry__0_i_6_n_0,add_temp_14__138_carry__0_i_7_n_0,add_temp_14__138_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair48" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__0_i_1
       (.I0(RESIZE24[6]),
        .I1(RESIZE26[6]),
        .I2(RESIZE28[6]),
        .O(add_temp_14__138_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair47" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__0_i_2
       (.I0(RESIZE28[5]),
        .I1(RESIZE24[5]),
        .I2(RESIZE26[5]),
        .O(add_temp_14__138_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair46" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__0_i_3
       (.I0(RESIZE26[4]),
        .I1(RESIZE24[4]),
        .I2(RESIZE28[4]),
        .O(add_temp_14__138_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair45" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__0_i_4
       (.I0(RESIZE26[3]),
        .I1(RESIZE28[3]),
        .I2(RESIZE24[3]),
        .O(add_temp_14__138_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair49" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__0_i_5
       (.I0(RESIZE24[7]),
        .I1(RESIZE26[7]),
        .I2(RESIZE28[7]),
        .I3(add_temp_14__138_carry__0_i_1_n_0),
        .O(add_temp_14__138_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair48" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__0_i_6
       (.I0(RESIZE24[6]),
        .I1(RESIZE26[6]),
        .I2(RESIZE28[6]),
        .I3(add_temp_14__138_carry__0_i_2_n_0),
        .O(add_temp_14__138_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair47" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__0_i_7
       (.I0(RESIZE28[5]),
        .I1(RESIZE24[5]),
        .I2(RESIZE26[5]),
        .I3(add_temp_14__138_carry__0_i_3_n_0),
        .O(add_temp_14__138_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair46" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__0_i_8
       (.I0(RESIZE26[4]),
        .I1(RESIZE24[4]),
        .I2(RESIZE28[4]),
        .I3(add_temp_14__138_carry__0_i_4_n_0),
        .O(add_temp_14__138_carry__0_i_8_n_0));
  CARRY4 add_temp_14__138_carry__1
       (.CI(add_temp_14__138_carry__0_n_0),
        .CO({add_temp_14__138_carry__1_n_0,add_temp_14__138_carry__1_n_1,add_temp_14__138_carry__1_n_2,add_temp_14__138_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__138_carry__1_i_1_n_0,add_temp_14__138_carry__1_i_2_n_0,add_temp_14__138_carry__1_i_3_n_0,add_temp_14__138_carry__1_i_4_n_0}),
        .O({add_temp_14__138_carry__1_n_4,add_temp_14__138_carry__1_n_5,add_temp_14__138_carry__1_n_6,add_temp_14__138_carry__1_n_7}),
        .S({add_temp_14__138_carry__1_i_5_n_0,add_temp_14__138_carry__1_i_6_n_0,add_temp_14__138_carry__1_i_7_n_0,add_temp_14__138_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair52" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__1_i_1
       (.I0(RESIZE24[10]),
        .I1(RESIZE26[10]),
        .I2(RESIZE28[10]),
        .O(add_temp_14__138_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair51" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__1_i_2
       (.I0(RESIZE24[9]),
        .I1(RESIZE26[9]),
        .I2(RESIZE28[9]),
        .O(add_temp_14__138_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair50" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__1_i_3
       (.I0(RESIZE24[8]),
        .I1(RESIZE26[8]),
        .I2(RESIZE28[8]),
        .O(add_temp_14__138_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair49" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__1_i_4
       (.I0(RESIZE24[7]),
        .I1(RESIZE26[7]),
        .I2(RESIZE28[7]),
        .O(add_temp_14__138_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair53" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__1_i_5
       (.I0(RESIZE24[11]),
        .I1(RESIZE26[11]),
        .I2(RESIZE28[11]),
        .I3(add_temp_14__138_carry__1_i_1_n_0),
        .O(add_temp_14__138_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair52" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__1_i_6
       (.I0(RESIZE24[10]),
        .I1(RESIZE26[10]),
        .I2(RESIZE28[10]),
        .I3(add_temp_14__138_carry__1_i_2_n_0),
        .O(add_temp_14__138_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair51" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__1_i_7
       (.I0(RESIZE24[9]),
        .I1(RESIZE26[9]),
        .I2(RESIZE28[9]),
        .I3(add_temp_14__138_carry__1_i_3_n_0),
        .O(add_temp_14__138_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair50" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__1_i_8
       (.I0(RESIZE24[8]),
        .I1(RESIZE26[8]),
        .I2(RESIZE28[8]),
        .I3(add_temp_14__138_carry__1_i_4_n_0),
        .O(add_temp_14__138_carry__1_i_8_n_0));
  CARRY4 add_temp_14__138_carry__2
       (.CI(add_temp_14__138_carry__1_n_0),
        .CO({NLW_add_temp_14__138_carry__2_CO_UNCONNECTED[3],add_temp_14__138_carry__2_n_1,add_temp_14__138_carry__2_n_2,add_temp_14__138_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__138_carry__2_i_1_n_0,add_temp_14__138_carry__2_i_2_n_0,add_temp_14__138_carry__2_i_3_n_0}),
        .O({add_temp_14__138_carry__2_n_4,add_temp_14__138_carry__2_n_5,add_temp_14__138_carry__2_n_6,add_temp_14__138_carry__2_n_7}),
        .S({add_temp_14__138_carry__2_i_4_n_0,add_temp_14__138_carry__2_i_5_n_0,add_temp_14__138_carry__2_i_6_n_0,add_temp_14__138_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair55" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__2_i_1
       (.I0(RESIZE24[13]),
        .I1(RESIZE26[13]),
        .I2(RESIZE28[13]),
        .O(add_temp_14__138_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair54" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__2_i_2
       (.I0(RESIZE24[12]),
        .I1(RESIZE26[12]),
        .I2(RESIZE28[12]),
        .O(add_temp_14__138_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair53" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry__2_i_3
       (.I0(RESIZE24[11]),
        .I1(RESIZE26[11]),
        .I2(RESIZE28[11]),
        .O(add_temp_14__138_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__138_carry__2_i_4
       (.I0(RESIZE28[14]),
        .I1(RESIZE26[14]),
        .I2(RESIZE24[14]),
        .I3(RESIZE26[15]),
        .I4(RESIZE24[15]),
        .I5(RESIZE28[15]),
        .O(add_temp_14__138_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__2_i_5
       (.I0(add_temp_14__138_carry__2_i_1_n_0),
        .I1(RESIZE26[14]),
        .I2(RESIZE24[14]),
        .I3(RESIZE28[14]),
        .O(add_temp_14__138_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair55" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__2_i_6
       (.I0(RESIZE24[13]),
        .I1(RESIZE26[13]),
        .I2(RESIZE28[13]),
        .I3(add_temp_14__138_carry__2_i_2_n_0),
        .O(add_temp_14__138_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair54" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry__2_i_7
       (.I0(RESIZE24[12]),
        .I1(RESIZE26[12]),
        .I2(RESIZE28[12]),
        .I3(add_temp_14__138_carry__2_i_3_n_0),
        .O(add_temp_14__138_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair44" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry_i_1
       (.I0(RESIZE26[2]),
        .I1(RESIZE28[2]),
        .I2(RESIZE24[2]),
        .O(add_temp_14__138_carry_i_1_n_0));
  (* HLUTNM = "lutpair43" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry_i_2
       (.I0(RESIZE26[1]),
        .I1(RESIZE28[1]),
        .I2(RESIZE24[1]),
        .O(add_temp_14__138_carry_i_2_n_0));
  (* HLUTNM = "lutpair42" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__138_carry_i_3
       (.I0(RESIZE26[0]),
        .I1(RESIZE28[0]),
        .I2(RESIZE24[0]),
        .O(add_temp_14__138_carry_i_3_n_0));
  (* HLUTNM = "lutpair45" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry_i_4
       (.I0(RESIZE26[3]),
        .I1(RESIZE28[3]),
        .I2(RESIZE24[3]),
        .I3(add_temp_14__138_carry_i_1_n_0),
        .O(add_temp_14__138_carry_i_4_n_0));
  (* HLUTNM = "lutpair44" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry_i_5
       (.I0(RESIZE26[2]),
        .I1(RESIZE28[2]),
        .I2(RESIZE24[2]),
        .I3(add_temp_14__138_carry_i_2_n_0),
        .O(add_temp_14__138_carry_i_5_n_0));
  (* HLUTNM = "lutpair43" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__138_carry_i_6
       (.I0(RESIZE26[1]),
        .I1(RESIZE28[1]),
        .I2(RESIZE24[1]),
        .I3(add_temp_14__138_carry_i_3_n_0),
        .O(add_temp_14__138_carry_i_6_n_0));
  (* HLUTNM = "lutpair42" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__138_carry_i_7
       (.I0(RESIZE26[0]),
        .I1(RESIZE28[0]),
        .I2(RESIZE24[0]),
        .O(add_temp_14__138_carry_i_7_n_0));
  CARRY4 add_temp_14__184_carry
       (.CI(1'b0),
        .CO({add_temp_14__184_carry_n_0,add_temp_14__184_carry_n_1,add_temp_14__184_carry_n_2,add_temp_14__184_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__184_carry_i_1_n_0,add_temp_14__184_carry_i_2_n_0,add_temp_14__184_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__184_carry_n_4,add_temp_14__184_carry_n_5,add_temp_14__184_carry_n_6,add_temp_14__184_carry_n_7}),
        .S({add_temp_14__184_carry_i_4_n_0,add_temp_14__184_carry_i_5_n_0,add_temp_14__184_carry_i_6_n_0,add_temp_14__184_carry_i_7_n_0}));
  CARRY4 add_temp_14__184_carry__0
       (.CI(add_temp_14__184_carry_n_0),
        .CO({add_temp_14__184_carry__0_n_0,add_temp_14__184_carry__0_n_1,add_temp_14__184_carry__0_n_2,add_temp_14__184_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__184_carry__0_i_1_n_0,add_temp_14__184_carry__0_i_2_n_0,add_temp_14__184_carry__0_i_3_n_0,add_temp_14__184_carry__0_i_4_n_0}),
        .O({add_temp_14__184_carry__0_n_4,add_temp_14__184_carry__0_n_5,add_temp_14__184_carry__0_n_6,add_temp_14__184_carry__0_n_7}),
        .S({add_temp_14__184_carry__0_i_5_n_0,add_temp_14__184_carry__0_i_6_n_0,add_temp_14__184_carry__0_i_7_n_0,add_temp_14__184_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair62" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__0_i_1
       (.I0(RESIZE20[6]),
        .I1(RESIZE18[6]),
        .I2(RESIZE22[6]),
        .O(add_temp_14__184_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair61" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__0_i_2
       (.I0(RESIZE20[5]),
        .I1(RESIZE18[5]),
        .I2(RESIZE22[5]),
        .O(add_temp_14__184_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair60" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__0_i_3
       (.I0(RESIZE20[4]),
        .I1(RESIZE18[4]),
        .I2(RESIZE22[4]),
        .O(add_temp_14__184_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair59" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__0_i_4
       (.I0(RESIZE18[3]),
        .I1(RESIZE22[3]),
        .I2(RESIZE20[3]),
        .O(add_temp_14__184_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair63" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__0_i_5
       (.I0(RESIZE20[7]),
        .I1(RESIZE18[7]),
        .I2(RESIZE22[7]),
        .I3(add_temp_14__184_carry__0_i_1_n_0),
        .O(add_temp_14__184_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair62" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__0_i_6
       (.I0(RESIZE20[6]),
        .I1(RESIZE18[6]),
        .I2(RESIZE22[6]),
        .I3(add_temp_14__184_carry__0_i_2_n_0),
        .O(add_temp_14__184_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair61" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__0_i_7
       (.I0(RESIZE20[5]),
        .I1(RESIZE18[5]),
        .I2(RESIZE22[5]),
        .I3(add_temp_14__184_carry__0_i_3_n_0),
        .O(add_temp_14__184_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair60" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__0_i_8
       (.I0(RESIZE20[4]),
        .I1(RESIZE18[4]),
        .I2(RESIZE22[4]),
        .I3(add_temp_14__184_carry__0_i_4_n_0),
        .O(add_temp_14__184_carry__0_i_8_n_0));
  CARRY4 add_temp_14__184_carry__1
       (.CI(add_temp_14__184_carry__0_n_0),
        .CO({add_temp_14__184_carry__1_n_0,add_temp_14__184_carry__1_n_1,add_temp_14__184_carry__1_n_2,add_temp_14__184_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__184_carry__1_i_1_n_0,add_temp_14__184_carry__1_i_2_n_0,add_temp_14__184_carry__1_i_3_n_0,add_temp_14__184_carry__1_i_4_n_0}),
        .O({add_temp_14__184_carry__1_n_4,add_temp_14__184_carry__1_n_5,add_temp_14__184_carry__1_n_6,add_temp_14__184_carry__1_n_7}),
        .S({add_temp_14__184_carry__1_i_5_n_0,add_temp_14__184_carry__1_i_6_n_0,add_temp_14__184_carry__1_i_7_n_0,add_temp_14__184_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair66" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__1_i_1
       (.I0(RESIZE18[10]),
        .I1(RESIZE22[10]),
        .I2(RESIZE20[10]),
        .O(add_temp_14__184_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair65" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__1_i_2
       (.I0(RESIZE18[9]),
        .I1(RESIZE22[9]),
        .I2(RESIZE20[9]),
        .O(add_temp_14__184_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair64" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__1_i_3
       (.I0(RESIZE18[8]),
        .I1(RESIZE22[8]),
        .I2(RESIZE20[8]),
        .O(add_temp_14__184_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair63" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__1_i_4
       (.I0(RESIZE20[7]),
        .I1(RESIZE18[7]),
        .I2(RESIZE22[7]),
        .O(add_temp_14__184_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair67" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__1_i_5
       (.I0(RESIZE18[11]),
        .I1(RESIZE22[11]),
        .I2(RESIZE20[11]),
        .I3(add_temp_14__184_carry__1_i_1_n_0),
        .O(add_temp_14__184_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair66" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__1_i_6
       (.I0(RESIZE18[10]),
        .I1(RESIZE22[10]),
        .I2(RESIZE20[10]),
        .I3(add_temp_14__184_carry__1_i_2_n_0),
        .O(add_temp_14__184_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair65" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__1_i_7
       (.I0(RESIZE18[9]),
        .I1(RESIZE22[9]),
        .I2(RESIZE20[9]),
        .I3(add_temp_14__184_carry__1_i_3_n_0),
        .O(add_temp_14__184_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair64" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__1_i_8
       (.I0(RESIZE18[8]),
        .I1(RESIZE22[8]),
        .I2(RESIZE20[8]),
        .I3(add_temp_14__184_carry__1_i_4_n_0),
        .O(add_temp_14__184_carry__1_i_8_n_0));
  CARRY4 add_temp_14__184_carry__2
       (.CI(add_temp_14__184_carry__1_n_0),
        .CO({NLW_add_temp_14__184_carry__2_CO_UNCONNECTED[3],add_temp_14__184_carry__2_n_1,add_temp_14__184_carry__2_n_2,add_temp_14__184_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__184_carry__2_i_1_n_0,add_temp_14__184_carry__2_i_2_n_0,add_temp_14__184_carry__2_i_3_n_0}),
        .O({add_temp_14__184_carry__2_n_4,add_temp_14__184_carry__2_n_5,add_temp_14__184_carry__2_n_6,add_temp_14__184_carry__2_n_7}),
        .S({add_temp_14__184_carry__2_i_4_n_0,add_temp_14__184_carry__2_i_5_n_0,add_temp_14__184_carry__2_i_6_n_0,add_temp_14__184_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair69" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__2_i_1
       (.I0(RESIZE18[13]),
        .I1(RESIZE22[13]),
        .I2(RESIZE20[13]),
        .O(add_temp_14__184_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair68" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__2_i_2
       (.I0(RESIZE18[12]),
        .I1(RESIZE22[12]),
        .I2(RESIZE20[12]),
        .O(add_temp_14__184_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair67" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry__2_i_3
       (.I0(RESIZE18[11]),
        .I1(RESIZE22[11]),
        .I2(RESIZE20[11]),
        .O(add_temp_14__184_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__184_carry__2_i_4
       (.I0(RESIZE20[14]),
        .I1(RESIZE22[14]),
        .I2(RESIZE18[14]),
        .I3(RESIZE20[15]),
        .I4(RESIZE18[15]),
        .I5(RESIZE22[15]),
        .O(add_temp_14__184_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__2_i_5
       (.I0(add_temp_14__184_carry__2_i_1_n_0),
        .I1(RESIZE20[14]),
        .I2(RESIZE18[14]),
        .I3(RESIZE22[14]),
        .O(add_temp_14__184_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair69" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__2_i_6
       (.I0(RESIZE18[13]),
        .I1(RESIZE22[13]),
        .I2(RESIZE20[13]),
        .I3(add_temp_14__184_carry__2_i_2_n_0),
        .O(add_temp_14__184_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair68" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry__2_i_7
       (.I0(RESIZE18[12]),
        .I1(RESIZE22[12]),
        .I2(RESIZE20[12]),
        .I3(add_temp_14__184_carry__2_i_3_n_0),
        .O(add_temp_14__184_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair58" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry_i_1
       (.I0(RESIZE22[2]),
        .I1(RESIZE18[2]),
        .I2(RESIZE20[2]),
        .O(add_temp_14__184_carry_i_1_n_0));
  (* HLUTNM = "lutpair57" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry_i_2
       (.I0(RESIZE20[1]),
        .I1(RESIZE18[1]),
        .I2(RESIZE22[1]),
        .O(add_temp_14__184_carry_i_2_n_0));
  (* HLUTNM = "lutpair56" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__184_carry_i_3
       (.I0(RESIZE18[0]),
        .I1(RESIZE22[0]),
        .I2(RESIZE20[0]),
        .O(add_temp_14__184_carry_i_3_n_0));
  (* HLUTNM = "lutpair59" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry_i_4
       (.I0(RESIZE18[3]),
        .I1(RESIZE22[3]),
        .I2(RESIZE20[3]),
        .I3(add_temp_14__184_carry_i_1_n_0),
        .O(add_temp_14__184_carry_i_4_n_0));
  (* HLUTNM = "lutpair58" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry_i_5
       (.I0(RESIZE22[2]),
        .I1(RESIZE18[2]),
        .I2(RESIZE20[2]),
        .I3(add_temp_14__184_carry_i_2_n_0),
        .O(add_temp_14__184_carry_i_5_n_0));
  (* HLUTNM = "lutpair57" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__184_carry_i_6
       (.I0(RESIZE20[1]),
        .I1(RESIZE18[1]),
        .I2(RESIZE22[1]),
        .I3(add_temp_14__184_carry_i_3_n_0),
        .O(add_temp_14__184_carry_i_6_n_0));
  (* HLUTNM = "lutpair56" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__184_carry_i_7
       (.I0(RESIZE18[0]),
        .I1(RESIZE22[0]),
        .I2(RESIZE20[0]),
        .O(add_temp_14__184_carry_i_7_n_0));
  CARRY4 add_temp_14__230_carry
       (.CI(1'b0),
        .CO({add_temp_14__230_carry_n_0,add_temp_14__230_carry_n_1,add_temp_14__230_carry_n_2,add_temp_14__230_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__230_carry_i_1_n_0,add_temp_14__230_carry_i_2_n_0,add_temp_14__230_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__230_carry_n_4,add_temp_14__230_carry_n_5,add_temp_14__230_carry_n_6,add_temp_14__230_carry_n_7}),
        .S({add_temp_14__230_carry_i_4_n_0,add_temp_14__230_carry_i_5_n_0,add_temp_14__230_carry_i_6_n_0,add_temp_14__230_carry_i_7_n_0}));
  CARRY4 add_temp_14__230_carry__0
       (.CI(add_temp_14__230_carry_n_0),
        .CO({add_temp_14__230_carry__0_n_0,add_temp_14__230_carry__0_n_1,add_temp_14__230_carry__0_n_2,add_temp_14__230_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__230_carry__0_i_1_n_0,add_temp_14__230_carry__0_i_2_n_0,add_temp_14__230_carry__0_i_3_n_0,add_temp_14__230_carry__0_i_4_n_0}),
        .O({add_temp_14__230_carry__0_n_4,add_temp_14__230_carry__0_n_5,add_temp_14__230_carry__0_n_6,add_temp_14__230_carry__0_n_7}),
        .S({add_temp_14__230_carry__0_i_5_n_0,add_temp_14__230_carry__0_i_6_n_0,add_temp_14__230_carry__0_i_7_n_0,add_temp_14__230_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair76" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__0_i_1
       (.I0(RESIZE16[6]),
        .I1(add_temp_14__0_carry__0_n_5),
        .I2(add_temp_14__46_carry__0_n_5),
        .O(add_temp_14__230_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair75" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__0_i_2
       (.I0(RESIZE16[5]),
        .I1(add_temp_14__46_carry__0_n_6),
        .I2(add_temp_14__0_carry__0_n_6),
        .O(add_temp_14__230_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair74" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__0_i_3
       (.I0(add_temp_14__0_carry__0_n_7),
        .I1(add_temp_14__46_carry__0_n_7),
        .I2(RESIZE16[4]),
        .O(add_temp_14__230_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair73" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__0_i_4
       (.I0(add_temp_14__0_carry_n_4),
        .I1(add_temp_14__46_carry_n_4),
        .I2(RESIZE16[3]),
        .O(add_temp_14__230_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair77" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__0_i_5
       (.I0(add_temp_14__0_carry__0_n_4),
        .I1(add_temp_14__46_carry__0_n_4),
        .I2(RESIZE16[7]),
        .I3(add_temp_14__230_carry__0_i_1_n_0),
        .O(add_temp_14__230_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair76" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__0_i_6
       (.I0(RESIZE16[6]),
        .I1(add_temp_14__0_carry__0_n_5),
        .I2(add_temp_14__46_carry__0_n_5),
        .I3(add_temp_14__230_carry__0_i_2_n_0),
        .O(add_temp_14__230_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair75" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__0_i_7
       (.I0(RESIZE16[5]),
        .I1(add_temp_14__46_carry__0_n_6),
        .I2(add_temp_14__0_carry__0_n_6),
        .I3(add_temp_14__230_carry__0_i_3_n_0),
        .O(add_temp_14__230_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair74" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__0_i_8
       (.I0(add_temp_14__0_carry__0_n_7),
        .I1(add_temp_14__46_carry__0_n_7),
        .I2(RESIZE16[4]),
        .I3(add_temp_14__230_carry__0_i_4_n_0),
        .O(add_temp_14__230_carry__0_i_8_n_0));
  CARRY4 add_temp_14__230_carry__1
       (.CI(add_temp_14__230_carry__0_n_0),
        .CO({add_temp_14__230_carry__1_n_0,add_temp_14__230_carry__1_n_1,add_temp_14__230_carry__1_n_2,add_temp_14__230_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__230_carry__1_i_1_n_0,add_temp_14__230_carry__1_i_2_n_0,add_temp_14__230_carry__1_i_3_n_0,add_temp_14__230_carry__1_i_4_n_0}),
        .O({add_temp_14__230_carry__1_n_4,add_temp_14__230_carry__1_n_5,add_temp_14__230_carry__1_n_6,add_temp_14__230_carry__1_n_7}),
        .S({add_temp_14__230_carry__1_i_5_n_0,add_temp_14__230_carry__1_i_6_n_0,add_temp_14__230_carry__1_i_7_n_0,add_temp_14__230_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair80" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__1_i_1
       (.I0(RESIZE16[10]),
        .I1(add_temp_14__0_carry__1_n_5),
        .I2(add_temp_14__46_carry__1_n_5),
        .O(add_temp_14__230_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair79" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__1_i_2
       (.I0(add_temp_14__0_carry__1_n_6),
        .I1(add_temp_14__46_carry__1_n_6),
        .I2(RESIZE16[9]),
        .O(add_temp_14__230_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair78" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__1_i_3
       (.I0(add_temp_14__0_carry__1_n_7),
        .I1(RESIZE16[8]),
        .I2(add_temp_14__46_carry__1_n_7),
        .O(add_temp_14__230_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair77" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__1_i_4
       (.I0(add_temp_14__0_carry__0_n_4),
        .I1(add_temp_14__46_carry__0_n_4),
        .I2(RESIZE16[7]),
        .O(add_temp_14__230_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair81" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__1_i_5
       (.I0(RESIZE16[11]),
        .I1(add_temp_14__0_carry__1_n_4),
        .I2(add_temp_14__46_carry__1_n_4),
        .I3(add_temp_14__230_carry__1_i_1_n_0),
        .O(add_temp_14__230_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair80" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__1_i_6
       (.I0(RESIZE16[10]),
        .I1(add_temp_14__0_carry__1_n_5),
        .I2(add_temp_14__46_carry__1_n_5),
        .I3(add_temp_14__230_carry__1_i_2_n_0),
        .O(add_temp_14__230_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair79" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__1_i_7
       (.I0(add_temp_14__0_carry__1_n_6),
        .I1(add_temp_14__46_carry__1_n_6),
        .I2(RESIZE16[9]),
        .I3(add_temp_14__230_carry__1_i_3_n_0),
        .O(add_temp_14__230_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair78" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__1_i_8
       (.I0(add_temp_14__0_carry__1_n_7),
        .I1(RESIZE16[8]),
        .I2(add_temp_14__46_carry__1_n_7),
        .I3(add_temp_14__230_carry__1_i_4_n_0),
        .O(add_temp_14__230_carry__1_i_8_n_0));
  CARRY4 add_temp_14__230_carry__2
       (.CI(add_temp_14__230_carry__1_n_0),
        .CO({NLW_add_temp_14__230_carry__2_CO_UNCONNECTED[3],add_temp_14__230_carry__2_n_1,add_temp_14__230_carry__2_n_2,add_temp_14__230_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__230_carry__2_i_1_n_0,add_temp_14__230_carry__2_i_2_n_0,add_temp_14__230_carry__2_i_3_n_0}),
        .O({add_temp_14__230_carry__2_n_4,add_temp_14__230_carry__2_n_5,add_temp_14__230_carry__2_n_6,add_temp_14__230_carry__2_n_7}),
        .S({add_temp_14__230_carry__2_i_4_n_0,add_temp_14__230_carry__2_i_5_n_0,add_temp_14__230_carry__2_i_6_n_0,add_temp_14__230_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair83" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__2_i_1
       (.I0(RESIZE16[13]),
        .I1(add_temp_14__0_carry__2_n_6),
        .I2(add_temp_14__46_carry__2_n_6),
        .O(add_temp_14__230_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair82" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__2_i_2
       (.I0(RESIZE16[12]),
        .I1(add_temp_14__0_carry__2_n_7),
        .I2(add_temp_14__46_carry__2_n_7),
        .O(add_temp_14__230_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair81" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry__2_i_3
       (.I0(RESIZE16[11]),
        .I1(add_temp_14__0_carry__1_n_4),
        .I2(add_temp_14__46_carry__1_n_4),
        .O(add_temp_14__230_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__230_carry__2_i_4
       (.I0(add_temp_14__46_carry__2_n_5),
        .I1(add_temp_14__0_carry__2_n_5),
        .I2(RESIZE16[14]),
        .I3(add_temp_14__0_carry__2_n_4),
        .I4(add_temp_14__46_carry__2_n_4),
        .I5(RESIZE16[15]),
        .O(add_temp_14__230_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__2_i_5
       (.I0(add_temp_14__230_carry__2_i_1_n_0),
        .I1(add_temp_14__0_carry__2_n_5),
        .I2(add_temp_14__46_carry__2_n_5),
        .I3(RESIZE16[14]),
        .O(add_temp_14__230_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair83" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__2_i_6
       (.I0(RESIZE16[13]),
        .I1(add_temp_14__0_carry__2_n_6),
        .I2(add_temp_14__46_carry__2_n_6),
        .I3(add_temp_14__230_carry__2_i_2_n_0),
        .O(add_temp_14__230_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair82" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry__2_i_7
       (.I0(RESIZE16[12]),
        .I1(add_temp_14__0_carry__2_n_7),
        .I2(add_temp_14__46_carry__2_n_7),
        .I3(add_temp_14__230_carry__2_i_3_n_0),
        .O(add_temp_14__230_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair72" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry_i_1
       (.I0(add_temp_14__46_carry_n_5),
        .I1(add_temp_14__0_carry_n_5),
        .I2(RESIZE16[2]),
        .O(add_temp_14__230_carry_i_1_n_0));
  (* HLUTNM = "lutpair71" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry_i_2
       (.I0(add_temp_14__0_carry_n_6),
        .I1(RESIZE16[1]),
        .I2(add_temp_14__46_carry_n_6),
        .O(add_temp_14__230_carry_i_2_n_0));
  (* HLUTNM = "lutpair70" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__230_carry_i_3
       (.I0(add_temp_14__46_carry_n_7),
        .I1(add_temp_14__0_carry_n_7),
        .I2(RESIZE16[0]),
        .O(add_temp_14__230_carry_i_3_n_0));
  (* HLUTNM = "lutpair73" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry_i_4
       (.I0(add_temp_14__0_carry_n_4),
        .I1(add_temp_14__46_carry_n_4),
        .I2(RESIZE16[3]),
        .I3(add_temp_14__230_carry_i_1_n_0),
        .O(add_temp_14__230_carry_i_4_n_0));
  (* HLUTNM = "lutpair72" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry_i_5
       (.I0(add_temp_14__46_carry_n_5),
        .I1(add_temp_14__0_carry_n_5),
        .I2(RESIZE16[2]),
        .I3(add_temp_14__230_carry_i_2_n_0),
        .O(add_temp_14__230_carry_i_5_n_0));
  (* HLUTNM = "lutpair71" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__230_carry_i_6
       (.I0(add_temp_14__0_carry_n_6),
        .I1(RESIZE16[1]),
        .I2(add_temp_14__46_carry_n_6),
        .I3(add_temp_14__230_carry_i_3_n_0),
        .O(add_temp_14__230_carry_i_6_n_0));
  (* HLUTNM = "lutpair70" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__230_carry_i_7
       (.I0(add_temp_14__46_carry_n_7),
        .I1(add_temp_14__0_carry_n_7),
        .I2(RESIZE16[0]),
        .O(add_temp_14__230_carry_i_7_n_0));
  CARRY4 add_temp_14__278_carry
       (.CI(1'b0),
        .CO({add_temp_14__278_carry_n_0,add_temp_14__278_carry_n_1,add_temp_14__278_carry_n_2,add_temp_14__278_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__278_carry_i_1_n_0,add_temp_14__278_carry_i_2_n_0,add_temp_14__278_carry_i_3_n_0,add_temp_14__92_carry_n_7}),
        .O(filter_sum[3:0]),
        .S({add_temp_14__278_carry_i_4_n_0,add_temp_14__278_carry_i_5_n_0,add_temp_14__278_carry_i_6_n_0,add_temp_14__278_carry_i_7_n_0}));
  CARRY4 add_temp_14__278_carry__0
       (.CI(add_temp_14__278_carry_n_0),
        .CO({add_temp_14__278_carry__0_n_0,add_temp_14__278_carry__0_n_1,add_temp_14__278_carry__0_n_2,add_temp_14__278_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__278_carry__0_i_1_n_0,add_temp_14__278_carry__0_i_2_n_0,add_temp_14__278_carry__0_i_3_n_0,add_temp_14__278_carry__0_i_4_n_0}),
        .O(filter_sum[7:4]),
        .S({add_temp_14__278_carry__0_i_5_n_0,add_temp_14__278_carry__0_i_6_n_0,add_temp_14__278_carry__0_i_7_n_0,add_temp_14__278_carry__0_i_8_n_0}));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__0_i_1
       (.I0(add_temp_14__138_carry__0_n_5),
        .I1(add_temp_14__230_carry__0_n_5),
        .I2(add_temp_14__184_carry__0_n_5),
        .I3(add_temp_14__278_carry__0_i_9_n_0),
        .I4(add_temp_14__92_carry__0_n_5),
        .O(add_temp_14__278_carry__0_i_1_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__0_i_10
       (.I0(add_temp_14__230_carry__0_n_7),
        .I1(add_temp_14__184_carry__0_n_7),
        .I2(add_temp_14__138_carry__0_n_7),
        .O(add_temp_14__278_carry__0_i_10_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__0_i_11
       (.I0(add_temp_14__230_carry_n_4),
        .I1(add_temp_14__184_carry_n_4),
        .I2(add_temp_14__138_carry_n_4),
        .O(add_temp_14__278_carry__0_i_11_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__278_carry__0_i_12
       (.I0(add_temp_14__138_carry__0_n_4),
        .I1(add_temp_14__230_carry__0_n_4),
        .I2(add_temp_14__184_carry__0_n_4),
        .O(add_temp_14__278_carry__0_i_12_n_0));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__0_i_2
       (.I0(add_temp_14__138_carry__0_n_6),
        .I1(add_temp_14__230_carry__0_n_6),
        .I2(add_temp_14__184_carry__0_n_6),
        .I3(add_temp_14__278_carry__0_i_10_n_0),
        .I4(add_temp_14__92_carry__0_n_6),
        .O(add_temp_14__278_carry__0_i_2_n_0));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__0_i_3
       (.I0(add_temp_14__138_carry__0_n_7),
        .I1(add_temp_14__230_carry__0_n_7),
        .I2(add_temp_14__184_carry__0_n_7),
        .I3(add_temp_14__278_carry__0_i_11_n_0),
        .I4(add_temp_14__92_carry__0_n_7),
        .O(add_temp_14__278_carry__0_i_3_n_0));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__0_i_4
       (.I0(add_temp_14__138_carry_n_4),
        .I1(add_temp_14__230_carry_n_4),
        .I2(add_temp_14__184_carry_n_4),
        .I3(add_temp_14__278_carry_i_9_n_0),
        .I4(add_temp_14__92_carry_n_4),
        .O(add_temp_14__278_carry__0_i_4_n_0));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    add_temp_14__278_carry__0_i_5
       (.I0(add_temp_14__278_carry__0_i_1_n_0),
        .I1(add_temp_14__278_carry__0_i_12_n_0),
        .I2(add_temp_14__92_carry__0_n_4),
        .I3(add_temp_14__138_carry__0_n_5),
        .I4(add_temp_14__184_carry__0_n_5),
        .I5(add_temp_14__230_carry__0_n_5),
        .O(add_temp_14__278_carry__0_i_5_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__0_i_6
       (.I0(add_temp_14__278_carry__0_i_2_n_0),
        .I1(add_temp_14__184_carry__0_n_5),
        .I2(add_temp_14__230_carry__0_n_5),
        .I3(add_temp_14__138_carry__0_n_5),
        .I4(add_temp_14__92_carry__0_n_5),
        .I5(add_temp_14__278_carry__0_i_9_n_0),
        .O(add_temp_14__278_carry__0_i_6_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__0_i_7
       (.I0(add_temp_14__278_carry__0_i_3_n_0),
        .I1(add_temp_14__184_carry__0_n_6),
        .I2(add_temp_14__230_carry__0_n_6),
        .I3(add_temp_14__138_carry__0_n_6),
        .I4(add_temp_14__92_carry__0_n_6),
        .I5(add_temp_14__278_carry__0_i_10_n_0),
        .O(add_temp_14__278_carry__0_i_7_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__0_i_8
       (.I0(add_temp_14__278_carry__0_i_4_n_0),
        .I1(add_temp_14__184_carry__0_n_7),
        .I2(add_temp_14__230_carry__0_n_7),
        .I3(add_temp_14__138_carry__0_n_7),
        .I4(add_temp_14__92_carry__0_n_7),
        .I5(add_temp_14__278_carry__0_i_11_n_0),
        .O(add_temp_14__278_carry__0_i_8_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__0_i_9
       (.I0(add_temp_14__138_carry__0_n_6),
        .I1(add_temp_14__184_carry__0_n_6),
        .I2(add_temp_14__230_carry__0_n_6),
        .O(add_temp_14__278_carry__0_i_9_n_0));
  CARRY4 add_temp_14__278_carry__1
       (.CI(add_temp_14__278_carry__0_n_0),
        .CO({add_temp_14__278_carry__1_n_0,add_temp_14__278_carry__1_n_1,add_temp_14__278_carry__1_n_2,add_temp_14__278_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__278_carry__1_i_1_n_0,add_temp_14__278_carry__1_i_2_n_0,add_temp_14__278_carry__1_i_3_n_0,add_temp_14__278_carry__1_i_4_n_0}),
        .O(filter_sum[11:8]),
        .S({add_temp_14__278_carry__1_i_5_n_0,add_temp_14__278_carry__1_i_6_n_0,add_temp_14__278_carry__1_i_7_n_0,add_temp_14__278_carry__1_i_8_n_0}));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__1_i_1
       (.I0(add_temp_14__138_carry__1_n_5),
        .I1(add_temp_14__230_carry__1_n_5),
        .I2(add_temp_14__184_carry__1_n_5),
        .I3(add_temp_14__278_carry__1_i_9_n_0),
        .I4(add_temp_14__92_carry__1_n_5),
        .O(add_temp_14__278_carry__1_i_1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__1_i_10
       (.I0(add_temp_14__184_carry__1_n_7),
        .I1(add_temp_14__138_carry__1_n_7),
        .I2(add_temp_14__230_carry__1_n_7),
        .O(add_temp_14__278_carry__1_i_10_n_0));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__278_carry__1_i_11
       (.I0(add_temp_14__138_carry__1_n_7),
        .I1(add_temp_14__230_carry__1_n_7),
        .I2(add_temp_14__184_carry__1_n_7),
        .O(add_temp_14__278_carry__1_i_11_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__278_carry__1_i_12
       (.I0(add_temp_14__138_carry__1_n_4),
        .I1(add_temp_14__230_carry__1_n_4),
        .I2(add_temp_14__184_carry__1_n_4),
        .O(add_temp_14__278_carry__1_i_12_n_0));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__1_i_2
       (.I0(add_temp_14__138_carry__1_n_6),
        .I1(add_temp_14__230_carry__1_n_6),
        .I2(add_temp_14__184_carry__1_n_6),
        .I3(add_temp_14__278_carry__1_i_10_n_0),
        .I4(add_temp_14__92_carry__1_n_6),
        .O(add_temp_14__278_carry__1_i_2_n_0));
  LUT5 #(
    .INIT(32'hFEEAA880)) 
    add_temp_14__278_carry__1_i_3
       (.I0(add_temp_14__92_carry__1_n_7),
        .I1(add_temp_14__138_carry__0_n_4),
        .I2(add_temp_14__184_carry__0_n_4),
        .I3(add_temp_14__230_carry__0_n_4),
        .I4(add_temp_14__278_carry__1_i_11_n_0),
        .O(add_temp_14__278_carry__1_i_3_n_0));
  LUT5 #(
    .INIT(32'hFEEAA880)) 
    add_temp_14__278_carry__1_i_4
       (.I0(add_temp_14__92_carry__0_n_4),
        .I1(add_temp_14__230_carry__0_n_5),
        .I2(add_temp_14__184_carry__0_n_5),
        .I3(add_temp_14__138_carry__0_n_5),
        .I4(add_temp_14__278_carry__0_i_12_n_0),
        .O(add_temp_14__278_carry__1_i_4_n_0));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    add_temp_14__278_carry__1_i_5
       (.I0(add_temp_14__278_carry__1_i_1_n_0),
        .I1(add_temp_14__278_carry__1_i_12_n_0),
        .I2(add_temp_14__92_carry__1_n_4),
        .I3(add_temp_14__230_carry__1_n_5),
        .I4(add_temp_14__184_carry__1_n_5),
        .I5(add_temp_14__138_carry__1_n_5),
        .O(add_temp_14__278_carry__1_i_5_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__1_i_6
       (.I0(add_temp_14__278_carry__1_i_2_n_0),
        .I1(add_temp_14__184_carry__1_n_5),
        .I2(add_temp_14__230_carry__1_n_5),
        .I3(add_temp_14__138_carry__1_n_5),
        .I4(add_temp_14__92_carry__1_n_5),
        .I5(add_temp_14__278_carry__1_i_9_n_0),
        .O(add_temp_14__278_carry__1_i_6_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__1_i_7
       (.I0(add_temp_14__278_carry__1_i_3_n_0),
        .I1(add_temp_14__184_carry__1_n_6),
        .I2(add_temp_14__230_carry__1_n_6),
        .I3(add_temp_14__138_carry__1_n_6),
        .I4(add_temp_14__92_carry__1_n_6),
        .I5(add_temp_14__278_carry__1_i_10_n_0),
        .O(add_temp_14__278_carry__1_i_7_n_0));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    add_temp_14__278_carry__1_i_8
       (.I0(add_temp_14__278_carry__1_i_4_n_0),
        .I1(add_temp_14__278_carry__1_i_11_n_0),
        .I2(add_temp_14__92_carry__1_n_7),
        .I3(add_temp_14__230_carry__0_n_4),
        .I4(add_temp_14__184_carry__0_n_4),
        .I5(add_temp_14__138_carry__0_n_4),
        .O(add_temp_14__278_carry__1_i_8_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__1_i_9
       (.I0(add_temp_14__184_carry__1_n_6),
        .I1(add_temp_14__230_carry__1_n_6),
        .I2(add_temp_14__138_carry__1_n_6),
        .O(add_temp_14__278_carry__1_i_9_n_0));
  CARRY4 add_temp_14__278_carry__2
       (.CI(add_temp_14__278_carry__1_n_0),
        .CO({NLW_add_temp_14__278_carry__2_CO_UNCONNECTED[3],add_temp_14__278_carry__2_n_1,add_temp_14__278_carry__2_n_2,add_temp_14__278_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__278_carry__2_i_1_n_0,add_temp_14__278_carry__2_i_2_n_0,add_temp_14__278_carry__2_i_3_n_0}),
        .O(filter_sum[15:12]),
        .S({add_temp_14__278_carry__2_i_4_n_0,add_temp_14__278_carry__2_i_5_n_0,add_temp_14__278_carry__2_i_6_n_0,add_temp_14__278_carry__2_i_7_n_0}));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry__2_i_1
       (.I0(add_temp_14__138_carry__2_n_6),
        .I1(add_temp_14__230_carry__2_n_6),
        .I2(add_temp_14__184_carry__2_n_6),
        .I3(add_temp_14__278_carry__2_i_8_n_0),
        .I4(add_temp_14__92_carry__2_n_6),
        .O(add_temp_14__278_carry__2_i_1_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__2_i_10
       (.I0(add_temp_14__184_carry__2_n_6),
        .I1(add_temp_14__230_carry__2_n_6),
        .I2(add_temp_14__138_carry__2_n_6),
        .O(add_temp_14__278_carry__2_i_10_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__278_carry__2_i_11
       (.I0(add_temp_14__184_carry__2_n_4),
        .I1(add_temp_14__230_carry__2_n_4),
        .I2(add_temp_14__138_carry__2_n_4),
        .I3(add_temp_14__92_carry__2_n_4),
        .O(add_temp_14__278_carry__2_i_11_n_0));
  LUT5 #(
    .INIT(32'hFEEAA880)) 
    add_temp_14__278_carry__2_i_2
       (.I0(add_temp_14__92_carry__2_n_7),
        .I1(add_temp_14__138_carry__1_n_4),
        .I2(add_temp_14__184_carry__1_n_4),
        .I3(add_temp_14__230_carry__1_n_4),
        .I4(add_temp_14__278_carry__2_i_9_n_0),
        .O(add_temp_14__278_carry__2_i_2_n_0));
  LUT5 #(
    .INIT(32'hFEEAA880)) 
    add_temp_14__278_carry__2_i_3
       (.I0(add_temp_14__92_carry__1_n_4),
        .I1(add_temp_14__138_carry__1_n_5),
        .I2(add_temp_14__184_carry__1_n_5),
        .I3(add_temp_14__230_carry__1_n_5),
        .I4(add_temp_14__278_carry__1_i_12_n_0),
        .O(add_temp_14__278_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'hE187871E871E1E78)) 
    add_temp_14__278_carry__2_i_4
       (.I0(add_temp_14__92_carry__2_n_5),
        .I1(add_temp_14__278_carry__2_i_10_n_0),
        .I2(add_temp_14__278_carry__2_i_11_n_0),
        .I3(add_temp_14__138_carry__2_n_5),
        .I4(add_temp_14__184_carry__2_n_5),
        .I5(add_temp_14__230_carry__2_n_5),
        .O(add_temp_14__278_carry__2_i_4_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__2_i_5
       (.I0(add_temp_14__278_carry__2_i_1_n_0),
        .I1(add_temp_14__184_carry__2_n_5),
        .I2(add_temp_14__230_carry__2_n_5),
        .I3(add_temp_14__138_carry__2_n_5),
        .I4(add_temp_14__92_carry__2_n_5),
        .I5(add_temp_14__278_carry__2_i_10_n_0),
        .O(add_temp_14__278_carry__2_i_5_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry__2_i_6
       (.I0(add_temp_14__278_carry__2_i_2_n_0),
        .I1(add_temp_14__184_carry__2_n_6),
        .I2(add_temp_14__230_carry__2_n_6),
        .I3(add_temp_14__138_carry__2_n_6),
        .I4(add_temp_14__92_carry__2_n_6),
        .I5(add_temp_14__278_carry__2_i_8_n_0),
        .O(add_temp_14__278_carry__2_i_6_n_0));
  LUT6 #(
    .INIT(64'h6969699669969696)) 
    add_temp_14__278_carry__2_i_7
       (.I0(add_temp_14__278_carry__2_i_3_n_0),
        .I1(add_temp_14__278_carry__2_i_9_n_0),
        .I2(add_temp_14__92_carry__2_n_7),
        .I3(add_temp_14__230_carry__1_n_4),
        .I4(add_temp_14__184_carry__1_n_4),
        .I5(add_temp_14__138_carry__1_n_4),
        .O(add_temp_14__278_carry__2_i_7_n_0));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry__2_i_8
       (.I0(add_temp_14__184_carry__2_n_7),
        .I1(add_temp_14__138_carry__2_n_7),
        .I2(add_temp_14__230_carry__2_n_7),
        .O(add_temp_14__278_carry__2_i_8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__278_carry__2_i_9
       (.I0(add_temp_14__138_carry__2_n_7),
        .I1(add_temp_14__230_carry__2_n_7),
        .I2(add_temp_14__184_carry__2_n_7),
        .O(add_temp_14__278_carry__2_i_9_n_0));
  LUT5 #(
    .INIT(32'hFF969600)) 
    add_temp_14__278_carry_i_1
       (.I0(add_temp_14__138_carry_n_5),
        .I1(add_temp_14__230_carry_n_5),
        .I2(add_temp_14__184_carry_n_5),
        .I3(add_temp_14__278_carry_i_8_n_0),
        .I4(add_temp_14__92_carry_n_5),
        .O(add_temp_14__278_carry_i_1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__278_carry_i_10
       (.I0(add_temp_14__138_carry_n_5),
        .I1(add_temp_14__230_carry_n_5),
        .I2(add_temp_14__184_carry_n_5),
        .O(add_temp_14__278_carry_i_10_n_0));
  LUT5 #(
    .INIT(32'h96696996)) 
    add_temp_14__278_carry_i_2
       (.I0(add_temp_14__278_carry_i_8_n_0),
        .I1(add_temp_14__92_carry_n_5),
        .I2(add_temp_14__138_carry_n_5),
        .I3(add_temp_14__230_carry_n_5),
        .I4(add_temp_14__184_carry_n_5),
        .O(add_temp_14__278_carry_i_2_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__278_carry_i_3
       (.I0(add_temp_14__184_carry_n_6),
        .I1(add_temp_14__230_carry_n_6),
        .I2(add_temp_14__138_carry_n_6),
        .I3(add_temp_14__92_carry_n_6),
        .O(add_temp_14__278_carry_i_3_n_0));
  LUT6 #(
    .INIT(64'h6996966996696996)) 
    add_temp_14__278_carry_i_4
       (.I0(add_temp_14__278_carry_i_1_n_0),
        .I1(add_temp_14__184_carry_n_4),
        .I2(add_temp_14__230_carry_n_4),
        .I3(add_temp_14__138_carry_n_4),
        .I4(add_temp_14__92_carry_n_4),
        .I5(add_temp_14__278_carry_i_9_n_0),
        .O(add_temp_14__278_carry_i_4_n_0));
  LUT6 #(
    .INIT(64'h6999999699969666)) 
    add_temp_14__278_carry_i_5
       (.I0(add_temp_14__278_carry_i_10_n_0),
        .I1(add_temp_14__92_carry_n_5),
        .I2(add_temp_14__138_carry_n_6),
        .I3(add_temp_14__230_carry_n_6),
        .I4(add_temp_14__184_carry_n_6),
        .I5(add_temp_14__92_carry_n_6),
        .O(add_temp_14__278_carry_i_5_n_0));
  LUT4 #(
    .INIT(16'h566A)) 
    add_temp_14__278_carry_i_6
       (.I0(add_temp_14__278_carry_i_3_n_0),
        .I1(add_temp_14__230_carry_n_7),
        .I2(add_temp_14__184_carry_n_7),
        .I3(add_temp_14__138_carry_n_7),
        .O(add_temp_14__278_carry_i_6_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__278_carry_i_7
       (.I0(add_temp_14__184_carry_n_7),
        .I1(add_temp_14__230_carry_n_7),
        .I2(add_temp_14__138_carry_n_7),
        .I3(add_temp_14__92_carry_n_7),
        .O(add_temp_14__278_carry_i_7_n_0));
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry_i_8
       (.I0(add_temp_14__138_carry_n_6),
        .I1(add_temp_14__230_carry_n_6),
        .I2(add_temp_14__184_carry_n_6),
        .O(add_temp_14__278_carry_i_8_n_0));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__278_carry_i_9
       (.I0(add_temp_14__184_carry_n_5),
        .I1(add_temp_14__138_carry_n_5),
        .I2(add_temp_14__230_carry_n_5),
        .O(add_temp_14__278_carry_i_9_n_0));
  CARRY4 add_temp_14__46_carry
       (.CI(1'b0),
        .CO({add_temp_14__46_carry_n_0,add_temp_14__46_carry_n_1,add_temp_14__46_carry_n_2,add_temp_14__46_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__46_carry_i_1_n_0,add_temp_14__46_carry_i_2_n_0,add_temp_14__46_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__46_carry_n_4,add_temp_14__46_carry_n_5,add_temp_14__46_carry_n_6,add_temp_14__46_carry_n_7}),
        .S({add_temp_14__46_carry_i_4_n_0,add_temp_14__46_carry_i_5_n_0,add_temp_14__46_carry_i_6_n_0,add_temp_14__46_carry_i_7_n_0}));
  CARRY4 add_temp_14__46_carry__0
       (.CI(add_temp_14__46_carry_n_0),
        .CO({add_temp_14__46_carry__0_n_0,add_temp_14__46_carry__0_n_1,add_temp_14__46_carry__0_n_2,add_temp_14__46_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__46_carry__0_i_1_n_0,add_temp_14__46_carry__0_i_2_n_0,add_temp_14__46_carry__0_i_3_n_0,add_temp_14__46_carry__0_i_4_n_0}),
        .O({add_temp_14__46_carry__0_n_4,add_temp_14__46_carry__0_n_5,add_temp_14__46_carry__0_n_6,add_temp_14__46_carry__0_n_7}),
        .S({add_temp_14__46_carry__0_i_5_n_0,add_temp_14__46_carry__0_i_6_n_0,add_temp_14__46_carry__0_i_7_n_0,add_temp_14__46_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair20" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__0_i_1
       (.I0(RESIZE38[6]),
        .I1(RESIZE40[6]),
        .I2(RESIZE36[6]),
        .O(add_temp_14__46_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair19" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__0_i_2
       (.I0(RESIZE38[5]),
        .I1(RESIZE40[5]),
        .I2(RESIZE36[5]),
        .O(add_temp_14__46_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair18" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__0_i_3
       (.I0(RESIZE38[4]),
        .I1(RESIZE40[4]),
        .I2(RESIZE36[4]),
        .O(add_temp_14__46_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair17" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__0_i_4
       (.I0(RESIZE38[3]),
        .I1(RESIZE40[3]),
        .I2(RESIZE36[3]),
        .O(add_temp_14__46_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair21" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__0_i_5
       (.I0(RESIZE38[7]),
        .I1(RESIZE40[7]),
        .I2(RESIZE36[7]),
        .I3(add_temp_14__46_carry__0_i_1_n_0),
        .O(add_temp_14__46_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair20" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__0_i_6
       (.I0(RESIZE38[6]),
        .I1(RESIZE40[6]),
        .I2(RESIZE36[6]),
        .I3(add_temp_14__46_carry__0_i_2_n_0),
        .O(add_temp_14__46_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair19" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__0_i_7
       (.I0(RESIZE38[5]),
        .I1(RESIZE40[5]),
        .I2(RESIZE36[5]),
        .I3(add_temp_14__46_carry__0_i_3_n_0),
        .O(add_temp_14__46_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair18" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__0_i_8
       (.I0(RESIZE38[4]),
        .I1(RESIZE40[4]),
        .I2(RESIZE36[4]),
        .I3(add_temp_14__46_carry__0_i_4_n_0),
        .O(add_temp_14__46_carry__0_i_8_n_0));
  CARRY4 add_temp_14__46_carry__1
       (.CI(add_temp_14__46_carry__0_n_0),
        .CO({add_temp_14__46_carry__1_n_0,add_temp_14__46_carry__1_n_1,add_temp_14__46_carry__1_n_2,add_temp_14__46_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__46_carry__1_i_1_n_0,add_temp_14__46_carry__1_i_2_n_0,add_temp_14__46_carry__1_i_3_n_0,add_temp_14__46_carry__1_i_4_n_0}),
        .O({add_temp_14__46_carry__1_n_4,add_temp_14__46_carry__1_n_5,add_temp_14__46_carry__1_n_6,add_temp_14__46_carry__1_n_7}),
        .S({add_temp_14__46_carry__1_i_5_n_0,add_temp_14__46_carry__1_i_6_n_0,add_temp_14__46_carry__1_i_7_n_0,add_temp_14__46_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair24" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__1_i_1
       (.I0(RESIZE40[10]),
        .I1(RESIZE36[10]),
        .I2(RESIZE38[10]),
        .O(add_temp_14__46_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair23" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__1_i_2
       (.I0(RESIZE38[9]),
        .I1(RESIZE40[9]),
        .I2(RESIZE36[9]),
        .O(add_temp_14__46_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair22" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__1_i_3
       (.I0(RESIZE38[8]),
        .I1(RESIZE40[8]),
        .I2(RESIZE36[8]),
        .O(add_temp_14__46_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair21" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__1_i_4
       (.I0(RESIZE38[7]),
        .I1(RESIZE40[7]),
        .I2(RESIZE36[7]),
        .O(add_temp_14__46_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair25" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__1_i_5
       (.I0(RESIZE36[11]),
        .I1(RESIZE38[11]),
        .I2(RESIZE40[11]),
        .I3(add_temp_14__46_carry__1_i_1_n_0),
        .O(add_temp_14__46_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair24" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__1_i_6
       (.I0(RESIZE40[10]),
        .I1(RESIZE36[10]),
        .I2(RESIZE38[10]),
        .I3(add_temp_14__46_carry__1_i_2_n_0),
        .O(add_temp_14__46_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair23" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__1_i_7
       (.I0(RESIZE38[9]),
        .I1(RESIZE40[9]),
        .I2(RESIZE36[9]),
        .I3(add_temp_14__46_carry__1_i_3_n_0),
        .O(add_temp_14__46_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair22" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__1_i_8
       (.I0(RESIZE38[8]),
        .I1(RESIZE40[8]),
        .I2(RESIZE36[8]),
        .I3(add_temp_14__46_carry__1_i_4_n_0),
        .O(add_temp_14__46_carry__1_i_8_n_0));
  CARRY4 add_temp_14__46_carry__2
       (.CI(add_temp_14__46_carry__1_n_0),
        .CO({NLW_add_temp_14__46_carry__2_CO_UNCONNECTED[3],add_temp_14__46_carry__2_n_1,add_temp_14__46_carry__2_n_2,add_temp_14__46_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__46_carry__2_i_1_n_0,add_temp_14__46_carry__2_i_2_n_0,add_temp_14__46_carry__2_i_3_n_0}),
        .O({add_temp_14__46_carry__2_n_4,add_temp_14__46_carry__2_n_5,add_temp_14__46_carry__2_n_6,add_temp_14__46_carry__2_n_7}),
        .S({add_temp_14__46_carry__2_i_4_n_0,add_temp_14__46_carry__2_i_5_n_0,add_temp_14__46_carry__2_i_6_n_0,add_temp_14__46_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair27" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__2_i_1
       (.I0(RESIZE36[13]),
        .I1(RESIZE38[13]),
        .I2(RESIZE40[13]),
        .O(add_temp_14__46_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair26" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__2_i_2
       (.I0(RESIZE36[12]),
        .I1(RESIZE38[12]),
        .I2(RESIZE40[12]),
        .O(add_temp_14__46_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair25" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry__2_i_3
       (.I0(RESIZE36[11]),
        .I1(RESIZE38[11]),
        .I2(RESIZE40[11]),
        .O(add_temp_14__46_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__46_carry__2_i_4
       (.I0(RESIZE40[14]),
        .I1(RESIZE38[14]),
        .I2(RESIZE36[14]),
        .I3(RESIZE38[15]),
        .I4(RESIZE36[15]),
        .I5(RESIZE40[15]),
        .O(add_temp_14__46_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__2_i_5
       (.I0(add_temp_14__46_carry__2_i_1_n_0),
        .I1(RESIZE38[14]),
        .I2(RESIZE36[14]),
        .I3(RESIZE40[14]),
        .O(add_temp_14__46_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair27" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__2_i_6
       (.I0(RESIZE36[13]),
        .I1(RESIZE38[13]),
        .I2(RESIZE40[13]),
        .I3(add_temp_14__46_carry__2_i_2_n_0),
        .O(add_temp_14__46_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair26" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry__2_i_7
       (.I0(RESIZE36[12]),
        .I1(RESIZE38[12]),
        .I2(RESIZE40[12]),
        .I3(add_temp_14__46_carry__2_i_3_n_0),
        .O(add_temp_14__46_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair16" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry_i_1
       (.I0(RESIZE38[2]),
        .I1(RESIZE40[2]),
        .I2(RESIZE36[2]),
        .O(add_temp_14__46_carry_i_1_n_0));
  (* HLUTNM = "lutpair15" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry_i_2
       (.I0(RESIZE38[1]),
        .I1(RESIZE40[1]),
        .I2(RESIZE36[1]),
        .O(add_temp_14__46_carry_i_2_n_0));
  (* HLUTNM = "lutpair14" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__46_carry_i_3
       (.I0(RESIZE38[0]),
        .I1(RESIZE40[0]),
        .I2(RESIZE36[0]),
        .O(add_temp_14__46_carry_i_3_n_0));
  (* HLUTNM = "lutpair17" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry_i_4
       (.I0(RESIZE38[3]),
        .I1(RESIZE40[3]),
        .I2(RESIZE36[3]),
        .I3(add_temp_14__46_carry_i_1_n_0),
        .O(add_temp_14__46_carry_i_4_n_0));
  (* HLUTNM = "lutpair16" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry_i_5
       (.I0(RESIZE38[2]),
        .I1(RESIZE40[2]),
        .I2(RESIZE36[2]),
        .I3(add_temp_14__46_carry_i_2_n_0),
        .O(add_temp_14__46_carry_i_5_n_0));
  (* HLUTNM = "lutpair15" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__46_carry_i_6
       (.I0(RESIZE38[1]),
        .I1(RESIZE40[1]),
        .I2(RESIZE36[1]),
        .I3(add_temp_14__46_carry_i_3_n_0),
        .O(add_temp_14__46_carry_i_6_n_0));
  (* HLUTNM = "lutpair14" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__46_carry_i_7
       (.I0(RESIZE38[0]),
        .I1(RESIZE40[0]),
        .I2(RESIZE36[0]),
        .O(add_temp_14__46_carry_i_7_n_0));
  CARRY4 add_temp_14__92_carry
       (.CI(1'b0),
        .CO({add_temp_14__92_carry_n_0,add_temp_14__92_carry_n_1,add_temp_14__92_carry_n_2,add_temp_14__92_carry_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__92_carry_i_1_n_0,add_temp_14__92_carry_i_2_n_0,add_temp_14__92_carry_i_3_n_0,1'b0}),
        .O({add_temp_14__92_carry_n_4,add_temp_14__92_carry_n_5,add_temp_14__92_carry_n_6,add_temp_14__92_carry_n_7}),
        .S({add_temp_14__92_carry_i_4_n_0,add_temp_14__92_carry_i_5_n_0,add_temp_14__92_carry_i_6_n_0,add_temp_14__92_carry_i_7_n_0}));
  CARRY4 add_temp_14__92_carry__0
       (.CI(add_temp_14__92_carry_n_0),
        .CO({add_temp_14__92_carry__0_n_0,add_temp_14__92_carry__0_n_1,add_temp_14__92_carry__0_n_2,add_temp_14__92_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__92_carry__0_i_1_n_0,add_temp_14__92_carry__0_i_2_n_0,add_temp_14__92_carry__0_i_3_n_0,add_temp_14__92_carry__0_i_4_n_0}),
        .O({add_temp_14__92_carry__0_n_4,add_temp_14__92_carry__0_n_5,add_temp_14__92_carry__0_n_6,add_temp_14__92_carry__0_n_7}),
        .S({add_temp_14__92_carry__0_i_5_n_0,add_temp_14__92_carry__0_i_6_n_0,add_temp_14__92_carry__0_i_7_n_0,add_temp_14__92_carry__0_i_8_n_0}));
  (* HLUTNM = "lutpair34" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__0_i_1
       (.I0(RESIZE32[6]),
        .I1(RESIZE34[6]),
        .I2(RESIZE30[6]),
        .O(add_temp_14__92_carry__0_i_1_n_0));
  (* HLUTNM = "lutpair33" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__0_i_2
       (.I0(RESIZE32[5]),
        .I1(RESIZE34[5]),
        .I2(RESIZE30[5]),
        .O(add_temp_14__92_carry__0_i_2_n_0));
  (* HLUTNM = "lutpair32" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__0_i_3
       (.I0(RESIZE32[4]),
        .I1(RESIZE34[4]),
        .I2(RESIZE30[4]),
        .O(add_temp_14__92_carry__0_i_3_n_0));
  (* HLUTNM = "lutpair31" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__0_i_4
       (.I0(RESIZE32[3]),
        .I1(RESIZE34[3]),
        .I2(RESIZE30[3]),
        .O(add_temp_14__92_carry__0_i_4_n_0));
  (* HLUTNM = "lutpair35" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__0_i_5
       (.I0(RESIZE34[7]),
        .I1(RESIZE30[7]),
        .I2(RESIZE32[7]),
        .I3(add_temp_14__92_carry__0_i_1_n_0),
        .O(add_temp_14__92_carry__0_i_5_n_0));
  (* HLUTNM = "lutpair34" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__0_i_6
       (.I0(RESIZE32[6]),
        .I1(RESIZE34[6]),
        .I2(RESIZE30[6]),
        .I3(add_temp_14__92_carry__0_i_2_n_0),
        .O(add_temp_14__92_carry__0_i_6_n_0));
  (* HLUTNM = "lutpair33" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__0_i_7
       (.I0(RESIZE32[5]),
        .I1(RESIZE34[5]),
        .I2(RESIZE30[5]),
        .I3(add_temp_14__92_carry__0_i_3_n_0),
        .O(add_temp_14__92_carry__0_i_7_n_0));
  (* HLUTNM = "lutpair32" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__0_i_8
       (.I0(RESIZE32[4]),
        .I1(RESIZE34[4]),
        .I2(RESIZE30[4]),
        .I3(add_temp_14__92_carry__0_i_4_n_0),
        .O(add_temp_14__92_carry__0_i_8_n_0));
  CARRY4 add_temp_14__92_carry__1
       (.CI(add_temp_14__92_carry__0_n_0),
        .CO({add_temp_14__92_carry__1_n_0,add_temp_14__92_carry__1_n_1,add_temp_14__92_carry__1_n_2,add_temp_14__92_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI({add_temp_14__92_carry__1_i_1_n_0,add_temp_14__92_carry__1_i_2_n_0,add_temp_14__92_carry__1_i_3_n_0,add_temp_14__92_carry__1_i_4_n_0}),
        .O({add_temp_14__92_carry__1_n_4,add_temp_14__92_carry__1_n_5,add_temp_14__92_carry__1_n_6,add_temp_14__92_carry__1_n_7}),
        .S({add_temp_14__92_carry__1_i_5_n_0,add_temp_14__92_carry__1_i_6_n_0,add_temp_14__92_carry__1_i_7_n_0,add_temp_14__92_carry__1_i_8_n_0}));
  (* HLUTNM = "lutpair38" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__1_i_1
       (.I0(RESIZE30[10]),
        .I1(RESIZE32[10]),
        .I2(RESIZE34[10]),
        .O(add_temp_14__92_carry__1_i_1_n_0));
  (* HLUTNM = "lutpair37" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__1_i_2
       (.I0(RESIZE30[9]),
        .I1(RESIZE32[9]),
        .I2(RESIZE34[9]),
        .O(add_temp_14__92_carry__1_i_2_n_0));
  (* HLUTNM = "lutpair36" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__1_i_3
       (.I0(RESIZE30[8]),
        .I1(RESIZE32[8]),
        .I2(RESIZE34[8]),
        .O(add_temp_14__92_carry__1_i_3_n_0));
  (* HLUTNM = "lutpair35" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__1_i_4
       (.I0(RESIZE34[7]),
        .I1(RESIZE30[7]),
        .I2(RESIZE32[7]),
        .O(add_temp_14__92_carry__1_i_4_n_0));
  (* HLUTNM = "lutpair39" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__1_i_5
       (.I0(RESIZE30[11]),
        .I1(RESIZE32[11]),
        .I2(RESIZE34[11]),
        .I3(add_temp_14__92_carry__1_i_1_n_0),
        .O(add_temp_14__92_carry__1_i_5_n_0));
  (* HLUTNM = "lutpair38" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__1_i_6
       (.I0(RESIZE30[10]),
        .I1(RESIZE32[10]),
        .I2(RESIZE34[10]),
        .I3(add_temp_14__92_carry__1_i_2_n_0),
        .O(add_temp_14__92_carry__1_i_6_n_0));
  (* HLUTNM = "lutpair37" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__1_i_7
       (.I0(RESIZE30[9]),
        .I1(RESIZE32[9]),
        .I2(RESIZE34[9]),
        .I3(add_temp_14__92_carry__1_i_3_n_0),
        .O(add_temp_14__92_carry__1_i_7_n_0));
  (* HLUTNM = "lutpair36" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__1_i_8
       (.I0(RESIZE30[8]),
        .I1(RESIZE32[8]),
        .I2(RESIZE34[8]),
        .I3(add_temp_14__92_carry__1_i_4_n_0),
        .O(add_temp_14__92_carry__1_i_8_n_0));
  CARRY4 add_temp_14__92_carry__2
       (.CI(add_temp_14__92_carry__1_n_0),
        .CO({NLW_add_temp_14__92_carry__2_CO_UNCONNECTED[3],add_temp_14__92_carry__2_n_1,add_temp_14__92_carry__2_n_2,add_temp_14__92_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,add_temp_14__92_carry__2_i_1_n_0,add_temp_14__92_carry__2_i_2_n_0,add_temp_14__92_carry__2_i_3_n_0}),
        .O({add_temp_14__92_carry__2_n_4,add_temp_14__92_carry__2_n_5,add_temp_14__92_carry__2_n_6,add_temp_14__92_carry__2_n_7}),
        .S({add_temp_14__92_carry__2_i_4_n_0,add_temp_14__92_carry__2_i_5_n_0,add_temp_14__92_carry__2_i_6_n_0,add_temp_14__92_carry__2_i_7_n_0}));
  (* HLUTNM = "lutpair41" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__2_i_1
       (.I0(RESIZE30[13]),
        .I1(RESIZE32[13]),
        .I2(RESIZE34[13]),
        .O(add_temp_14__92_carry__2_i_1_n_0));
  (* HLUTNM = "lutpair40" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__2_i_2
       (.I0(RESIZE30[12]),
        .I1(RESIZE32[12]),
        .I2(RESIZE34[12]),
        .O(add_temp_14__92_carry__2_i_2_n_0));
  (* HLUTNM = "lutpair39" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry__2_i_3
       (.I0(RESIZE30[11]),
        .I1(RESIZE32[11]),
        .I2(RESIZE34[11]),
        .O(add_temp_14__92_carry__2_i_3_n_0));
  LUT6 #(
    .INIT(64'h17E8E817E81717E8)) 
    add_temp_14__92_carry__2_i_4
       (.I0(RESIZE34[14]),
        .I1(RESIZE32[14]),
        .I2(RESIZE30[14]),
        .I3(RESIZE32[15]),
        .I4(RESIZE30[15]),
        .I5(RESIZE34[15]),
        .O(add_temp_14__92_carry__2_i_4_n_0));
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__2_i_5
       (.I0(add_temp_14__92_carry__2_i_1_n_0),
        .I1(RESIZE32[14]),
        .I2(RESIZE30[14]),
        .I3(RESIZE34[14]),
        .O(add_temp_14__92_carry__2_i_5_n_0));
  (* HLUTNM = "lutpair41" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__2_i_6
       (.I0(RESIZE30[13]),
        .I1(RESIZE32[13]),
        .I2(RESIZE34[13]),
        .I3(add_temp_14__92_carry__2_i_2_n_0),
        .O(add_temp_14__92_carry__2_i_6_n_0));
  (* HLUTNM = "lutpair40" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry__2_i_7
       (.I0(RESIZE30[12]),
        .I1(RESIZE32[12]),
        .I2(RESIZE34[12]),
        .I3(add_temp_14__92_carry__2_i_3_n_0),
        .O(add_temp_14__92_carry__2_i_7_n_0));
  (* HLUTNM = "lutpair30" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry_i_1
       (.I0(RESIZE32[2]),
        .I1(RESIZE34[2]),
        .I2(RESIZE30[2]),
        .O(add_temp_14__92_carry_i_1_n_0));
  (* HLUTNM = "lutpair29" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry_i_2
       (.I0(RESIZE32[1]),
        .I1(RESIZE34[1]),
        .I2(RESIZE30[1]),
        .O(add_temp_14__92_carry_i_2_n_0));
  (* HLUTNM = "lutpair28" *) 
  LUT3 #(
    .INIT(8'hE8)) 
    add_temp_14__92_carry_i_3
       (.I0(RESIZE32[0]),
        .I1(RESIZE34[0]),
        .I2(RESIZE30[0]),
        .O(add_temp_14__92_carry_i_3_n_0));
  (* HLUTNM = "lutpair31" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry_i_4
       (.I0(RESIZE32[3]),
        .I1(RESIZE34[3]),
        .I2(RESIZE30[3]),
        .I3(add_temp_14__92_carry_i_1_n_0),
        .O(add_temp_14__92_carry_i_4_n_0));
  (* HLUTNM = "lutpair30" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry_i_5
       (.I0(RESIZE32[2]),
        .I1(RESIZE34[2]),
        .I2(RESIZE30[2]),
        .I3(add_temp_14__92_carry_i_2_n_0),
        .O(add_temp_14__92_carry_i_5_n_0));
  (* HLUTNM = "lutpair29" *) 
  LUT4 #(
    .INIT(16'h6996)) 
    add_temp_14__92_carry_i_6
       (.I0(RESIZE32[1]),
        .I1(RESIZE34[1]),
        .I2(RESIZE30[1]),
        .I3(add_temp_14__92_carry_i_3_n_0),
        .O(add_temp_14__92_carry_i_6_n_0));
  (* HLUTNM = "lutpair28" *) 
  LUT3 #(
    .INIT(8'h96)) 
    add_temp_14__92_carry_i_7
       (.I0(RESIZE32[0]),
        .I1(RESIZE34[0]),
        .I2(RESIZE30[0]),
        .O(add_temp_14__92_carry_i_7_n_0));
  FDCE \data_pipeline_tmp_reg[0][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [0]),
        .Q(\data_pipeline_tmp_reg[0] [0]));
  FDCE \data_pipeline_tmp_reg[0][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [10]),
        .Q(\data_pipeline_tmp_reg[0] [10]));
  FDCE \data_pipeline_tmp_reg[0][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [11]),
        .Q(\data_pipeline_tmp_reg[0] [11]));
  FDCE \data_pipeline_tmp_reg[0][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [12]),
        .Q(\data_pipeline_tmp_reg[0] [12]));
  FDCE \data_pipeline_tmp_reg[0][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [13]),
        .Q(\data_pipeline_tmp_reg[0] [13]));
  FDCE \data_pipeline_tmp_reg[0][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [14]),
        .Q(\data_pipeline_tmp_reg[0] [14]));
  FDCE \data_pipeline_tmp_reg[0][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [15]),
        .Q(\data_pipeline_tmp_reg[0] [15]));
  FDCE \data_pipeline_tmp_reg[0][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [1]),
        .Q(\data_pipeline_tmp_reg[0] [1]));
  FDCE \data_pipeline_tmp_reg[0][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [2]),
        .Q(\data_pipeline_tmp_reg[0] [2]));
  FDCE \data_pipeline_tmp_reg[0][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [3]),
        .Q(\data_pipeline_tmp_reg[0] [3]));
  FDCE \data_pipeline_tmp_reg[0][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [4]),
        .Q(\data_pipeline_tmp_reg[0] [4]));
  FDCE \data_pipeline_tmp_reg[0][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [5]),
        .Q(\data_pipeline_tmp_reg[0] [5]));
  FDCE \data_pipeline_tmp_reg[0][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [6]),
        .Q(\data_pipeline_tmp_reg[0] [6]));
  FDCE \data_pipeline_tmp_reg[0][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [7]),
        .Q(\data_pipeline_tmp_reg[0] [7]));
  FDCE \data_pipeline_tmp_reg[0][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [8]),
        .Q(\data_pipeline_tmp_reg[0] [8]));
  FDCE \data_pipeline_tmp_reg[0][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[1] [9]),
        .Q(\data_pipeline_tmp_reg[0] [9]));
  FDCE \data_pipeline_tmp_reg[10][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [0]),
        .Q(\data_pipeline_tmp_reg[10] [0]));
  FDCE \data_pipeline_tmp_reg[10][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [10]),
        .Q(\data_pipeline_tmp_reg[10] [10]));
  FDCE \data_pipeline_tmp_reg[10][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [11]),
        .Q(\data_pipeline_tmp_reg[10] [11]));
  FDCE \data_pipeline_tmp_reg[10][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [12]),
        .Q(\data_pipeline_tmp_reg[10] [12]));
  FDCE \data_pipeline_tmp_reg[10][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [13]),
        .Q(\data_pipeline_tmp_reg[10] [13]));
  FDCE \data_pipeline_tmp_reg[10][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [14]),
        .Q(\data_pipeline_tmp_reg[10] [14]));
  FDCE \data_pipeline_tmp_reg[10][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [15]),
        .Q(\data_pipeline_tmp_reg[10] [15]));
  FDCE \data_pipeline_tmp_reg[10][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [1]),
        .Q(\data_pipeline_tmp_reg[10] [1]));
  FDCE \data_pipeline_tmp_reg[10][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [2]),
        .Q(\data_pipeline_tmp_reg[10] [2]));
  FDCE \data_pipeline_tmp_reg[10][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [3]),
        .Q(\data_pipeline_tmp_reg[10] [3]));
  FDCE \data_pipeline_tmp_reg[10][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [4]),
        .Q(\data_pipeline_tmp_reg[10] [4]));
  FDCE \data_pipeline_tmp_reg[10][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [5]),
        .Q(\data_pipeline_tmp_reg[10] [5]));
  FDCE \data_pipeline_tmp_reg[10][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [6]),
        .Q(\data_pipeline_tmp_reg[10] [6]));
  FDCE \data_pipeline_tmp_reg[10][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [7]),
        .Q(\data_pipeline_tmp_reg[10] [7]));
  FDCE \data_pipeline_tmp_reg[10][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [8]),
        .Q(\data_pipeline_tmp_reg[10] [8]));
  FDCE \data_pipeline_tmp_reg[10][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[11] [9]),
        .Q(\data_pipeline_tmp_reg[10] [9]));
  FDCE \data_pipeline_tmp_reg[11][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [0]),
        .Q(\data_pipeline_tmp_reg[11] [0]));
  FDCE \data_pipeline_tmp_reg[11][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [10]),
        .Q(\data_pipeline_tmp_reg[11] [10]));
  FDCE \data_pipeline_tmp_reg[11][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [11]),
        .Q(\data_pipeline_tmp_reg[11] [11]));
  FDCE \data_pipeline_tmp_reg[11][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [12]),
        .Q(\data_pipeline_tmp_reg[11] [12]));
  FDCE \data_pipeline_tmp_reg[11][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [13]),
        .Q(\data_pipeline_tmp_reg[11] [13]));
  FDCE \data_pipeline_tmp_reg[11][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [14]),
        .Q(\data_pipeline_tmp_reg[11] [14]));
  FDCE \data_pipeline_tmp_reg[11][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [15]),
        .Q(\data_pipeline_tmp_reg[11] [15]));
  FDCE \data_pipeline_tmp_reg[11][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [1]),
        .Q(\data_pipeline_tmp_reg[11] [1]));
  FDCE \data_pipeline_tmp_reg[11][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [2]),
        .Q(\data_pipeline_tmp_reg[11] [2]));
  FDCE \data_pipeline_tmp_reg[11][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [3]),
        .Q(\data_pipeline_tmp_reg[11] [3]));
  FDCE \data_pipeline_tmp_reg[11][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [4]),
        .Q(\data_pipeline_tmp_reg[11] [4]));
  FDCE \data_pipeline_tmp_reg[11][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [5]),
        .Q(\data_pipeline_tmp_reg[11] [5]));
  FDCE \data_pipeline_tmp_reg[11][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [6]),
        .Q(\data_pipeline_tmp_reg[11] [6]));
  FDCE \data_pipeline_tmp_reg[11][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [7]),
        .Q(\data_pipeline_tmp_reg[11] [7]));
  FDCE \data_pipeline_tmp_reg[11][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [8]),
        .Q(\data_pipeline_tmp_reg[11] [8]));
  FDCE \data_pipeline_tmp_reg[11][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[12] [9]),
        .Q(\data_pipeline_tmp_reg[11] [9]));
  FDCE \data_pipeline_tmp_reg[12][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [0]),
        .Q(\data_pipeline_tmp_reg[12] [0]));
  FDCE \data_pipeline_tmp_reg[12][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [10]),
        .Q(\data_pipeline_tmp_reg[12] [10]));
  FDCE \data_pipeline_tmp_reg[12][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [11]),
        .Q(\data_pipeline_tmp_reg[12] [11]));
  FDCE \data_pipeline_tmp_reg[12][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [12]),
        .Q(\data_pipeline_tmp_reg[12] [12]));
  FDCE \data_pipeline_tmp_reg[12][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [13]),
        .Q(\data_pipeline_tmp_reg[12] [13]));
  FDCE \data_pipeline_tmp_reg[12][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [14]),
        .Q(\data_pipeline_tmp_reg[12] [14]));
  FDCE \data_pipeline_tmp_reg[12][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [15]),
        .Q(\data_pipeline_tmp_reg[12] [15]));
  FDCE \data_pipeline_tmp_reg[12][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [1]),
        .Q(\data_pipeline_tmp_reg[12] [1]));
  FDCE \data_pipeline_tmp_reg[12][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [2]),
        .Q(\data_pipeline_tmp_reg[12] [2]));
  FDCE \data_pipeline_tmp_reg[12][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [3]),
        .Q(\data_pipeline_tmp_reg[12] [3]));
  FDCE \data_pipeline_tmp_reg[12][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [4]),
        .Q(\data_pipeline_tmp_reg[12] [4]));
  FDCE \data_pipeline_tmp_reg[12][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [5]),
        .Q(\data_pipeline_tmp_reg[12] [5]));
  FDCE \data_pipeline_tmp_reg[12][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [6]),
        .Q(\data_pipeline_tmp_reg[12] [6]));
  FDCE \data_pipeline_tmp_reg[12][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [7]),
        .Q(\data_pipeline_tmp_reg[12] [7]));
  FDCE \data_pipeline_tmp_reg[12][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [8]),
        .Q(\data_pipeline_tmp_reg[12] [8]));
  FDCE \data_pipeline_tmp_reg[12][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[13] [9]),
        .Q(\data_pipeline_tmp_reg[12] [9]));
  FDCE \data_pipeline_tmp_reg[13][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [0]),
        .Q(\data_pipeline_tmp_reg[13] [0]));
  FDCE \data_pipeline_tmp_reg[13][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [10]),
        .Q(\data_pipeline_tmp_reg[13] [10]));
  FDCE \data_pipeline_tmp_reg[13][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [11]),
        .Q(\data_pipeline_tmp_reg[13] [11]));
  FDCE \data_pipeline_tmp_reg[13][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [12]),
        .Q(\data_pipeline_tmp_reg[13] [12]));
  FDCE \data_pipeline_tmp_reg[13][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [13]),
        .Q(\data_pipeline_tmp_reg[13] [13]));
  FDCE \data_pipeline_tmp_reg[13][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [14]),
        .Q(\data_pipeline_tmp_reg[13] [14]));
  FDCE \data_pipeline_tmp_reg[13][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [15]),
        .Q(\data_pipeline_tmp_reg[13] [15]));
  FDCE \data_pipeline_tmp_reg[13][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [1]),
        .Q(\data_pipeline_tmp_reg[13] [1]));
  FDCE \data_pipeline_tmp_reg[13][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [2]),
        .Q(\data_pipeline_tmp_reg[13] [2]));
  FDCE \data_pipeline_tmp_reg[13][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [3]),
        .Q(\data_pipeline_tmp_reg[13] [3]));
  FDCE \data_pipeline_tmp_reg[13][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [4]),
        .Q(\data_pipeline_tmp_reg[13] [4]));
  FDCE \data_pipeline_tmp_reg[13][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [5]),
        .Q(\data_pipeline_tmp_reg[13] [5]));
  FDCE \data_pipeline_tmp_reg[13][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [6]),
        .Q(\data_pipeline_tmp_reg[13] [6]));
  FDCE \data_pipeline_tmp_reg[13][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [7]),
        .Q(\data_pipeline_tmp_reg[13] [7]));
  FDCE \data_pipeline_tmp_reg[13][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [8]),
        .Q(\data_pipeline_tmp_reg[13] [8]));
  FDCE \data_pipeline_tmp_reg[13][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[14] [9]),
        .Q(\data_pipeline_tmp_reg[13] [9]));
  FDCE \data_pipeline_tmp_reg[14][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [0]),
        .Q(\data_pipeline_tmp_reg[14] [0]));
  FDCE \data_pipeline_tmp_reg[14][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [10]),
        .Q(\data_pipeline_tmp_reg[14] [10]));
  FDCE \data_pipeline_tmp_reg[14][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [11]),
        .Q(\data_pipeline_tmp_reg[14] [11]));
  FDCE \data_pipeline_tmp_reg[14][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [12]),
        .Q(\data_pipeline_tmp_reg[14] [12]));
  FDCE \data_pipeline_tmp_reg[14][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [13]),
        .Q(\data_pipeline_tmp_reg[14] [13]));
  FDCE \data_pipeline_tmp_reg[14][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [14]),
        .Q(\data_pipeline_tmp_reg[14] [14]));
  FDCE \data_pipeline_tmp_reg[14][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [15]),
        .Q(\data_pipeline_tmp_reg[14] [15]));
  FDCE \data_pipeline_tmp_reg[14][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [1]),
        .Q(\data_pipeline_tmp_reg[14] [1]));
  FDCE \data_pipeline_tmp_reg[14][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [2]),
        .Q(\data_pipeline_tmp_reg[14] [2]));
  FDCE \data_pipeline_tmp_reg[14][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [3]),
        .Q(\data_pipeline_tmp_reg[14] [3]));
  FDCE \data_pipeline_tmp_reg[14][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [4]),
        .Q(\data_pipeline_tmp_reg[14] [4]));
  FDCE \data_pipeline_tmp_reg[14][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [5]),
        .Q(\data_pipeline_tmp_reg[14] [5]));
  FDCE \data_pipeline_tmp_reg[14][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [6]),
        .Q(\data_pipeline_tmp_reg[14] [6]));
  FDCE \data_pipeline_tmp_reg[14][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [7]),
        .Q(\data_pipeline_tmp_reg[14] [7]));
  FDCE \data_pipeline_tmp_reg[14][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [8]),
        .Q(\data_pipeline_tmp_reg[14] [8]));
  FDCE \data_pipeline_tmp_reg[14][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\write_reg_x_k_reg[15] [9]),
        .Q(\data_pipeline_tmp_reg[14] [9]));
  FDCE \data_pipeline_tmp_reg[1][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [0]),
        .Q(\data_pipeline_tmp_reg[1] [0]));
  FDCE \data_pipeline_tmp_reg[1][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [10]),
        .Q(\data_pipeline_tmp_reg[1] [10]));
  FDCE \data_pipeline_tmp_reg[1][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [11]),
        .Q(\data_pipeline_tmp_reg[1] [11]));
  FDCE \data_pipeline_tmp_reg[1][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [12]),
        .Q(\data_pipeline_tmp_reg[1] [12]));
  FDCE \data_pipeline_tmp_reg[1][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [13]),
        .Q(\data_pipeline_tmp_reg[1] [13]));
  FDCE \data_pipeline_tmp_reg[1][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [14]),
        .Q(\data_pipeline_tmp_reg[1] [14]));
  FDCE \data_pipeline_tmp_reg[1][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [15]),
        .Q(\data_pipeline_tmp_reg[1] [15]));
  FDCE \data_pipeline_tmp_reg[1][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [1]),
        .Q(\data_pipeline_tmp_reg[1] [1]));
  FDCE \data_pipeline_tmp_reg[1][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [2]),
        .Q(\data_pipeline_tmp_reg[1] [2]));
  FDCE \data_pipeline_tmp_reg[1][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [3]),
        .Q(\data_pipeline_tmp_reg[1] [3]));
  FDCE \data_pipeline_tmp_reg[1][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [4]),
        .Q(\data_pipeline_tmp_reg[1] [4]));
  FDCE \data_pipeline_tmp_reg[1][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [5]),
        .Q(\data_pipeline_tmp_reg[1] [5]));
  FDCE \data_pipeline_tmp_reg[1][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [6]),
        .Q(\data_pipeline_tmp_reg[1] [6]));
  FDCE \data_pipeline_tmp_reg[1][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [7]),
        .Q(\data_pipeline_tmp_reg[1] [7]));
  FDCE \data_pipeline_tmp_reg[1][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [8]),
        .Q(\data_pipeline_tmp_reg[1] [8]));
  FDCE \data_pipeline_tmp_reg[1][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[2] [9]),
        .Q(\data_pipeline_tmp_reg[1] [9]));
  FDCE \data_pipeline_tmp_reg[2][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [0]),
        .Q(\data_pipeline_tmp_reg[2] [0]));
  FDCE \data_pipeline_tmp_reg[2][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [10]),
        .Q(\data_pipeline_tmp_reg[2] [10]));
  FDCE \data_pipeline_tmp_reg[2][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [11]),
        .Q(\data_pipeline_tmp_reg[2] [11]));
  FDCE \data_pipeline_tmp_reg[2][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [12]),
        .Q(\data_pipeline_tmp_reg[2] [12]));
  FDCE \data_pipeline_tmp_reg[2][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [13]),
        .Q(\data_pipeline_tmp_reg[2] [13]));
  FDCE \data_pipeline_tmp_reg[2][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [14]),
        .Q(\data_pipeline_tmp_reg[2] [14]));
  FDCE \data_pipeline_tmp_reg[2][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [15]),
        .Q(\data_pipeline_tmp_reg[2] [15]));
  FDCE \data_pipeline_tmp_reg[2][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [1]),
        .Q(\data_pipeline_tmp_reg[2] [1]));
  FDCE \data_pipeline_tmp_reg[2][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [2]),
        .Q(\data_pipeline_tmp_reg[2] [2]));
  FDCE \data_pipeline_tmp_reg[2][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [3]),
        .Q(\data_pipeline_tmp_reg[2] [3]));
  FDCE \data_pipeline_tmp_reg[2][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [4]),
        .Q(\data_pipeline_tmp_reg[2] [4]));
  FDCE \data_pipeline_tmp_reg[2][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [5]),
        .Q(\data_pipeline_tmp_reg[2] [5]));
  FDCE \data_pipeline_tmp_reg[2][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [6]),
        .Q(\data_pipeline_tmp_reg[2] [6]));
  FDCE \data_pipeline_tmp_reg[2][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [7]),
        .Q(\data_pipeline_tmp_reg[2] [7]));
  FDCE \data_pipeline_tmp_reg[2][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [8]),
        .Q(\data_pipeline_tmp_reg[2] [8]));
  FDCE \data_pipeline_tmp_reg[2][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[3] [9]),
        .Q(\data_pipeline_tmp_reg[2] [9]));
  FDCE \data_pipeline_tmp_reg[3][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [0]),
        .Q(\data_pipeline_tmp_reg[3] [0]));
  FDCE \data_pipeline_tmp_reg[3][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [10]),
        .Q(\data_pipeline_tmp_reg[3] [10]));
  FDCE \data_pipeline_tmp_reg[3][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [11]),
        .Q(\data_pipeline_tmp_reg[3] [11]));
  FDCE \data_pipeline_tmp_reg[3][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [12]),
        .Q(\data_pipeline_tmp_reg[3] [12]));
  FDCE \data_pipeline_tmp_reg[3][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [13]),
        .Q(\data_pipeline_tmp_reg[3] [13]));
  FDCE \data_pipeline_tmp_reg[3][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [14]),
        .Q(\data_pipeline_tmp_reg[3] [14]));
  FDCE \data_pipeline_tmp_reg[3][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [15]),
        .Q(\data_pipeline_tmp_reg[3] [15]));
  FDCE \data_pipeline_tmp_reg[3][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [1]),
        .Q(\data_pipeline_tmp_reg[3] [1]));
  FDCE \data_pipeline_tmp_reg[3][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [2]),
        .Q(\data_pipeline_tmp_reg[3] [2]));
  FDCE \data_pipeline_tmp_reg[3][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [3]),
        .Q(\data_pipeline_tmp_reg[3] [3]));
  FDCE \data_pipeline_tmp_reg[3][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [4]),
        .Q(\data_pipeline_tmp_reg[3] [4]));
  FDCE \data_pipeline_tmp_reg[3][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [5]),
        .Q(\data_pipeline_tmp_reg[3] [5]));
  FDCE \data_pipeline_tmp_reg[3][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [6]),
        .Q(\data_pipeline_tmp_reg[3] [6]));
  FDCE \data_pipeline_tmp_reg[3][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [7]),
        .Q(\data_pipeline_tmp_reg[3] [7]));
  FDCE \data_pipeline_tmp_reg[3][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [8]),
        .Q(\data_pipeline_tmp_reg[3] [8]));
  FDCE \data_pipeline_tmp_reg[3][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[4] [9]),
        .Q(\data_pipeline_tmp_reg[3] [9]));
  FDCE \data_pipeline_tmp_reg[4][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [0]),
        .Q(\data_pipeline_tmp_reg[4] [0]));
  FDCE \data_pipeline_tmp_reg[4][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [10]),
        .Q(\data_pipeline_tmp_reg[4] [10]));
  FDCE \data_pipeline_tmp_reg[4][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [11]),
        .Q(\data_pipeline_tmp_reg[4] [11]));
  FDCE \data_pipeline_tmp_reg[4][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [12]),
        .Q(\data_pipeline_tmp_reg[4] [12]));
  FDCE \data_pipeline_tmp_reg[4][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [13]),
        .Q(\data_pipeline_tmp_reg[4] [13]));
  FDCE \data_pipeline_tmp_reg[4][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [14]),
        .Q(\data_pipeline_tmp_reg[4] [14]));
  FDCE \data_pipeline_tmp_reg[4][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [15]),
        .Q(\data_pipeline_tmp_reg[4] [15]));
  FDCE \data_pipeline_tmp_reg[4][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [1]),
        .Q(\data_pipeline_tmp_reg[4] [1]));
  FDCE \data_pipeline_tmp_reg[4][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [2]),
        .Q(\data_pipeline_tmp_reg[4] [2]));
  FDCE \data_pipeline_tmp_reg[4][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [3]),
        .Q(\data_pipeline_tmp_reg[4] [3]));
  FDCE \data_pipeline_tmp_reg[4][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [4]),
        .Q(\data_pipeline_tmp_reg[4] [4]));
  FDCE \data_pipeline_tmp_reg[4][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [5]),
        .Q(\data_pipeline_tmp_reg[4] [5]));
  FDCE \data_pipeline_tmp_reg[4][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [6]),
        .Q(\data_pipeline_tmp_reg[4] [6]));
  FDCE \data_pipeline_tmp_reg[4][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [7]),
        .Q(\data_pipeline_tmp_reg[4] [7]));
  FDCE \data_pipeline_tmp_reg[4][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [8]),
        .Q(\data_pipeline_tmp_reg[4] [8]));
  FDCE \data_pipeline_tmp_reg[4][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[5] [9]),
        .Q(\data_pipeline_tmp_reg[4] [9]));
  FDCE \data_pipeline_tmp_reg[5][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [0]),
        .Q(\data_pipeline_tmp_reg[5] [0]));
  FDCE \data_pipeline_tmp_reg[5][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [10]),
        .Q(\data_pipeline_tmp_reg[5] [10]));
  FDCE \data_pipeline_tmp_reg[5][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [11]),
        .Q(\data_pipeline_tmp_reg[5] [11]));
  FDCE \data_pipeline_tmp_reg[5][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [12]),
        .Q(\data_pipeline_tmp_reg[5] [12]));
  FDCE \data_pipeline_tmp_reg[5][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [13]),
        .Q(\data_pipeline_tmp_reg[5] [13]));
  FDCE \data_pipeline_tmp_reg[5][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [14]),
        .Q(\data_pipeline_tmp_reg[5] [14]));
  FDCE \data_pipeline_tmp_reg[5][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [15]),
        .Q(\data_pipeline_tmp_reg[5] [15]));
  FDCE \data_pipeline_tmp_reg[5][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [1]),
        .Q(\data_pipeline_tmp_reg[5] [1]));
  FDCE \data_pipeline_tmp_reg[5][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [2]),
        .Q(\data_pipeline_tmp_reg[5] [2]));
  FDCE \data_pipeline_tmp_reg[5][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [3]),
        .Q(\data_pipeline_tmp_reg[5] [3]));
  FDCE \data_pipeline_tmp_reg[5][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [4]),
        .Q(\data_pipeline_tmp_reg[5] [4]));
  FDCE \data_pipeline_tmp_reg[5][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [5]),
        .Q(\data_pipeline_tmp_reg[5] [5]));
  FDCE \data_pipeline_tmp_reg[5][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [6]),
        .Q(\data_pipeline_tmp_reg[5] [6]));
  FDCE \data_pipeline_tmp_reg[5][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [7]),
        .Q(\data_pipeline_tmp_reg[5] [7]));
  FDCE \data_pipeline_tmp_reg[5][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [8]),
        .Q(\data_pipeline_tmp_reg[5] [8]));
  FDCE \data_pipeline_tmp_reg[5][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[6] [9]),
        .Q(\data_pipeline_tmp_reg[5] [9]));
  FDCE \data_pipeline_tmp_reg[6][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [0]),
        .Q(\data_pipeline_tmp_reg[6] [0]));
  FDCE \data_pipeline_tmp_reg[6][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [10]),
        .Q(\data_pipeline_tmp_reg[6] [10]));
  FDCE \data_pipeline_tmp_reg[6][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [11]),
        .Q(\data_pipeline_tmp_reg[6] [11]));
  FDCE \data_pipeline_tmp_reg[6][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [12]),
        .Q(\data_pipeline_tmp_reg[6] [12]));
  FDCE \data_pipeline_tmp_reg[6][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [13]),
        .Q(\data_pipeline_tmp_reg[6] [13]));
  FDCE \data_pipeline_tmp_reg[6][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [14]),
        .Q(\data_pipeline_tmp_reg[6] [14]));
  FDCE \data_pipeline_tmp_reg[6][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [15]),
        .Q(\data_pipeline_tmp_reg[6] [15]));
  FDCE \data_pipeline_tmp_reg[6][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [1]),
        .Q(\data_pipeline_tmp_reg[6] [1]));
  FDCE \data_pipeline_tmp_reg[6][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [2]),
        .Q(\data_pipeline_tmp_reg[6] [2]));
  FDCE \data_pipeline_tmp_reg[6][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [3]),
        .Q(\data_pipeline_tmp_reg[6] [3]));
  FDCE \data_pipeline_tmp_reg[6][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [4]),
        .Q(\data_pipeline_tmp_reg[6] [4]));
  FDCE \data_pipeline_tmp_reg[6][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [5]),
        .Q(\data_pipeline_tmp_reg[6] [5]));
  FDCE \data_pipeline_tmp_reg[6][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [6]),
        .Q(\data_pipeline_tmp_reg[6] [6]));
  FDCE \data_pipeline_tmp_reg[6][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [7]),
        .Q(\data_pipeline_tmp_reg[6] [7]));
  FDCE \data_pipeline_tmp_reg[6][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [8]),
        .Q(\data_pipeline_tmp_reg[6] [8]));
  FDCE \data_pipeline_tmp_reg[6][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[7] [9]),
        .Q(\data_pipeline_tmp_reg[6] [9]));
  FDCE \data_pipeline_tmp_reg[7][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [0]),
        .Q(\data_pipeline_tmp_reg[7] [0]));
  FDCE \data_pipeline_tmp_reg[7][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [10]),
        .Q(\data_pipeline_tmp_reg[7] [10]));
  FDCE \data_pipeline_tmp_reg[7][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [11]),
        .Q(\data_pipeline_tmp_reg[7] [11]));
  FDCE \data_pipeline_tmp_reg[7][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [12]),
        .Q(\data_pipeline_tmp_reg[7] [12]));
  FDCE \data_pipeline_tmp_reg[7][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [13]),
        .Q(\data_pipeline_tmp_reg[7] [13]));
  FDCE \data_pipeline_tmp_reg[7][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [14]),
        .Q(\data_pipeline_tmp_reg[7] [14]));
  FDCE \data_pipeline_tmp_reg[7][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [15]),
        .Q(\data_pipeline_tmp_reg[7] [15]));
  FDCE \data_pipeline_tmp_reg[7][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [1]),
        .Q(\data_pipeline_tmp_reg[7] [1]));
  FDCE \data_pipeline_tmp_reg[7][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [2]),
        .Q(\data_pipeline_tmp_reg[7] [2]));
  FDCE \data_pipeline_tmp_reg[7][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [3]),
        .Q(\data_pipeline_tmp_reg[7] [3]));
  FDCE \data_pipeline_tmp_reg[7][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [4]),
        .Q(\data_pipeline_tmp_reg[7] [4]));
  FDCE \data_pipeline_tmp_reg[7][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [5]),
        .Q(\data_pipeline_tmp_reg[7] [5]));
  FDCE \data_pipeline_tmp_reg[7][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [6]),
        .Q(\data_pipeline_tmp_reg[7] [6]));
  FDCE \data_pipeline_tmp_reg[7][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [7]),
        .Q(\data_pipeline_tmp_reg[7] [7]));
  FDCE \data_pipeline_tmp_reg[7][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [8]),
        .Q(\data_pipeline_tmp_reg[7] [8]));
  FDCE \data_pipeline_tmp_reg[7][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[8] [9]),
        .Q(\data_pipeline_tmp_reg[7] [9]));
  FDCE \data_pipeline_tmp_reg[8][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [0]),
        .Q(\data_pipeline_tmp_reg[8] [0]));
  FDCE \data_pipeline_tmp_reg[8][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [10]),
        .Q(\data_pipeline_tmp_reg[8] [10]));
  FDCE \data_pipeline_tmp_reg[8][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [11]),
        .Q(\data_pipeline_tmp_reg[8] [11]));
  FDCE \data_pipeline_tmp_reg[8][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [12]),
        .Q(\data_pipeline_tmp_reg[8] [12]));
  FDCE \data_pipeline_tmp_reg[8][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [13]),
        .Q(\data_pipeline_tmp_reg[8] [13]));
  FDCE \data_pipeline_tmp_reg[8][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [14]),
        .Q(\data_pipeline_tmp_reg[8] [14]));
  FDCE \data_pipeline_tmp_reg[8][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [15]),
        .Q(\data_pipeline_tmp_reg[8] [15]));
  FDCE \data_pipeline_tmp_reg[8][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [1]),
        .Q(\data_pipeline_tmp_reg[8] [1]));
  FDCE \data_pipeline_tmp_reg[8][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [2]),
        .Q(\data_pipeline_tmp_reg[8] [2]));
  FDCE \data_pipeline_tmp_reg[8][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [3]),
        .Q(\data_pipeline_tmp_reg[8] [3]));
  FDCE \data_pipeline_tmp_reg[8][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [4]),
        .Q(\data_pipeline_tmp_reg[8] [4]));
  FDCE \data_pipeline_tmp_reg[8][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [5]),
        .Q(\data_pipeline_tmp_reg[8] [5]));
  FDCE \data_pipeline_tmp_reg[8][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [6]),
        .Q(\data_pipeline_tmp_reg[8] [6]));
  FDCE \data_pipeline_tmp_reg[8][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [7]),
        .Q(\data_pipeline_tmp_reg[8] [7]));
  FDCE \data_pipeline_tmp_reg[8][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [8]),
        .Q(\data_pipeline_tmp_reg[8] [8]));
  FDCE \data_pipeline_tmp_reg[8][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[9] [9]),
        .Q(\data_pipeline_tmp_reg[8] [9]));
  FDCE \data_pipeline_tmp_reg[9][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [0]),
        .Q(\data_pipeline_tmp_reg[9] [0]));
  FDCE \data_pipeline_tmp_reg[9][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [10]),
        .Q(\data_pipeline_tmp_reg[9] [10]));
  FDCE \data_pipeline_tmp_reg[9][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [11]),
        .Q(\data_pipeline_tmp_reg[9] [11]));
  FDCE \data_pipeline_tmp_reg[9][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [12]),
        .Q(\data_pipeline_tmp_reg[9] [12]));
  FDCE \data_pipeline_tmp_reg[9][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [13]),
        .Q(\data_pipeline_tmp_reg[9] [13]));
  FDCE \data_pipeline_tmp_reg[9][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [14]),
        .Q(\data_pipeline_tmp_reg[9] [14]));
  FDCE \data_pipeline_tmp_reg[9][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [15]),
        .Q(\data_pipeline_tmp_reg[9] [15]));
  FDCE \data_pipeline_tmp_reg[9][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [1]),
        .Q(\data_pipeline_tmp_reg[9] [1]));
  FDCE \data_pipeline_tmp_reg[9][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [2]),
        .Q(\data_pipeline_tmp_reg[9] [2]));
  FDCE \data_pipeline_tmp_reg[9][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [3]),
        .Q(\data_pipeline_tmp_reg[9] [3]));
  FDCE \data_pipeline_tmp_reg[9][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [4]),
        .Q(\data_pipeline_tmp_reg[9] [4]));
  FDCE \data_pipeline_tmp_reg[9][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [5]),
        .Q(\data_pipeline_tmp_reg[9] [5]));
  FDCE \data_pipeline_tmp_reg[9][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [6]),
        .Q(\data_pipeline_tmp_reg[9] [6]));
  FDCE \data_pipeline_tmp_reg[9][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [7]),
        .Q(\data_pipeline_tmp_reg[9] [7]));
  FDCE \data_pipeline_tmp_reg[9][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [8]),
        .Q(\data_pipeline_tmp_reg[9] [8]));
  FDCE \data_pipeline_tmp_reg[9][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\data_pipeline_tmp_reg[10] [9]),
        .Q(\data_pipeline_tmp_reg[9] [9]));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp
       (.A({\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[0]_15 [15],\weight_reg[0]_15 [15],\weight_reg[0]_15 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_P_UNCONNECTED[47:32],mul_temp_n_74,mul_temp_n_75,mul_temp_n_76,mul_temp_n_77,mul_temp_n_78,mul_temp_n_79,mul_temp_n_80,mul_temp_n_81,mul_temp_n_82,mul_temp_n_83,mul_temp_n_84,mul_temp_n_85,mul_temp_n_86,mul_temp_n_87,mul_temp_n_88,mul_temp_n_89,mul_temp_n_90,\^mul_temp ,mul_temp_n_92,mul_temp_n_93,mul_temp_n_94,mul_temp_n_95,mul_temp_n_96,mul_temp_n_97,mul_temp_n_98,mul_temp_n_99,mul_temp_n_100,mul_temp_n_101,mul_temp_n_102,mul_temp_n_103,mul_temp_n_104,mul_temp_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_1
       (.A({\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_1_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[1]_0 [15],\weight_reg[1]_0 [15],\weight_reg[1]_0 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_1_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_1_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_1_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_1_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_1_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_1_P_UNCONNECTED[47:32],mul_temp_1_n_74,mul_temp_1_n_75,mul_temp_1_n_76,mul_temp_1_n_77,mul_temp_1_n_78,mul_temp_1_n_79,mul_temp_1_n_80,mul_temp_1_n_81,mul_temp_1_n_82,mul_temp_1_n_83,mul_temp_1_n_84,mul_temp_1_n_85,mul_temp_1_n_86,mul_temp_1_n_87,mul_temp_1_n_88,mul_temp_1_n_89,mul_temp_1_n_90,\^mul_temp_1 ,mul_temp_1_n_92,mul_temp_1_n_93,mul_temp_1_n_94,mul_temp_1_n_95,mul_temp_1_n_96,mul_temp_1_n_97,mul_temp_1_n_98,mul_temp_1_n_99,mul_temp_1_n_100,mul_temp_1_n_101,mul_temp_1_n_102,mul_temp_1_n_103,mul_temp_1_n_104,mul_temp_1_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_1_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_1_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_1_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_1_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_10
       (.A({\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_10_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[10]_9 [15],\weight_reg[10]_9 [15],\weight_reg[10]_9 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_10_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_10_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_10_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_10_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_10_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_10_P_UNCONNECTED[47:32],mul_temp_10_n_74,mul_temp_10_n_75,mul_temp_10_n_76,mul_temp_10_n_77,mul_temp_10_n_78,mul_temp_10_n_79,mul_temp_10_n_80,mul_temp_10_n_81,mul_temp_10_n_82,mul_temp_10_n_83,mul_temp_10_n_84,mul_temp_10_n_85,mul_temp_10_n_86,mul_temp_10_n_87,mul_temp_10_n_88,mul_temp_10_n_89,mul_temp_10_n_90,\^mul_temp_10 ,mul_temp_10_n_92,mul_temp_10_n_93,mul_temp_10_n_94,mul_temp_10_n_95,mul_temp_10_n_96,mul_temp_10_n_97,mul_temp_10_n_98,mul_temp_10_n_99,mul_temp_10_n_100,mul_temp_10_n_101,mul_temp_10_n_102,mul_temp_10_n_103,mul_temp_10_n_104,mul_temp_10_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_10_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_10_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_10_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_10_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_11
       (.A({\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_11_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[11]_10 [15],\weight_reg[11]_10 [15],\weight_reg[11]_10 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_11_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_11_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_11_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_11_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_11_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_11_P_UNCONNECTED[47:32],mul_temp_11_n_74,mul_temp_11_n_75,mul_temp_11_n_76,mul_temp_11_n_77,mul_temp_11_n_78,mul_temp_11_n_79,mul_temp_11_n_80,mul_temp_11_n_81,mul_temp_11_n_82,mul_temp_11_n_83,mul_temp_11_n_84,mul_temp_11_n_85,mul_temp_11_n_86,mul_temp_11_n_87,mul_temp_11_n_88,mul_temp_11_n_89,mul_temp_11_n_90,\^mul_temp_11 ,mul_temp_11_n_92,mul_temp_11_n_93,mul_temp_11_n_94,mul_temp_11_n_95,mul_temp_11_n_96,mul_temp_11_n_97,mul_temp_11_n_98,mul_temp_11_n_99,mul_temp_11_n_100,mul_temp_11_n_101,mul_temp_11_n_102,mul_temp_11_n_103,mul_temp_11_n_104,mul_temp_11_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_11_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_11_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_11_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_11_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_12
       (.A({\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_12_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[12]_11 [15],\weight_reg[12]_11 [15],\weight_reg[12]_11 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_12_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_12_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_12_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_12_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_12_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_12_P_UNCONNECTED[47:32],mul_temp_12_n_74,mul_temp_12_n_75,mul_temp_12_n_76,mul_temp_12_n_77,mul_temp_12_n_78,mul_temp_12_n_79,mul_temp_12_n_80,mul_temp_12_n_81,mul_temp_12_n_82,mul_temp_12_n_83,mul_temp_12_n_84,mul_temp_12_n_85,mul_temp_12_n_86,mul_temp_12_n_87,mul_temp_12_n_88,mul_temp_12_n_89,mul_temp_12_n_90,\^mul_temp_12 ,mul_temp_12_n_92,mul_temp_12_n_93,mul_temp_12_n_94,mul_temp_12_n_95,mul_temp_12_n_96,mul_temp_12_n_97,mul_temp_12_n_98,mul_temp_12_n_99,mul_temp_12_n_100,mul_temp_12_n_101,mul_temp_12_n_102,mul_temp_12_n_103,mul_temp_12_n_104,mul_temp_12_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_12_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_12_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_12_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_12_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_13
       (.A({\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_13_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[13]_12 [15],\weight_reg[13]_12 [15],\weight_reg[13]_12 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_13_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_13_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_13_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_13_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_13_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_13_P_UNCONNECTED[47:32],mul_temp_13_n_74,mul_temp_13_n_75,mul_temp_13_n_76,mul_temp_13_n_77,mul_temp_13_n_78,mul_temp_13_n_79,mul_temp_13_n_80,mul_temp_13_n_81,mul_temp_13_n_82,mul_temp_13_n_83,mul_temp_13_n_84,mul_temp_13_n_85,mul_temp_13_n_86,mul_temp_13_n_87,mul_temp_13_n_88,mul_temp_13_n_89,mul_temp_13_n_90,\^mul_temp_13 ,mul_temp_13_n_92,mul_temp_13_n_93,mul_temp_13_n_94,mul_temp_13_n_95,mul_temp_13_n_96,mul_temp_13_n_97,mul_temp_13_n_98,mul_temp_13_n_99,mul_temp_13_n_100,mul_temp_13_n_101,mul_temp_13_n_102,mul_temp_13_n_103,mul_temp_13_n_104,mul_temp_13_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_13_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_13_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_13_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_13_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_14
       (.A({\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_14_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[14]_13 [15],\weight_reg[14]_13 [15],\weight_reg[14]_13 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_14_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_14_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_14_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_14_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_14_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_14_P_UNCONNECTED[47:32],mul_temp_14_n_74,mul_temp_14_n_75,mul_temp_14_n_76,mul_temp_14_n_77,mul_temp_14_n_78,mul_temp_14_n_79,mul_temp_14_n_80,mul_temp_14_n_81,mul_temp_14_n_82,mul_temp_14_n_83,mul_temp_14_n_84,mul_temp_14_n_85,mul_temp_14_n_86,mul_temp_14_n_87,mul_temp_14_n_88,mul_temp_14_n_89,mul_temp_14_n_90,\^mul_temp_14 ,mul_temp_14_n_92,mul_temp_14_n_93,mul_temp_14_n_94,mul_temp_14_n_95,mul_temp_14_n_96,mul_temp_14_n_97,mul_temp_14_n_98,mul_temp_14_n_99,mul_temp_14_n_100,mul_temp_14_n_101,mul_temp_14_n_102,mul_temp_14_n_103,mul_temp_14_n_104,mul_temp_14_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_14_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_14_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_14_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_14_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_15
       (.A({\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_15_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[15]_14 [15],\weight_reg[15]_14 [15],\weight_reg[15]_14 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_15_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_15_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_15_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_15_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_15_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_15_P_UNCONNECTED[47:32],mul_temp_15_n_74,mul_temp_15_n_75,mul_temp_15_n_76,mul_temp_15_n_77,mul_temp_15_n_78,mul_temp_15_n_79,mul_temp_15_n_80,mul_temp_15_n_81,mul_temp_15_n_82,mul_temp_15_n_83,mul_temp_15_n_84,mul_temp_15_n_85,mul_temp_15_n_86,mul_temp_15_n_87,mul_temp_15_n_88,mul_temp_15_n_89,mul_temp_15_n_90,\^mul_temp_15 ,mul_temp_15_n_92,mul_temp_15_n_93,mul_temp_15_n_94,mul_temp_15_n_95,mul_temp_15_n_96,mul_temp_15_n_97,mul_temp_15_n_98,mul_temp_15_n_99,mul_temp_15_n_100,mul_temp_15_n_101,mul_temp_15_n_102,mul_temp_15_n_103,mul_temp_15_n_104,mul_temp_15_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_15_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_15_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_15_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_15_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_17
       (.A({\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] [15],\data_pipeline_tmp_reg[0] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_17_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_17_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_17_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_17_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_17_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_17_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_17_P_UNCONNECTED[47:32],mul_temp_17_n_74,mul_temp_17_n_75,mul_temp_17_n_76,mul_temp_17_n_77,mul_temp_17_n_78,mul_temp_17_n_79,mul_temp_17_n_80,mul_temp_17_n_81,mul_temp_17_n_82,mul_temp_17_n_83,mul_temp_17_n_84,mul_temp_17_n_85,mul_temp_17_n_86,mul_temp_17_n_87,mul_temp_17_n_88,mul_temp_17_n_89,mul_temp_17_n_90,\^mul_temp_17 ,mul_temp_17_n_92,mul_temp_17_n_93,mul_temp_17_n_94,mul_temp_17_n_95,mul_temp_17_n_96,mul_temp_17_n_97,mul_temp_17_n_98,mul_temp_17_n_99,mul_temp_17_n_100,mul_temp_17_n_101,mul_temp_17_n_102,mul_temp_17_n_103,mul_temp_17_n_104,mul_temp_17_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_17_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_17_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_17_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_17_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_18
       (.A({\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] [15],\data_pipeline_tmp_reg[1] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_18_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_18_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_18_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_18_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_18_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_18_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_18_P_UNCONNECTED[47:32],mul_temp_18_n_74,mul_temp_18_n_75,mul_temp_18_n_76,mul_temp_18_n_77,mul_temp_18_n_78,mul_temp_18_n_79,mul_temp_18_n_80,mul_temp_18_n_81,mul_temp_18_n_82,mul_temp_18_n_83,mul_temp_18_n_84,mul_temp_18_n_85,mul_temp_18_n_86,mul_temp_18_n_87,mul_temp_18_n_88,mul_temp_18_n_89,mul_temp_18_n_90,\^mul_temp_18 ,mul_temp_18_n_92,mul_temp_18_n_93,mul_temp_18_n_94,mul_temp_18_n_95,mul_temp_18_n_96,mul_temp_18_n_97,mul_temp_18_n_98,mul_temp_18_n_99,mul_temp_18_n_100,mul_temp_18_n_101,mul_temp_18_n_102,mul_temp_18_n_103,mul_temp_18_n_104,mul_temp_18_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_18_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_18_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_18_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_18_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_19
       (.A({\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_19_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_19_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_19_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_19_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_19_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_19_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_19_P_UNCONNECTED[47:32],mul_temp_19_n_74,mul_temp_19_n_75,mul_temp_19_n_76,mul_temp_19_n_77,mul_temp_19_n_78,mul_temp_19_n_79,mul_temp_19_n_80,mul_temp_19_n_81,mul_temp_19_n_82,mul_temp_19_n_83,mul_temp_19_n_84,mul_temp_19_n_85,mul_temp_19_n_86,mul_temp_19_n_87,mul_temp_19_n_88,mul_temp_19_n_89,mul_temp_19_n_90,\^mul_temp_19 ,mul_temp_19_n_92,mul_temp_19_n_93,mul_temp_19_n_94,mul_temp_19_n_95,mul_temp_19_n_96,mul_temp_19_n_97,mul_temp_19_n_98,mul_temp_19_n_99,mul_temp_19_n_100,mul_temp_19_n_101,mul_temp_19_n_102,mul_temp_19_n_103,mul_temp_19_n_104,mul_temp_19_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_19_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_19_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_19_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_19_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_2
       (.A({\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] [15],\data_pipeline_tmp_reg[2] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_2_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[2]_1 [15],\weight_reg[2]_1 [15],\weight_reg[2]_1 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_2_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_2_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_2_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_2_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_2_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_2_P_UNCONNECTED[47:32],mul_temp_2_n_74,mul_temp_2_n_75,mul_temp_2_n_76,mul_temp_2_n_77,mul_temp_2_n_78,mul_temp_2_n_79,mul_temp_2_n_80,mul_temp_2_n_81,mul_temp_2_n_82,mul_temp_2_n_83,mul_temp_2_n_84,mul_temp_2_n_85,mul_temp_2_n_86,mul_temp_2_n_87,mul_temp_2_n_88,mul_temp_2_n_89,mul_temp_2_n_90,\^mul_temp_2 ,mul_temp_2_n_92,mul_temp_2_n_93,mul_temp_2_n_94,mul_temp_2_n_95,mul_temp_2_n_96,mul_temp_2_n_97,mul_temp_2_n_98,mul_temp_2_n_99,mul_temp_2_n_100,mul_temp_2_n_101,mul_temp_2_n_102,mul_temp_2_n_103,mul_temp_2_n_104,mul_temp_2_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_2_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_2_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_2_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_2_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_20
       (.A({\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_20_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_20_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_20_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_20_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_20_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_20_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_20_P_UNCONNECTED[47:32],mul_temp_20_n_74,mul_temp_20_n_75,mul_temp_20_n_76,mul_temp_20_n_77,mul_temp_20_n_78,mul_temp_20_n_79,mul_temp_20_n_80,mul_temp_20_n_81,mul_temp_20_n_82,mul_temp_20_n_83,mul_temp_20_n_84,mul_temp_20_n_85,mul_temp_20_n_86,mul_temp_20_n_87,mul_temp_20_n_88,mul_temp_20_n_89,mul_temp_20_n_90,\^mul_temp_20 ,mul_temp_20_n_92,mul_temp_20_n_93,mul_temp_20_n_94,mul_temp_20_n_95,mul_temp_20_n_96,mul_temp_20_n_97,mul_temp_20_n_98,mul_temp_20_n_99,mul_temp_20_n_100,mul_temp_20_n_101,mul_temp_20_n_102,mul_temp_20_n_103,mul_temp_20_n_104,mul_temp_20_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_20_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_20_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_20_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_20_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_21
       (.A({\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_21_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_21_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_21_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_21_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_21_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_21_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_21_P_UNCONNECTED[47:32],mul_temp_21_n_74,mul_temp_21_n_75,mul_temp_21_n_76,mul_temp_21_n_77,mul_temp_21_n_78,mul_temp_21_n_79,mul_temp_21_n_80,mul_temp_21_n_81,mul_temp_21_n_82,mul_temp_21_n_83,mul_temp_21_n_84,mul_temp_21_n_85,mul_temp_21_n_86,mul_temp_21_n_87,mul_temp_21_n_88,mul_temp_21_n_89,mul_temp_21_n_90,\^mul_temp_21 ,mul_temp_21_n_92,mul_temp_21_n_93,mul_temp_21_n_94,mul_temp_21_n_95,mul_temp_21_n_96,mul_temp_21_n_97,mul_temp_21_n_98,mul_temp_21_n_99,mul_temp_21_n_100,mul_temp_21_n_101,mul_temp_21_n_102,mul_temp_21_n_103,mul_temp_21_n_104,mul_temp_21_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_21_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_21_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_21_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_21_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_22
       (.A({\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_22_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_22_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_22_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_22_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_22_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_22_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_22_P_UNCONNECTED[47:32],mul_temp_22_n_74,mul_temp_22_n_75,mul_temp_22_n_76,mul_temp_22_n_77,mul_temp_22_n_78,mul_temp_22_n_79,mul_temp_22_n_80,mul_temp_22_n_81,mul_temp_22_n_82,mul_temp_22_n_83,mul_temp_22_n_84,mul_temp_22_n_85,mul_temp_22_n_86,mul_temp_22_n_87,mul_temp_22_n_88,mul_temp_22_n_89,mul_temp_22_n_90,\^mul_temp_22 ,mul_temp_22_n_92,mul_temp_22_n_93,mul_temp_22_n_94,mul_temp_22_n_95,mul_temp_22_n_96,mul_temp_22_n_97,mul_temp_22_n_98,mul_temp_22_n_99,mul_temp_22_n_100,mul_temp_22_n_101,mul_temp_22_n_102,mul_temp_22_n_103,mul_temp_22_n_104,mul_temp_22_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_22_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_22_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_22_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_22_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_23
       (.A({\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_23_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_23_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_23_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_23_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_23_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_23_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_23_P_UNCONNECTED[47:32],mul_temp_23_n_74,mul_temp_23_n_75,mul_temp_23_n_76,mul_temp_23_n_77,mul_temp_23_n_78,mul_temp_23_n_79,mul_temp_23_n_80,mul_temp_23_n_81,mul_temp_23_n_82,mul_temp_23_n_83,mul_temp_23_n_84,mul_temp_23_n_85,mul_temp_23_n_86,mul_temp_23_n_87,mul_temp_23_n_88,mul_temp_23_n_89,mul_temp_23_n_90,\^mul_temp_23 ,mul_temp_23_n_92,mul_temp_23_n_93,mul_temp_23_n_94,mul_temp_23_n_95,mul_temp_23_n_96,mul_temp_23_n_97,mul_temp_23_n_98,mul_temp_23_n_99,mul_temp_23_n_100,mul_temp_23_n_101,mul_temp_23_n_102,mul_temp_23_n_103,mul_temp_23_n_104,mul_temp_23_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_23_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_23_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_23_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_23_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_24
       (.A({\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_24_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_24_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_24_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_24_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_24_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_24_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_24_P_UNCONNECTED[47:32],mul_temp_24_n_74,mul_temp_24_n_75,mul_temp_24_n_76,mul_temp_24_n_77,mul_temp_24_n_78,mul_temp_24_n_79,mul_temp_24_n_80,mul_temp_24_n_81,mul_temp_24_n_82,mul_temp_24_n_83,mul_temp_24_n_84,mul_temp_24_n_85,mul_temp_24_n_86,mul_temp_24_n_87,mul_temp_24_n_88,mul_temp_24_n_89,mul_temp_24_n_90,\^mul_temp_24 ,mul_temp_24_n_92,mul_temp_24_n_93,mul_temp_24_n_94,mul_temp_24_n_95,mul_temp_24_n_96,mul_temp_24_n_97,mul_temp_24_n_98,mul_temp_24_n_99,mul_temp_24_n_100,mul_temp_24_n_101,mul_temp_24_n_102,mul_temp_24_n_103,mul_temp_24_n_104,mul_temp_24_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_24_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_24_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_24_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_24_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_25
       (.A({\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_25_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_25_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_25_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_25_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_25_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_25_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_25_P_UNCONNECTED[47:32],mul_temp_25_n_74,mul_temp_25_n_75,mul_temp_25_n_76,mul_temp_25_n_77,mul_temp_25_n_78,mul_temp_25_n_79,mul_temp_25_n_80,mul_temp_25_n_81,mul_temp_25_n_82,mul_temp_25_n_83,mul_temp_25_n_84,mul_temp_25_n_85,mul_temp_25_n_86,mul_temp_25_n_87,mul_temp_25_n_88,mul_temp_25_n_89,mul_temp_25_n_90,\^mul_temp_25 ,mul_temp_25_n_92,mul_temp_25_n_93,mul_temp_25_n_94,mul_temp_25_n_95,mul_temp_25_n_96,mul_temp_25_n_97,mul_temp_25_n_98,mul_temp_25_n_99,mul_temp_25_n_100,mul_temp_25_n_101,mul_temp_25_n_102,mul_temp_25_n_103,mul_temp_25_n_104,mul_temp_25_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_25_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_25_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_25_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_25_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_26
       (.A({\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_26_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_26_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_26_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_26_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_26_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_26_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_26_P_UNCONNECTED[47:32],mul_temp_26_n_74,mul_temp_26_n_75,mul_temp_26_n_76,mul_temp_26_n_77,mul_temp_26_n_78,mul_temp_26_n_79,mul_temp_26_n_80,mul_temp_26_n_81,mul_temp_26_n_82,mul_temp_26_n_83,mul_temp_26_n_84,mul_temp_26_n_85,mul_temp_26_n_86,mul_temp_26_n_87,mul_temp_26_n_88,mul_temp_26_n_89,mul_temp_26_n_90,\^mul_temp_26 ,mul_temp_26_n_92,mul_temp_26_n_93,mul_temp_26_n_94,mul_temp_26_n_95,mul_temp_26_n_96,mul_temp_26_n_97,mul_temp_26_n_98,mul_temp_26_n_99,mul_temp_26_n_100,mul_temp_26_n_101,mul_temp_26_n_102,mul_temp_26_n_103,mul_temp_26_n_104,mul_temp_26_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_26_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_26_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_26_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_26_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_27
       (.A({\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] [15],\data_pipeline_tmp_reg[10] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_27_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_27_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_27_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_27_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_27_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_27_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_27_P_UNCONNECTED[47:32],mul_temp_27_n_74,mul_temp_27_n_75,mul_temp_27_n_76,mul_temp_27_n_77,mul_temp_27_n_78,mul_temp_27_n_79,mul_temp_27_n_80,mul_temp_27_n_81,mul_temp_27_n_82,mul_temp_27_n_83,mul_temp_27_n_84,mul_temp_27_n_85,mul_temp_27_n_86,mul_temp_27_n_87,mul_temp_27_n_88,mul_temp_27_n_89,mul_temp_27_n_90,\^mul_temp_27 ,mul_temp_27_n_92,mul_temp_27_n_93,mul_temp_27_n_94,mul_temp_27_n_95,mul_temp_27_n_96,mul_temp_27_n_97,mul_temp_27_n_98,mul_temp_27_n_99,mul_temp_27_n_100,mul_temp_27_n_101,mul_temp_27_n_102,mul_temp_27_n_103,mul_temp_27_n_104,mul_temp_27_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_27_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_27_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_27_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_27_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_28
       (.A({\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] [15],\data_pipeline_tmp_reg[11] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_28_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_28_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_28_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_28_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_28_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_28_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_28_P_UNCONNECTED[47:32],mul_temp_28_n_74,mul_temp_28_n_75,mul_temp_28_n_76,mul_temp_28_n_77,mul_temp_28_n_78,mul_temp_28_n_79,mul_temp_28_n_80,mul_temp_28_n_81,mul_temp_28_n_82,mul_temp_28_n_83,mul_temp_28_n_84,mul_temp_28_n_85,mul_temp_28_n_86,mul_temp_28_n_87,mul_temp_28_n_88,mul_temp_28_n_89,mul_temp_28_n_90,\^mul_temp_28 ,mul_temp_28_n_92,mul_temp_28_n_93,mul_temp_28_n_94,mul_temp_28_n_95,mul_temp_28_n_96,mul_temp_28_n_97,mul_temp_28_n_98,mul_temp_28_n_99,mul_temp_28_n_100,mul_temp_28_n_101,mul_temp_28_n_102,mul_temp_28_n_103,mul_temp_28_n_104,mul_temp_28_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_28_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_28_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_28_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_28_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_29
       (.A({\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] [15],\data_pipeline_tmp_reg[12] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_29_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_29_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_29_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_29_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_29_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_29_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_29_P_UNCONNECTED[47:32],mul_temp_29_n_74,mul_temp_29_n_75,mul_temp_29_n_76,mul_temp_29_n_77,mul_temp_29_n_78,mul_temp_29_n_79,mul_temp_29_n_80,mul_temp_29_n_81,mul_temp_29_n_82,mul_temp_29_n_83,mul_temp_29_n_84,mul_temp_29_n_85,mul_temp_29_n_86,mul_temp_29_n_87,mul_temp_29_n_88,mul_temp_29_n_89,mul_temp_29_n_90,\^mul_temp_29 ,mul_temp_29_n_92,mul_temp_29_n_93,mul_temp_29_n_94,mul_temp_29_n_95,mul_temp_29_n_96,mul_temp_29_n_97,mul_temp_29_n_98,mul_temp_29_n_99,mul_temp_29_n_100,mul_temp_29_n_101,mul_temp_29_n_102,mul_temp_29_n_103,mul_temp_29_n_104,mul_temp_29_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_29_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_29_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_29_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_29_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_3
       (.A({\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] [15],\data_pipeline_tmp_reg[3] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_3_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[3]_2 [15],\weight_reg[3]_2 [15],\weight_reg[3]_2 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_3_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_3_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_3_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_3_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_3_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_3_P_UNCONNECTED[47:32],mul_temp_3_n_74,mul_temp_3_n_75,mul_temp_3_n_76,mul_temp_3_n_77,mul_temp_3_n_78,mul_temp_3_n_79,mul_temp_3_n_80,mul_temp_3_n_81,mul_temp_3_n_82,mul_temp_3_n_83,mul_temp_3_n_84,mul_temp_3_n_85,mul_temp_3_n_86,mul_temp_3_n_87,mul_temp_3_n_88,mul_temp_3_n_89,mul_temp_3_n_90,\^mul_temp_3 ,mul_temp_3_n_92,mul_temp_3_n_93,mul_temp_3_n_94,mul_temp_3_n_95,mul_temp_3_n_96,mul_temp_3_n_97,mul_temp_3_n_98,mul_temp_3_n_99,mul_temp_3_n_100,mul_temp_3_n_101,mul_temp_3_n_102,mul_temp_3_n_103,mul_temp_3_n_104,mul_temp_3_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_3_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_3_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_3_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_3_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_30
       (.A({\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] [15],\data_pipeline_tmp_reg[13] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_30_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_30_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_30_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_30_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_30_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_30_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_30_P_UNCONNECTED[47:32],mul_temp_30_n_74,mul_temp_30_n_75,mul_temp_30_n_76,mul_temp_30_n_77,mul_temp_30_n_78,mul_temp_30_n_79,mul_temp_30_n_80,mul_temp_30_n_81,mul_temp_30_n_82,mul_temp_30_n_83,mul_temp_30_n_84,mul_temp_30_n_85,mul_temp_30_n_86,mul_temp_30_n_87,mul_temp_30_n_88,mul_temp_30_n_89,mul_temp_30_n_90,\^mul_temp_30 ,mul_temp_30_n_92,mul_temp_30_n_93,mul_temp_30_n_94,mul_temp_30_n_95,mul_temp_30_n_96,mul_temp_30_n_97,mul_temp_30_n_98,mul_temp_30_n_99,mul_temp_30_n_100,mul_temp_30_n_101,mul_temp_30_n_102,mul_temp_30_n_103,mul_temp_30_n_104,mul_temp_30_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_30_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_30_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_30_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_30_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_31
       (.A({\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] [15],\data_pipeline_tmp_reg[14] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_31_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_31_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_31_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_31_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_31_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_31_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_31_P_UNCONNECTED[47:32],mul_temp_31_n_74,mul_temp_31_n_75,mul_temp_31_n_76,mul_temp_31_n_77,mul_temp_31_n_78,mul_temp_31_n_79,mul_temp_31_n_80,mul_temp_31_n_81,mul_temp_31_n_82,mul_temp_31_n_83,mul_temp_31_n_84,mul_temp_31_n_85,mul_temp_31_n_86,mul_temp_31_n_87,mul_temp_31_n_88,mul_temp_31_n_89,mul_temp_31_n_90,\^mul_temp_31 ,mul_temp_31_n_92,mul_temp_31_n_93,mul_temp_31_n_94,mul_temp_31_n_95,mul_temp_31_n_96,mul_temp_31_n_97,mul_temp_31_n_98,mul_temp_31_n_99,mul_temp_31_n_100,mul_temp_31_n_101,mul_temp_31_n_102,mul_temp_31_n_103,mul_temp_31_n_104,mul_temp_31_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_31_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_31_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_31_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_31_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_32
       (.A({\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] [15],\write_reg_x_k_reg[15] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_32_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[32],ARG__31[29:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_32_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_32_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_32_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_32_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_32_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_32_P_UNCONNECTED[47:32],mul_temp_32_n_74,mul_temp_32_n_75,mul_temp_32_n_76,mul_temp_32_n_77,mul_temp_32_n_78,mul_temp_32_n_79,mul_temp_32_n_80,mul_temp_32_n_81,mul_temp_32_n_82,mul_temp_32_n_83,mul_temp_32_n_84,mul_temp_32_n_85,mul_temp_32_n_86,mul_temp_32_n_87,mul_temp_32_n_88,mul_temp_32_n_89,mul_temp_32_n_90,\^mul_temp_32 ,mul_temp_32_n_92,mul_temp_32_n_93,mul_temp_32_n_94,mul_temp_32_n_95,mul_temp_32_n_96,mul_temp_32_n_97,mul_temp_32_n_98,mul_temp_32_n_99,mul_temp_32_n_100,mul_temp_32_n_101,mul_temp_32_n_102,mul_temp_32_n_103,mul_temp_32_n_104,mul_temp_32_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_32_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_32_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_32_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_32_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_4
       (.A({\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] [15],\data_pipeline_tmp_reg[4] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_4_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[4]_3 [15],\weight_reg[4]_3 [15],\weight_reg[4]_3 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_4_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_4_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_4_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_4_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_4_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_4_P_UNCONNECTED[47:32],mul_temp_4_n_74,mul_temp_4_n_75,mul_temp_4_n_76,mul_temp_4_n_77,mul_temp_4_n_78,mul_temp_4_n_79,mul_temp_4_n_80,mul_temp_4_n_81,mul_temp_4_n_82,mul_temp_4_n_83,mul_temp_4_n_84,mul_temp_4_n_85,mul_temp_4_n_86,mul_temp_4_n_87,mul_temp_4_n_88,mul_temp_4_n_89,mul_temp_4_n_90,\^mul_temp_4 ,mul_temp_4_n_92,mul_temp_4_n_93,mul_temp_4_n_94,mul_temp_4_n_95,mul_temp_4_n_96,mul_temp_4_n_97,mul_temp_4_n_98,mul_temp_4_n_99,mul_temp_4_n_100,mul_temp_4_n_101,mul_temp_4_n_102,mul_temp_4_n_103,mul_temp_4_n_104,mul_temp_4_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_4_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_4_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_4_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_4_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_5
       (.A({\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] [15],\data_pipeline_tmp_reg[5] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_5_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[5]_4 [15],\weight_reg[5]_4 [15],\weight_reg[5]_4 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_5_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_5_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_5_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_5_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_5_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_5_P_UNCONNECTED[47:32],mul_temp_5_n_74,mul_temp_5_n_75,mul_temp_5_n_76,mul_temp_5_n_77,mul_temp_5_n_78,mul_temp_5_n_79,mul_temp_5_n_80,mul_temp_5_n_81,mul_temp_5_n_82,mul_temp_5_n_83,mul_temp_5_n_84,mul_temp_5_n_85,mul_temp_5_n_86,mul_temp_5_n_87,mul_temp_5_n_88,mul_temp_5_n_89,mul_temp_5_n_90,\^mul_temp_5 ,mul_temp_5_n_92,mul_temp_5_n_93,mul_temp_5_n_94,mul_temp_5_n_95,mul_temp_5_n_96,mul_temp_5_n_97,mul_temp_5_n_98,mul_temp_5_n_99,mul_temp_5_n_100,mul_temp_5_n_101,mul_temp_5_n_102,mul_temp_5_n_103,mul_temp_5_n_104,mul_temp_5_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_5_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_5_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_5_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_5_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_6
       (.A({\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] [15],\data_pipeline_tmp_reg[6] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_6_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[6]_5 [15],\weight_reg[6]_5 [15],\weight_reg[6]_5 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_6_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_6_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_6_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_6_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_6_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_6_P_UNCONNECTED[47:32],mul_temp_6_n_74,mul_temp_6_n_75,mul_temp_6_n_76,mul_temp_6_n_77,mul_temp_6_n_78,mul_temp_6_n_79,mul_temp_6_n_80,mul_temp_6_n_81,mul_temp_6_n_82,mul_temp_6_n_83,mul_temp_6_n_84,mul_temp_6_n_85,mul_temp_6_n_86,mul_temp_6_n_87,mul_temp_6_n_88,mul_temp_6_n_89,mul_temp_6_n_90,\^mul_temp_6 ,mul_temp_6_n_92,mul_temp_6_n_93,mul_temp_6_n_94,mul_temp_6_n_95,mul_temp_6_n_96,mul_temp_6_n_97,mul_temp_6_n_98,mul_temp_6_n_99,mul_temp_6_n_100,mul_temp_6_n_101,mul_temp_6_n_102,mul_temp_6_n_103,mul_temp_6_n_104,mul_temp_6_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_6_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_6_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_6_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_6_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_7
       (.A({\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] [15],\data_pipeline_tmp_reg[7] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_7_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[7]_6 [15],\weight_reg[7]_6 [15],\weight_reg[7]_6 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_7_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_7_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_7_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_7_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_7_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_7_P_UNCONNECTED[47:32],mul_temp_7_n_74,mul_temp_7_n_75,mul_temp_7_n_76,mul_temp_7_n_77,mul_temp_7_n_78,mul_temp_7_n_79,mul_temp_7_n_80,mul_temp_7_n_81,mul_temp_7_n_82,mul_temp_7_n_83,mul_temp_7_n_84,mul_temp_7_n_85,mul_temp_7_n_86,mul_temp_7_n_87,mul_temp_7_n_88,mul_temp_7_n_89,mul_temp_7_n_90,\^mul_temp_7 ,mul_temp_7_n_92,mul_temp_7_n_93,mul_temp_7_n_94,mul_temp_7_n_95,mul_temp_7_n_96,mul_temp_7_n_97,mul_temp_7_n_98,mul_temp_7_n_99,mul_temp_7_n_100,mul_temp_7_n_101,mul_temp_7_n_102,mul_temp_7_n_103,mul_temp_7_n_104,mul_temp_7_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_7_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_7_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_7_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_7_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_8
       (.A({\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] [15],\data_pipeline_tmp_reg[8] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_8_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[8]_7 [15],\weight_reg[8]_7 [15],\weight_reg[8]_7 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_8_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_8_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_8_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_8_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_8_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_8_P_UNCONNECTED[47:32],mul_temp_8_n_74,mul_temp_8_n_75,mul_temp_8_n_76,mul_temp_8_n_77,mul_temp_8_n_78,mul_temp_8_n_79,mul_temp_8_n_80,mul_temp_8_n_81,mul_temp_8_n_82,mul_temp_8_n_83,mul_temp_8_n_84,mul_temp_8_n_85,mul_temp_8_n_86,mul_temp_8_n_87,mul_temp_8_n_88,mul_temp_8_n_89,mul_temp_8_n_90,\^mul_temp_8 ,mul_temp_8_n_92,mul_temp_8_n_93,mul_temp_8_n_94,mul_temp_8_n_95,mul_temp_8_n_96,mul_temp_8_n_97,mul_temp_8_n_98,mul_temp_8_n_99,mul_temp_8_n_100,mul_temp_8_n_101,mul_temp_8_n_102,mul_temp_8_n_103,mul_temp_8_n_104,mul_temp_8_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_8_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_8_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_8_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_8_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-13 {cell *THIS*}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    mul_temp_9
       (.A({\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] [15],\data_pipeline_tmp_reg[9] }),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_mul_temp_9_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\weight_reg[9]_8 [15],\weight_reg[9]_8 [15],\weight_reg[9]_8 }),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_mul_temp_9_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_mul_temp_9_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_mul_temp_9_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_mul_temp_9_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_mul_temp_9_OVERFLOW_UNCONNECTED),
        .P({NLW_mul_temp_9_P_UNCONNECTED[47:32],mul_temp_9_n_74,mul_temp_9_n_75,mul_temp_9_n_76,mul_temp_9_n_77,mul_temp_9_n_78,mul_temp_9_n_79,mul_temp_9_n_80,mul_temp_9_n_81,mul_temp_9_n_82,mul_temp_9_n_83,mul_temp_9_n_84,mul_temp_9_n_85,mul_temp_9_n_86,mul_temp_9_n_87,mul_temp_9_n_88,mul_temp_9_n_89,mul_temp_9_n_90,\^mul_temp_9 ,mul_temp_9_n_92,mul_temp_9_n_93,mul_temp_9_n_94,mul_temp_9_n_95,mul_temp_9_n_96,mul_temp_9_n_97,mul_temp_9_n_98,mul_temp_9_n_99,mul_temp_9_n_100,mul_temp_9_n_101,mul_temp_9_n_102,mul_temp_9_n_103,mul_temp_9_n_104,mul_temp_9_n_105}),
        .PATTERNBDETECT(NLW_mul_temp_9_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_mul_temp_9_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT(NLW_mul_temp_9_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_mul_temp_9_UNDERFLOW_UNCONNECTED));
  CARRY4 sub_temp_carry
       (.CI(1'b0),
        .CO({sub_temp_carry_n_0,sub_temp_carry_n_1,sub_temp_carry_n_2,sub_temp_carry_n_3}),
        .CYINIT(1'b1),
        .DI(Q[3:0]),
        .O(mul_temp_16[3:0]),
        .S(\write_reg_d_k_reg[3]_0 ));
  CARRY4 sub_temp_carry__0
       (.CI(sub_temp_carry_n_0),
        .CO({sub_temp_carry__0_n_0,sub_temp_carry__0_n_1,sub_temp_carry__0_n_2,sub_temp_carry__0_n_3}),
        .CYINIT(1'b0),
        .DI(Q[7:4]),
        .O(mul_temp_16[7:4]),
        .S(\write_reg_d_k_reg[7] ));
  CARRY4 sub_temp_carry__1
       (.CI(sub_temp_carry__0_n_0),
        .CO({sub_temp_carry__1_n_0,sub_temp_carry__1_n_1,sub_temp_carry__1_n_2,sub_temp_carry__1_n_3}),
        .CYINIT(1'b0),
        .DI(Q[11:8]),
        .O(mul_temp_16[11:8]),
        .S(\write_reg_d_k_reg[11] ));
  CARRY4 sub_temp_carry__2
       (.CI(sub_temp_carry__1_n_0),
        .CO({NLW_sub_temp_carry__2_CO_UNCONNECTED[3],sub_temp_carry__2_n_1,sub_temp_carry__2_n_2,sub_temp_carry__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,Q[14:12]}),
        .O(mul_temp_16[15:12]),
        .S(S));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][0]_i_2 
       (.I0(ARG__29_n_88),
        .I1(\weight_reg[0]_15 [3]),
        .O(\weight[0][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][0]_i_3 
       (.I0(ARG__29_n_89),
        .I1(\weight_reg[0]_15 [2]),
        .O(\weight[0][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][0]_i_4 
       (.I0(ARG__29_n_90),
        .I1(\weight_reg[0]_15 [1]),
        .O(\weight[0][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][0]_i_5 
       (.I0(ARG__29_n_91),
        .I1(\weight_reg[0]_15 [0]),
        .O(\weight[0][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][12]_i_2 
       (.I0(ARG__29_n_76),
        .I1(\weight_reg[0]_15 [15]),
        .O(\weight[0][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][12]_i_3 
       (.I0(ARG__29_n_77),
        .I1(\weight_reg[0]_15 [14]),
        .O(\weight[0][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][12]_i_4 
       (.I0(ARG__29_n_78),
        .I1(\weight_reg[0]_15 [13]),
        .O(\weight[0][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][12]_i_5 
       (.I0(ARG__29_n_79),
        .I1(\weight_reg[0]_15 [12]),
        .O(\weight[0][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][4]_i_2 
       (.I0(ARG__29_n_84),
        .I1(\weight_reg[0]_15 [7]),
        .O(\weight[0][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][4]_i_3 
       (.I0(ARG__29_n_85),
        .I1(\weight_reg[0]_15 [6]),
        .O(\weight[0][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][4]_i_4 
       (.I0(ARG__29_n_86),
        .I1(\weight_reg[0]_15 [5]),
        .O(\weight[0][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][4]_i_5 
       (.I0(ARG__29_n_87),
        .I1(\weight_reg[0]_15 [4]),
        .O(\weight[0][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][8]_i_2 
       (.I0(ARG__29_n_80),
        .I1(\weight_reg[0]_15 [11]),
        .O(\weight[0][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][8]_i_3 
       (.I0(ARG__29_n_81),
        .I1(\weight_reg[0]_15 [10]),
        .O(\weight[0][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][8]_i_4 
       (.I0(ARG__29_n_82),
        .I1(\weight_reg[0]_15 [9]),
        .O(\weight[0][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[0][8]_i_5 
       (.I0(ARG__29_n_83),
        .I1(\weight_reg[0]_15 [8]),
        .O(\weight[0][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][0]_i_2 
       (.I0(ARG__17_n_88),
        .I1(\weight_reg[10]_9 [3]),
        .O(\weight[10][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][0]_i_3 
       (.I0(ARG__17_n_89),
        .I1(\weight_reg[10]_9 [2]),
        .O(\weight[10][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][0]_i_4 
       (.I0(ARG__17_n_90),
        .I1(\weight_reg[10]_9 [1]),
        .O(\weight[10][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][0]_i_5 
       (.I0(ARG__17_n_91),
        .I1(\weight_reg[10]_9 [0]),
        .O(\weight[10][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][12]_i_2 
       (.I0(ARG__17_n_76),
        .I1(\weight_reg[10]_9 [15]),
        .O(\weight[10][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][12]_i_3 
       (.I0(ARG__17_n_77),
        .I1(\weight_reg[10]_9 [14]),
        .O(\weight[10][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][12]_i_4 
       (.I0(ARG__17_n_78),
        .I1(\weight_reg[10]_9 [13]),
        .O(\weight[10][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][12]_i_5 
       (.I0(ARG__17_n_79),
        .I1(\weight_reg[10]_9 [12]),
        .O(\weight[10][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][4]_i_2 
       (.I0(ARG__17_n_84),
        .I1(\weight_reg[10]_9 [7]),
        .O(\weight[10][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][4]_i_3 
       (.I0(ARG__17_n_85),
        .I1(\weight_reg[10]_9 [6]),
        .O(\weight[10][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][4]_i_4 
       (.I0(ARG__17_n_86),
        .I1(\weight_reg[10]_9 [5]),
        .O(\weight[10][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][4]_i_5 
       (.I0(ARG__17_n_87),
        .I1(\weight_reg[10]_9 [4]),
        .O(\weight[10][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][8]_i_2 
       (.I0(ARG__17_n_80),
        .I1(\weight_reg[10]_9 [11]),
        .O(\weight[10][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][8]_i_3 
       (.I0(ARG__17_n_81),
        .I1(\weight_reg[10]_9 [10]),
        .O(\weight[10][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][8]_i_4 
       (.I0(ARG__17_n_82),
        .I1(\weight_reg[10]_9 [9]),
        .O(\weight[10][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[10][8]_i_5 
       (.I0(ARG__17_n_83),
        .I1(\weight_reg[10]_9 [8]),
        .O(\weight[10][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][0]_i_2 
       (.I0(ARG__19_n_88),
        .I1(\weight_reg[11]_10 [3]),
        .O(\weight[11][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][0]_i_3 
       (.I0(ARG__19_n_89),
        .I1(\weight_reg[11]_10 [2]),
        .O(\weight[11][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][0]_i_4 
       (.I0(ARG__19_n_90),
        .I1(\weight_reg[11]_10 [1]),
        .O(\weight[11][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][0]_i_5 
       (.I0(ARG__19_n_91),
        .I1(\weight_reg[11]_10 [0]),
        .O(\weight[11][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][12]_i_2 
       (.I0(ARG__19_n_76),
        .I1(\weight_reg[11]_10 [15]),
        .O(\weight[11][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][12]_i_3 
       (.I0(ARG__19_n_77),
        .I1(\weight_reg[11]_10 [14]),
        .O(\weight[11][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][12]_i_4 
       (.I0(ARG__19_n_78),
        .I1(\weight_reg[11]_10 [13]),
        .O(\weight[11][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][12]_i_5 
       (.I0(ARG__19_n_79),
        .I1(\weight_reg[11]_10 [12]),
        .O(\weight[11][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][4]_i_2 
       (.I0(ARG__19_n_84),
        .I1(\weight_reg[11]_10 [7]),
        .O(\weight[11][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][4]_i_3 
       (.I0(ARG__19_n_85),
        .I1(\weight_reg[11]_10 [6]),
        .O(\weight[11][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][4]_i_4 
       (.I0(ARG__19_n_86),
        .I1(\weight_reg[11]_10 [5]),
        .O(\weight[11][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][4]_i_5 
       (.I0(ARG__19_n_87),
        .I1(\weight_reg[11]_10 [4]),
        .O(\weight[11][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][8]_i_2 
       (.I0(ARG__19_n_80),
        .I1(\weight_reg[11]_10 [11]),
        .O(\weight[11][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][8]_i_3 
       (.I0(ARG__19_n_81),
        .I1(\weight_reg[11]_10 [10]),
        .O(\weight[11][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][8]_i_4 
       (.I0(ARG__19_n_82),
        .I1(\weight_reg[11]_10 [9]),
        .O(\weight[11][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[11][8]_i_5 
       (.I0(ARG__19_n_83),
        .I1(\weight_reg[11]_10 [8]),
        .O(\weight[11][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][0]_i_2 
       (.I0(ARG__21_n_88),
        .I1(\weight_reg[12]_11 [3]),
        .O(\weight[12][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][0]_i_3 
       (.I0(ARG__21_n_89),
        .I1(\weight_reg[12]_11 [2]),
        .O(\weight[12][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][0]_i_4 
       (.I0(ARG__21_n_90),
        .I1(\weight_reg[12]_11 [1]),
        .O(\weight[12][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][0]_i_5 
       (.I0(ARG__21_n_91),
        .I1(\weight_reg[12]_11 [0]),
        .O(\weight[12][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][12]_i_2 
       (.I0(ARG__21_n_76),
        .I1(\weight_reg[12]_11 [15]),
        .O(\weight[12][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][12]_i_3 
       (.I0(ARG__21_n_77),
        .I1(\weight_reg[12]_11 [14]),
        .O(\weight[12][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][12]_i_4 
       (.I0(ARG__21_n_78),
        .I1(\weight_reg[12]_11 [13]),
        .O(\weight[12][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][12]_i_5 
       (.I0(ARG__21_n_79),
        .I1(\weight_reg[12]_11 [12]),
        .O(\weight[12][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][4]_i_2 
       (.I0(ARG__21_n_84),
        .I1(\weight_reg[12]_11 [7]),
        .O(\weight[12][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][4]_i_3 
       (.I0(ARG__21_n_85),
        .I1(\weight_reg[12]_11 [6]),
        .O(\weight[12][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][4]_i_4 
       (.I0(ARG__21_n_86),
        .I1(\weight_reg[12]_11 [5]),
        .O(\weight[12][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][4]_i_5 
       (.I0(ARG__21_n_87),
        .I1(\weight_reg[12]_11 [4]),
        .O(\weight[12][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][8]_i_2 
       (.I0(ARG__21_n_80),
        .I1(\weight_reg[12]_11 [11]),
        .O(\weight[12][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][8]_i_3 
       (.I0(ARG__21_n_81),
        .I1(\weight_reg[12]_11 [10]),
        .O(\weight[12][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][8]_i_4 
       (.I0(ARG__21_n_82),
        .I1(\weight_reg[12]_11 [9]),
        .O(\weight[12][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[12][8]_i_5 
       (.I0(ARG__21_n_83),
        .I1(\weight_reg[12]_11 [8]),
        .O(\weight[12][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][0]_i_2 
       (.I0(ARG__23_n_88),
        .I1(\weight_reg[13]_12 [3]),
        .O(\weight[13][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][0]_i_3 
       (.I0(ARG__23_n_89),
        .I1(\weight_reg[13]_12 [2]),
        .O(\weight[13][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][0]_i_4 
       (.I0(ARG__23_n_90),
        .I1(\weight_reg[13]_12 [1]),
        .O(\weight[13][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][0]_i_5 
       (.I0(ARG__23_n_91),
        .I1(\weight_reg[13]_12 [0]),
        .O(\weight[13][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][12]_i_2 
       (.I0(ARG__23_n_76),
        .I1(\weight_reg[13]_12 [15]),
        .O(\weight[13][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][12]_i_3 
       (.I0(ARG__23_n_77),
        .I1(\weight_reg[13]_12 [14]),
        .O(\weight[13][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][12]_i_4 
       (.I0(ARG__23_n_78),
        .I1(\weight_reg[13]_12 [13]),
        .O(\weight[13][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][12]_i_5 
       (.I0(ARG__23_n_79),
        .I1(\weight_reg[13]_12 [12]),
        .O(\weight[13][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][4]_i_2 
       (.I0(ARG__23_n_84),
        .I1(\weight_reg[13]_12 [7]),
        .O(\weight[13][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][4]_i_3 
       (.I0(ARG__23_n_85),
        .I1(\weight_reg[13]_12 [6]),
        .O(\weight[13][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][4]_i_4 
       (.I0(ARG__23_n_86),
        .I1(\weight_reg[13]_12 [5]),
        .O(\weight[13][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][4]_i_5 
       (.I0(ARG__23_n_87),
        .I1(\weight_reg[13]_12 [4]),
        .O(\weight[13][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][8]_i_2 
       (.I0(ARG__23_n_80),
        .I1(\weight_reg[13]_12 [11]),
        .O(\weight[13][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][8]_i_3 
       (.I0(ARG__23_n_81),
        .I1(\weight_reg[13]_12 [10]),
        .O(\weight[13][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][8]_i_4 
       (.I0(ARG__23_n_82),
        .I1(\weight_reg[13]_12 [9]),
        .O(\weight[13][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[13][8]_i_5 
       (.I0(ARG__23_n_83),
        .I1(\weight_reg[13]_12 [8]),
        .O(\weight[13][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][0]_i_2 
       (.I0(ARG__25_n_88),
        .I1(\weight_reg[14]_13 [3]),
        .O(\weight[14][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][0]_i_3 
       (.I0(ARG__25_n_89),
        .I1(\weight_reg[14]_13 [2]),
        .O(\weight[14][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][0]_i_4 
       (.I0(ARG__25_n_90),
        .I1(\weight_reg[14]_13 [1]),
        .O(\weight[14][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][0]_i_5 
       (.I0(ARG__25_n_91),
        .I1(\weight_reg[14]_13 [0]),
        .O(\weight[14][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][12]_i_2 
       (.I0(ARG__25_n_76),
        .I1(\weight_reg[14]_13 [15]),
        .O(\weight[14][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][12]_i_3 
       (.I0(ARG__25_n_77),
        .I1(\weight_reg[14]_13 [14]),
        .O(\weight[14][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][12]_i_4 
       (.I0(ARG__25_n_78),
        .I1(\weight_reg[14]_13 [13]),
        .O(\weight[14][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][12]_i_5 
       (.I0(ARG__25_n_79),
        .I1(\weight_reg[14]_13 [12]),
        .O(\weight[14][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][4]_i_2 
       (.I0(ARG__25_n_84),
        .I1(\weight_reg[14]_13 [7]),
        .O(\weight[14][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][4]_i_3 
       (.I0(ARG__25_n_85),
        .I1(\weight_reg[14]_13 [6]),
        .O(\weight[14][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][4]_i_4 
       (.I0(ARG__25_n_86),
        .I1(\weight_reg[14]_13 [5]),
        .O(\weight[14][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][4]_i_5 
       (.I0(ARG__25_n_87),
        .I1(\weight_reg[14]_13 [4]),
        .O(\weight[14][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][8]_i_2 
       (.I0(ARG__25_n_80),
        .I1(\weight_reg[14]_13 [11]),
        .O(\weight[14][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][8]_i_3 
       (.I0(ARG__25_n_81),
        .I1(\weight_reg[14]_13 [10]),
        .O(\weight[14][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][8]_i_4 
       (.I0(ARG__25_n_82),
        .I1(\weight_reg[14]_13 [9]),
        .O(\weight[14][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[14][8]_i_5 
       (.I0(ARG__25_n_83),
        .I1(\weight_reg[14]_13 [8]),
        .O(\weight[14][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][0]_i_2 
       (.I0(ARG__27_n_88),
        .I1(\weight_reg[15]_14 [3]),
        .O(\weight[15][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][0]_i_3 
       (.I0(ARG__27_n_89),
        .I1(\weight_reg[15]_14 [2]),
        .O(\weight[15][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][0]_i_4 
       (.I0(ARG__27_n_90),
        .I1(\weight_reg[15]_14 [1]),
        .O(\weight[15][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][0]_i_5 
       (.I0(ARG__27_n_91),
        .I1(\weight_reg[15]_14 [0]),
        .O(\weight[15][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][12]_i_2 
       (.I0(ARG__27_n_76),
        .I1(\weight_reg[15]_14 [15]),
        .O(\weight[15][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][12]_i_3 
       (.I0(ARG__27_n_77),
        .I1(\weight_reg[15]_14 [14]),
        .O(\weight[15][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][12]_i_4 
       (.I0(ARG__27_n_78),
        .I1(\weight_reg[15]_14 [13]),
        .O(\weight[15][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][12]_i_5 
       (.I0(ARG__27_n_79),
        .I1(\weight_reg[15]_14 [12]),
        .O(\weight[15][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][4]_i_2 
       (.I0(ARG__27_n_84),
        .I1(\weight_reg[15]_14 [7]),
        .O(\weight[15][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][4]_i_3 
       (.I0(ARG__27_n_85),
        .I1(\weight_reg[15]_14 [6]),
        .O(\weight[15][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][4]_i_4 
       (.I0(ARG__27_n_86),
        .I1(\weight_reg[15]_14 [5]),
        .O(\weight[15][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][4]_i_5 
       (.I0(ARG__27_n_87),
        .I1(\weight_reg[15]_14 [4]),
        .O(\weight[15][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][8]_i_2 
       (.I0(ARG__27_n_80),
        .I1(\weight_reg[15]_14 [11]),
        .O(\weight[15][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][8]_i_3 
       (.I0(ARG__27_n_81),
        .I1(\weight_reg[15]_14 [10]),
        .O(\weight[15][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][8]_i_4 
       (.I0(ARG__27_n_82),
        .I1(\weight_reg[15]_14 [9]),
        .O(\weight[15][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[15][8]_i_5 
       (.I0(ARG__27_n_83),
        .I1(\weight_reg[15]_14 [8]),
        .O(\weight[15][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][0]_i_2 
       (.I0(in[3]),
        .I1(\weight_reg[1]_0 [3]),
        .O(\weight[1][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][0]_i_3 
       (.I0(in[2]),
        .I1(\weight_reg[1]_0 [2]),
        .O(\weight[1][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][0]_i_4 
       (.I0(in[1]),
        .I1(\weight_reg[1]_0 [1]),
        .O(\weight[1][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][0]_i_5 
       (.I0(in[0]),
        .I1(\weight_reg[1]_0 [0]),
        .O(\weight[1][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][12]_i_2 
       (.I0(in[15]),
        .I1(\weight_reg[1]_0 [15]),
        .O(\weight[1][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][12]_i_3 
       (.I0(in[14]),
        .I1(\weight_reg[1]_0 [14]),
        .O(\weight[1][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][12]_i_4 
       (.I0(in[13]),
        .I1(\weight_reg[1]_0 [13]),
        .O(\weight[1][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][12]_i_5 
       (.I0(in[12]),
        .I1(\weight_reg[1]_0 [12]),
        .O(\weight[1][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][4]_i_2 
       (.I0(in[7]),
        .I1(\weight_reg[1]_0 [7]),
        .O(\weight[1][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][4]_i_3 
       (.I0(in[6]),
        .I1(\weight_reg[1]_0 [6]),
        .O(\weight[1][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][4]_i_4 
       (.I0(in[5]),
        .I1(\weight_reg[1]_0 [5]),
        .O(\weight[1][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][4]_i_5 
       (.I0(in[4]),
        .I1(\weight_reg[1]_0 [4]),
        .O(\weight[1][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][8]_i_2 
       (.I0(in[11]),
        .I1(\weight_reg[1]_0 [11]),
        .O(\weight[1][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][8]_i_3 
       (.I0(in[10]),
        .I1(\weight_reg[1]_0 [10]),
        .O(\weight[1][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][8]_i_4 
       (.I0(in[9]),
        .I1(\weight_reg[1]_0 [9]),
        .O(\weight[1][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[1][8]_i_5 
       (.I0(in[8]),
        .I1(\weight_reg[1]_0 [8]),
        .O(\weight[1][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][0]_i_2 
       (.I0(ARG__1_n_88),
        .I1(\weight_reg[2]_1 [3]),
        .O(\weight[2][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][0]_i_3 
       (.I0(ARG__1_n_89),
        .I1(\weight_reg[2]_1 [2]),
        .O(\weight[2][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][0]_i_4 
       (.I0(ARG__1_n_90),
        .I1(\weight_reg[2]_1 [1]),
        .O(\weight[2][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][0]_i_5 
       (.I0(ARG__1_n_91),
        .I1(\weight_reg[2]_1 [0]),
        .O(\weight[2][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][12]_i_2 
       (.I0(ARG__1_n_76),
        .I1(\weight_reg[2]_1 [15]),
        .O(\weight[2][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][12]_i_3 
       (.I0(ARG__1_n_77),
        .I1(\weight_reg[2]_1 [14]),
        .O(\weight[2][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][12]_i_4 
       (.I0(ARG__1_n_78),
        .I1(\weight_reg[2]_1 [13]),
        .O(\weight[2][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][12]_i_5 
       (.I0(ARG__1_n_79),
        .I1(\weight_reg[2]_1 [12]),
        .O(\weight[2][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][4]_i_2 
       (.I0(ARG__1_n_84),
        .I1(\weight_reg[2]_1 [7]),
        .O(\weight[2][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][4]_i_3 
       (.I0(ARG__1_n_85),
        .I1(\weight_reg[2]_1 [6]),
        .O(\weight[2][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][4]_i_4 
       (.I0(ARG__1_n_86),
        .I1(\weight_reg[2]_1 [5]),
        .O(\weight[2][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][4]_i_5 
       (.I0(ARG__1_n_87),
        .I1(\weight_reg[2]_1 [4]),
        .O(\weight[2][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][8]_i_2 
       (.I0(ARG__1_n_80),
        .I1(\weight_reg[2]_1 [11]),
        .O(\weight[2][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][8]_i_3 
       (.I0(ARG__1_n_81),
        .I1(\weight_reg[2]_1 [10]),
        .O(\weight[2][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][8]_i_4 
       (.I0(ARG__1_n_82),
        .I1(\weight_reg[2]_1 [9]),
        .O(\weight[2][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[2][8]_i_5 
       (.I0(ARG__1_n_83),
        .I1(\weight_reg[2]_1 [8]),
        .O(\weight[2][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][0]_i_2 
       (.I0(ARG__3_n_88),
        .I1(\weight_reg[3]_2 [3]),
        .O(\weight[3][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][0]_i_3 
       (.I0(ARG__3_n_89),
        .I1(\weight_reg[3]_2 [2]),
        .O(\weight[3][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][0]_i_4 
       (.I0(ARG__3_n_90),
        .I1(\weight_reg[3]_2 [1]),
        .O(\weight[3][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][0]_i_5 
       (.I0(ARG__3_n_91),
        .I1(\weight_reg[3]_2 [0]),
        .O(\weight[3][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][12]_i_2 
       (.I0(ARG__3_n_76),
        .I1(\weight_reg[3]_2 [15]),
        .O(\weight[3][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][12]_i_3 
       (.I0(ARG__3_n_77),
        .I1(\weight_reg[3]_2 [14]),
        .O(\weight[3][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][12]_i_4 
       (.I0(ARG__3_n_78),
        .I1(\weight_reg[3]_2 [13]),
        .O(\weight[3][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][12]_i_5 
       (.I0(ARG__3_n_79),
        .I1(\weight_reg[3]_2 [12]),
        .O(\weight[3][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][4]_i_2 
       (.I0(ARG__3_n_84),
        .I1(\weight_reg[3]_2 [7]),
        .O(\weight[3][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][4]_i_3 
       (.I0(ARG__3_n_85),
        .I1(\weight_reg[3]_2 [6]),
        .O(\weight[3][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][4]_i_4 
       (.I0(ARG__3_n_86),
        .I1(\weight_reg[3]_2 [5]),
        .O(\weight[3][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][4]_i_5 
       (.I0(ARG__3_n_87),
        .I1(\weight_reg[3]_2 [4]),
        .O(\weight[3][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][8]_i_2 
       (.I0(ARG__3_n_80),
        .I1(\weight_reg[3]_2 [11]),
        .O(\weight[3][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][8]_i_3 
       (.I0(ARG__3_n_81),
        .I1(\weight_reg[3]_2 [10]),
        .O(\weight[3][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][8]_i_4 
       (.I0(ARG__3_n_82),
        .I1(\weight_reg[3]_2 [9]),
        .O(\weight[3][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[3][8]_i_5 
       (.I0(ARG__3_n_83),
        .I1(\weight_reg[3]_2 [8]),
        .O(\weight[3][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][0]_i_2 
       (.I0(ARG__5_n_88),
        .I1(\weight_reg[4]_3 [3]),
        .O(\weight[4][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][0]_i_3 
       (.I0(ARG__5_n_89),
        .I1(\weight_reg[4]_3 [2]),
        .O(\weight[4][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][0]_i_4 
       (.I0(ARG__5_n_90),
        .I1(\weight_reg[4]_3 [1]),
        .O(\weight[4][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][0]_i_5 
       (.I0(ARG__5_n_91),
        .I1(\weight_reg[4]_3 [0]),
        .O(\weight[4][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][12]_i_2 
       (.I0(ARG__5_n_76),
        .I1(\weight_reg[4]_3 [15]),
        .O(\weight[4][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][12]_i_3 
       (.I0(ARG__5_n_77),
        .I1(\weight_reg[4]_3 [14]),
        .O(\weight[4][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][12]_i_4 
       (.I0(ARG__5_n_78),
        .I1(\weight_reg[4]_3 [13]),
        .O(\weight[4][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][12]_i_5 
       (.I0(ARG__5_n_79),
        .I1(\weight_reg[4]_3 [12]),
        .O(\weight[4][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][4]_i_2 
       (.I0(ARG__5_n_84),
        .I1(\weight_reg[4]_3 [7]),
        .O(\weight[4][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][4]_i_3 
       (.I0(ARG__5_n_85),
        .I1(\weight_reg[4]_3 [6]),
        .O(\weight[4][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][4]_i_4 
       (.I0(ARG__5_n_86),
        .I1(\weight_reg[4]_3 [5]),
        .O(\weight[4][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][4]_i_5 
       (.I0(ARG__5_n_87),
        .I1(\weight_reg[4]_3 [4]),
        .O(\weight[4][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][8]_i_2 
       (.I0(ARG__5_n_80),
        .I1(\weight_reg[4]_3 [11]),
        .O(\weight[4][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][8]_i_3 
       (.I0(ARG__5_n_81),
        .I1(\weight_reg[4]_3 [10]),
        .O(\weight[4][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][8]_i_4 
       (.I0(ARG__5_n_82),
        .I1(\weight_reg[4]_3 [9]),
        .O(\weight[4][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[4][8]_i_5 
       (.I0(ARG__5_n_83),
        .I1(\weight_reg[4]_3 [8]),
        .O(\weight[4][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][0]_i_2 
       (.I0(ARG__7_n_88),
        .I1(\weight_reg[5]_4 [3]),
        .O(\weight[5][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][0]_i_3 
       (.I0(ARG__7_n_89),
        .I1(\weight_reg[5]_4 [2]),
        .O(\weight[5][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][0]_i_4 
       (.I0(ARG__7_n_90),
        .I1(\weight_reg[5]_4 [1]),
        .O(\weight[5][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][0]_i_5 
       (.I0(ARG__7_n_91),
        .I1(\weight_reg[5]_4 [0]),
        .O(\weight[5][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][12]_i_2 
       (.I0(ARG__7_n_76),
        .I1(\weight_reg[5]_4 [15]),
        .O(\weight[5][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][12]_i_3 
       (.I0(ARG__7_n_77),
        .I1(\weight_reg[5]_4 [14]),
        .O(\weight[5][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][12]_i_4 
       (.I0(ARG__7_n_78),
        .I1(\weight_reg[5]_4 [13]),
        .O(\weight[5][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][12]_i_5 
       (.I0(ARG__7_n_79),
        .I1(\weight_reg[5]_4 [12]),
        .O(\weight[5][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][4]_i_2 
       (.I0(ARG__7_n_84),
        .I1(\weight_reg[5]_4 [7]),
        .O(\weight[5][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][4]_i_3 
       (.I0(ARG__7_n_85),
        .I1(\weight_reg[5]_4 [6]),
        .O(\weight[5][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][4]_i_4 
       (.I0(ARG__7_n_86),
        .I1(\weight_reg[5]_4 [5]),
        .O(\weight[5][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][4]_i_5 
       (.I0(ARG__7_n_87),
        .I1(\weight_reg[5]_4 [4]),
        .O(\weight[5][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][8]_i_2 
       (.I0(ARG__7_n_80),
        .I1(\weight_reg[5]_4 [11]),
        .O(\weight[5][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][8]_i_3 
       (.I0(ARG__7_n_81),
        .I1(\weight_reg[5]_4 [10]),
        .O(\weight[5][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][8]_i_4 
       (.I0(ARG__7_n_82),
        .I1(\weight_reg[5]_4 [9]),
        .O(\weight[5][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[5][8]_i_5 
       (.I0(ARG__7_n_83),
        .I1(\weight_reg[5]_4 [8]),
        .O(\weight[5][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][0]_i_2 
       (.I0(ARG__9_n_88),
        .I1(\weight_reg[6]_5 [3]),
        .O(\weight[6][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][0]_i_3 
       (.I0(ARG__9_n_89),
        .I1(\weight_reg[6]_5 [2]),
        .O(\weight[6][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][0]_i_4 
       (.I0(ARG__9_n_90),
        .I1(\weight_reg[6]_5 [1]),
        .O(\weight[6][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][0]_i_5 
       (.I0(ARG__9_n_91),
        .I1(\weight_reg[6]_5 [0]),
        .O(\weight[6][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][12]_i_2 
       (.I0(ARG__9_n_76),
        .I1(\weight_reg[6]_5 [15]),
        .O(\weight[6][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][12]_i_3 
       (.I0(ARG__9_n_77),
        .I1(\weight_reg[6]_5 [14]),
        .O(\weight[6][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][12]_i_4 
       (.I0(ARG__9_n_78),
        .I1(\weight_reg[6]_5 [13]),
        .O(\weight[6][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][12]_i_5 
       (.I0(ARG__9_n_79),
        .I1(\weight_reg[6]_5 [12]),
        .O(\weight[6][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][4]_i_2 
       (.I0(ARG__9_n_84),
        .I1(\weight_reg[6]_5 [7]),
        .O(\weight[6][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][4]_i_3 
       (.I0(ARG__9_n_85),
        .I1(\weight_reg[6]_5 [6]),
        .O(\weight[6][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][4]_i_4 
       (.I0(ARG__9_n_86),
        .I1(\weight_reg[6]_5 [5]),
        .O(\weight[6][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][4]_i_5 
       (.I0(ARG__9_n_87),
        .I1(\weight_reg[6]_5 [4]),
        .O(\weight[6][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][8]_i_2 
       (.I0(ARG__9_n_80),
        .I1(\weight_reg[6]_5 [11]),
        .O(\weight[6][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][8]_i_3 
       (.I0(ARG__9_n_81),
        .I1(\weight_reg[6]_5 [10]),
        .O(\weight[6][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][8]_i_4 
       (.I0(ARG__9_n_82),
        .I1(\weight_reg[6]_5 [9]),
        .O(\weight[6][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[6][8]_i_5 
       (.I0(ARG__9_n_83),
        .I1(\weight_reg[6]_5 [8]),
        .O(\weight[6][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][0]_i_2 
       (.I0(ARG__11_n_88),
        .I1(\weight_reg[7]_6 [3]),
        .O(\weight[7][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][0]_i_3 
       (.I0(ARG__11_n_89),
        .I1(\weight_reg[7]_6 [2]),
        .O(\weight[7][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][0]_i_4 
       (.I0(ARG__11_n_90),
        .I1(\weight_reg[7]_6 [1]),
        .O(\weight[7][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][0]_i_5 
       (.I0(ARG__11_n_91),
        .I1(\weight_reg[7]_6 [0]),
        .O(\weight[7][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][12]_i_2 
       (.I0(ARG__11_n_76),
        .I1(\weight_reg[7]_6 [15]),
        .O(\weight[7][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][12]_i_3 
       (.I0(ARG__11_n_77),
        .I1(\weight_reg[7]_6 [14]),
        .O(\weight[7][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][12]_i_4 
       (.I0(ARG__11_n_78),
        .I1(\weight_reg[7]_6 [13]),
        .O(\weight[7][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][12]_i_5 
       (.I0(ARG__11_n_79),
        .I1(\weight_reg[7]_6 [12]),
        .O(\weight[7][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][4]_i_2 
       (.I0(ARG__11_n_84),
        .I1(\weight_reg[7]_6 [7]),
        .O(\weight[7][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][4]_i_3 
       (.I0(ARG__11_n_85),
        .I1(\weight_reg[7]_6 [6]),
        .O(\weight[7][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][4]_i_4 
       (.I0(ARG__11_n_86),
        .I1(\weight_reg[7]_6 [5]),
        .O(\weight[7][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][4]_i_5 
       (.I0(ARG__11_n_87),
        .I1(\weight_reg[7]_6 [4]),
        .O(\weight[7][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][8]_i_2 
       (.I0(ARG__11_n_80),
        .I1(\weight_reg[7]_6 [11]),
        .O(\weight[7][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][8]_i_3 
       (.I0(ARG__11_n_81),
        .I1(\weight_reg[7]_6 [10]),
        .O(\weight[7][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][8]_i_4 
       (.I0(ARG__11_n_82),
        .I1(\weight_reg[7]_6 [9]),
        .O(\weight[7][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[7][8]_i_5 
       (.I0(ARG__11_n_83),
        .I1(\weight_reg[7]_6 [8]),
        .O(\weight[7][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][0]_i_2 
       (.I0(ARG__13_n_88),
        .I1(\weight_reg[8]_7 [3]),
        .O(\weight[8][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][0]_i_3 
       (.I0(ARG__13_n_89),
        .I1(\weight_reg[8]_7 [2]),
        .O(\weight[8][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][0]_i_4 
       (.I0(ARG__13_n_90),
        .I1(\weight_reg[8]_7 [1]),
        .O(\weight[8][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][0]_i_5 
       (.I0(ARG__13_n_91),
        .I1(\weight_reg[8]_7 [0]),
        .O(\weight[8][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][12]_i_2 
       (.I0(ARG__13_n_76),
        .I1(\weight_reg[8]_7 [15]),
        .O(\weight[8][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][12]_i_3 
       (.I0(ARG__13_n_77),
        .I1(\weight_reg[8]_7 [14]),
        .O(\weight[8][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][12]_i_4 
       (.I0(ARG__13_n_78),
        .I1(\weight_reg[8]_7 [13]),
        .O(\weight[8][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][12]_i_5 
       (.I0(ARG__13_n_79),
        .I1(\weight_reg[8]_7 [12]),
        .O(\weight[8][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][4]_i_2 
       (.I0(ARG__13_n_84),
        .I1(\weight_reg[8]_7 [7]),
        .O(\weight[8][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][4]_i_3 
       (.I0(ARG__13_n_85),
        .I1(\weight_reg[8]_7 [6]),
        .O(\weight[8][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][4]_i_4 
       (.I0(ARG__13_n_86),
        .I1(\weight_reg[8]_7 [5]),
        .O(\weight[8][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][4]_i_5 
       (.I0(ARG__13_n_87),
        .I1(\weight_reg[8]_7 [4]),
        .O(\weight[8][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][8]_i_2 
       (.I0(ARG__13_n_80),
        .I1(\weight_reg[8]_7 [11]),
        .O(\weight[8][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][8]_i_3 
       (.I0(ARG__13_n_81),
        .I1(\weight_reg[8]_7 [10]),
        .O(\weight[8][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][8]_i_4 
       (.I0(ARG__13_n_82),
        .I1(\weight_reg[8]_7 [9]),
        .O(\weight[8][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[8][8]_i_5 
       (.I0(ARG__13_n_83),
        .I1(\weight_reg[8]_7 [8]),
        .O(\weight[8][8]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][0]_i_2 
       (.I0(ARG__15_n_88),
        .I1(\weight_reg[9]_8 [3]),
        .O(\weight[9][0]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][0]_i_3 
       (.I0(ARG__15_n_89),
        .I1(\weight_reg[9]_8 [2]),
        .O(\weight[9][0]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][0]_i_4 
       (.I0(ARG__15_n_90),
        .I1(\weight_reg[9]_8 [1]),
        .O(\weight[9][0]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][0]_i_5 
       (.I0(ARG__15_n_91),
        .I1(\weight_reg[9]_8 [0]),
        .O(\weight[9][0]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][12]_i_2 
       (.I0(ARG__15_n_76),
        .I1(\weight_reg[9]_8 [15]),
        .O(\weight[9][12]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][12]_i_3 
       (.I0(ARG__15_n_77),
        .I1(\weight_reg[9]_8 [14]),
        .O(\weight[9][12]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][12]_i_4 
       (.I0(ARG__15_n_78),
        .I1(\weight_reg[9]_8 [13]),
        .O(\weight[9][12]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][12]_i_5 
       (.I0(ARG__15_n_79),
        .I1(\weight_reg[9]_8 [12]),
        .O(\weight[9][12]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][4]_i_2 
       (.I0(ARG__15_n_84),
        .I1(\weight_reg[9]_8 [7]),
        .O(\weight[9][4]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][4]_i_3 
       (.I0(ARG__15_n_85),
        .I1(\weight_reg[9]_8 [6]),
        .O(\weight[9][4]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][4]_i_4 
       (.I0(ARG__15_n_86),
        .I1(\weight_reg[9]_8 [5]),
        .O(\weight[9][4]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][4]_i_5 
       (.I0(ARG__15_n_87),
        .I1(\weight_reg[9]_8 [4]),
        .O(\weight[9][4]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][8]_i_2 
       (.I0(ARG__15_n_80),
        .I1(\weight_reg[9]_8 [11]),
        .O(\weight[9][8]_i_2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][8]_i_3 
       (.I0(ARG__15_n_81),
        .I1(\weight_reg[9]_8 [10]),
        .O(\weight[9][8]_i_3_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][8]_i_4 
       (.I0(ARG__15_n_82),
        .I1(\weight_reg[9]_8 [9]),
        .O(\weight[9][8]_i_4_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \weight[9][8]_i_5 
       (.I0(ARG__15_n_83),
        .I1(\weight_reg[9]_8 [8]),
        .O(\weight[9][8]_i_5_n_0 ));
  FDCE \weight_reg[0][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][0]_i_1_n_7 ),
        .Q(\weight_reg[0]_15 [0]));
  CARRY4 \weight_reg[0][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[0][0]_i_1_n_0 ,\weight_reg[0][0]_i_1_n_1 ,\weight_reg[0][0]_i_1_n_2 ,\weight_reg[0][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__29_n_88,ARG__29_n_89,ARG__29_n_90,ARG__29_n_91}),
        .O({\weight_reg[0][0]_i_1_n_4 ,\weight_reg[0][0]_i_1_n_5 ,\weight_reg[0][0]_i_1_n_6 ,\weight_reg[0][0]_i_1_n_7 }),
        .S({\weight[0][0]_i_2_n_0 ,\weight[0][0]_i_3_n_0 ,\weight[0][0]_i_4_n_0 ,\weight[0][0]_i_5_n_0 }));
  FDCE \weight_reg[0][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][8]_i_1_n_5 ),
        .Q(\weight_reg[0]_15 [10]));
  FDCE \weight_reg[0][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][8]_i_1_n_4 ),
        .Q(\weight_reg[0]_15 [11]));
  FDCE \weight_reg[0][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][12]_i_1_n_7 ),
        .Q(\weight_reg[0]_15 [12]));
  CARRY4 \weight_reg[0][12]_i_1 
       (.CI(\weight_reg[0][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[0][12]_i_1_CO_UNCONNECTED [3],\weight_reg[0][12]_i_1_n_1 ,\weight_reg[0][12]_i_1_n_2 ,\weight_reg[0][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__29_n_77,ARG__29_n_78,ARG__29_n_79}),
        .O({\weight_reg[0][12]_i_1_n_4 ,\weight_reg[0][12]_i_1_n_5 ,\weight_reg[0][12]_i_1_n_6 ,\weight_reg[0][12]_i_1_n_7 }),
        .S({\weight[0][12]_i_2_n_0 ,\weight[0][12]_i_3_n_0 ,\weight[0][12]_i_4_n_0 ,\weight[0][12]_i_5_n_0 }));
  FDCE \weight_reg[0][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][12]_i_1_n_6 ),
        .Q(\weight_reg[0]_15 [13]));
  FDCE \weight_reg[0][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][12]_i_1_n_5 ),
        .Q(\weight_reg[0]_15 [14]));
  FDCE \weight_reg[0][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][12]_i_1_n_4 ),
        .Q(\weight_reg[0]_15 [15]));
  FDCE \weight_reg[0][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][0]_i_1_n_6 ),
        .Q(\weight_reg[0]_15 [1]));
  FDCE \weight_reg[0][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][0]_i_1_n_5 ),
        .Q(\weight_reg[0]_15 [2]));
  FDCE \weight_reg[0][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][0]_i_1_n_4 ),
        .Q(\weight_reg[0]_15 [3]));
  FDCE \weight_reg[0][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][4]_i_1_n_7 ),
        .Q(\weight_reg[0]_15 [4]));
  CARRY4 \weight_reg[0][4]_i_1 
       (.CI(\weight_reg[0][0]_i_1_n_0 ),
        .CO({\weight_reg[0][4]_i_1_n_0 ,\weight_reg[0][4]_i_1_n_1 ,\weight_reg[0][4]_i_1_n_2 ,\weight_reg[0][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__29_n_84,ARG__29_n_85,ARG__29_n_86,ARG__29_n_87}),
        .O({\weight_reg[0][4]_i_1_n_4 ,\weight_reg[0][4]_i_1_n_5 ,\weight_reg[0][4]_i_1_n_6 ,\weight_reg[0][4]_i_1_n_7 }),
        .S({\weight[0][4]_i_2_n_0 ,\weight[0][4]_i_3_n_0 ,\weight[0][4]_i_4_n_0 ,\weight[0][4]_i_5_n_0 }));
  FDCE \weight_reg[0][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][4]_i_1_n_6 ),
        .Q(\weight_reg[0]_15 [5]));
  FDCE \weight_reg[0][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][4]_i_1_n_5 ),
        .Q(\weight_reg[0]_15 [6]));
  FDCE \weight_reg[0][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][4]_i_1_n_4 ),
        .Q(\weight_reg[0]_15 [7]));
  FDCE \weight_reg[0][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][8]_i_1_n_7 ),
        .Q(\weight_reg[0]_15 [8]));
  CARRY4 \weight_reg[0][8]_i_1 
       (.CI(\weight_reg[0][4]_i_1_n_0 ),
        .CO({\weight_reg[0][8]_i_1_n_0 ,\weight_reg[0][8]_i_1_n_1 ,\weight_reg[0][8]_i_1_n_2 ,\weight_reg[0][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__29_n_80,ARG__29_n_81,ARG__29_n_82,ARG__29_n_83}),
        .O({\weight_reg[0][8]_i_1_n_4 ,\weight_reg[0][8]_i_1_n_5 ,\weight_reg[0][8]_i_1_n_6 ,\weight_reg[0][8]_i_1_n_7 }),
        .S({\weight[0][8]_i_2_n_0 ,\weight[0][8]_i_3_n_0 ,\weight[0][8]_i_4_n_0 ,\weight[0][8]_i_5_n_0 }));
  FDCE \weight_reg[0][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[0][8]_i_1_n_6 ),
        .Q(\weight_reg[0]_15 [9]));
  FDCE \weight_reg[10][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][0]_i_1_n_7 ),
        .Q(\weight_reg[10]_9 [0]));
  CARRY4 \weight_reg[10][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[10][0]_i_1_n_0 ,\weight_reg[10][0]_i_1_n_1 ,\weight_reg[10][0]_i_1_n_2 ,\weight_reg[10][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__17_n_88,ARG__17_n_89,ARG__17_n_90,ARG__17_n_91}),
        .O({\weight_reg[10][0]_i_1_n_4 ,\weight_reg[10][0]_i_1_n_5 ,\weight_reg[10][0]_i_1_n_6 ,\weight_reg[10][0]_i_1_n_7 }),
        .S({\weight[10][0]_i_2_n_0 ,\weight[10][0]_i_3_n_0 ,\weight[10][0]_i_4_n_0 ,\weight[10][0]_i_5_n_0 }));
  FDCE \weight_reg[10][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][8]_i_1_n_5 ),
        .Q(\weight_reg[10]_9 [10]));
  FDCE \weight_reg[10][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][8]_i_1_n_4 ),
        .Q(\weight_reg[10]_9 [11]));
  FDCE \weight_reg[10][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][12]_i_1_n_7 ),
        .Q(\weight_reg[10]_9 [12]));
  CARRY4 \weight_reg[10][12]_i_1 
       (.CI(\weight_reg[10][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[10][12]_i_1_CO_UNCONNECTED [3],\weight_reg[10][12]_i_1_n_1 ,\weight_reg[10][12]_i_1_n_2 ,\weight_reg[10][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__17_n_77,ARG__17_n_78,ARG__17_n_79}),
        .O({\weight_reg[10][12]_i_1_n_4 ,\weight_reg[10][12]_i_1_n_5 ,\weight_reg[10][12]_i_1_n_6 ,\weight_reg[10][12]_i_1_n_7 }),
        .S({\weight[10][12]_i_2_n_0 ,\weight[10][12]_i_3_n_0 ,\weight[10][12]_i_4_n_0 ,\weight[10][12]_i_5_n_0 }));
  FDCE \weight_reg[10][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][12]_i_1_n_6 ),
        .Q(\weight_reg[10]_9 [13]));
  FDCE \weight_reg[10][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][12]_i_1_n_5 ),
        .Q(\weight_reg[10]_9 [14]));
  FDCE \weight_reg[10][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][12]_i_1_n_4 ),
        .Q(\weight_reg[10]_9 [15]));
  FDCE \weight_reg[10][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][0]_i_1_n_6 ),
        .Q(\weight_reg[10]_9 [1]));
  FDCE \weight_reg[10][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][0]_i_1_n_5 ),
        .Q(\weight_reg[10]_9 [2]));
  FDCE \weight_reg[10][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][0]_i_1_n_4 ),
        .Q(\weight_reg[10]_9 [3]));
  FDCE \weight_reg[10][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][4]_i_1_n_7 ),
        .Q(\weight_reg[10]_9 [4]));
  CARRY4 \weight_reg[10][4]_i_1 
       (.CI(\weight_reg[10][0]_i_1_n_0 ),
        .CO({\weight_reg[10][4]_i_1_n_0 ,\weight_reg[10][4]_i_1_n_1 ,\weight_reg[10][4]_i_1_n_2 ,\weight_reg[10][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__17_n_84,ARG__17_n_85,ARG__17_n_86,ARG__17_n_87}),
        .O({\weight_reg[10][4]_i_1_n_4 ,\weight_reg[10][4]_i_1_n_5 ,\weight_reg[10][4]_i_1_n_6 ,\weight_reg[10][4]_i_1_n_7 }),
        .S({\weight[10][4]_i_2_n_0 ,\weight[10][4]_i_3_n_0 ,\weight[10][4]_i_4_n_0 ,\weight[10][4]_i_5_n_0 }));
  FDCE \weight_reg[10][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][4]_i_1_n_6 ),
        .Q(\weight_reg[10]_9 [5]));
  FDCE \weight_reg[10][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][4]_i_1_n_5 ),
        .Q(\weight_reg[10]_9 [6]));
  FDCE \weight_reg[10][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][4]_i_1_n_4 ),
        .Q(\weight_reg[10]_9 [7]));
  FDCE \weight_reg[10][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][8]_i_1_n_7 ),
        .Q(\weight_reg[10]_9 [8]));
  CARRY4 \weight_reg[10][8]_i_1 
       (.CI(\weight_reg[10][4]_i_1_n_0 ),
        .CO({\weight_reg[10][8]_i_1_n_0 ,\weight_reg[10][8]_i_1_n_1 ,\weight_reg[10][8]_i_1_n_2 ,\weight_reg[10][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__17_n_80,ARG__17_n_81,ARG__17_n_82,ARG__17_n_83}),
        .O({\weight_reg[10][8]_i_1_n_4 ,\weight_reg[10][8]_i_1_n_5 ,\weight_reg[10][8]_i_1_n_6 ,\weight_reg[10][8]_i_1_n_7 }),
        .S({\weight[10][8]_i_2_n_0 ,\weight[10][8]_i_3_n_0 ,\weight[10][8]_i_4_n_0 ,\weight[10][8]_i_5_n_0 }));
  FDCE \weight_reg[10][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[10][8]_i_1_n_6 ),
        .Q(\weight_reg[10]_9 [9]));
  FDCE \weight_reg[11][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][0]_i_1_n_7 ),
        .Q(\weight_reg[11]_10 [0]));
  CARRY4 \weight_reg[11][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[11][0]_i_1_n_0 ,\weight_reg[11][0]_i_1_n_1 ,\weight_reg[11][0]_i_1_n_2 ,\weight_reg[11][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__19_n_88,ARG__19_n_89,ARG__19_n_90,ARG__19_n_91}),
        .O({\weight_reg[11][0]_i_1_n_4 ,\weight_reg[11][0]_i_1_n_5 ,\weight_reg[11][0]_i_1_n_6 ,\weight_reg[11][0]_i_1_n_7 }),
        .S({\weight[11][0]_i_2_n_0 ,\weight[11][0]_i_3_n_0 ,\weight[11][0]_i_4_n_0 ,\weight[11][0]_i_5_n_0 }));
  FDCE \weight_reg[11][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][8]_i_1_n_5 ),
        .Q(\weight_reg[11]_10 [10]));
  FDCE \weight_reg[11][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][8]_i_1_n_4 ),
        .Q(\weight_reg[11]_10 [11]));
  FDCE \weight_reg[11][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][12]_i_1_n_7 ),
        .Q(\weight_reg[11]_10 [12]));
  CARRY4 \weight_reg[11][12]_i_1 
       (.CI(\weight_reg[11][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[11][12]_i_1_CO_UNCONNECTED [3],\weight_reg[11][12]_i_1_n_1 ,\weight_reg[11][12]_i_1_n_2 ,\weight_reg[11][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__19_n_77,ARG__19_n_78,ARG__19_n_79}),
        .O({\weight_reg[11][12]_i_1_n_4 ,\weight_reg[11][12]_i_1_n_5 ,\weight_reg[11][12]_i_1_n_6 ,\weight_reg[11][12]_i_1_n_7 }),
        .S({\weight[11][12]_i_2_n_0 ,\weight[11][12]_i_3_n_0 ,\weight[11][12]_i_4_n_0 ,\weight[11][12]_i_5_n_0 }));
  FDCE \weight_reg[11][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][12]_i_1_n_6 ),
        .Q(\weight_reg[11]_10 [13]));
  FDCE \weight_reg[11][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][12]_i_1_n_5 ),
        .Q(\weight_reg[11]_10 [14]));
  FDCE \weight_reg[11][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][12]_i_1_n_4 ),
        .Q(\weight_reg[11]_10 [15]));
  FDCE \weight_reg[11][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][0]_i_1_n_6 ),
        .Q(\weight_reg[11]_10 [1]));
  FDCE \weight_reg[11][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][0]_i_1_n_5 ),
        .Q(\weight_reg[11]_10 [2]));
  FDCE \weight_reg[11][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][0]_i_1_n_4 ),
        .Q(\weight_reg[11]_10 [3]));
  FDCE \weight_reg[11][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][4]_i_1_n_7 ),
        .Q(\weight_reg[11]_10 [4]));
  CARRY4 \weight_reg[11][4]_i_1 
       (.CI(\weight_reg[11][0]_i_1_n_0 ),
        .CO({\weight_reg[11][4]_i_1_n_0 ,\weight_reg[11][4]_i_1_n_1 ,\weight_reg[11][4]_i_1_n_2 ,\weight_reg[11][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__19_n_84,ARG__19_n_85,ARG__19_n_86,ARG__19_n_87}),
        .O({\weight_reg[11][4]_i_1_n_4 ,\weight_reg[11][4]_i_1_n_5 ,\weight_reg[11][4]_i_1_n_6 ,\weight_reg[11][4]_i_1_n_7 }),
        .S({\weight[11][4]_i_2_n_0 ,\weight[11][4]_i_3_n_0 ,\weight[11][4]_i_4_n_0 ,\weight[11][4]_i_5_n_0 }));
  FDCE \weight_reg[11][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][4]_i_1_n_6 ),
        .Q(\weight_reg[11]_10 [5]));
  FDCE \weight_reg[11][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][4]_i_1_n_5 ),
        .Q(\weight_reg[11]_10 [6]));
  FDCE \weight_reg[11][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][4]_i_1_n_4 ),
        .Q(\weight_reg[11]_10 [7]));
  FDCE \weight_reg[11][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][8]_i_1_n_7 ),
        .Q(\weight_reg[11]_10 [8]));
  CARRY4 \weight_reg[11][8]_i_1 
       (.CI(\weight_reg[11][4]_i_1_n_0 ),
        .CO({\weight_reg[11][8]_i_1_n_0 ,\weight_reg[11][8]_i_1_n_1 ,\weight_reg[11][8]_i_1_n_2 ,\weight_reg[11][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__19_n_80,ARG__19_n_81,ARG__19_n_82,ARG__19_n_83}),
        .O({\weight_reg[11][8]_i_1_n_4 ,\weight_reg[11][8]_i_1_n_5 ,\weight_reg[11][8]_i_1_n_6 ,\weight_reg[11][8]_i_1_n_7 }),
        .S({\weight[11][8]_i_2_n_0 ,\weight[11][8]_i_3_n_0 ,\weight[11][8]_i_4_n_0 ,\weight[11][8]_i_5_n_0 }));
  FDCE \weight_reg[11][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[11][8]_i_1_n_6 ),
        .Q(\weight_reg[11]_10 [9]));
  FDCE \weight_reg[12][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][0]_i_1_n_7 ),
        .Q(\weight_reg[12]_11 [0]));
  CARRY4 \weight_reg[12][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[12][0]_i_1_n_0 ,\weight_reg[12][0]_i_1_n_1 ,\weight_reg[12][0]_i_1_n_2 ,\weight_reg[12][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__21_n_88,ARG__21_n_89,ARG__21_n_90,ARG__21_n_91}),
        .O({\weight_reg[12][0]_i_1_n_4 ,\weight_reg[12][0]_i_1_n_5 ,\weight_reg[12][0]_i_1_n_6 ,\weight_reg[12][0]_i_1_n_7 }),
        .S({\weight[12][0]_i_2_n_0 ,\weight[12][0]_i_3_n_0 ,\weight[12][0]_i_4_n_0 ,\weight[12][0]_i_5_n_0 }));
  FDCE \weight_reg[12][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][8]_i_1_n_5 ),
        .Q(\weight_reg[12]_11 [10]));
  FDCE \weight_reg[12][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][8]_i_1_n_4 ),
        .Q(\weight_reg[12]_11 [11]));
  FDCE \weight_reg[12][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][12]_i_1_n_7 ),
        .Q(\weight_reg[12]_11 [12]));
  CARRY4 \weight_reg[12][12]_i_1 
       (.CI(\weight_reg[12][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[12][12]_i_1_CO_UNCONNECTED [3],\weight_reg[12][12]_i_1_n_1 ,\weight_reg[12][12]_i_1_n_2 ,\weight_reg[12][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__21_n_77,ARG__21_n_78,ARG__21_n_79}),
        .O({\weight_reg[12][12]_i_1_n_4 ,\weight_reg[12][12]_i_1_n_5 ,\weight_reg[12][12]_i_1_n_6 ,\weight_reg[12][12]_i_1_n_7 }),
        .S({\weight[12][12]_i_2_n_0 ,\weight[12][12]_i_3_n_0 ,\weight[12][12]_i_4_n_0 ,\weight[12][12]_i_5_n_0 }));
  FDCE \weight_reg[12][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][12]_i_1_n_6 ),
        .Q(\weight_reg[12]_11 [13]));
  FDCE \weight_reg[12][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][12]_i_1_n_5 ),
        .Q(\weight_reg[12]_11 [14]));
  FDCE \weight_reg[12][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][12]_i_1_n_4 ),
        .Q(\weight_reg[12]_11 [15]));
  FDCE \weight_reg[12][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][0]_i_1_n_6 ),
        .Q(\weight_reg[12]_11 [1]));
  FDCE \weight_reg[12][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][0]_i_1_n_5 ),
        .Q(\weight_reg[12]_11 [2]));
  FDCE \weight_reg[12][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][0]_i_1_n_4 ),
        .Q(\weight_reg[12]_11 [3]));
  FDCE \weight_reg[12][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][4]_i_1_n_7 ),
        .Q(\weight_reg[12]_11 [4]));
  CARRY4 \weight_reg[12][4]_i_1 
       (.CI(\weight_reg[12][0]_i_1_n_0 ),
        .CO({\weight_reg[12][4]_i_1_n_0 ,\weight_reg[12][4]_i_1_n_1 ,\weight_reg[12][4]_i_1_n_2 ,\weight_reg[12][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__21_n_84,ARG__21_n_85,ARG__21_n_86,ARG__21_n_87}),
        .O({\weight_reg[12][4]_i_1_n_4 ,\weight_reg[12][4]_i_1_n_5 ,\weight_reg[12][4]_i_1_n_6 ,\weight_reg[12][4]_i_1_n_7 }),
        .S({\weight[12][4]_i_2_n_0 ,\weight[12][4]_i_3_n_0 ,\weight[12][4]_i_4_n_0 ,\weight[12][4]_i_5_n_0 }));
  FDCE \weight_reg[12][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][4]_i_1_n_6 ),
        .Q(\weight_reg[12]_11 [5]));
  FDCE \weight_reg[12][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][4]_i_1_n_5 ),
        .Q(\weight_reg[12]_11 [6]));
  FDCE \weight_reg[12][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][4]_i_1_n_4 ),
        .Q(\weight_reg[12]_11 [7]));
  FDCE \weight_reg[12][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][8]_i_1_n_7 ),
        .Q(\weight_reg[12]_11 [8]));
  CARRY4 \weight_reg[12][8]_i_1 
       (.CI(\weight_reg[12][4]_i_1_n_0 ),
        .CO({\weight_reg[12][8]_i_1_n_0 ,\weight_reg[12][8]_i_1_n_1 ,\weight_reg[12][8]_i_1_n_2 ,\weight_reg[12][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__21_n_80,ARG__21_n_81,ARG__21_n_82,ARG__21_n_83}),
        .O({\weight_reg[12][8]_i_1_n_4 ,\weight_reg[12][8]_i_1_n_5 ,\weight_reg[12][8]_i_1_n_6 ,\weight_reg[12][8]_i_1_n_7 }),
        .S({\weight[12][8]_i_2_n_0 ,\weight[12][8]_i_3_n_0 ,\weight[12][8]_i_4_n_0 ,\weight[12][8]_i_5_n_0 }));
  FDCE \weight_reg[12][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[12][8]_i_1_n_6 ),
        .Q(\weight_reg[12]_11 [9]));
  FDCE \weight_reg[13][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][0]_i_1_n_7 ),
        .Q(\weight_reg[13]_12 [0]));
  CARRY4 \weight_reg[13][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[13][0]_i_1_n_0 ,\weight_reg[13][0]_i_1_n_1 ,\weight_reg[13][0]_i_1_n_2 ,\weight_reg[13][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__23_n_88,ARG__23_n_89,ARG__23_n_90,ARG__23_n_91}),
        .O({\weight_reg[13][0]_i_1_n_4 ,\weight_reg[13][0]_i_1_n_5 ,\weight_reg[13][0]_i_1_n_6 ,\weight_reg[13][0]_i_1_n_7 }),
        .S({\weight[13][0]_i_2_n_0 ,\weight[13][0]_i_3_n_0 ,\weight[13][0]_i_4_n_0 ,\weight[13][0]_i_5_n_0 }));
  FDCE \weight_reg[13][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][8]_i_1_n_5 ),
        .Q(\weight_reg[13]_12 [10]));
  FDCE \weight_reg[13][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][8]_i_1_n_4 ),
        .Q(\weight_reg[13]_12 [11]));
  FDCE \weight_reg[13][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][12]_i_1_n_7 ),
        .Q(\weight_reg[13]_12 [12]));
  CARRY4 \weight_reg[13][12]_i_1 
       (.CI(\weight_reg[13][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[13][12]_i_1_CO_UNCONNECTED [3],\weight_reg[13][12]_i_1_n_1 ,\weight_reg[13][12]_i_1_n_2 ,\weight_reg[13][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__23_n_77,ARG__23_n_78,ARG__23_n_79}),
        .O({\weight_reg[13][12]_i_1_n_4 ,\weight_reg[13][12]_i_1_n_5 ,\weight_reg[13][12]_i_1_n_6 ,\weight_reg[13][12]_i_1_n_7 }),
        .S({\weight[13][12]_i_2_n_0 ,\weight[13][12]_i_3_n_0 ,\weight[13][12]_i_4_n_0 ,\weight[13][12]_i_5_n_0 }));
  FDCE \weight_reg[13][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][12]_i_1_n_6 ),
        .Q(\weight_reg[13]_12 [13]));
  FDCE \weight_reg[13][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][12]_i_1_n_5 ),
        .Q(\weight_reg[13]_12 [14]));
  FDCE \weight_reg[13][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][12]_i_1_n_4 ),
        .Q(\weight_reg[13]_12 [15]));
  FDCE \weight_reg[13][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][0]_i_1_n_6 ),
        .Q(\weight_reg[13]_12 [1]));
  FDCE \weight_reg[13][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][0]_i_1_n_5 ),
        .Q(\weight_reg[13]_12 [2]));
  FDCE \weight_reg[13][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][0]_i_1_n_4 ),
        .Q(\weight_reg[13]_12 [3]));
  FDCE \weight_reg[13][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][4]_i_1_n_7 ),
        .Q(\weight_reg[13]_12 [4]));
  CARRY4 \weight_reg[13][4]_i_1 
       (.CI(\weight_reg[13][0]_i_1_n_0 ),
        .CO({\weight_reg[13][4]_i_1_n_0 ,\weight_reg[13][4]_i_1_n_1 ,\weight_reg[13][4]_i_1_n_2 ,\weight_reg[13][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__23_n_84,ARG__23_n_85,ARG__23_n_86,ARG__23_n_87}),
        .O({\weight_reg[13][4]_i_1_n_4 ,\weight_reg[13][4]_i_1_n_5 ,\weight_reg[13][4]_i_1_n_6 ,\weight_reg[13][4]_i_1_n_7 }),
        .S({\weight[13][4]_i_2_n_0 ,\weight[13][4]_i_3_n_0 ,\weight[13][4]_i_4_n_0 ,\weight[13][4]_i_5_n_0 }));
  FDCE \weight_reg[13][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][4]_i_1_n_6 ),
        .Q(\weight_reg[13]_12 [5]));
  FDCE \weight_reg[13][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][4]_i_1_n_5 ),
        .Q(\weight_reg[13]_12 [6]));
  FDCE \weight_reg[13][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][4]_i_1_n_4 ),
        .Q(\weight_reg[13]_12 [7]));
  FDCE \weight_reg[13][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][8]_i_1_n_7 ),
        .Q(\weight_reg[13]_12 [8]));
  CARRY4 \weight_reg[13][8]_i_1 
       (.CI(\weight_reg[13][4]_i_1_n_0 ),
        .CO({\weight_reg[13][8]_i_1_n_0 ,\weight_reg[13][8]_i_1_n_1 ,\weight_reg[13][8]_i_1_n_2 ,\weight_reg[13][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__23_n_80,ARG__23_n_81,ARG__23_n_82,ARG__23_n_83}),
        .O({\weight_reg[13][8]_i_1_n_4 ,\weight_reg[13][8]_i_1_n_5 ,\weight_reg[13][8]_i_1_n_6 ,\weight_reg[13][8]_i_1_n_7 }),
        .S({\weight[13][8]_i_2_n_0 ,\weight[13][8]_i_3_n_0 ,\weight[13][8]_i_4_n_0 ,\weight[13][8]_i_5_n_0 }));
  FDCE \weight_reg[13][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[13][8]_i_1_n_6 ),
        .Q(\weight_reg[13]_12 [9]));
  FDCE \weight_reg[14][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][0]_i_1_n_7 ),
        .Q(\weight_reg[14]_13 [0]));
  CARRY4 \weight_reg[14][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[14][0]_i_1_n_0 ,\weight_reg[14][0]_i_1_n_1 ,\weight_reg[14][0]_i_1_n_2 ,\weight_reg[14][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__25_n_88,ARG__25_n_89,ARG__25_n_90,ARG__25_n_91}),
        .O({\weight_reg[14][0]_i_1_n_4 ,\weight_reg[14][0]_i_1_n_5 ,\weight_reg[14][0]_i_1_n_6 ,\weight_reg[14][0]_i_1_n_7 }),
        .S({\weight[14][0]_i_2_n_0 ,\weight[14][0]_i_3_n_0 ,\weight[14][0]_i_4_n_0 ,\weight[14][0]_i_5_n_0 }));
  FDCE \weight_reg[14][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][8]_i_1_n_5 ),
        .Q(\weight_reg[14]_13 [10]));
  FDCE \weight_reg[14][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][8]_i_1_n_4 ),
        .Q(\weight_reg[14]_13 [11]));
  FDCE \weight_reg[14][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][12]_i_1_n_7 ),
        .Q(\weight_reg[14]_13 [12]));
  CARRY4 \weight_reg[14][12]_i_1 
       (.CI(\weight_reg[14][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[14][12]_i_1_CO_UNCONNECTED [3],\weight_reg[14][12]_i_1_n_1 ,\weight_reg[14][12]_i_1_n_2 ,\weight_reg[14][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__25_n_77,ARG__25_n_78,ARG__25_n_79}),
        .O({\weight_reg[14][12]_i_1_n_4 ,\weight_reg[14][12]_i_1_n_5 ,\weight_reg[14][12]_i_1_n_6 ,\weight_reg[14][12]_i_1_n_7 }),
        .S({\weight[14][12]_i_2_n_0 ,\weight[14][12]_i_3_n_0 ,\weight[14][12]_i_4_n_0 ,\weight[14][12]_i_5_n_0 }));
  FDCE \weight_reg[14][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][12]_i_1_n_6 ),
        .Q(\weight_reg[14]_13 [13]));
  FDCE \weight_reg[14][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][12]_i_1_n_5 ),
        .Q(\weight_reg[14]_13 [14]));
  FDCE \weight_reg[14][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][12]_i_1_n_4 ),
        .Q(\weight_reg[14]_13 [15]));
  FDCE \weight_reg[14][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][0]_i_1_n_6 ),
        .Q(\weight_reg[14]_13 [1]));
  FDCE \weight_reg[14][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][0]_i_1_n_5 ),
        .Q(\weight_reg[14]_13 [2]));
  FDCE \weight_reg[14][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][0]_i_1_n_4 ),
        .Q(\weight_reg[14]_13 [3]));
  FDCE \weight_reg[14][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][4]_i_1_n_7 ),
        .Q(\weight_reg[14]_13 [4]));
  CARRY4 \weight_reg[14][4]_i_1 
       (.CI(\weight_reg[14][0]_i_1_n_0 ),
        .CO({\weight_reg[14][4]_i_1_n_0 ,\weight_reg[14][4]_i_1_n_1 ,\weight_reg[14][4]_i_1_n_2 ,\weight_reg[14][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__25_n_84,ARG__25_n_85,ARG__25_n_86,ARG__25_n_87}),
        .O({\weight_reg[14][4]_i_1_n_4 ,\weight_reg[14][4]_i_1_n_5 ,\weight_reg[14][4]_i_1_n_6 ,\weight_reg[14][4]_i_1_n_7 }),
        .S({\weight[14][4]_i_2_n_0 ,\weight[14][4]_i_3_n_0 ,\weight[14][4]_i_4_n_0 ,\weight[14][4]_i_5_n_0 }));
  FDCE \weight_reg[14][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][4]_i_1_n_6 ),
        .Q(\weight_reg[14]_13 [5]));
  FDCE \weight_reg[14][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][4]_i_1_n_5 ),
        .Q(\weight_reg[14]_13 [6]));
  FDCE \weight_reg[14][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][4]_i_1_n_4 ),
        .Q(\weight_reg[14]_13 [7]));
  FDCE \weight_reg[14][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][8]_i_1_n_7 ),
        .Q(\weight_reg[14]_13 [8]));
  CARRY4 \weight_reg[14][8]_i_1 
       (.CI(\weight_reg[14][4]_i_1_n_0 ),
        .CO({\weight_reg[14][8]_i_1_n_0 ,\weight_reg[14][8]_i_1_n_1 ,\weight_reg[14][8]_i_1_n_2 ,\weight_reg[14][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__25_n_80,ARG__25_n_81,ARG__25_n_82,ARG__25_n_83}),
        .O({\weight_reg[14][8]_i_1_n_4 ,\weight_reg[14][8]_i_1_n_5 ,\weight_reg[14][8]_i_1_n_6 ,\weight_reg[14][8]_i_1_n_7 }),
        .S({\weight[14][8]_i_2_n_0 ,\weight[14][8]_i_3_n_0 ,\weight[14][8]_i_4_n_0 ,\weight[14][8]_i_5_n_0 }));
  FDCE \weight_reg[14][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[14][8]_i_1_n_6 ),
        .Q(\weight_reg[14]_13 [9]));
  FDCE \weight_reg[15][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][0]_i_1_n_7 ),
        .Q(\weight_reg[15]_14 [0]));
  CARRY4 \weight_reg[15][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[15][0]_i_1_n_0 ,\weight_reg[15][0]_i_1_n_1 ,\weight_reg[15][0]_i_1_n_2 ,\weight_reg[15][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__27_n_88,ARG__27_n_89,ARG__27_n_90,ARG__27_n_91}),
        .O({\weight_reg[15][0]_i_1_n_4 ,\weight_reg[15][0]_i_1_n_5 ,\weight_reg[15][0]_i_1_n_6 ,\weight_reg[15][0]_i_1_n_7 }),
        .S({\weight[15][0]_i_2_n_0 ,\weight[15][0]_i_3_n_0 ,\weight[15][0]_i_4_n_0 ,\weight[15][0]_i_5_n_0 }));
  FDCE \weight_reg[15][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][8]_i_1_n_5 ),
        .Q(\weight_reg[15]_14 [10]));
  FDCE \weight_reg[15][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][8]_i_1_n_4 ),
        .Q(\weight_reg[15]_14 [11]));
  FDCE \weight_reg[15][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][12]_i_1_n_7 ),
        .Q(\weight_reg[15]_14 [12]));
  CARRY4 \weight_reg[15][12]_i_1 
       (.CI(\weight_reg[15][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[15][12]_i_1_CO_UNCONNECTED [3],\weight_reg[15][12]_i_1_n_1 ,\weight_reg[15][12]_i_1_n_2 ,\weight_reg[15][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__27_n_77,ARG__27_n_78,ARG__27_n_79}),
        .O({\weight_reg[15][12]_i_1_n_4 ,\weight_reg[15][12]_i_1_n_5 ,\weight_reg[15][12]_i_1_n_6 ,\weight_reg[15][12]_i_1_n_7 }),
        .S({\weight[15][12]_i_2_n_0 ,\weight[15][12]_i_3_n_0 ,\weight[15][12]_i_4_n_0 ,\weight[15][12]_i_5_n_0 }));
  FDCE \weight_reg[15][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][12]_i_1_n_6 ),
        .Q(\weight_reg[15]_14 [13]));
  FDCE \weight_reg[15][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][12]_i_1_n_5 ),
        .Q(\weight_reg[15]_14 [14]));
  FDCE \weight_reg[15][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][12]_i_1_n_4 ),
        .Q(\weight_reg[15]_14 [15]));
  FDCE \weight_reg[15][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][0]_i_1_n_6 ),
        .Q(\weight_reg[15]_14 [1]));
  FDCE \weight_reg[15][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][0]_i_1_n_5 ),
        .Q(\weight_reg[15]_14 [2]));
  FDCE \weight_reg[15][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][0]_i_1_n_4 ),
        .Q(\weight_reg[15]_14 [3]));
  FDCE \weight_reg[15][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][4]_i_1_n_7 ),
        .Q(\weight_reg[15]_14 [4]));
  CARRY4 \weight_reg[15][4]_i_1 
       (.CI(\weight_reg[15][0]_i_1_n_0 ),
        .CO({\weight_reg[15][4]_i_1_n_0 ,\weight_reg[15][4]_i_1_n_1 ,\weight_reg[15][4]_i_1_n_2 ,\weight_reg[15][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__27_n_84,ARG__27_n_85,ARG__27_n_86,ARG__27_n_87}),
        .O({\weight_reg[15][4]_i_1_n_4 ,\weight_reg[15][4]_i_1_n_5 ,\weight_reg[15][4]_i_1_n_6 ,\weight_reg[15][4]_i_1_n_7 }),
        .S({\weight[15][4]_i_2_n_0 ,\weight[15][4]_i_3_n_0 ,\weight[15][4]_i_4_n_0 ,\weight[15][4]_i_5_n_0 }));
  FDCE \weight_reg[15][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][4]_i_1_n_6 ),
        .Q(\weight_reg[15]_14 [5]));
  FDCE \weight_reg[15][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][4]_i_1_n_5 ),
        .Q(\weight_reg[15]_14 [6]));
  FDCE \weight_reg[15][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][4]_i_1_n_4 ),
        .Q(\weight_reg[15]_14 [7]));
  FDCE \weight_reg[15][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][8]_i_1_n_7 ),
        .Q(\weight_reg[15]_14 [8]));
  CARRY4 \weight_reg[15][8]_i_1 
       (.CI(\weight_reg[15][4]_i_1_n_0 ),
        .CO({\weight_reg[15][8]_i_1_n_0 ,\weight_reg[15][8]_i_1_n_1 ,\weight_reg[15][8]_i_1_n_2 ,\weight_reg[15][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__27_n_80,ARG__27_n_81,ARG__27_n_82,ARG__27_n_83}),
        .O({\weight_reg[15][8]_i_1_n_4 ,\weight_reg[15][8]_i_1_n_5 ,\weight_reg[15][8]_i_1_n_6 ,\weight_reg[15][8]_i_1_n_7 }),
        .S({\weight[15][8]_i_2_n_0 ,\weight[15][8]_i_3_n_0 ,\weight[15][8]_i_4_n_0 ,\weight[15][8]_i_5_n_0 }));
  FDCE \weight_reg[15][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[15][8]_i_1_n_6 ),
        .Q(\weight_reg[15]_14 [9]));
  FDCE \weight_reg[1][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][0]_i_1_n_7 ),
        .Q(\weight_reg[1]_0 [0]));
  CARRY4 \weight_reg[1][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[1][0]_i_1_n_0 ,\weight_reg[1][0]_i_1_n_1 ,\weight_reg[1][0]_i_1_n_2 ,\weight_reg[1][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(in[3:0]),
        .O({\weight_reg[1][0]_i_1_n_4 ,\weight_reg[1][0]_i_1_n_5 ,\weight_reg[1][0]_i_1_n_6 ,\weight_reg[1][0]_i_1_n_7 }),
        .S({\weight[1][0]_i_2_n_0 ,\weight[1][0]_i_3_n_0 ,\weight[1][0]_i_4_n_0 ,\weight[1][0]_i_5_n_0 }));
  FDCE \weight_reg[1][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][8]_i_1_n_5 ),
        .Q(\weight_reg[1]_0 [10]));
  FDCE \weight_reg[1][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][8]_i_1_n_4 ),
        .Q(\weight_reg[1]_0 [11]));
  FDCE \weight_reg[1][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][12]_i_1_n_7 ),
        .Q(\weight_reg[1]_0 [12]));
  CARRY4 \weight_reg[1][12]_i_1 
       (.CI(\weight_reg[1][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[1][12]_i_1_CO_UNCONNECTED [3],\weight_reg[1][12]_i_1_n_1 ,\weight_reg[1][12]_i_1_n_2 ,\weight_reg[1][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,in[14:12]}),
        .O({\weight_reg[1][12]_i_1_n_4 ,\weight_reg[1][12]_i_1_n_5 ,\weight_reg[1][12]_i_1_n_6 ,\weight_reg[1][12]_i_1_n_7 }),
        .S({\weight[1][12]_i_2_n_0 ,\weight[1][12]_i_3_n_0 ,\weight[1][12]_i_4_n_0 ,\weight[1][12]_i_5_n_0 }));
  FDCE \weight_reg[1][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][12]_i_1_n_6 ),
        .Q(\weight_reg[1]_0 [13]));
  FDCE \weight_reg[1][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][12]_i_1_n_5 ),
        .Q(\weight_reg[1]_0 [14]));
  FDCE \weight_reg[1][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][12]_i_1_n_4 ),
        .Q(\weight_reg[1]_0 [15]));
  FDCE \weight_reg[1][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][0]_i_1_n_6 ),
        .Q(\weight_reg[1]_0 [1]));
  FDCE \weight_reg[1][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][0]_i_1_n_5 ),
        .Q(\weight_reg[1]_0 [2]));
  FDCE \weight_reg[1][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][0]_i_1_n_4 ),
        .Q(\weight_reg[1]_0 [3]));
  FDCE \weight_reg[1][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][4]_i_1_n_7 ),
        .Q(\weight_reg[1]_0 [4]));
  CARRY4 \weight_reg[1][4]_i_1 
       (.CI(\weight_reg[1][0]_i_1_n_0 ),
        .CO({\weight_reg[1][4]_i_1_n_0 ,\weight_reg[1][4]_i_1_n_1 ,\weight_reg[1][4]_i_1_n_2 ,\weight_reg[1][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(in[7:4]),
        .O({\weight_reg[1][4]_i_1_n_4 ,\weight_reg[1][4]_i_1_n_5 ,\weight_reg[1][4]_i_1_n_6 ,\weight_reg[1][4]_i_1_n_7 }),
        .S({\weight[1][4]_i_2_n_0 ,\weight[1][4]_i_3_n_0 ,\weight[1][4]_i_4_n_0 ,\weight[1][4]_i_5_n_0 }));
  FDCE \weight_reg[1][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][4]_i_1_n_6 ),
        .Q(\weight_reg[1]_0 [5]));
  FDCE \weight_reg[1][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][4]_i_1_n_5 ),
        .Q(\weight_reg[1]_0 [6]));
  FDCE \weight_reg[1][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][4]_i_1_n_4 ),
        .Q(\weight_reg[1]_0 [7]));
  FDCE \weight_reg[1][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][8]_i_1_n_7 ),
        .Q(\weight_reg[1]_0 [8]));
  CARRY4 \weight_reg[1][8]_i_1 
       (.CI(\weight_reg[1][4]_i_1_n_0 ),
        .CO({\weight_reg[1][8]_i_1_n_0 ,\weight_reg[1][8]_i_1_n_1 ,\weight_reg[1][8]_i_1_n_2 ,\weight_reg[1][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI(in[11:8]),
        .O({\weight_reg[1][8]_i_1_n_4 ,\weight_reg[1][8]_i_1_n_5 ,\weight_reg[1][8]_i_1_n_6 ,\weight_reg[1][8]_i_1_n_7 }),
        .S({\weight[1][8]_i_2_n_0 ,\weight[1][8]_i_3_n_0 ,\weight[1][8]_i_4_n_0 ,\weight[1][8]_i_5_n_0 }));
  FDCE \weight_reg[1][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[1][8]_i_1_n_6 ),
        .Q(\weight_reg[1]_0 [9]));
  FDCE \weight_reg[2][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][0]_i_1_n_7 ),
        .Q(\weight_reg[2]_1 [0]));
  CARRY4 \weight_reg[2][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[2][0]_i_1_n_0 ,\weight_reg[2][0]_i_1_n_1 ,\weight_reg[2][0]_i_1_n_2 ,\weight_reg[2][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__1_n_88,ARG__1_n_89,ARG__1_n_90,ARG__1_n_91}),
        .O({\weight_reg[2][0]_i_1_n_4 ,\weight_reg[2][0]_i_1_n_5 ,\weight_reg[2][0]_i_1_n_6 ,\weight_reg[2][0]_i_1_n_7 }),
        .S({\weight[2][0]_i_2_n_0 ,\weight[2][0]_i_3_n_0 ,\weight[2][0]_i_4_n_0 ,\weight[2][0]_i_5_n_0 }));
  FDCE \weight_reg[2][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][8]_i_1_n_5 ),
        .Q(\weight_reg[2]_1 [10]));
  FDCE \weight_reg[2][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][8]_i_1_n_4 ),
        .Q(\weight_reg[2]_1 [11]));
  FDCE \weight_reg[2][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][12]_i_1_n_7 ),
        .Q(\weight_reg[2]_1 [12]));
  CARRY4 \weight_reg[2][12]_i_1 
       (.CI(\weight_reg[2][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[2][12]_i_1_CO_UNCONNECTED [3],\weight_reg[2][12]_i_1_n_1 ,\weight_reg[2][12]_i_1_n_2 ,\weight_reg[2][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__1_n_77,ARG__1_n_78,ARG__1_n_79}),
        .O({\weight_reg[2][12]_i_1_n_4 ,\weight_reg[2][12]_i_1_n_5 ,\weight_reg[2][12]_i_1_n_6 ,\weight_reg[2][12]_i_1_n_7 }),
        .S({\weight[2][12]_i_2_n_0 ,\weight[2][12]_i_3_n_0 ,\weight[2][12]_i_4_n_0 ,\weight[2][12]_i_5_n_0 }));
  FDCE \weight_reg[2][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][12]_i_1_n_6 ),
        .Q(\weight_reg[2]_1 [13]));
  FDCE \weight_reg[2][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][12]_i_1_n_5 ),
        .Q(\weight_reg[2]_1 [14]));
  FDCE \weight_reg[2][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][12]_i_1_n_4 ),
        .Q(\weight_reg[2]_1 [15]));
  FDCE \weight_reg[2][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][0]_i_1_n_6 ),
        .Q(\weight_reg[2]_1 [1]));
  FDCE \weight_reg[2][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][0]_i_1_n_5 ),
        .Q(\weight_reg[2]_1 [2]));
  FDCE \weight_reg[2][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][0]_i_1_n_4 ),
        .Q(\weight_reg[2]_1 [3]));
  FDCE \weight_reg[2][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][4]_i_1_n_7 ),
        .Q(\weight_reg[2]_1 [4]));
  CARRY4 \weight_reg[2][4]_i_1 
       (.CI(\weight_reg[2][0]_i_1_n_0 ),
        .CO({\weight_reg[2][4]_i_1_n_0 ,\weight_reg[2][4]_i_1_n_1 ,\weight_reg[2][4]_i_1_n_2 ,\weight_reg[2][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__1_n_84,ARG__1_n_85,ARG__1_n_86,ARG__1_n_87}),
        .O({\weight_reg[2][4]_i_1_n_4 ,\weight_reg[2][4]_i_1_n_5 ,\weight_reg[2][4]_i_1_n_6 ,\weight_reg[2][4]_i_1_n_7 }),
        .S({\weight[2][4]_i_2_n_0 ,\weight[2][4]_i_3_n_0 ,\weight[2][4]_i_4_n_0 ,\weight[2][4]_i_5_n_0 }));
  FDCE \weight_reg[2][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][4]_i_1_n_6 ),
        .Q(\weight_reg[2]_1 [5]));
  FDCE \weight_reg[2][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][4]_i_1_n_5 ),
        .Q(\weight_reg[2]_1 [6]));
  FDCE \weight_reg[2][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][4]_i_1_n_4 ),
        .Q(\weight_reg[2]_1 [7]));
  FDCE \weight_reg[2][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][8]_i_1_n_7 ),
        .Q(\weight_reg[2]_1 [8]));
  CARRY4 \weight_reg[2][8]_i_1 
       (.CI(\weight_reg[2][4]_i_1_n_0 ),
        .CO({\weight_reg[2][8]_i_1_n_0 ,\weight_reg[2][8]_i_1_n_1 ,\weight_reg[2][8]_i_1_n_2 ,\weight_reg[2][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__1_n_80,ARG__1_n_81,ARG__1_n_82,ARG__1_n_83}),
        .O({\weight_reg[2][8]_i_1_n_4 ,\weight_reg[2][8]_i_1_n_5 ,\weight_reg[2][8]_i_1_n_6 ,\weight_reg[2][8]_i_1_n_7 }),
        .S({\weight[2][8]_i_2_n_0 ,\weight[2][8]_i_3_n_0 ,\weight[2][8]_i_4_n_0 ,\weight[2][8]_i_5_n_0 }));
  FDCE \weight_reg[2][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[2][8]_i_1_n_6 ),
        .Q(\weight_reg[2]_1 [9]));
  FDCE \weight_reg[3][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][0]_i_1_n_7 ),
        .Q(\weight_reg[3]_2 [0]));
  CARRY4 \weight_reg[3][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[3][0]_i_1_n_0 ,\weight_reg[3][0]_i_1_n_1 ,\weight_reg[3][0]_i_1_n_2 ,\weight_reg[3][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__3_n_88,ARG__3_n_89,ARG__3_n_90,ARG__3_n_91}),
        .O({\weight_reg[3][0]_i_1_n_4 ,\weight_reg[3][0]_i_1_n_5 ,\weight_reg[3][0]_i_1_n_6 ,\weight_reg[3][0]_i_1_n_7 }),
        .S({\weight[3][0]_i_2_n_0 ,\weight[3][0]_i_3_n_0 ,\weight[3][0]_i_4_n_0 ,\weight[3][0]_i_5_n_0 }));
  FDCE \weight_reg[3][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][8]_i_1_n_5 ),
        .Q(\weight_reg[3]_2 [10]));
  FDCE \weight_reg[3][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][8]_i_1_n_4 ),
        .Q(\weight_reg[3]_2 [11]));
  FDCE \weight_reg[3][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][12]_i_1_n_7 ),
        .Q(\weight_reg[3]_2 [12]));
  CARRY4 \weight_reg[3][12]_i_1 
       (.CI(\weight_reg[3][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[3][12]_i_1_CO_UNCONNECTED [3],\weight_reg[3][12]_i_1_n_1 ,\weight_reg[3][12]_i_1_n_2 ,\weight_reg[3][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__3_n_77,ARG__3_n_78,ARG__3_n_79}),
        .O({\weight_reg[3][12]_i_1_n_4 ,\weight_reg[3][12]_i_1_n_5 ,\weight_reg[3][12]_i_1_n_6 ,\weight_reg[3][12]_i_1_n_7 }),
        .S({\weight[3][12]_i_2_n_0 ,\weight[3][12]_i_3_n_0 ,\weight[3][12]_i_4_n_0 ,\weight[3][12]_i_5_n_0 }));
  FDCE \weight_reg[3][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][12]_i_1_n_6 ),
        .Q(\weight_reg[3]_2 [13]));
  FDCE \weight_reg[3][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][12]_i_1_n_5 ),
        .Q(\weight_reg[3]_2 [14]));
  FDCE \weight_reg[3][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][12]_i_1_n_4 ),
        .Q(\weight_reg[3]_2 [15]));
  FDCE \weight_reg[3][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][0]_i_1_n_6 ),
        .Q(\weight_reg[3]_2 [1]));
  FDCE \weight_reg[3][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][0]_i_1_n_5 ),
        .Q(\weight_reg[3]_2 [2]));
  FDCE \weight_reg[3][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][0]_i_1_n_4 ),
        .Q(\weight_reg[3]_2 [3]));
  FDCE \weight_reg[3][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][4]_i_1_n_7 ),
        .Q(\weight_reg[3]_2 [4]));
  CARRY4 \weight_reg[3][4]_i_1 
       (.CI(\weight_reg[3][0]_i_1_n_0 ),
        .CO({\weight_reg[3][4]_i_1_n_0 ,\weight_reg[3][4]_i_1_n_1 ,\weight_reg[3][4]_i_1_n_2 ,\weight_reg[3][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__3_n_84,ARG__3_n_85,ARG__3_n_86,ARG__3_n_87}),
        .O({\weight_reg[3][4]_i_1_n_4 ,\weight_reg[3][4]_i_1_n_5 ,\weight_reg[3][4]_i_1_n_6 ,\weight_reg[3][4]_i_1_n_7 }),
        .S({\weight[3][4]_i_2_n_0 ,\weight[3][4]_i_3_n_0 ,\weight[3][4]_i_4_n_0 ,\weight[3][4]_i_5_n_0 }));
  FDCE \weight_reg[3][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][4]_i_1_n_6 ),
        .Q(\weight_reg[3]_2 [5]));
  FDCE \weight_reg[3][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][4]_i_1_n_5 ),
        .Q(\weight_reg[3]_2 [6]));
  FDCE \weight_reg[3][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][4]_i_1_n_4 ),
        .Q(\weight_reg[3]_2 [7]));
  FDCE \weight_reg[3][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][8]_i_1_n_7 ),
        .Q(\weight_reg[3]_2 [8]));
  CARRY4 \weight_reg[3][8]_i_1 
       (.CI(\weight_reg[3][4]_i_1_n_0 ),
        .CO({\weight_reg[3][8]_i_1_n_0 ,\weight_reg[3][8]_i_1_n_1 ,\weight_reg[3][8]_i_1_n_2 ,\weight_reg[3][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__3_n_80,ARG__3_n_81,ARG__3_n_82,ARG__3_n_83}),
        .O({\weight_reg[3][8]_i_1_n_4 ,\weight_reg[3][8]_i_1_n_5 ,\weight_reg[3][8]_i_1_n_6 ,\weight_reg[3][8]_i_1_n_7 }),
        .S({\weight[3][8]_i_2_n_0 ,\weight[3][8]_i_3_n_0 ,\weight[3][8]_i_4_n_0 ,\weight[3][8]_i_5_n_0 }));
  FDCE \weight_reg[3][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[3][8]_i_1_n_6 ),
        .Q(\weight_reg[3]_2 [9]));
  FDCE \weight_reg[4][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][0]_i_1_n_7 ),
        .Q(\weight_reg[4]_3 [0]));
  CARRY4 \weight_reg[4][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[4][0]_i_1_n_0 ,\weight_reg[4][0]_i_1_n_1 ,\weight_reg[4][0]_i_1_n_2 ,\weight_reg[4][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__5_n_88,ARG__5_n_89,ARG__5_n_90,ARG__5_n_91}),
        .O({\weight_reg[4][0]_i_1_n_4 ,\weight_reg[4][0]_i_1_n_5 ,\weight_reg[4][0]_i_1_n_6 ,\weight_reg[4][0]_i_1_n_7 }),
        .S({\weight[4][0]_i_2_n_0 ,\weight[4][0]_i_3_n_0 ,\weight[4][0]_i_4_n_0 ,\weight[4][0]_i_5_n_0 }));
  FDCE \weight_reg[4][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][8]_i_1_n_5 ),
        .Q(\weight_reg[4]_3 [10]));
  FDCE \weight_reg[4][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][8]_i_1_n_4 ),
        .Q(\weight_reg[4]_3 [11]));
  FDCE \weight_reg[4][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][12]_i_1_n_7 ),
        .Q(\weight_reg[4]_3 [12]));
  CARRY4 \weight_reg[4][12]_i_1 
       (.CI(\weight_reg[4][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[4][12]_i_1_CO_UNCONNECTED [3],\weight_reg[4][12]_i_1_n_1 ,\weight_reg[4][12]_i_1_n_2 ,\weight_reg[4][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__5_n_77,ARG__5_n_78,ARG__5_n_79}),
        .O({\weight_reg[4][12]_i_1_n_4 ,\weight_reg[4][12]_i_1_n_5 ,\weight_reg[4][12]_i_1_n_6 ,\weight_reg[4][12]_i_1_n_7 }),
        .S({\weight[4][12]_i_2_n_0 ,\weight[4][12]_i_3_n_0 ,\weight[4][12]_i_4_n_0 ,\weight[4][12]_i_5_n_0 }));
  FDCE \weight_reg[4][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][12]_i_1_n_6 ),
        .Q(\weight_reg[4]_3 [13]));
  FDCE \weight_reg[4][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][12]_i_1_n_5 ),
        .Q(\weight_reg[4]_3 [14]));
  FDCE \weight_reg[4][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][12]_i_1_n_4 ),
        .Q(\weight_reg[4]_3 [15]));
  FDCE \weight_reg[4][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][0]_i_1_n_6 ),
        .Q(\weight_reg[4]_3 [1]));
  FDCE \weight_reg[4][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][0]_i_1_n_5 ),
        .Q(\weight_reg[4]_3 [2]));
  FDCE \weight_reg[4][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][0]_i_1_n_4 ),
        .Q(\weight_reg[4]_3 [3]));
  FDCE \weight_reg[4][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][4]_i_1_n_7 ),
        .Q(\weight_reg[4]_3 [4]));
  CARRY4 \weight_reg[4][4]_i_1 
       (.CI(\weight_reg[4][0]_i_1_n_0 ),
        .CO({\weight_reg[4][4]_i_1_n_0 ,\weight_reg[4][4]_i_1_n_1 ,\weight_reg[4][4]_i_1_n_2 ,\weight_reg[4][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__5_n_84,ARG__5_n_85,ARG__5_n_86,ARG__5_n_87}),
        .O({\weight_reg[4][4]_i_1_n_4 ,\weight_reg[4][4]_i_1_n_5 ,\weight_reg[4][4]_i_1_n_6 ,\weight_reg[4][4]_i_1_n_7 }),
        .S({\weight[4][4]_i_2_n_0 ,\weight[4][4]_i_3_n_0 ,\weight[4][4]_i_4_n_0 ,\weight[4][4]_i_5_n_0 }));
  FDCE \weight_reg[4][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][4]_i_1_n_6 ),
        .Q(\weight_reg[4]_3 [5]));
  FDCE \weight_reg[4][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][4]_i_1_n_5 ),
        .Q(\weight_reg[4]_3 [6]));
  FDCE \weight_reg[4][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][4]_i_1_n_4 ),
        .Q(\weight_reg[4]_3 [7]));
  FDCE \weight_reg[4][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][8]_i_1_n_7 ),
        .Q(\weight_reg[4]_3 [8]));
  CARRY4 \weight_reg[4][8]_i_1 
       (.CI(\weight_reg[4][4]_i_1_n_0 ),
        .CO({\weight_reg[4][8]_i_1_n_0 ,\weight_reg[4][8]_i_1_n_1 ,\weight_reg[4][8]_i_1_n_2 ,\weight_reg[4][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__5_n_80,ARG__5_n_81,ARG__5_n_82,ARG__5_n_83}),
        .O({\weight_reg[4][8]_i_1_n_4 ,\weight_reg[4][8]_i_1_n_5 ,\weight_reg[4][8]_i_1_n_6 ,\weight_reg[4][8]_i_1_n_7 }),
        .S({\weight[4][8]_i_2_n_0 ,\weight[4][8]_i_3_n_0 ,\weight[4][8]_i_4_n_0 ,\weight[4][8]_i_5_n_0 }));
  FDCE \weight_reg[4][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[4][8]_i_1_n_6 ),
        .Q(\weight_reg[4]_3 [9]));
  FDCE \weight_reg[5][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][0]_i_1_n_7 ),
        .Q(\weight_reg[5]_4 [0]));
  CARRY4 \weight_reg[5][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[5][0]_i_1_n_0 ,\weight_reg[5][0]_i_1_n_1 ,\weight_reg[5][0]_i_1_n_2 ,\weight_reg[5][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__7_n_88,ARG__7_n_89,ARG__7_n_90,ARG__7_n_91}),
        .O({\weight_reg[5][0]_i_1_n_4 ,\weight_reg[5][0]_i_1_n_5 ,\weight_reg[5][0]_i_1_n_6 ,\weight_reg[5][0]_i_1_n_7 }),
        .S({\weight[5][0]_i_2_n_0 ,\weight[5][0]_i_3_n_0 ,\weight[5][0]_i_4_n_0 ,\weight[5][0]_i_5_n_0 }));
  FDCE \weight_reg[5][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][8]_i_1_n_5 ),
        .Q(\weight_reg[5]_4 [10]));
  FDCE \weight_reg[5][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][8]_i_1_n_4 ),
        .Q(\weight_reg[5]_4 [11]));
  FDCE \weight_reg[5][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][12]_i_1_n_7 ),
        .Q(\weight_reg[5]_4 [12]));
  CARRY4 \weight_reg[5][12]_i_1 
       (.CI(\weight_reg[5][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[5][12]_i_1_CO_UNCONNECTED [3],\weight_reg[5][12]_i_1_n_1 ,\weight_reg[5][12]_i_1_n_2 ,\weight_reg[5][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__7_n_77,ARG__7_n_78,ARG__7_n_79}),
        .O({\weight_reg[5][12]_i_1_n_4 ,\weight_reg[5][12]_i_1_n_5 ,\weight_reg[5][12]_i_1_n_6 ,\weight_reg[5][12]_i_1_n_7 }),
        .S({\weight[5][12]_i_2_n_0 ,\weight[5][12]_i_3_n_0 ,\weight[5][12]_i_4_n_0 ,\weight[5][12]_i_5_n_0 }));
  FDCE \weight_reg[5][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][12]_i_1_n_6 ),
        .Q(\weight_reg[5]_4 [13]));
  FDCE \weight_reg[5][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][12]_i_1_n_5 ),
        .Q(\weight_reg[5]_4 [14]));
  FDCE \weight_reg[5][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][12]_i_1_n_4 ),
        .Q(\weight_reg[5]_4 [15]));
  FDCE \weight_reg[5][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][0]_i_1_n_6 ),
        .Q(\weight_reg[5]_4 [1]));
  FDCE \weight_reg[5][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][0]_i_1_n_5 ),
        .Q(\weight_reg[5]_4 [2]));
  FDCE \weight_reg[5][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][0]_i_1_n_4 ),
        .Q(\weight_reg[5]_4 [3]));
  FDCE \weight_reg[5][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][4]_i_1_n_7 ),
        .Q(\weight_reg[5]_4 [4]));
  CARRY4 \weight_reg[5][4]_i_1 
       (.CI(\weight_reg[5][0]_i_1_n_0 ),
        .CO({\weight_reg[5][4]_i_1_n_0 ,\weight_reg[5][4]_i_1_n_1 ,\weight_reg[5][4]_i_1_n_2 ,\weight_reg[5][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__7_n_84,ARG__7_n_85,ARG__7_n_86,ARG__7_n_87}),
        .O({\weight_reg[5][4]_i_1_n_4 ,\weight_reg[5][4]_i_1_n_5 ,\weight_reg[5][4]_i_1_n_6 ,\weight_reg[5][4]_i_1_n_7 }),
        .S({\weight[5][4]_i_2_n_0 ,\weight[5][4]_i_3_n_0 ,\weight[5][4]_i_4_n_0 ,\weight[5][4]_i_5_n_0 }));
  FDCE \weight_reg[5][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][4]_i_1_n_6 ),
        .Q(\weight_reg[5]_4 [5]));
  FDCE \weight_reg[5][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][4]_i_1_n_5 ),
        .Q(\weight_reg[5]_4 [6]));
  FDCE \weight_reg[5][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][4]_i_1_n_4 ),
        .Q(\weight_reg[5]_4 [7]));
  FDCE \weight_reg[5][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][8]_i_1_n_7 ),
        .Q(\weight_reg[5]_4 [8]));
  CARRY4 \weight_reg[5][8]_i_1 
       (.CI(\weight_reg[5][4]_i_1_n_0 ),
        .CO({\weight_reg[5][8]_i_1_n_0 ,\weight_reg[5][8]_i_1_n_1 ,\weight_reg[5][8]_i_1_n_2 ,\weight_reg[5][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__7_n_80,ARG__7_n_81,ARG__7_n_82,ARG__7_n_83}),
        .O({\weight_reg[5][8]_i_1_n_4 ,\weight_reg[5][8]_i_1_n_5 ,\weight_reg[5][8]_i_1_n_6 ,\weight_reg[5][8]_i_1_n_7 }),
        .S({\weight[5][8]_i_2_n_0 ,\weight[5][8]_i_3_n_0 ,\weight[5][8]_i_4_n_0 ,\weight[5][8]_i_5_n_0 }));
  FDCE \weight_reg[5][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[5][8]_i_1_n_6 ),
        .Q(\weight_reg[5]_4 [9]));
  FDCE \weight_reg[6][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][0]_i_1_n_7 ),
        .Q(\weight_reg[6]_5 [0]));
  CARRY4 \weight_reg[6][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[6][0]_i_1_n_0 ,\weight_reg[6][0]_i_1_n_1 ,\weight_reg[6][0]_i_1_n_2 ,\weight_reg[6][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__9_n_88,ARG__9_n_89,ARG__9_n_90,ARG__9_n_91}),
        .O({\weight_reg[6][0]_i_1_n_4 ,\weight_reg[6][0]_i_1_n_5 ,\weight_reg[6][0]_i_1_n_6 ,\weight_reg[6][0]_i_1_n_7 }),
        .S({\weight[6][0]_i_2_n_0 ,\weight[6][0]_i_3_n_0 ,\weight[6][0]_i_4_n_0 ,\weight[6][0]_i_5_n_0 }));
  FDCE \weight_reg[6][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][8]_i_1_n_5 ),
        .Q(\weight_reg[6]_5 [10]));
  FDCE \weight_reg[6][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][8]_i_1_n_4 ),
        .Q(\weight_reg[6]_5 [11]));
  FDCE \weight_reg[6][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][12]_i_1_n_7 ),
        .Q(\weight_reg[6]_5 [12]));
  CARRY4 \weight_reg[6][12]_i_1 
       (.CI(\weight_reg[6][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[6][12]_i_1_CO_UNCONNECTED [3],\weight_reg[6][12]_i_1_n_1 ,\weight_reg[6][12]_i_1_n_2 ,\weight_reg[6][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__9_n_77,ARG__9_n_78,ARG__9_n_79}),
        .O({\weight_reg[6][12]_i_1_n_4 ,\weight_reg[6][12]_i_1_n_5 ,\weight_reg[6][12]_i_1_n_6 ,\weight_reg[6][12]_i_1_n_7 }),
        .S({\weight[6][12]_i_2_n_0 ,\weight[6][12]_i_3_n_0 ,\weight[6][12]_i_4_n_0 ,\weight[6][12]_i_5_n_0 }));
  FDCE \weight_reg[6][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][12]_i_1_n_6 ),
        .Q(\weight_reg[6]_5 [13]));
  FDCE \weight_reg[6][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][12]_i_1_n_5 ),
        .Q(\weight_reg[6]_5 [14]));
  FDCE \weight_reg[6][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][12]_i_1_n_4 ),
        .Q(\weight_reg[6]_5 [15]));
  FDCE \weight_reg[6][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][0]_i_1_n_6 ),
        .Q(\weight_reg[6]_5 [1]));
  FDCE \weight_reg[6][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][0]_i_1_n_5 ),
        .Q(\weight_reg[6]_5 [2]));
  FDCE \weight_reg[6][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][0]_i_1_n_4 ),
        .Q(\weight_reg[6]_5 [3]));
  FDCE \weight_reg[6][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][4]_i_1_n_7 ),
        .Q(\weight_reg[6]_5 [4]));
  CARRY4 \weight_reg[6][4]_i_1 
       (.CI(\weight_reg[6][0]_i_1_n_0 ),
        .CO({\weight_reg[6][4]_i_1_n_0 ,\weight_reg[6][4]_i_1_n_1 ,\weight_reg[6][4]_i_1_n_2 ,\weight_reg[6][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__9_n_84,ARG__9_n_85,ARG__9_n_86,ARG__9_n_87}),
        .O({\weight_reg[6][4]_i_1_n_4 ,\weight_reg[6][4]_i_1_n_5 ,\weight_reg[6][4]_i_1_n_6 ,\weight_reg[6][4]_i_1_n_7 }),
        .S({\weight[6][4]_i_2_n_0 ,\weight[6][4]_i_3_n_0 ,\weight[6][4]_i_4_n_0 ,\weight[6][4]_i_5_n_0 }));
  FDCE \weight_reg[6][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][4]_i_1_n_6 ),
        .Q(\weight_reg[6]_5 [5]));
  FDCE \weight_reg[6][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][4]_i_1_n_5 ),
        .Q(\weight_reg[6]_5 [6]));
  FDCE \weight_reg[6][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][4]_i_1_n_4 ),
        .Q(\weight_reg[6]_5 [7]));
  FDCE \weight_reg[6][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][8]_i_1_n_7 ),
        .Q(\weight_reg[6]_5 [8]));
  CARRY4 \weight_reg[6][8]_i_1 
       (.CI(\weight_reg[6][4]_i_1_n_0 ),
        .CO({\weight_reg[6][8]_i_1_n_0 ,\weight_reg[6][8]_i_1_n_1 ,\weight_reg[6][8]_i_1_n_2 ,\weight_reg[6][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__9_n_80,ARG__9_n_81,ARG__9_n_82,ARG__9_n_83}),
        .O({\weight_reg[6][8]_i_1_n_4 ,\weight_reg[6][8]_i_1_n_5 ,\weight_reg[6][8]_i_1_n_6 ,\weight_reg[6][8]_i_1_n_7 }),
        .S({\weight[6][8]_i_2_n_0 ,\weight[6][8]_i_3_n_0 ,\weight[6][8]_i_4_n_0 ,\weight[6][8]_i_5_n_0 }));
  FDCE \weight_reg[6][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[6][8]_i_1_n_6 ),
        .Q(\weight_reg[6]_5 [9]));
  FDCE \weight_reg[7][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][0]_i_1_n_7 ),
        .Q(\weight_reg[7]_6 [0]));
  CARRY4 \weight_reg[7][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[7][0]_i_1_n_0 ,\weight_reg[7][0]_i_1_n_1 ,\weight_reg[7][0]_i_1_n_2 ,\weight_reg[7][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__11_n_88,ARG__11_n_89,ARG__11_n_90,ARG__11_n_91}),
        .O({\weight_reg[7][0]_i_1_n_4 ,\weight_reg[7][0]_i_1_n_5 ,\weight_reg[7][0]_i_1_n_6 ,\weight_reg[7][0]_i_1_n_7 }),
        .S({\weight[7][0]_i_2_n_0 ,\weight[7][0]_i_3_n_0 ,\weight[7][0]_i_4_n_0 ,\weight[7][0]_i_5_n_0 }));
  FDCE \weight_reg[7][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][8]_i_1_n_5 ),
        .Q(\weight_reg[7]_6 [10]));
  FDCE \weight_reg[7][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][8]_i_1_n_4 ),
        .Q(\weight_reg[7]_6 [11]));
  FDCE \weight_reg[7][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][12]_i_1_n_7 ),
        .Q(\weight_reg[7]_6 [12]));
  CARRY4 \weight_reg[7][12]_i_1 
       (.CI(\weight_reg[7][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[7][12]_i_1_CO_UNCONNECTED [3],\weight_reg[7][12]_i_1_n_1 ,\weight_reg[7][12]_i_1_n_2 ,\weight_reg[7][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__11_n_77,ARG__11_n_78,ARG__11_n_79}),
        .O({\weight_reg[7][12]_i_1_n_4 ,\weight_reg[7][12]_i_1_n_5 ,\weight_reg[7][12]_i_1_n_6 ,\weight_reg[7][12]_i_1_n_7 }),
        .S({\weight[7][12]_i_2_n_0 ,\weight[7][12]_i_3_n_0 ,\weight[7][12]_i_4_n_0 ,\weight[7][12]_i_5_n_0 }));
  FDCE \weight_reg[7][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][12]_i_1_n_6 ),
        .Q(\weight_reg[7]_6 [13]));
  FDCE \weight_reg[7][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][12]_i_1_n_5 ),
        .Q(\weight_reg[7]_6 [14]));
  FDCE \weight_reg[7][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][12]_i_1_n_4 ),
        .Q(\weight_reg[7]_6 [15]));
  FDCE \weight_reg[7][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][0]_i_1_n_6 ),
        .Q(\weight_reg[7]_6 [1]));
  FDCE \weight_reg[7][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][0]_i_1_n_5 ),
        .Q(\weight_reg[7]_6 [2]));
  FDCE \weight_reg[7][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][0]_i_1_n_4 ),
        .Q(\weight_reg[7]_6 [3]));
  FDCE \weight_reg[7][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][4]_i_1_n_7 ),
        .Q(\weight_reg[7]_6 [4]));
  CARRY4 \weight_reg[7][4]_i_1 
       (.CI(\weight_reg[7][0]_i_1_n_0 ),
        .CO({\weight_reg[7][4]_i_1_n_0 ,\weight_reg[7][4]_i_1_n_1 ,\weight_reg[7][4]_i_1_n_2 ,\weight_reg[7][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__11_n_84,ARG__11_n_85,ARG__11_n_86,ARG__11_n_87}),
        .O({\weight_reg[7][4]_i_1_n_4 ,\weight_reg[7][4]_i_1_n_5 ,\weight_reg[7][4]_i_1_n_6 ,\weight_reg[7][4]_i_1_n_7 }),
        .S({\weight[7][4]_i_2_n_0 ,\weight[7][4]_i_3_n_0 ,\weight[7][4]_i_4_n_0 ,\weight[7][4]_i_5_n_0 }));
  FDCE \weight_reg[7][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][4]_i_1_n_6 ),
        .Q(\weight_reg[7]_6 [5]));
  FDCE \weight_reg[7][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][4]_i_1_n_5 ),
        .Q(\weight_reg[7]_6 [6]));
  FDCE \weight_reg[7][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][4]_i_1_n_4 ),
        .Q(\weight_reg[7]_6 [7]));
  FDCE \weight_reg[7][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][8]_i_1_n_7 ),
        .Q(\weight_reg[7]_6 [8]));
  CARRY4 \weight_reg[7][8]_i_1 
       (.CI(\weight_reg[7][4]_i_1_n_0 ),
        .CO({\weight_reg[7][8]_i_1_n_0 ,\weight_reg[7][8]_i_1_n_1 ,\weight_reg[7][8]_i_1_n_2 ,\weight_reg[7][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__11_n_80,ARG__11_n_81,ARG__11_n_82,ARG__11_n_83}),
        .O({\weight_reg[7][8]_i_1_n_4 ,\weight_reg[7][8]_i_1_n_5 ,\weight_reg[7][8]_i_1_n_6 ,\weight_reg[7][8]_i_1_n_7 }),
        .S({\weight[7][8]_i_2_n_0 ,\weight[7][8]_i_3_n_0 ,\weight[7][8]_i_4_n_0 ,\weight[7][8]_i_5_n_0 }));
  FDCE \weight_reg[7][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[7][8]_i_1_n_6 ),
        .Q(\weight_reg[7]_6 [9]));
  FDCE \weight_reg[8][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][0]_i_1_n_7 ),
        .Q(\weight_reg[8]_7 [0]));
  CARRY4 \weight_reg[8][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[8][0]_i_1_n_0 ,\weight_reg[8][0]_i_1_n_1 ,\weight_reg[8][0]_i_1_n_2 ,\weight_reg[8][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__13_n_88,ARG__13_n_89,ARG__13_n_90,ARG__13_n_91}),
        .O({\weight_reg[8][0]_i_1_n_4 ,\weight_reg[8][0]_i_1_n_5 ,\weight_reg[8][0]_i_1_n_6 ,\weight_reg[8][0]_i_1_n_7 }),
        .S({\weight[8][0]_i_2_n_0 ,\weight[8][0]_i_3_n_0 ,\weight[8][0]_i_4_n_0 ,\weight[8][0]_i_5_n_0 }));
  FDCE \weight_reg[8][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][8]_i_1_n_5 ),
        .Q(\weight_reg[8]_7 [10]));
  FDCE \weight_reg[8][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][8]_i_1_n_4 ),
        .Q(\weight_reg[8]_7 [11]));
  FDCE \weight_reg[8][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][12]_i_1_n_7 ),
        .Q(\weight_reg[8]_7 [12]));
  CARRY4 \weight_reg[8][12]_i_1 
       (.CI(\weight_reg[8][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[8][12]_i_1_CO_UNCONNECTED [3],\weight_reg[8][12]_i_1_n_1 ,\weight_reg[8][12]_i_1_n_2 ,\weight_reg[8][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__13_n_77,ARG__13_n_78,ARG__13_n_79}),
        .O({\weight_reg[8][12]_i_1_n_4 ,\weight_reg[8][12]_i_1_n_5 ,\weight_reg[8][12]_i_1_n_6 ,\weight_reg[8][12]_i_1_n_7 }),
        .S({\weight[8][12]_i_2_n_0 ,\weight[8][12]_i_3_n_0 ,\weight[8][12]_i_4_n_0 ,\weight[8][12]_i_5_n_0 }));
  FDCE \weight_reg[8][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][12]_i_1_n_6 ),
        .Q(\weight_reg[8]_7 [13]));
  FDCE \weight_reg[8][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][12]_i_1_n_5 ),
        .Q(\weight_reg[8]_7 [14]));
  FDCE \weight_reg[8][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][12]_i_1_n_4 ),
        .Q(\weight_reg[8]_7 [15]));
  FDCE \weight_reg[8][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][0]_i_1_n_6 ),
        .Q(\weight_reg[8]_7 [1]));
  FDCE \weight_reg[8][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][0]_i_1_n_5 ),
        .Q(\weight_reg[8]_7 [2]));
  FDCE \weight_reg[8][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][0]_i_1_n_4 ),
        .Q(\weight_reg[8]_7 [3]));
  FDCE \weight_reg[8][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][4]_i_1_n_7 ),
        .Q(\weight_reg[8]_7 [4]));
  CARRY4 \weight_reg[8][4]_i_1 
       (.CI(\weight_reg[8][0]_i_1_n_0 ),
        .CO({\weight_reg[8][4]_i_1_n_0 ,\weight_reg[8][4]_i_1_n_1 ,\weight_reg[8][4]_i_1_n_2 ,\weight_reg[8][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__13_n_84,ARG__13_n_85,ARG__13_n_86,ARG__13_n_87}),
        .O({\weight_reg[8][4]_i_1_n_4 ,\weight_reg[8][4]_i_1_n_5 ,\weight_reg[8][4]_i_1_n_6 ,\weight_reg[8][4]_i_1_n_7 }),
        .S({\weight[8][4]_i_2_n_0 ,\weight[8][4]_i_3_n_0 ,\weight[8][4]_i_4_n_0 ,\weight[8][4]_i_5_n_0 }));
  FDCE \weight_reg[8][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][4]_i_1_n_6 ),
        .Q(\weight_reg[8]_7 [5]));
  FDCE \weight_reg[8][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][4]_i_1_n_5 ),
        .Q(\weight_reg[8]_7 [6]));
  FDCE \weight_reg[8][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][4]_i_1_n_4 ),
        .Q(\weight_reg[8]_7 [7]));
  FDCE \weight_reg[8][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][8]_i_1_n_7 ),
        .Q(\weight_reg[8]_7 [8]));
  CARRY4 \weight_reg[8][8]_i_1 
       (.CI(\weight_reg[8][4]_i_1_n_0 ),
        .CO({\weight_reg[8][8]_i_1_n_0 ,\weight_reg[8][8]_i_1_n_1 ,\weight_reg[8][8]_i_1_n_2 ,\weight_reg[8][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__13_n_80,ARG__13_n_81,ARG__13_n_82,ARG__13_n_83}),
        .O({\weight_reg[8][8]_i_1_n_4 ,\weight_reg[8][8]_i_1_n_5 ,\weight_reg[8][8]_i_1_n_6 ,\weight_reg[8][8]_i_1_n_7 }),
        .S({\weight[8][8]_i_2_n_0 ,\weight[8][8]_i_3_n_0 ,\weight[8][8]_i_4_n_0 ,\weight[8][8]_i_5_n_0 }));
  FDCE \weight_reg[8][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[8][8]_i_1_n_6 ),
        .Q(\weight_reg[8]_7 [9]));
  FDCE \weight_reg[9][0] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][0]_i_1_n_7 ),
        .Q(\weight_reg[9]_8 [0]));
  CARRY4 \weight_reg[9][0]_i_1 
       (.CI(1'b0),
        .CO({\weight_reg[9][0]_i_1_n_0 ,\weight_reg[9][0]_i_1_n_1 ,\weight_reg[9][0]_i_1_n_2 ,\weight_reg[9][0]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__15_n_88,ARG__15_n_89,ARG__15_n_90,ARG__15_n_91}),
        .O({\weight_reg[9][0]_i_1_n_4 ,\weight_reg[9][0]_i_1_n_5 ,\weight_reg[9][0]_i_1_n_6 ,\weight_reg[9][0]_i_1_n_7 }),
        .S({\weight[9][0]_i_2_n_0 ,\weight[9][0]_i_3_n_0 ,\weight[9][0]_i_4_n_0 ,\weight[9][0]_i_5_n_0 }));
  FDCE \weight_reg[9][10] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][8]_i_1_n_5 ),
        .Q(\weight_reg[9]_8 [10]));
  FDCE \weight_reg[9][11] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][8]_i_1_n_4 ),
        .Q(\weight_reg[9]_8 [11]));
  FDCE \weight_reg[9][12] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][12]_i_1_n_7 ),
        .Q(\weight_reg[9]_8 [12]));
  CARRY4 \weight_reg[9][12]_i_1 
       (.CI(\weight_reg[9][8]_i_1_n_0 ),
        .CO({\NLW_weight_reg[9][12]_i_1_CO_UNCONNECTED [3],\weight_reg[9][12]_i_1_n_1 ,\weight_reg[9][12]_i_1_n_2 ,\weight_reg[9][12]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({1'b0,ARG__15_n_77,ARG__15_n_78,ARG__15_n_79}),
        .O({\weight_reg[9][12]_i_1_n_4 ,\weight_reg[9][12]_i_1_n_5 ,\weight_reg[9][12]_i_1_n_6 ,\weight_reg[9][12]_i_1_n_7 }),
        .S({\weight[9][12]_i_2_n_0 ,\weight[9][12]_i_3_n_0 ,\weight[9][12]_i_4_n_0 ,\weight[9][12]_i_5_n_0 }));
  FDCE \weight_reg[9][13] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][12]_i_1_n_6 ),
        .Q(\weight_reg[9]_8 [13]));
  FDCE \weight_reg[9][14] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][12]_i_1_n_5 ),
        .Q(\weight_reg[9]_8 [14]));
  FDCE \weight_reg[9][15] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][12]_i_1_n_4 ),
        .Q(\weight_reg[9]_8 [15]));
  FDCE \weight_reg[9][1] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][0]_i_1_n_6 ),
        .Q(\weight_reg[9]_8 [1]));
  FDCE \weight_reg[9][2] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][0]_i_1_n_5 ),
        .Q(\weight_reg[9]_8 [2]));
  FDCE \weight_reg[9][3] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][0]_i_1_n_4 ),
        .Q(\weight_reg[9]_8 [3]));
  FDCE \weight_reg[9][4] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][4]_i_1_n_7 ),
        .Q(\weight_reg[9]_8 [4]));
  CARRY4 \weight_reg[9][4]_i_1 
       (.CI(\weight_reg[9][0]_i_1_n_0 ),
        .CO({\weight_reg[9][4]_i_1_n_0 ,\weight_reg[9][4]_i_1_n_1 ,\weight_reg[9][4]_i_1_n_2 ,\weight_reg[9][4]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__15_n_84,ARG__15_n_85,ARG__15_n_86,ARG__15_n_87}),
        .O({\weight_reg[9][4]_i_1_n_4 ,\weight_reg[9][4]_i_1_n_5 ,\weight_reg[9][4]_i_1_n_6 ,\weight_reg[9][4]_i_1_n_7 }),
        .S({\weight[9][4]_i_2_n_0 ,\weight[9][4]_i_3_n_0 ,\weight[9][4]_i_4_n_0 ,\weight[9][4]_i_5_n_0 }));
  FDCE \weight_reg[9][5] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][4]_i_1_n_6 ),
        .Q(\weight_reg[9]_8 [5]));
  FDCE \weight_reg[9][6] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][4]_i_1_n_5 ),
        .Q(\weight_reg[9]_8 [6]));
  FDCE \weight_reg[9][7] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][4]_i_1_n_4 ),
        .Q(\weight_reg[9]_8 [7]));
  FDCE \weight_reg[9][8] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][8]_i_1_n_7 ),
        .Q(\weight_reg[9]_8 [8]));
  CARRY4 \weight_reg[9][8]_i_1 
       (.CI(\weight_reg[9][4]_i_1_n_0 ),
        .CO({\weight_reg[9][8]_i_1_n_0 ,\weight_reg[9][8]_i_1_n_1 ,\weight_reg[9][8]_i_1_n_2 ,\weight_reg[9][8]_i_1_n_3 }),
        .CYINIT(1'b0),
        .DI({ARG__15_n_80,ARG__15_n_81,ARG__15_n_82,ARG__15_n_83}),
        .O({\weight_reg[9][8]_i_1_n_4 ,\weight_reg[9][8]_i_1_n_5 ,\weight_reg[9][8]_i_1_n_6 ,\weight_reg[9][8]_i_1_n_7 }),
        .S({\weight[9][8]_i_2_n_0 ,\weight[9][8]_i_3_n_0 ,\weight[9][8]_i_4_n_0 ,\weight[9][8]_i_5_n_0 }));
  FDCE \weight_reg[9][9] 
       (.C(IPCORE_CLK),
        .CE(cop_dut_enable),
        .CLR(AR),
        .D(\weight_reg[9][8]_i_1_n_6 ),
        .Q(\weight_reg[9]_8 [9]));
endmodule

(* CHECK_LICENSE_TYPE = "ip_design_lms_pcore_0_0,lms_pcore,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "lms_pcore,Vivado 2017.3" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (IPCORE_CLK,
    IPCORE_RESETN,
    AXI4_Lite_ACLK,
    AXI4_Lite_ARESETN,
    AXI4_Lite_AWADDR,
    AXI4_Lite_AWVALID,
    AXI4_Lite_WDATA,
    AXI4_Lite_WSTRB,
    AXI4_Lite_WVALID,
    AXI4_Lite_BREADY,
    AXI4_Lite_ARADDR,
    AXI4_Lite_ARVALID,
    AXI4_Lite_RREADY,
    AXI4_Lite_AWREADY,
    AXI4_Lite_WREADY,
    AXI4_Lite_BRESP,
    AXI4_Lite_BVALID,
    AXI4_Lite_ARREADY,
    AXI4_Lite_RDATA,
    AXI4_Lite_RRESP,
    AXI4_Lite_RVALID);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 IPCORE_CLK CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME IPCORE_CLK, ASSOCIATED_RESET IPCORE_RESETN, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0" *) input IPCORE_CLK;
  (* x_interface_info = "xilinx.com:signal:reset:1.0 IPCORE_RESETN RST" *) (* x_interface_parameter = "XIL_INTERFACENAME IPCORE_RESETN, POLARITY ACTIVE_LOW" *) input IPCORE_RESETN;
  (* x_interface_info = "xilinx.com:signal:clock:1.0 AXI4_Lite_ACLK CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME AXI4_Lite_ACLK, ASSOCIATED_RESET AXI4_Lite_ARESETN, ASSOCIATED_BUSIF AXI4_Lite, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0" *) input AXI4_Lite_ACLK;
  (* x_interface_info = "xilinx.com:signal:reset:1.0 AXI4_Lite_ARESETN RST" *) (* x_interface_parameter = "XIL_INTERFACENAME AXI4_Lite_ARESETN, POLARITY ACTIVE_LOW" *) input AXI4_Lite_ARESETN;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite AWADDR" *) (* x_interface_parameter = "XIL_INTERFACENAME AXI4_Lite, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 100000000, ID_WIDTH 0, ADDR_WIDTH 16, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0" *) input [15:0]AXI4_Lite_AWADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite AWVALID" *) input AXI4_Lite_AWVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite WDATA" *) input [31:0]AXI4_Lite_WDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite WSTRB" *) input [3:0]AXI4_Lite_WSTRB;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite WVALID" *) input AXI4_Lite_WVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite BREADY" *) input AXI4_Lite_BREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite ARADDR" *) input [15:0]AXI4_Lite_ARADDR;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite ARVALID" *) input AXI4_Lite_ARVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite RREADY" *) input AXI4_Lite_RREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite AWREADY" *) output AXI4_Lite_AWREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite WREADY" *) output AXI4_Lite_WREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite BRESP" *) output [1:0]AXI4_Lite_BRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite BVALID" *) output AXI4_Lite_BVALID;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite ARREADY" *) output AXI4_Lite_ARREADY;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite RDATA" *) output [31:0]AXI4_Lite_RDATA;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite RRESP" *) output [1:0]AXI4_Lite_RRESP;
  (* x_interface_info = "xilinx.com:interface:aximm:1.0 AXI4_Lite RVALID" *) output AXI4_Lite_RVALID;

  wire \<const0> ;
  wire AXI4_Lite_ACLK;
  wire [15:0]AXI4_Lite_ARADDR;
  wire AXI4_Lite_ARESETN;
  wire AXI4_Lite_ARREADY;
  wire AXI4_Lite_ARVALID;
  wire [15:0]AXI4_Lite_AWADDR;
  wire AXI4_Lite_AWREADY;
  wire AXI4_Lite_AWVALID;
  wire AXI4_Lite_BREADY;
  wire AXI4_Lite_BVALID;
  wire [30:0]\^AXI4_Lite_RDATA ;
  wire AXI4_Lite_RREADY;
  wire AXI4_Lite_RVALID;
  wire [31:0]AXI4_Lite_WDATA;
  wire AXI4_Lite_WREADY;
  wire AXI4_Lite_WVALID;
  wire IPCORE_CLK;
  wire IPCORE_RESETN;

  assign AXI4_Lite_BRESP[1] = \<const0> ;
  assign AXI4_Lite_BRESP[0] = \<const0> ;
  assign AXI4_Lite_RDATA[31] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[30] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[29] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[28] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[27] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[26] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[25] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[24] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[23] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[22] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[21] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[20] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[19] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[18] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[17] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[16] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[15] = \^AXI4_Lite_RDATA [30];
  assign AXI4_Lite_RDATA[14:0] = \^AXI4_Lite_RDATA [14:0];
  assign AXI4_Lite_RRESP[1] = \<const0> ;
  assign AXI4_Lite_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore U0
       (.AXI4_Lite_ACLK(AXI4_Lite_ACLK),
        .AXI4_Lite_ARADDR(AXI4_Lite_ARADDR[15:2]),
        .AXI4_Lite_ARESETN(AXI4_Lite_ARESETN),
        .AXI4_Lite_ARREADY(AXI4_Lite_ARREADY),
        .AXI4_Lite_ARVALID(AXI4_Lite_ARVALID),
        .AXI4_Lite_AWADDR(AXI4_Lite_AWADDR[15:2]),
        .AXI4_Lite_AWREADY(AXI4_Lite_AWREADY),
        .AXI4_Lite_AWVALID(AXI4_Lite_AWVALID),
        .AXI4_Lite_BREADY(AXI4_Lite_BREADY),
        .AXI4_Lite_BVALID(AXI4_Lite_BVALID),
        .AXI4_Lite_RDATA({\^AXI4_Lite_RDATA [30],\^AXI4_Lite_RDATA [14:0]}),
        .AXI4_Lite_RREADY(AXI4_Lite_RREADY),
        .AXI4_Lite_RVALID(AXI4_Lite_RVALID),
        .AXI4_Lite_WDATA(AXI4_Lite_WDATA[15:0]),
        .AXI4_Lite_WREADY(AXI4_Lite_WREADY),
        .AXI4_Lite_WVALID(AXI4_Lite_WVALID),
        .IPCORE_CLK(IPCORE_CLK),
        .IPCORE_RESETN(IPCORE_RESETN));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore
   (AXI4_Lite_WREADY,
    AXI4_Lite_BVALID,
    AXI4_Lite_RVALID,
    AXI4_Lite_RDATA,
    AXI4_Lite_ARREADY,
    AXI4_Lite_AWREADY,
    AXI4_Lite_AWVALID,
    AXI4_Lite_WVALID,
    AXI4_Lite_ARESETN,
    IPCORE_RESETN,
    AXI4_Lite_WDATA,
    AXI4_Lite_ACLK,
    AXI4_Lite_AWADDR,
    IPCORE_CLK,
    AXI4_Lite_ARVALID,
    AXI4_Lite_ARADDR,
    AXI4_Lite_RREADY,
    AXI4_Lite_BREADY);
  output AXI4_Lite_WREADY;
  output AXI4_Lite_BVALID;
  output AXI4_Lite_RVALID;
  output [15:0]AXI4_Lite_RDATA;
  output AXI4_Lite_ARREADY;
  output AXI4_Lite_AWREADY;
  input AXI4_Lite_AWVALID;
  input AXI4_Lite_WVALID;
  input AXI4_Lite_ARESETN;
  input IPCORE_RESETN;
  input [15:0]AXI4_Lite_WDATA;
  input AXI4_Lite_ACLK;
  input [13:0]AXI4_Lite_AWADDR;
  input IPCORE_CLK;
  input AXI4_Lite_ARVALID;
  input [13:0]AXI4_Lite_ARADDR;
  input AXI4_Lite_RREADY;
  input AXI4_Lite_BREADY;

  wire AXI4_Lite_ACLK;
  wire [13:0]AXI4_Lite_ARADDR;
  wire AXI4_Lite_ARESETN;
  wire AXI4_Lite_ARREADY;
  wire AXI4_Lite_ARVALID;
  wire [13:0]AXI4_Lite_AWADDR;
  wire AXI4_Lite_AWREADY;
  wire AXI4_Lite_AWVALID;
  wire AXI4_Lite_BREADY;
  wire AXI4_Lite_BVALID;
  wire [15:0]AXI4_Lite_RDATA;
  wire AXI4_Lite_RREADY;
  wire AXI4_Lite_RVALID;
  wire [15:0]AXI4_Lite_WDATA;
  wire AXI4_Lite_WREADY;
  wire AXI4_Lite_WVALID;
  wire IPCORE_CLK;
  wire IPCORE_RESETN;
  wire cop_dut_enable;
  wire cop_out_ready;
  wire [1:0]cp_controller_cpstate;
  wire [15:0]filter_sum;
  wire [15:0]\u_LMS/mul_temp_16 ;
  wire u_lms_pcore_axi_lite_inst_n_0;
  wire u_lms_pcore_axi_lite_inst_n_24;
  wire u_lms_pcore_axi_lite_inst_n_25;
  wire u_lms_pcore_axi_lite_inst_n_26;
  wire u_lms_pcore_axi_lite_inst_n_27;
  wire u_lms_pcore_axi_lite_inst_n_28;
  wire u_lms_pcore_axi_lite_inst_n_29;
  wire u_lms_pcore_axi_lite_inst_n_30;
  wire u_lms_pcore_axi_lite_inst_n_31;
  wire u_lms_pcore_axi_lite_inst_n_32;
  wire u_lms_pcore_axi_lite_inst_n_33;
  wire u_lms_pcore_axi_lite_inst_n_34;
  wire u_lms_pcore_axi_lite_inst_n_35;
  wire u_lms_pcore_axi_lite_inst_n_36;
  wire u_lms_pcore_axi_lite_inst_n_37;
  wire u_lms_pcore_axi_lite_inst_n_38;
  wire u_lms_pcore_axi_lite_inst_n_39;
  wire u_lms_pcore_axi_lite_inst_n_40;
  wire u_lms_pcore_axi_lite_inst_n_5;
  wire u_lms_pcore_axi_lite_inst_n_6;
  wire u_lms_pcore_axi_lite_inst_n_7;
  wire u_lms_pcore_axi_lite_inst_n_8;
  wire write_reg_axi_enable;
  wire [14:0]write_reg_d_k;
  wire [15:0]write_reg_x_k;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_axi_lite u_lms_pcore_axi_lite_inst
       (.ARG__28(write_reg_x_k),
        .ARG__29({u_lms_pcore_axi_lite_inst_n_37,u_lms_pcore_axi_lite_inst_n_38,u_lms_pcore_axi_lite_inst_n_39}),
        .AXI4_Lite_ACLK(AXI4_Lite_ACLK),
        .AXI4_Lite_ARADDR(AXI4_Lite_ARADDR),
        .AXI4_Lite_ARESETN(AXI4_Lite_ARESETN),
        .AXI4_Lite_ARREADY(AXI4_Lite_ARREADY),
        .AXI4_Lite_ARVALID(AXI4_Lite_ARVALID),
        .AXI4_Lite_AWADDR(AXI4_Lite_AWADDR),
        .AXI4_Lite_AWREADY(AXI4_Lite_AWREADY),
        .AXI4_Lite_AWVALID(AXI4_Lite_AWVALID),
        .AXI4_Lite_BREADY(AXI4_Lite_BREADY),
        .AXI4_Lite_BVALID(AXI4_Lite_BVALID),
        .AXI4_Lite_RDATA(AXI4_Lite_RDATA),
        .AXI4_Lite_RREADY(AXI4_Lite_RREADY),
        .AXI4_Lite_RVALID(AXI4_Lite_RVALID),
        .AXI4_Lite_WDATA(AXI4_Lite_WDATA),
        .AXI4_Lite_WREADY(AXI4_Lite_WREADY),
        .AXI4_Lite_WVALID(AXI4_Lite_WVALID),
        .DI(u_lms_pcore_axi_lite_inst_n_36),
        .IPCORE_RESETN(IPCORE_RESETN),
        .Q(write_reg_d_k),
        .S({u_lms_pcore_axi_lite_inst_n_5,u_lms_pcore_axi_lite_inst_n_6,u_lms_pcore_axi_lite_inst_n_7,u_lms_pcore_axi_lite_inst_n_8}),
        .cop_out_ready(cop_out_ready),
        .cp_controller_cpstate(cp_controller_cpstate),
        .\cp_controller_cpstate_reg[0] (u_lms_pcore_axi_lite_inst_n_40),
        .filter_sum(filter_sum),
        .mul_temp_16(\u_LMS/mul_temp_16 ),
        .\sync_reg_e_k_reg[11] ({u_lms_pcore_axi_lite_inst_n_24,u_lms_pcore_axi_lite_inst_n_25,u_lms_pcore_axi_lite_inst_n_26,u_lms_pcore_axi_lite_inst_n_27}),
        .\sync_reg_e_k_reg[3] ({u_lms_pcore_axi_lite_inst_n_32,u_lms_pcore_axi_lite_inst_n_33,u_lms_pcore_axi_lite_inst_n_34,u_lms_pcore_axi_lite_inst_n_35}),
        .\sync_reg_e_k_reg[7] ({u_lms_pcore_axi_lite_inst_n_28,u_lms_pcore_axi_lite_inst_n_29,u_lms_pcore_axi_lite_inst_n_30,u_lms_pcore_axi_lite_inst_n_31}),
        .write_reg_axi_enable(write_reg_axi_enable),
        .write_reg_axi_enable_reg(u_lms_pcore_axi_lite_inst_n_0));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_cop u_lms_pcore_cop_inst
       (.AR(u_lms_pcore_axi_lite_inst_n_0),
        .IPCORE_CLK(IPCORE_CLK),
        .cop_dut_enable(cop_dut_enable),
        .cop_out_ready(cop_out_ready),
        .cp_controller_cpstate(cp_controller_cpstate),
        .strobe_reg_cop_in_strobe_reg(u_lms_pcore_axi_lite_inst_n_40),
        .write_reg_axi_enable(write_reg_axi_enable));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_dut u_lms_pcore_dut_inst
       (.AR(u_lms_pcore_axi_lite_inst_n_0),
        .DI(u_lms_pcore_axi_lite_inst_n_36),
        .IPCORE_CLK(IPCORE_CLK),
        .Q(write_reg_d_k),
        .S({u_lms_pcore_axi_lite_inst_n_5,u_lms_pcore_axi_lite_inst_n_6,u_lms_pcore_axi_lite_inst_n_7,u_lms_pcore_axi_lite_inst_n_8}),
        .cop_dut_enable(cop_dut_enable),
        .filter_sum(filter_sum),
        .mul_temp_16(\u_LMS/mul_temp_16 ),
        .\write_reg_d_k_reg[11] ({u_lms_pcore_axi_lite_inst_n_24,u_lms_pcore_axi_lite_inst_n_25,u_lms_pcore_axi_lite_inst_n_26,u_lms_pcore_axi_lite_inst_n_27}),
        .\write_reg_d_k_reg[3] ({u_lms_pcore_axi_lite_inst_n_37,u_lms_pcore_axi_lite_inst_n_38,u_lms_pcore_axi_lite_inst_n_39}),
        .\write_reg_d_k_reg[3]_0 ({u_lms_pcore_axi_lite_inst_n_32,u_lms_pcore_axi_lite_inst_n_33,u_lms_pcore_axi_lite_inst_n_34,u_lms_pcore_axi_lite_inst_n_35}),
        .\write_reg_d_k_reg[7] ({u_lms_pcore_axi_lite_inst_n_28,u_lms_pcore_axi_lite_inst_n_29,u_lms_pcore_axi_lite_inst_n_30,u_lms_pcore_axi_lite_inst_n_31}),
        .\write_reg_x_k_reg[15] (write_reg_x_k));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_addr_decoder
   (read_reg_cop_out_ready,
    write_reg_axi_enable,
    S,
    Q,
    \sync_reg_e_k_reg[11]_0 ,
    \sync_reg_e_k_reg[7]_0 ,
    \sync_reg_e_k_reg[3]_0 ,
    DI,
    ARG__29,
    \cp_controller_cpstate_reg[0] ,
    ARG__28,
    \AXI4_Lite_RDATA_tmp_reg[31] ,
    strobe_sw_cop_in_strobe,
    AXI4_Lite_ACLK,
    AR,
    cop_out_ready,
    \wdata_reg[0] ,
    filter_sum,
    mul_temp_16,
    cp_controller_cpstate,
    E,
    \wdata_reg[15] ,
    wr_enb_1_reg);
  output read_reg_cop_out_ready;
  output write_reg_axi_enable;
  output [3:0]S;
  output [14:0]Q;
  output [3:0]\sync_reg_e_k_reg[11]_0 ;
  output [3:0]\sync_reg_e_k_reg[7]_0 ;
  output [3:0]\sync_reg_e_k_reg[3]_0 ;
  output [0:0]DI;
  output [2:0]ARG__29;
  output \cp_controller_cpstate_reg[0] ;
  output [15:0]ARG__28;
  output [15:0]\AXI4_Lite_RDATA_tmp_reg[31] ;
  input strobe_sw_cop_in_strobe;
  input AXI4_Lite_ACLK;
  input [0:0]AR;
  input cop_out_ready;
  input \wdata_reg[0] ;
  input [15:0]filter_sum;
  input [15:0]mul_temp_16;
  input [1:0]cp_controller_cpstate;
  input [0:0]E;
  input [15:0]\wdata_reg[15] ;
  input [0:0]wr_enb_1_reg;

  wire [0:0]AR;
  wire [15:0]ARG__28;
  wire [2:0]ARG__29;
  wire AXI4_Lite_ACLK;
  wire [15:0]\AXI4_Lite_RDATA_tmp_reg[31] ;
  wire [0:0]DI;
  wire [0:0]E;
  wire [14:0]Q;
  wire [3:0]S;
  wire cop_out_ready;
  wire [1:0]cp_controller_cpstate;
  wire \cp_controller_cpstate_reg[0] ;
  wire [15:0]filter_sum;
  wire in_strobe;
  wire [15:0]mul_temp_16;
  wire read_reg_cop_out_ready;
  wire strobe_sw_cop_in_strobe;
  wire [3:0]\sync_reg_e_k_reg[11]_0 ;
  wire [3:0]\sync_reg_e_k_reg[3]_0 ;
  wire [3:0]\sync_reg_e_k_reg[7]_0 ;
  wire \wdata_reg[0] ;
  wire [15:0]\wdata_reg[15] ;
  wire [0:0]wr_enb_1_reg;
  wire write_reg_axi_enable;
  wire [15:15]write_reg_d_k;

  LUT1 #(
    .INIT(2'h1)) 
    ARG_carry__0_i_1
       (.I0(mul_temp_16[3]),
        .O(DI));
  LUT1 #(
    .INIT(2'h1)) 
    ARG_carry_i_1
       (.I0(mul_temp_16[1]),
        .O(ARG__29[2]));
  LUT1 #(
    .INIT(2'h1)) 
    ARG_carry_i_2
       (.I0(mul_temp_16[0]),
        .O(ARG__29[1]));
  LUT1 #(
    .INIT(2'h1)) 
    ARG_carry_i_3
       (.I0(mul_temp_16[3]),
        .O(ARG__29[0]));
  LUT4 #(
    .INIT(16'h0F20)) 
    \cp_controller_cpstate[0]_i_1 
       (.I0(in_strobe),
        .I1(cp_controller_cpstate[1]),
        .I2(write_reg_axi_enable),
        .I3(cp_controller_cpstate[0]),
        .O(\cp_controller_cpstate_reg[0] ));
  FDCE read_reg_cop_out_ready_reg
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(cop_out_ready),
        .Q(read_reg_cop_out_ready));
  FDCE strobe_reg_cop_in_strobe_reg
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(strobe_sw_cop_in_strobe),
        .Q(in_strobe));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__0_i_1
       (.I0(Q[7]),
        .I1(filter_sum[7]),
        .O(\sync_reg_e_k_reg[7]_0 [3]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__0_i_2
       (.I0(Q[6]),
        .I1(filter_sum[6]),
        .O(\sync_reg_e_k_reg[7]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__0_i_3
       (.I0(Q[5]),
        .I1(filter_sum[5]),
        .O(\sync_reg_e_k_reg[7]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__0_i_4
       (.I0(Q[4]),
        .I1(filter_sum[4]),
        .O(\sync_reg_e_k_reg[7]_0 [0]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__1_i_1
       (.I0(Q[11]),
        .I1(filter_sum[11]),
        .O(\sync_reg_e_k_reg[11]_0 [3]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__1_i_2
       (.I0(Q[10]),
        .I1(filter_sum[10]),
        .O(\sync_reg_e_k_reg[11]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__1_i_3
       (.I0(Q[9]),
        .I1(filter_sum[9]),
        .O(\sync_reg_e_k_reg[11]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__1_i_4
       (.I0(Q[8]),
        .I1(filter_sum[8]),
        .O(\sync_reg_e_k_reg[11]_0 [0]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__2_i_1
       (.I0(write_reg_d_k),
        .I1(filter_sum[15]),
        .O(S[3]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__2_i_2
       (.I0(Q[14]),
        .I1(filter_sum[14]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__2_i_3
       (.I0(Q[13]),
        .I1(filter_sum[13]),
        .O(S[1]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry__2_i_4
       (.I0(Q[12]),
        .I1(filter_sum[12]),
        .O(S[0]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry_i_1
       (.I0(Q[3]),
        .I1(filter_sum[3]),
        .O(\sync_reg_e_k_reg[3]_0 [3]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry_i_2
       (.I0(Q[2]),
        .I1(filter_sum[2]),
        .O(\sync_reg_e_k_reg[3]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry_i_3
       (.I0(Q[1]),
        .I1(filter_sum[1]),
        .O(\sync_reg_e_k_reg[3]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    sub_temp_carry_i_4
       (.I0(Q[0]),
        .I1(filter_sum[0]),
        .O(\sync_reg_e_k_reg[3]_0 [0]));
  FDCE \sync_reg_e_k_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[0]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [0]));
  FDCE \sync_reg_e_k_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[10]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [10]));
  FDCE \sync_reg_e_k_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[11]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [11]));
  FDCE \sync_reg_e_k_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[12]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [12]));
  FDCE \sync_reg_e_k_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[13]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [13]));
  FDCE \sync_reg_e_k_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[14]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [14]));
  FDCE \sync_reg_e_k_reg[15] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[15]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [15]));
  FDCE \sync_reg_e_k_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[1]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [1]));
  FDCE \sync_reg_e_k_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[2]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [2]));
  FDCE \sync_reg_e_k_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[3]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [3]));
  FDCE \sync_reg_e_k_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[4]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [4]));
  FDCE \sync_reg_e_k_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[5]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [5]));
  FDCE \sync_reg_e_k_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[6]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [6]));
  FDCE \sync_reg_e_k_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[7]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [7]));
  FDCE \sync_reg_e_k_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[8]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [8]));
  FDCE \sync_reg_e_k_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(in_strobe),
        .CLR(AR),
        .D(mul_temp_16[9]),
        .Q(\AXI4_Lite_RDATA_tmp_reg[31] [9]));
  FDPE write_reg_axi_enable_reg
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .D(\wdata_reg[0] ),
        .PRE(AR),
        .Q(write_reg_axi_enable));
  FDCE \write_reg_d_k_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [0]),
        .Q(Q[0]));
  FDCE \write_reg_d_k_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [10]),
        .Q(Q[10]));
  FDCE \write_reg_d_k_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [11]),
        .Q(Q[11]));
  FDCE \write_reg_d_k_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [12]),
        .Q(Q[12]));
  FDCE \write_reg_d_k_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [13]),
        .Q(Q[13]));
  FDCE \write_reg_d_k_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [14]),
        .Q(Q[14]));
  FDCE \write_reg_d_k_reg[15] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [15]),
        .Q(write_reg_d_k));
  FDCE \write_reg_d_k_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [1]),
        .Q(Q[1]));
  FDCE \write_reg_d_k_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [2]),
        .Q(Q[2]));
  FDCE \write_reg_d_k_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [3]),
        .Q(Q[3]));
  FDCE \write_reg_d_k_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [4]),
        .Q(Q[4]));
  FDCE \write_reg_d_k_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [5]),
        .Q(Q[5]));
  FDCE \write_reg_d_k_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [6]),
        .Q(Q[6]));
  FDCE \write_reg_d_k_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [7]),
        .Q(Q[7]));
  FDCE \write_reg_d_k_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [8]),
        .Q(Q[8]));
  FDCE \write_reg_d_k_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(wr_enb_1_reg),
        .CLR(AR),
        .D(\wdata_reg[15] [9]),
        .Q(Q[9]));
  FDCE \write_reg_x_k_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [0]),
        .Q(ARG__28[0]));
  FDCE \write_reg_x_k_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [10]),
        .Q(ARG__28[10]));
  FDCE \write_reg_x_k_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [11]),
        .Q(ARG__28[11]));
  FDCE \write_reg_x_k_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [12]),
        .Q(ARG__28[12]));
  FDCE \write_reg_x_k_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [13]),
        .Q(ARG__28[13]));
  FDCE \write_reg_x_k_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [14]),
        .Q(ARG__28[14]));
  FDCE \write_reg_x_k_reg[15] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [15]),
        .Q(ARG__28[15]));
  FDCE \write_reg_x_k_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [1]),
        .Q(ARG__28[1]));
  FDCE \write_reg_x_k_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [2]),
        .Q(ARG__28[2]));
  FDCE \write_reg_x_k_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [3]),
        .Q(ARG__28[3]));
  FDCE \write_reg_x_k_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [4]),
        .Q(ARG__28[4]));
  FDCE \write_reg_x_k_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [5]),
        .Q(ARG__28[5]));
  FDCE \write_reg_x_k_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [6]),
        .Q(ARG__28[6]));
  FDCE \write_reg_x_k_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [7]),
        .Q(ARG__28[7]));
  FDCE \write_reg_x_k_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [8]),
        .Q(ARG__28[8]));
  FDCE \write_reg_x_k_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\wdata_reg[15] [9]),
        .Q(ARG__28[9]));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_axi_lite
   (write_reg_axi_enable_reg,
    AXI4_Lite_RVALID,
    write_reg_axi_enable,
    AXI4_Lite_WREADY,
    AXI4_Lite_BVALID,
    S,
    Q,
    \sync_reg_e_k_reg[11] ,
    \sync_reg_e_k_reg[7] ,
    \sync_reg_e_k_reg[3] ,
    DI,
    ARG__29,
    \cp_controller_cpstate_reg[0] ,
    ARG__28,
    AXI4_Lite_RDATA,
    AXI4_Lite_AWREADY,
    AXI4_Lite_ARREADY,
    AXI4_Lite_ACLK,
    cop_out_ready,
    AXI4_Lite_AWVALID,
    AXI4_Lite_WVALID,
    AXI4_Lite_ARESETN,
    IPCORE_RESETN,
    filter_sum,
    mul_temp_16,
    cp_controller_cpstate,
    AXI4_Lite_WDATA,
    AXI4_Lite_AWADDR,
    AXI4_Lite_BREADY,
    AXI4_Lite_ARVALID,
    AXI4_Lite_ARADDR,
    AXI4_Lite_RREADY);
  output write_reg_axi_enable_reg;
  output AXI4_Lite_RVALID;
  output write_reg_axi_enable;
  output AXI4_Lite_WREADY;
  output AXI4_Lite_BVALID;
  output [3:0]S;
  output [14:0]Q;
  output [3:0]\sync_reg_e_k_reg[11] ;
  output [3:0]\sync_reg_e_k_reg[7] ;
  output [3:0]\sync_reg_e_k_reg[3] ;
  output [0:0]DI;
  output [2:0]ARG__29;
  output \cp_controller_cpstate_reg[0] ;
  output [15:0]ARG__28;
  output [15:0]AXI4_Lite_RDATA;
  output AXI4_Lite_AWREADY;
  output AXI4_Lite_ARREADY;
  input AXI4_Lite_ACLK;
  input cop_out_ready;
  input AXI4_Lite_AWVALID;
  input AXI4_Lite_WVALID;
  input AXI4_Lite_ARESETN;
  input IPCORE_RESETN;
  input [15:0]filter_sum;
  input [15:0]mul_temp_16;
  input [1:0]cp_controller_cpstate;
  input [15:0]AXI4_Lite_WDATA;
  input [13:0]AXI4_Lite_AWADDR;
  input AXI4_Lite_BREADY;
  input AXI4_Lite_ARVALID;
  input [13:0]AXI4_Lite_ARADDR;
  input AXI4_Lite_RREADY;

  wire [15:0]ARG__28;
  wire [2:0]ARG__29;
  wire AXI4_Lite_ACLK;
  wire [13:0]AXI4_Lite_ARADDR;
  wire AXI4_Lite_ARESETN;
  wire AXI4_Lite_ARREADY;
  wire AXI4_Lite_ARVALID;
  wire [13:0]AXI4_Lite_AWADDR;
  wire AXI4_Lite_AWREADY;
  wire AXI4_Lite_AWVALID;
  wire AXI4_Lite_BREADY;
  wire AXI4_Lite_BVALID;
  wire [15:0]AXI4_Lite_RDATA;
  wire AXI4_Lite_RREADY;
  wire AXI4_Lite_RVALID;
  wire [15:0]AXI4_Lite_WDATA;
  wire AXI4_Lite_WREADY;
  wire AXI4_Lite_WVALID;
  wire [0:0]DI;
  wire IPCORE_RESETN;
  wire [14:0]Q;
  wire [3:0]S;
  wire cop_out_ready;
  wire [1:0]cp_controller_cpstate;
  wire \cp_controller_cpstate_reg[0] ;
  wire [15:0]filter_sum;
  wire [15:0]mul_temp_16;
  wire read_reg_cop_out_ready;
  wire reg_enb_d_k;
  wire reg_enb_x_k;
  wire strobe_sw_cop_in_strobe;
  wire [15:0]sync_reg_e_k;
  wire [3:0]\sync_reg_e_k_reg[11] ;
  wire [3:0]\sync_reg_e_k_reg[3] ;
  wire [3:0]\sync_reg_e_k_reg[7] ;
  wire [0:0]top_data_write;
  wire u_lms_pcore_axi_lite_module_inst_n_10;
  wire u_lms_pcore_axi_lite_module_inst_n_11;
  wire u_lms_pcore_axi_lite_module_inst_n_12;
  wire u_lms_pcore_axi_lite_module_inst_n_13;
  wire u_lms_pcore_axi_lite_module_inst_n_14;
  wire u_lms_pcore_axi_lite_module_inst_n_15;
  wire u_lms_pcore_axi_lite_module_inst_n_16;
  wire u_lms_pcore_axi_lite_module_inst_n_17;
  wire u_lms_pcore_axi_lite_module_inst_n_18;
  wire u_lms_pcore_axi_lite_module_inst_n_19;
  wire u_lms_pcore_axi_lite_module_inst_n_4;
  wire u_lms_pcore_axi_lite_module_inst_n_5;
  wire u_lms_pcore_axi_lite_module_inst_n_6;
  wire u_lms_pcore_axi_lite_module_inst_n_7;
  wire u_lms_pcore_axi_lite_module_inst_n_8;
  wire u_lms_pcore_axi_lite_module_inst_n_9;
  wire write_reg_axi_enable;
  wire write_reg_axi_enable_reg;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_addr_decoder u_lms_pcore_addr_decoder_inst
       (.AR(write_reg_axi_enable_reg),
        .ARG__28(ARG__28),
        .ARG__29(ARG__29),
        .AXI4_Lite_ACLK(AXI4_Lite_ACLK),
        .\AXI4_Lite_RDATA_tmp_reg[31] (sync_reg_e_k),
        .DI(DI),
        .E(reg_enb_x_k),
        .Q(Q),
        .S(S),
        .cop_out_ready(cop_out_ready),
        .cp_controller_cpstate(cp_controller_cpstate),
        .\cp_controller_cpstate_reg[0] (\cp_controller_cpstate_reg[0] ),
        .filter_sum(filter_sum),
        .mul_temp_16(mul_temp_16),
        .read_reg_cop_out_ready(read_reg_cop_out_ready),
        .strobe_sw_cop_in_strobe(strobe_sw_cop_in_strobe),
        .\sync_reg_e_k_reg[11]_0 (\sync_reg_e_k_reg[11] ),
        .\sync_reg_e_k_reg[3]_0 (\sync_reg_e_k_reg[3] ),
        .\sync_reg_e_k_reg[7]_0 (\sync_reg_e_k_reg[7] ),
        .\wdata_reg[0] (u_lms_pcore_axi_lite_module_inst_n_4),
        .\wdata_reg[15] ({u_lms_pcore_axi_lite_module_inst_n_5,u_lms_pcore_axi_lite_module_inst_n_6,u_lms_pcore_axi_lite_module_inst_n_7,u_lms_pcore_axi_lite_module_inst_n_8,u_lms_pcore_axi_lite_module_inst_n_9,u_lms_pcore_axi_lite_module_inst_n_10,u_lms_pcore_axi_lite_module_inst_n_11,u_lms_pcore_axi_lite_module_inst_n_12,u_lms_pcore_axi_lite_module_inst_n_13,u_lms_pcore_axi_lite_module_inst_n_14,u_lms_pcore_axi_lite_module_inst_n_15,u_lms_pcore_axi_lite_module_inst_n_16,u_lms_pcore_axi_lite_module_inst_n_17,u_lms_pcore_axi_lite_module_inst_n_18,u_lms_pcore_axi_lite_module_inst_n_19,top_data_write}),
        .wr_enb_1_reg(reg_enb_d_k),
        .write_reg_axi_enable(write_reg_axi_enable));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_axi_lite_module u_lms_pcore_axi_lite_module_inst
       (.AXI4_Lite_ACLK(AXI4_Lite_ACLK),
        .AXI4_Lite_ARADDR(AXI4_Lite_ARADDR),
        .AXI4_Lite_ARESETN(AXI4_Lite_ARESETN),
        .AXI4_Lite_ARREADY(AXI4_Lite_ARREADY),
        .AXI4_Lite_ARVALID(AXI4_Lite_ARVALID),
        .AXI4_Lite_AWADDR(AXI4_Lite_AWADDR),
        .AXI4_Lite_AWREADY(AXI4_Lite_AWREADY),
        .AXI4_Lite_AWVALID(AXI4_Lite_AWVALID),
        .AXI4_Lite_BREADY(AXI4_Lite_BREADY),
        .AXI4_Lite_BVALID(AXI4_Lite_BVALID),
        .AXI4_Lite_RDATA(AXI4_Lite_RDATA),
        .AXI4_Lite_RREADY(AXI4_Lite_RREADY),
        .AXI4_Lite_RVALID(AXI4_Lite_RVALID),
        .AXI4_Lite_WDATA(AXI4_Lite_WDATA),
        .AXI4_Lite_WREADY(AXI4_Lite_WREADY),
        .AXI4_Lite_WVALID(AXI4_Lite_WVALID),
        .E(reg_enb_x_k),
        .IPCORE_RESETN(IPCORE_RESETN),
        .Q({u_lms_pcore_axi_lite_module_inst_n_5,u_lms_pcore_axi_lite_module_inst_n_6,u_lms_pcore_axi_lite_module_inst_n_7,u_lms_pcore_axi_lite_module_inst_n_8,u_lms_pcore_axi_lite_module_inst_n_9,u_lms_pcore_axi_lite_module_inst_n_10,u_lms_pcore_axi_lite_module_inst_n_11,u_lms_pcore_axi_lite_module_inst_n_12,u_lms_pcore_axi_lite_module_inst_n_13,u_lms_pcore_axi_lite_module_inst_n_14,u_lms_pcore_axi_lite_module_inst_n_15,u_lms_pcore_axi_lite_module_inst_n_16,u_lms_pcore_axi_lite_module_inst_n_17,u_lms_pcore_axi_lite_module_inst_n_18,u_lms_pcore_axi_lite_module_inst_n_19,top_data_write}),
        .read_reg_cop_out_ready(read_reg_cop_out_ready),
        .strobe_sw_cop_in_strobe(strobe_sw_cop_in_strobe),
        .\sync_reg_e_k_reg[15] (sync_reg_e_k),
        .write_reg_axi_enable(write_reg_axi_enable),
        .write_reg_axi_enable_reg(write_reg_axi_enable_reg),
        .write_reg_axi_enable_reg_0(u_lms_pcore_axi_lite_module_inst_n_4),
        .\write_reg_d_k_reg[15] (reg_enb_d_k));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_axi_lite_module
   (AXI4_Lite_RVALID,
    write_reg_axi_enable_reg,
    AXI4_Lite_WREADY,
    AXI4_Lite_BVALID,
    write_reg_axi_enable_reg_0,
    Q,
    AXI4_Lite_RDATA,
    AXI4_Lite_AWREADY,
    strobe_sw_cop_in_strobe,
    \write_reg_d_k_reg[15] ,
    E,
    AXI4_Lite_ARREADY,
    AXI4_Lite_ACLK,
    AXI4_Lite_AWVALID,
    AXI4_Lite_WVALID,
    AXI4_Lite_ARESETN,
    IPCORE_RESETN,
    write_reg_axi_enable,
    AXI4_Lite_WDATA,
    AXI4_Lite_AWADDR,
    AXI4_Lite_BREADY,
    \sync_reg_e_k_reg[15] ,
    AXI4_Lite_ARVALID,
    AXI4_Lite_ARADDR,
    read_reg_cop_out_ready,
    AXI4_Lite_RREADY);
  output AXI4_Lite_RVALID;
  output write_reg_axi_enable_reg;
  output AXI4_Lite_WREADY;
  output AXI4_Lite_BVALID;
  output write_reg_axi_enable_reg_0;
  output [15:0]Q;
  output [15:0]AXI4_Lite_RDATA;
  output AXI4_Lite_AWREADY;
  output strobe_sw_cop_in_strobe;
  output [0:0]\write_reg_d_k_reg[15] ;
  output [0:0]E;
  output AXI4_Lite_ARREADY;
  input AXI4_Lite_ACLK;
  input AXI4_Lite_AWVALID;
  input AXI4_Lite_WVALID;
  input AXI4_Lite_ARESETN;
  input IPCORE_RESETN;
  input write_reg_axi_enable;
  input [15:0]AXI4_Lite_WDATA;
  input [13:0]AXI4_Lite_AWADDR;
  input AXI4_Lite_BREADY;
  input [15:0]\sync_reg_e_k_reg[15] ;
  input AXI4_Lite_ARVALID;
  input [13:0]AXI4_Lite_ARADDR;
  input read_reg_cop_out_ready;
  input AXI4_Lite_RREADY;

  wire AXI4_Lite_ACLK;
  wire [13:0]AXI4_Lite_ARADDR;
  wire AXI4_Lite_ARESETN;
  wire AXI4_Lite_ARREADY;
  wire AXI4_Lite_ARVALID;
  wire [13:0]AXI4_Lite_AWADDR;
  wire AXI4_Lite_AWREADY;
  wire AXI4_Lite_AWVALID;
  wire AXI4_Lite_BREADY;
  wire AXI4_Lite_BVALID;
  wire [15:0]AXI4_Lite_RDATA;
  wire \AXI4_Lite_RDATA_tmp[0]_i_2_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[0]_i_3_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_10_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_11_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_12_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ;
  wire \AXI4_Lite_RDATA_tmp[31]_i_9_n_0 ;
  wire AXI4_Lite_RREADY;
  wire AXI4_Lite_RVALID;
  wire [15:0]AXI4_Lite_WDATA;
  wire AXI4_Lite_WREADY;
  wire AXI4_Lite_WVALID;
  wire [0:0]E;
  wire IPCORE_RESETN;
  wire [15:0]Q;
  wire aw_transfer;
  wire \axi_lite_rstate[0]_i_1_n_0 ;
  wire [1:0]axi_lite_wstate;
  wire \axi_lite_wstate[0]_i_1_n_0 ;
  wire \axi_lite_wstate_next_inferred__1/i__n_0 ;
  wire [31:0]data_read;
  wire read_reg_cop_out_ready;
  wire reset;
  wire [13:0]sel0;
  wire soft_reset;
  wire soft_reset_i_2_n_0;
  wire soft_reset_i_3_n_0;
  wire soft_reset_i_4_n_0;
  wire strobe_reg_cop_in_strobe_i_3_n_0;
  wire strobe_sw;
  wire strobe_sw_cop_in_strobe;
  wire [15:0]\sync_reg_e_k_reg[15] ;
  wire top_rd_enb;
  wire top_wr_enb;
  wire w_transfer;
  wire write_reg_axi_enable;
  wire write_reg_axi_enable_i_2_n_0;
  wire write_reg_axi_enable_reg;
  wire write_reg_axi_enable_reg_0;
  wire [0:0]\write_reg_d_k_reg[15] ;

  LUT1 #(
    .INIT(2'h1)) 
    AXI4_Lite_ARREADY_INST_0
       (.I0(AXI4_Lite_RVALID),
        .O(AXI4_Lite_ARREADY));
  LUT2 #(
    .INIT(4'h1)) 
    AXI4_Lite_AWREADY_INST_0
       (.I0(axi_lite_wstate[0]),
        .I1(axi_lite_wstate[1]),
        .O(AXI4_Lite_AWREADY));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h2)) 
    AXI4_Lite_BVALID_INST_0
       (.I0(axi_lite_wstate[1]),
        .I1(axi_lite_wstate[0]),
        .O(AXI4_Lite_BVALID));
  LUT6 #(
    .INIT(64'h00008CCC00008000)) 
    \AXI4_Lite_RDATA_tmp[0]_i_1 
       (.I0(\sync_reg_e_k_reg[15] [0]),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[0]_i_2_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I5(\AXI4_Lite_RDATA_tmp[0]_i_3_n_0 ),
        .O(data_read[0]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h000ACC0A)) 
    \AXI4_Lite_RDATA_tmp[0]_i_2 
       (.I0(sel0[6]),
        .I1(AXI4_Lite_ARADDR[6]),
        .I2(sel0[0]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[0]),
        .O(\AXI4_Lite_RDATA_tmp[0]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'h0000B80000000000)) 
    \AXI4_Lite_RDATA_tmp[0]_i_3 
       (.I0(AXI4_Lite_ARADDR[0]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[0]),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I5(read_reg_cop_out_ready),
        .O(\AXI4_Lite_RDATA_tmp[0]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[10]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [10]),
        .O(data_read[10]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[11]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [11]),
        .O(data_read[11]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[12]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [12]),
        .O(data_read[12]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[13]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [13]),
        .O(data_read[13]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[14]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [14]),
        .O(data_read[14]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[1]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [1]),
        .O(data_read[1]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[2]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [2]),
        .O(data_read[2]));
  LUT2 #(
    .INIT(4'h2)) 
    \AXI4_Lite_RDATA_tmp[31]_i_1 
       (.I0(AXI4_Lite_ARVALID),
        .I1(AXI4_Lite_RVALID),
        .O(top_rd_enb));
  LUT5 #(
    .INIT(32'hFFEEF0EE)) 
    \AXI4_Lite_RDATA_tmp[31]_i_10 
       (.I0(sel0[5]),
        .I1(sel0[4]),
        .I2(AXI4_Lite_ARADDR[5]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[4]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_10_n_0 ));
  LUT5 #(
    .INIT(32'hFFEEF0EE)) 
    \AXI4_Lite_RDATA_tmp[31]_i_11 
       (.I0(sel0[3]),
        .I1(sel0[2]),
        .I2(AXI4_Lite_ARADDR[3]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[2]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_11_n_0 ));
  LUT5 #(
    .INIT(32'hFFEEF0EE)) 
    \AXI4_Lite_RDATA_tmp[31]_i_12 
       (.I0(sel0[9]),
        .I1(sel0[8]),
        .I2(AXI4_Lite_ARADDR[9]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[8]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[31]_i_2 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [15]),
        .O(data_read[31]));
  LUT1 #(
    .INIT(2'h1)) 
    \AXI4_Lite_RDATA_tmp[31]_i_3 
       (.I0(AXI4_Lite_ARESETN),
        .O(reset));
  LUT6 #(
    .INIT(64'hFFFFEFEFFFFAEFEA)) 
    \AXI4_Lite_RDATA_tmp[31]_i_4 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_9_n_0 ),
        .I1(AXI4_Lite_ARADDR[10]),
        .I2(AXI4_Lite_ARVALID),
        .I3(sel0[10]),
        .I4(AXI4_Lite_ARADDR[11]),
        .I5(sel0[11]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \AXI4_Lite_RDATA_tmp[31]_i_5 
       (.I0(AXI4_Lite_ARADDR[1]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[1]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \AXI4_Lite_RDATA_tmp[31]_i_6 
       (.I0(AXI4_Lite_ARADDR[6]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[6]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \AXI4_Lite_RDATA_tmp[31]_i_7 
       (.I0(AXI4_Lite_ARADDR[0]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[0]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ));
  LUT5 #(
    .INIT(32'h00011101)) 
    \AXI4_Lite_RDATA_tmp[31]_i_8 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_10_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_11_n_0 ),
        .I2(sel0[7]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[7]),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFBBFCB8)) 
    \AXI4_Lite_RDATA_tmp[31]_i_9 
       (.I0(AXI4_Lite_ARADDR[13]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[13]),
        .I3(AXI4_Lite_ARADDR[12]),
        .I4(sel0[12]),
        .I5(\AXI4_Lite_RDATA_tmp[31]_i_12_n_0 ),
        .O(\AXI4_Lite_RDATA_tmp[31]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[3]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [3]),
        .O(data_read[3]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[4]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [4]),
        .O(data_read[4]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[5]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [5]),
        .O(data_read[5]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[6]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [6]),
        .O(data_read[6]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[7]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [7]),
        .O(data_read[7]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[8]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [8]),
        .O(data_read[8]));
  LUT6 #(
    .INIT(64'h0040000000000000)) 
    \AXI4_Lite_RDATA_tmp[9]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I5(\sync_reg_e_k_reg[15] [9]),
        .O(data_read[9]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[0]),
        .Q(AXI4_Lite_RDATA[0]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[10]),
        .Q(AXI4_Lite_RDATA[10]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[11]),
        .Q(AXI4_Lite_RDATA[11]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[12]),
        .Q(AXI4_Lite_RDATA[12]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[13]),
        .Q(AXI4_Lite_RDATA[13]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[14]),
        .Q(AXI4_Lite_RDATA[14]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[1]),
        .Q(AXI4_Lite_RDATA[1]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[2]),
        .Q(AXI4_Lite_RDATA[2]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[31] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[31]),
        .Q(AXI4_Lite_RDATA[15]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[3]),
        .Q(AXI4_Lite_RDATA[3]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[4]),
        .Q(AXI4_Lite_RDATA[4]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[5]),
        .Q(AXI4_Lite_RDATA[5]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[6]),
        .Q(AXI4_Lite_RDATA[6]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[7]),
        .Q(AXI4_Lite_RDATA[7]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[8]),
        .Q(AXI4_Lite_RDATA[8]));
  FDCE \AXI4_Lite_RDATA_tmp_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(top_rd_enb),
        .CLR(reset),
        .D(data_read[9]),
        .Q(AXI4_Lite_RDATA[9]));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h2)) 
    AXI4_Lite_WREADY_INST_0
       (.I0(axi_lite_wstate[0]),
        .I1(axi_lite_wstate[1]),
        .O(AXI4_Lite_WREADY));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT3 #(
    .INIT(8'h74)) 
    \axi_lite_rstate[0]_i_1 
       (.I0(AXI4_Lite_RREADY),
        .I1(AXI4_Lite_RVALID),
        .I2(AXI4_Lite_ARVALID),
        .O(\axi_lite_rstate[0]_i_1_n_0 ));
  FDCE \axi_lite_rstate_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(reset),
        .D(\axi_lite_rstate[0]_i_1_n_0 ),
        .Q(AXI4_Lite_RVALID));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h002E)) 
    \axi_lite_wstate[0]_i_1 
       (.I0(AXI4_Lite_AWVALID),
        .I1(axi_lite_wstate[0]),
        .I2(AXI4_Lite_WVALID),
        .I3(axi_lite_wstate[1]),
        .O(\axi_lite_wstate[0]_i_1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h0838)) 
    \axi_lite_wstate_next_inferred__1/i_ 
       (.I0(AXI4_Lite_WVALID),
        .I1(axi_lite_wstate[0]),
        .I2(axi_lite_wstate[1]),
        .I3(AXI4_Lite_BREADY),
        .O(\axi_lite_wstate_next_inferred__1/i__n_0 ));
  FDCE \axi_lite_wstate_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(reset),
        .D(\axi_lite_wstate[0]_i_1_n_0 ),
        .Q(axi_lite_wstate[0]));
  FDCE \axi_lite_wstate_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(reset),
        .D(\axi_lite_wstate_next_inferred__1/i__n_0 ),
        .Q(axi_lite_wstate[1]));
  LUT6 #(
    .INIT(64'h0000000200000000)) 
    soft_reset_i_1
       (.I0(soft_reset_i_2_n_0),
        .I1(sel0[1]),
        .I2(sel0[0]),
        .I3(sel0[7]),
        .I4(sel0[6]),
        .I5(soft_reset_i_3_n_0),
        .O(strobe_sw));
  LUT4 #(
    .INIT(16'h0001)) 
    soft_reset_i_2
       (.I0(sel0[13]),
        .I1(sel0[12]),
        .I2(sel0[11]),
        .I3(sel0[10]),
        .O(soft_reset_i_2_n_0));
  LUT5 #(
    .INIT(32'h00010000)) 
    soft_reset_i_3
       (.I0(sel0[2]),
        .I1(sel0[3]),
        .I2(sel0[8]),
        .I3(sel0[9]),
        .I4(soft_reset_i_4_n_0),
        .O(soft_reset_i_3_n_0));
  LUT4 #(
    .INIT(16'h0008)) 
    soft_reset_i_4
       (.I0(top_wr_enb),
        .I1(Q[0]),
        .I2(sel0[5]),
        .I3(sel0[4]),
        .O(soft_reset_i_4_n_0));
  FDCE soft_reset_reg
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(reset),
        .D(strobe_sw),
        .Q(soft_reset));
  LUT6 #(
    .INIT(64'h0000000020000000)) 
    strobe_reg_cop_in_strobe_i_1
       (.I0(Q[0]),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I2(strobe_reg_cop_in_strobe_i_3_n_0),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I4(top_wr_enb),
        .I5(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .O(strobe_sw_cop_in_strobe));
  LUT3 #(
    .INIT(8'hDF)) 
    strobe_reg_cop_in_strobe_i_2
       (.I0(AXI4_Lite_ARESETN),
        .I1(soft_reset),
        .I2(IPCORE_RESETN),
        .O(write_reg_axi_enable_reg));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h000ACC0A)) 
    strobe_reg_cop_in_strobe_i_3
       (.I0(sel0[1]),
        .I1(AXI4_Lite_ARADDR[1]),
        .I2(sel0[0]),
        .I3(AXI4_Lite_ARVALID),
        .I4(AXI4_Lite_ARADDR[0]),
        .O(strobe_reg_cop_in_strobe_i_3_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    \waddr[15]_i_1 
       (.I0(AXI4_Lite_AWVALID),
        .I1(axi_lite_wstate[1]),
        .I2(axi_lite_wstate[0]),
        .O(aw_transfer));
  FDCE \waddr_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[8]),
        .Q(sel0[8]));
  FDCE \waddr_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[9]),
        .Q(sel0[9]));
  FDCE \waddr_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[10]),
        .Q(sel0[10]));
  FDCE \waddr_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[11]),
        .Q(sel0[11]));
  FDCE \waddr_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[12]),
        .Q(sel0[12]));
  FDCE \waddr_reg[15] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[13]),
        .Q(sel0[13]));
  FDCE \waddr_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[0]),
        .Q(sel0[0]));
  FDCE \waddr_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[1]),
        .Q(sel0[1]));
  FDCE \waddr_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[2]),
        .Q(sel0[2]));
  FDCE \waddr_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[3]),
        .Q(sel0[3]));
  FDCE \waddr_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[4]),
        .Q(sel0[4]));
  FDCE \waddr_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[5]),
        .Q(sel0[5]));
  FDCE \waddr_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[6]),
        .Q(sel0[6]));
  FDCE \waddr_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(aw_transfer),
        .CLR(reset),
        .D(AXI4_Lite_AWADDR[7]),
        .Q(sel0[7]));
  LUT3 #(
    .INIT(8'h20)) 
    \wdata[15]_i_1 
       (.I0(AXI4_Lite_WVALID),
        .I1(axi_lite_wstate[1]),
        .I2(axi_lite_wstate[0]),
        .O(w_transfer));
  FDCE \wdata_reg[0] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[0]),
        .Q(Q[0]));
  FDCE \wdata_reg[10] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[10]),
        .Q(Q[10]));
  FDCE \wdata_reg[11] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[11]),
        .Q(Q[11]));
  FDCE \wdata_reg[12] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[12]),
        .Q(Q[12]));
  FDCE \wdata_reg[13] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[13]),
        .Q(Q[13]));
  FDCE \wdata_reg[14] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[14]),
        .Q(Q[14]));
  FDCE \wdata_reg[15] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[15]),
        .Q(Q[15]));
  FDCE \wdata_reg[1] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[1]),
        .Q(Q[1]));
  FDCE \wdata_reg[2] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[2]),
        .Q(Q[2]));
  FDCE \wdata_reg[3] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[3]),
        .Q(Q[3]));
  FDCE \wdata_reg[4] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[4]),
        .Q(Q[4]));
  FDCE \wdata_reg[5] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[5]),
        .Q(Q[5]));
  FDCE \wdata_reg[6] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[6]),
        .Q(Q[6]));
  FDCE \wdata_reg[7] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[7]),
        .Q(Q[7]));
  FDCE \wdata_reg[8] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[8]),
        .Q(Q[8]));
  FDCE \wdata_reg[9] 
       (.C(AXI4_Lite_ACLK),
        .CE(w_transfer),
        .CLR(reset),
        .D(AXI4_Lite_WDATA[9]),
        .Q(Q[9]));
  FDCE wr_enb_1_reg
       (.C(AXI4_Lite_ACLK),
        .CE(1'b1),
        .CLR(reset),
        .D(w_transfer),
        .Q(top_wr_enb));
  LUT6 #(
    .INIT(64'hFFFFBFFF00008000)) 
    write_reg_axi_enable_i_1
       (.I0(Q[0]),
        .I1(write_reg_axi_enable_i_2_n_0),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I3(top_wr_enb),
        .I4(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .I5(write_reg_axi_enable),
        .O(write_reg_axi_enable_reg_0));
  LUT6 #(
    .INIT(64'h0000000047034400)) 
    write_reg_axi_enable_i_2
       (.I0(AXI4_Lite_ARADDR[6]),
        .I1(AXI4_Lite_ARVALID),
        .I2(sel0[6]),
        .I3(AXI4_Lite_ARADDR[0]),
        .I4(sel0[0]),
        .I5(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .O(write_reg_axi_enable_i_2_n_0));
  LUT6 #(
    .INIT(64'h0000000040000000)) 
    \write_reg_d_k[15]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I4(top_wr_enb),
        .I5(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .O(\write_reg_d_k_reg[15] ));
  LUT6 #(
    .INIT(64'h0000000004000000)) 
    \write_reg_x_k[15]_i_1 
       (.I0(\AXI4_Lite_RDATA_tmp[31]_i_5_n_0 ),
        .I1(\AXI4_Lite_RDATA_tmp[31]_i_6_n_0 ),
        .I2(\AXI4_Lite_RDATA_tmp[31]_i_7_n_0 ),
        .I3(\AXI4_Lite_RDATA_tmp[31]_i_8_n_0 ),
        .I4(top_wr_enb),
        .I5(\AXI4_Lite_RDATA_tmp[31]_i_4_n_0 ),
        .O(E));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_cop
   (cp_controller_cpstate,
    cop_out_ready,
    cop_dut_enable,
    strobe_reg_cop_in_strobe_reg,
    IPCORE_CLK,
    AR,
    write_reg_axi_enable);
  output [1:0]cp_controller_cpstate;
  output cop_out_ready;
  output cop_dut_enable;
  input strobe_reg_cop_in_strobe_reg;
  input IPCORE_CLK;
  input [0:0]AR;
  input write_reg_axi_enable;

  wire [0:0]AR;
  wire IPCORE_CLK;
  wire cop_dut_enable;
  wire cop_out_ready;
  wire [1:0]cp_controller_cpstate;
  wire \cp_controller_cpstate[1]_i_1_n_0 ;
  wire strobe_reg_cop_in_strobe_reg;
  wire write_reg_axi_enable;

  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'h38)) 
    \cp_controller_cpstate[1]_i_1 
       (.I0(cp_controller_cpstate[0]),
        .I1(write_reg_axi_enable),
        .I2(cp_controller_cpstate[1]),
        .O(\cp_controller_cpstate[1]_i_1_n_0 ));
  FDCE \cp_controller_cpstate_reg[0] 
       (.C(IPCORE_CLK),
        .CE(1'b1),
        .CLR(AR),
        .D(strobe_reg_cop_in_strobe_reg),
        .Q(cp_controller_cpstate[0]));
  FDCE \cp_controller_cpstate_reg[1] 
       (.C(IPCORE_CLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\cp_controller_cpstate[1]_i_1_n_0 ),
        .Q(cp_controller_cpstate[1]));
  LUT2 #(
    .INIT(4'h2)) 
    \data_pipeline_tmp[14][15]_i_1 
       (.I0(cp_controller_cpstate[0]),
        .I1(cp_controller_cpstate[1]),
        .O(cop_dut_enable));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT2 #(
    .INIT(4'h1)) 
    read_reg_cop_out_ready_i_1
       (.I0(cp_controller_cpstate[0]),
        .I1(cp_controller_cpstate[1]),
        .O(cop_out_ready));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_lms_pcore_dut
   (mul_temp_16,
    filter_sum,
    \write_reg_x_k_reg[15] ,
    cop_dut_enable,
    IPCORE_CLK,
    AR,
    \write_reg_d_k_reg[3] ,
    DI,
    Q,
    \write_reg_d_k_reg[3]_0 ,
    \write_reg_d_k_reg[7] ,
    \write_reg_d_k_reg[11] ,
    S);
  output [15:0]mul_temp_16;
  output [15:0]filter_sum;
  input [15:0]\write_reg_x_k_reg[15] ;
  input cop_dut_enable;
  input IPCORE_CLK;
  input [0:0]AR;
  input [2:0]\write_reg_d_k_reg[3] ;
  input [0:0]DI;
  input [14:0]Q;
  input [3:0]\write_reg_d_k_reg[3]_0 ;
  input [3:0]\write_reg_d_k_reg[7] ;
  input [3:0]\write_reg_d_k_reg[11] ;
  input [3:0]S;

  wire [0:0]AR;
  wire [0:0]DI;
  wire IPCORE_CLK;
  wire [14:0]Q;
  wire [3:0]S;
  wire cop_dut_enable;
  wire [15:0]filter_sum;
  wire [15:0]mul_temp_16;
  wire [3:0]\write_reg_d_k_reg[11] ;
  wire [2:0]\write_reg_d_k_reg[3] ;
  wire [3:0]\write_reg_d_k_reg[3]_0 ;
  wire [3:0]\write_reg_d_k_reg[7] ;
  wire [15:0]\write_reg_x_k_reg[15] ;

  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_LMS u_LMS
       (.AR(AR),
        .DI(DI),
        .IPCORE_CLK(IPCORE_CLK),
        .Q(Q),
        .S(S),
        .cop_dut_enable(cop_dut_enable),
        .filter_sum(filter_sum),
        .mul_temp_16(mul_temp_16),
        .\write_reg_d_k_reg[11] (\write_reg_d_k_reg[11] ),
        .\write_reg_d_k_reg[3] (\write_reg_d_k_reg[3] ),
        .\write_reg_d_k_reg[3]_0 (\write_reg_d_k_reg[3]_0 ),
        .\write_reg_d_k_reg[7] (\write_reg_d_k_reg[7] ),
        .\write_reg_x_k_reg[15] (\write_reg_x_k_reg[15] ));
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
