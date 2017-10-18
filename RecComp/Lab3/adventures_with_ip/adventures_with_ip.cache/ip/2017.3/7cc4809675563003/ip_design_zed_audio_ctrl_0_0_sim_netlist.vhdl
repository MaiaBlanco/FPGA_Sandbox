-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
-- Date        : Tue Oct 17 19:49:31 2017
-- Host        : TacitMonolith running 64-bit Ubuntu 16.04.3 LTS
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ ip_design_zed_audio_ctrl_0_0_sim_netlist.vhdl
-- Design      : ip_design_zed_audio_ctrl_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_address_decoder is
  port (
    \DataTx_R_reg[0]\ : out STD_LOGIC;
    \DataTx_R_reg[0]_0\ : out STD_LOGIC;
    \DataTx_R_reg[0]_1\ : out STD_LOGIC;
    \DataTx_R_reg[0]_2\ : out STD_LOGIC;
    \DataTx_R_reg[0]_3\ : out STD_LOGIC;
    \DataTx_R_reg[0]_4\ : out STD_LOGIC;
    data_rdy_bit_reg : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \DataTx_L_reg[0]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    data_rdy_bit_reg_0 : out STD_LOGIC;
    \s_axi_rdata_i_reg[31]\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_rvalid_i_reg : out STD_LOGIC;
    s_axi_bvalid_i_reg : out STD_LOGIC;
    S_AXI_ACLK : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    s_axi_bvalid_i_reg_0 : in STD_LOGIC;
    \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_WVALID_0 : in STD_LOGIC;
    \state_reg[1]\ : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_WVALID : in STD_LOGIC;
    data_rdy_bit : in STD_LOGIC;
    \DataTx_R_reg[31]\ : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataTx_L_reg[31]\ : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataRx_R_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \DataRx_L_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\ : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    s_axi_rvalid_i_reg_0 : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    s_axi_bvalid_i_reg_1 : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_address_decoder;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_address_decoder is
  signal Bus_RNW_reg_i_1_n_0 : STD_LOGIC;
  signal \^datatx_r_reg[0]\ : STD_LOGIC;
  signal \^datatx_r_reg[0]_0\ : STD_LOGIC;
  signal \^datatx_r_reg[0]_1\ : STD_LOGIC;
  signal \^datatx_r_reg[0]_2\ : STD_LOGIC;
  signal \^datatx_r_reg[0]_3\ : STD_LOGIC;
  signal \^datatx_r_reg[0]_4\ : STD_LOGIC;
  signal \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\ : STD_LOGIC;
  signal \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\ : STD_LOGIC;
  signal \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0\ : STD_LOGIC;
  signal \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0\ : STD_LOGIC;
  signal S_AXI_ARREADY_INST_0_i_1_n_0 : STD_LOGIC;
  signal ce_expnd_i_0 : STD_LOGIC;
  signal ce_expnd_i_1 : STD_LOGIC;
  signal ce_expnd_i_2 : STD_LOGIC;
  signal ce_expnd_i_3 : STD_LOGIC;
  signal ce_expnd_i_4 : STD_LOGIC;
  signal cs_ce_clr : STD_LOGIC;
  signal s_axi_bvalid_i0 : STD_LOGIC;
  signal \s_axi_rdata_i[0]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[0]_i_3_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[0]_i_4_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[10]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[11]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[12]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[13]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[14]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[15]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[16]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[17]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[18]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[19]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[1]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[20]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[21]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[22]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[23]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[23]_i_3_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[23]_i_4_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[2]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[3]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[4]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[5]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[6]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[7]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[8]_i_2_n_0\ : STD_LOGIC;
  signal \s_axi_rdata_i[9]_i_2_n_0\ : STD_LOGIC;
  signal s_axi_rvalid_i0 : STD_LOGIC;
  signal start : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of S_AXI_ARREADY_INST_0 : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of S_AXI_AWREADY_INST_0 : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of data_rdy_bit_i_2 : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of s_axi_bvalid_i_i_2 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of \s_axi_rdata_i[0]_i_4\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \s_axi_rdata_i[23]_i_2\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \s_axi_rdata_i[23]_i_3\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of s_axi_rvalid_i_i_2 : label is "soft_lutpair0";
begin
  \DataTx_R_reg[0]\ <= \^datatx_r_reg[0]\;
  \DataTx_R_reg[0]_0\ <= \^datatx_r_reg[0]_0\;
  \DataTx_R_reg[0]_1\ <= \^datatx_r_reg[0]_1\;
  \DataTx_R_reg[0]_2\ <= \^datatx_r_reg[0]_2\;
  \DataTx_R_reg[0]_3\ <= \^datatx_r_reg[0]_3\;
  \DataTx_R_reg[0]_4\ <= \^datatx_r_reg[0]_4\;
Bus_RNW_reg_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FEFFFFFF02020202"
    )
        port map (
      I0 => S_AXI_ARVALID,
      I1 => Q(0),
      I2 => Q(1),
      I3 => S_AXI_AWVALID,
      I4 => S_AXI_WVALID,
      I5 => \^datatx_r_reg[0]_4\,
      O => Bus_RNW_reg_i_1_n_0
    );
Bus_RNW_reg_reg: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => Bus_RNW_reg_i_1_n_0,
      Q => \^datatx_r_reg[0]_4\,
      R => '0'
    );
\DataTx_L[31]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \^datatx_r_reg[0]_0\,
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \^datatx_r_reg[0]_4\,
      I3 => \^datatx_r_reg[0]_2\,
      I4 => \^datatx_r_reg[0]_3\,
      I5 => \^datatx_r_reg[0]\,
      O => \DataTx_L_reg[0]\(0)
    );
\DataTx_R[31]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \^datatx_r_reg[0]_1\,
      I1 => \^datatx_r_reg[0]_0\,
      I2 => \^datatx_r_reg[0]_4\,
      I3 => \^datatx_r_reg[0]_2\,
      I4 => \^datatx_r_reg[0]_3\,
      I5 => \^datatx_r_reg[0]\,
      O => E(0)
    );
\GEN_BKEND_CE_REGISTERS[0].ce_out_i[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"020202020202FF02"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\,
      I1 => S_AXI_ARADDR(0),
      I2 => S_AXI_ARADDR(1),
      I3 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\,
      I4 => S_AXI_AWADDR(0),
      I5 => S_AXI_AWADDR(1),
      O => ce_expnd_i_4
    );
\GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => start,
      D => ce_expnd_i_4,
      Q => \^datatx_r_reg[0]_3\,
      R => cs_ce_clr
    );
\GEN_BKEND_CE_REGISTERS[1].ce_out_i[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"08080808FF080808"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\,
      I1 => S_AXI_ARADDR(0),
      I2 => S_AXI_ARADDR(1),
      I3 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\,
      I4 => S_AXI_AWADDR(0),
      I5 => S_AXI_AWADDR(1),
      O => ce_expnd_i_3
    );
\GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => start,
      D => ce_expnd_i_3,
      Q => \^datatx_r_reg[0]_2\,
      R => cs_ce_clr
    );
\GEN_BKEND_CE_REGISTERS[2].ce_out_i[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"08080808FF080808"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\,
      I1 => S_AXI_ARADDR(1),
      I2 => S_AXI_ARADDR(0),
      I3 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\,
      I4 => S_AXI_AWADDR(1),
      I5 => S_AXI_AWADDR(0),
      O => ce_expnd_i_2
    );
\GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => start,
      D => ce_expnd_i_2,
      Q => \^datatx_r_reg[0]_1\,
      R => cs_ce_clr
    );
\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF80808080808080"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\,
      I1 => S_AXI_ARADDR(0),
      I2 => S_AXI_ARADDR(1),
      I3 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\,
      I4 => S_AXI_AWADDR(0),
      I5 => S_AXI_AWADDR(1),
      O => ce_expnd_i_1
    );
\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0002"
    )
        port map (
      I0 => S_AXI_ARVALID,
      I1 => Q(0),
      I2 => Q(1),
      I3 => S_AXI_ARADDR(2),
      O => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_2_n_0\
    );
\GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000040"
    )
        port map (
      I0 => S_AXI_ARVALID,
      I1 => S_AXI_WVALID,
      I2 => S_AXI_AWVALID,
      I3 => Q(1),
      I4 => Q(0),
      I5 => S_AXI_AWADDR(2),
      O => \GEN_BKEND_CE_REGISTERS[3].ce_out_i[3]_i_3_n_0\
    );
\GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => start,
      D => ce_expnd_i_1,
      Q => \^datatx_r_reg[0]_0\,
      R => cs_ce_clr
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FD"
    )
        port map (
      I0 => S_AXI_ARESETN,
      I1 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0),
      I2 => S_AXI_ARREADY_INST_0_i_1_n_0,
      O => cs_ce_clr
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"03020202"
    )
        port map (
      I0 => S_AXI_ARVALID,
      I1 => Q(0),
      I2 => Q(1),
      I3 => S_AXI_AWVALID,
      I4 => S_AXI_WVALID,
      O => start
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AAAAAEAA"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0\,
      I1 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0\,
      I2 => S_AXI_AWADDR(1),
      I3 => S_AXI_AWADDR(2),
      I4 => S_AXI_AWADDR(0),
      O => ce_expnd_i_0
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000400"
    )
        port map (
      I0 => S_AXI_ARADDR(0),
      I1 => S_AXI_ARADDR(2),
      I2 => S_AXI_ARADDR(1),
      I3 => S_AXI_ARVALID,
      I4 => Q(0),
      I5 => Q(1),
      O => \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_4_n_0\
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00001000"
    )
        port map (
      I0 => Q(0),
      I1 => Q(1),
      I2 => S_AXI_AWVALID,
      I3 => S_AXI_WVALID,
      I4 => S_AXI_ARVALID,
      O => \GEN_BKEND_CE_REGISTERS[4].ce_out_i[4]_i_5_n_0\
    );
\GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => start,
      D => ce_expnd_i_0,
      Q => \^datatx_r_reg[0]\,
      R => cs_ce_clr
    );
S_AXI_ARREADY_INST_0: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F8"
    )
        port map (
      I0 => \^datatx_r_reg[0]_4\,
      I1 => S_AXI_ARREADY_INST_0_i_1_n_0,
      I2 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0),
      O => S_AXI_ARREADY
    );
S_AXI_ARREADY_INST_0_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => \^datatx_r_reg[0]\,
      I1 => \^datatx_r_reg[0]_3\,
      I2 => \^datatx_r_reg[0]_2\,
      I3 => \^datatx_r_reg[0]_0\,
      I4 => \^datatx_r_reg[0]_1\,
      O => S_AXI_ARREADY_INST_0_i_1_n_0
    );
S_AXI_AWREADY_INST_0: unisim.vcomponents.LUT3
    generic map(
      INIT => X"F4"
    )
        port map (
      I0 => \^datatx_r_reg[0]_4\,
      I1 => S_AXI_ARREADY_INST_0_i_1_n_0,
      I2 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0),
      O => S_AXI_AWREADY
    );
data_rdy_bit_i_2: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => \^datatx_r_reg[0]\,
      I1 => \^datatx_r_reg[0]_3\,
      I2 => \^datatx_r_reg[0]_2\,
      I3 => \^datatx_r_reg[0]_4\,
      O => data_rdy_bit_reg_0
    );
data_rdy_bit_i_3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFEFFFF"
    )
        port map (
      I0 => \^datatx_r_reg[0]_3\,
      I1 => \^datatx_r_reg[0]_2\,
      I2 => \^datatx_r_reg[0]_1\,
      I3 => \^datatx_r_reg[0]_0\,
      I4 => \^datatx_r_reg[0]\,
      I5 => \^datatx_r_reg[0]_4\,
      O => data_rdy_bit_reg
    );
s_axi_bvalid_i_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BA"
    )
        port map (
      I0 => s_axi_bvalid_i0,
      I1 => S_AXI_BREADY,
      I2 => s_axi_bvalid_i_reg_1,
      O => s_axi_bvalid_i_reg
    );
s_axi_bvalid_i_i_2: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000AE00"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0),
      I1 => S_AXI_ARREADY_INST_0_i_1_n_0,
      I2 => \^datatx_r_reg[0]_4\,
      I3 => Q(1),
      I4 => Q(0),
      O => s_axi_bvalid_i0
    );
\s_axi_rdata_i[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFAAEAAAEAAAEAAA"
    )
        port map (
      I0 => \s_axi_rdata_i[0]_i_2_n_0\,
      I1 => data_rdy_bit,
      I2 => \^datatx_r_reg[0]\,
      I3 => \s_axi_rdata_i[0]_i_3_n_0\,
      I4 => \^datatx_r_reg[0]_0\,
      I5 => \DataTx_R_reg[31]\(0),
      O => \s_axi_rdata_i_reg[31]\(0)
    );
\s_axi_rdata_i[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFF888F888F888"
    )
        port map (
      I0 => \s_axi_rdata_i[0]_i_4_n_0\,
      I1 => \DataTx_L_reg[31]\(0),
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(0),
      I4 => \DataRx_L_reg[23]\(0),
      I5 => \s_axi_rdata_i[23]_i_2_n_0\,
      O => \s_axi_rdata_i[0]_i_2_n_0\
    );
\s_axi_rdata_i[0]_i_3\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => \^datatx_r_reg[0]_4\,
      I1 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      O => \s_axi_rdata_i[0]_i_3_n_0\
    );
\s_axi_rdata_i[0]_i_4\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I1 => \^datatx_r_reg[0]_4\,
      I2 => \^datatx_r_reg[0]_1\,
      O => \s_axi_rdata_i[0]_i_4_n_0\
    );
\s_axi_rdata_i[10]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(10),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(10),
      I4 => \s_axi_rdata_i[10]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(10)
    );
\s_axi_rdata_i[10]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(10),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(10),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[10]_i_2_n_0\
    );
\s_axi_rdata_i[11]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(11),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(11),
      I4 => \s_axi_rdata_i[11]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(11)
    );
\s_axi_rdata_i[11]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(11),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(11),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[11]_i_2_n_0\
    );
\s_axi_rdata_i[12]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(12),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(12),
      I4 => \s_axi_rdata_i[12]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(12)
    );
\s_axi_rdata_i[12]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(12),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(12),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[12]_i_2_n_0\
    );
\s_axi_rdata_i[13]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(13),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(13),
      I4 => \s_axi_rdata_i[13]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(13)
    );
\s_axi_rdata_i[13]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(13),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(13),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[13]_i_2_n_0\
    );
\s_axi_rdata_i[14]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(14),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(14),
      I4 => \s_axi_rdata_i[14]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(14)
    );
\s_axi_rdata_i[14]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(14),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(14),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[14]_i_2_n_0\
    );
\s_axi_rdata_i[15]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(15),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(15),
      I4 => \s_axi_rdata_i[15]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(15)
    );
\s_axi_rdata_i[15]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(15),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(15),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[15]_i_2_n_0\
    );
\s_axi_rdata_i[16]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(16),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(16),
      I4 => \s_axi_rdata_i[16]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(16)
    );
\s_axi_rdata_i[16]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(16),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(16),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[16]_i_2_n_0\
    );
\s_axi_rdata_i[17]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(17),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(17),
      I4 => \s_axi_rdata_i[17]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(17)
    );
\s_axi_rdata_i[17]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(17),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(17),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[17]_i_2_n_0\
    );
\s_axi_rdata_i[18]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(18),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(18),
      I4 => \s_axi_rdata_i[18]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(18)
    );
\s_axi_rdata_i[18]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(18),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(18),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[18]_i_2_n_0\
    );
\s_axi_rdata_i[19]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(19),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(19),
      I4 => \s_axi_rdata_i[19]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(19)
    );
\s_axi_rdata_i[19]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(19),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(19),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[19]_i_2_n_0\
    );
\s_axi_rdata_i[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(1),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(1),
      I4 => \s_axi_rdata_i[1]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(1)
    );
\s_axi_rdata_i[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(1),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(1),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[1]_i_2_n_0\
    );
\s_axi_rdata_i[20]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(20),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(20),
      I4 => \s_axi_rdata_i[20]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(20)
    );
\s_axi_rdata_i[20]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(20),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(20),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[20]_i_2_n_0\
    );
\s_axi_rdata_i[21]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(21),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(21),
      I4 => \s_axi_rdata_i[21]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(21)
    );
\s_axi_rdata_i[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(21),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(21),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[21]_i_2_n_0\
    );
\s_axi_rdata_i[22]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(22),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(22),
      I4 => \s_axi_rdata_i[22]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(22)
    );
\s_axi_rdata_i[22]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(22),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(22),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[22]_i_2_n_0\
    );
\s_axi_rdata_i[23]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(23),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(23),
      I4 => \s_axi_rdata_i[23]_i_4_n_0\,
      O => \s_axi_rdata_i_reg[31]\(23)
    );
\s_axi_rdata_i[23]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I1 => \^datatx_r_reg[0]_4\,
      I2 => \^datatx_r_reg[0]_3\,
      O => \s_axi_rdata_i[23]_i_2_n_0\
    );
\s_axi_rdata_i[23]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"80"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I1 => \^datatx_r_reg[0]_4\,
      I2 => \^datatx_r_reg[0]_2\,
      O => \s_axi_rdata_i[23]_i_3_n_0\
    );
\s_axi_rdata_i[23]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(23),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(23),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[23]_i_4_n_0\
    );
\s_axi_rdata_i[24]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(24),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(24),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(24)
    );
\s_axi_rdata_i[25]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(25),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(25),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(25)
    );
\s_axi_rdata_i[26]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(26),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(26),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(26)
    );
\s_axi_rdata_i[27]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(27),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(27),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(27)
    );
\s_axi_rdata_i[28]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(28),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(28),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(28)
    );
\s_axi_rdata_i[29]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(29),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(29),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(29)
    );
\s_axi_rdata_i[2]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(2),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(2),
      I4 => \s_axi_rdata_i[2]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(2)
    );
\s_axi_rdata_i[2]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(2),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(2),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[2]_i_2_n_0\
    );
\s_axi_rdata_i[30]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(30),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(30),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(30)
    );
\s_axi_rdata_i[31]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(31),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(31),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i_reg[31]\(31)
    );
\s_axi_rdata_i[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(3),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(3),
      I4 => \s_axi_rdata_i[3]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(3)
    );
\s_axi_rdata_i[3]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(3),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(3),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[3]_i_2_n_0\
    );
\s_axi_rdata_i[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(4),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(4),
      I4 => \s_axi_rdata_i[4]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(4)
    );
\s_axi_rdata_i[4]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(4),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(4),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[4]_i_2_n_0\
    );
\s_axi_rdata_i[5]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(5),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(5),
      I4 => \s_axi_rdata_i[5]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(5)
    );
\s_axi_rdata_i[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(5),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(5),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[5]_i_2_n_0\
    );
\s_axi_rdata_i[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(6),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(6),
      I4 => \s_axi_rdata_i[6]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(6)
    );
\s_axi_rdata_i[6]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(6),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(6),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[6]_i_2_n_0\
    );
\s_axi_rdata_i[7]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(7),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(7),
      I4 => \s_axi_rdata_i[7]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(7)
    );
\s_axi_rdata_i[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(7),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(7),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[7]_i_2_n_0\
    );
\s_axi_rdata_i[8]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(8),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(8),
      I4 => \s_axi_rdata_i[8]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(8)
    );
\s_axi_rdata_i[8]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(8),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(8),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[8]_i_2_n_0\
    );
\s_axi_rdata_i[9]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFF888"
    )
        port map (
      I0 => \DataRx_L_reg[23]\(9),
      I1 => \s_axi_rdata_i[23]_i_2_n_0\,
      I2 => \s_axi_rdata_i[23]_i_3_n_0\,
      I3 => \DataRx_R_reg[23]\(9),
      I4 => \s_axi_rdata_i[9]_i_2_n_0\,
      O => \s_axi_rdata_i_reg[31]\(9)
    );
\s_axi_rdata_i[9]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F800000088000000"
    )
        port map (
      I0 => \DataTx_L_reg[31]\(9),
      I1 => \^datatx_r_reg[0]_1\,
      I2 => \DataTx_R_reg[31]\(9),
      I3 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\,
      I4 => \^datatx_r_reg[0]_4\,
      I5 => \^datatx_r_reg[0]_0\,
      O => \s_axi_rdata_i[9]_i_2_n_0\
    );
s_axi_rvalid_i_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BA"
    )
        port map (
      I0 => s_axi_rvalid_i0,
      I1 => S_AXI_RREADY,
      I2 => s_axi_rvalid_i_reg_0,
      O => s_axi_rvalid_i_reg
    );
s_axi_rvalid_i_i_2: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000EA00"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0),
      I1 => S_AXI_ARREADY_INST_0_i_1_n_0,
      I2 => \^datatx_r_reg[0]_4\,
      I3 => Q(0),
      I4 => Q(1),
      O => s_axi_rvalid_i0
    );
\state[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFF4"
    )
        port map (
      I0 => Q(1),
      I1 => S_AXI_ARVALID,
      I2 => s_axi_bvalid_i0,
      I3 => s_axi_bvalid_i_reg_0,
      O => D(0)
    );
\state[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4454"
    )
        port map (
      I0 => Q(0),
      I1 => Q(1),
      I2 => S_AXI_WVALID_0,
      I3 => S_AXI_ARVALID,
      I4 => \state_reg[1]\,
      I5 => s_axi_rvalid_i0,
      O => D(1)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_deser is
  port (
    lrclk_d1 : out STD_LOGIC;
    sclk_d1 : out STD_LOGIC;
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \rdata_reg_reg[23]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \bit_cntr_reg[4]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    sdata_reg_reg : out STD_LOGIC;
    \FSM_onehot_iis_state_reg[0]\ : out STD_LOGIC;
    data_rdy_bit_reg : out STD_LOGIC;
    \FSM_onehot_iis_state_reg[0]_0\ : out STD_LOGIC;
    \DataRx_L_reg[23]\ : out STD_LOGIC_VECTOR ( 23 downto 0 );
    \DataRx_R_reg[23]\ : out STD_LOGIC_VECTOR ( 23 downto 0 );
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ : in STD_LOGIC;
    \out\ : in STD_LOGIC_VECTOR ( 2 downto 0 );
    data_rdy_bit : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\ : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    SDATA_I : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_deser;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_deser is
  signal \^datarx_l_reg[23]\ : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal \^datarx_r_reg[23]\ : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal \^e\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \FSM_sequential_iis_state[0]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_sequential_iis_state[1]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_sequential_iis_state[2]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_sequential_iis_state[2]_i_2_n_0\ : STD_LOGIC;
  signal \FSM_sequential_iis_state[2]_i_3_n_0\ : STD_LOGIC;
  signal \FSM_sequential_iis_state[2]_i_4_n_0\ : STD_LOGIC;
  signal \bit_cntr[4]_i_1_n_0\ : STD_LOGIC;
  signal \bit_cntr_reg__0\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal bit_rdy : STD_LOGIC;
  signal data_rdy_bit_i_4_n_0 : STD_LOGIC;
  signal eqOp : STD_LOGIC;
  signal iis_state : STD_LOGIC_VECTOR ( 2 downto 0 );
  attribute RTL_KEEP : string;
  attribute RTL_KEEP of iis_state : signal is "yes";
  signal ldata_reg : STD_LOGIC;
  signal ldata_reg0 : STD_LOGIC;
  signal \^lrclk_d1\ : STD_LOGIC;
  signal \plusOp__1\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal rdata_reg0 : STD_LOGIC;
  signal \^sclk_d1\ : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \DataRx_L[23]_i_2\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \FSM_onehot_iis_state[4]_i_5\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \FSM_sequential_iis_state[2]_i_4\ : label is "soft_lutpair8";
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_sequential_iis_state_reg[0]\ : label is "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110";
  attribute KEEP : string;
  attribute KEEP of \FSM_sequential_iis_state_reg[0]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_sequential_iis_state_reg[1]\ : label is "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110";
  attribute KEEP of \FSM_sequential_iis_state_reg[1]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_sequential_iis_state_reg[2]\ : label is "reset:000,wait_left:001,skip_left:010,read_left:011,wait_right:100,skip_right:101,read_right:110";
  attribute KEEP of \FSM_sequential_iis_state_reg[2]\ : label is "yes";
  attribute SOFT_HLUTNM of \bit_cntr[0]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \bit_cntr[1]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \bit_cntr[2]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \bit_cntr[3]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \bit_cntr[4]_i_2__0\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \bit_cntr[4]_i_3\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of sdata_reg_i_2 : label is "soft_lutpair10";
begin
  \DataRx_L_reg[23]\(23 downto 0) <= \^datarx_l_reg[23]\(23 downto 0);
  \DataRx_R_reg[23]\(23 downto 0) <= \^datarx_r_reg[23]\(23 downto 0);
  E(0) <= \^e\(0);
  lrclk_d1 <= \^lrclk_d1\;
  sclk_d1 <= \^sclk_d1\;
\DataRx_L[23]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0080"
    )
        port map (
      I0 => eqOp,
      I1 => iis_state(2),
      I2 => iis_state(1),
      I3 => iis_state(0),
      O => \^e\(0)
    );
\DataRx_L[23]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000020"
    )
        port map (
      I0 => \bit_cntr_reg__0\(3),
      I1 => \bit_cntr_reg__0\(0),
      I2 => \bit_cntr_reg__0\(4),
      I3 => \bit_cntr_reg__0\(1),
      I4 => \bit_cntr_reg__0\(2),
      O => eqOp
    );
\FSM_onehot_iis_state[4]_i_3\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"40"
    )
        port map (
      I0 => \^lrclk_d1\,
      I1 => Q(1),
      I2 => \out\(1),
      O => \FSM_onehot_iis_state_reg[0]_0\
    );
\FSM_onehot_iis_state[4]_i_5\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"DF"
    )
        port map (
      I0 => \^lrclk_d1\,
      I1 => Q(1),
      I2 => \out\(0),
      O => \FSM_onehot_iis_state_reg[0]\
    );
\FSM_sequential_iis_state[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"75777F7745444044"
    )
        port map (
      I0 => iis_state(0),
      I1 => \FSM_sequential_iis_state[2]_i_2_n_0\,
      I2 => iis_state(1),
      I3 => iis_state(2),
      I4 => \FSM_sequential_iis_state[2]_i_3_n_0\,
      I5 => iis_state(0),
      O => \FSM_sequential_iis_state[0]_i_1_n_0\
    );
\FSM_sequential_iis_state[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"3A7B3F7B0A480048"
    )
        port map (
      I0 => iis_state(0),
      I1 => \FSM_sequential_iis_state[2]_i_2_n_0\,
      I2 => iis_state(1),
      I3 => iis_state(2),
      I4 => \FSM_sequential_iis_state[2]_i_3_n_0\,
      I5 => iis_state(1),
      O => \FSM_sequential_iis_state[1]_i_1_n_0\
    );
\FSM_sequential_iis_state[2]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"3FB33FB30F800080"
    )
        port map (
      I0 => iis_state(0),
      I1 => \FSM_sequential_iis_state[2]_i_2_n_0\,
      I2 => iis_state(1),
      I3 => iis_state(2),
      I4 => \FSM_sequential_iis_state[2]_i_3_n_0\,
      I5 => iis_state(2),
      O => \FSM_sequential_iis_state[2]_i_1_n_0\
    );
\FSM_sequential_iis_state[2]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFA33FF000A330F"
    )
        port map (
      I0 => bit_rdy,
      I1 => \FSM_sequential_iis_state[2]_i_4_n_0\,
      I2 => iis_state(2),
      I3 => iis_state(0),
      I4 => iis_state(1),
      I5 => eqOp,
      O => \FSM_sequential_iis_state[2]_i_2_n_0\
    );
\FSM_sequential_iis_state[2]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22A222A2EEAE22A2"
    )
        port map (
      I0 => bit_rdy,
      I1 => iis_state(2),
      I2 => iis_state(0),
      I3 => iis_state(1),
      I4 => Q(1),
      I5 => \^lrclk_d1\,
      O => \FSM_sequential_iis_state[2]_i_3_n_0\
    );
\FSM_sequential_iis_state[2]_i_4\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => Q(1),
      I1 => \^lrclk_d1\,
      O => \FSM_sequential_iis_state[2]_i_4_n_0\
    );
\FSM_sequential_iis_state_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \FSM_sequential_iis_state[0]_i_1_n_0\,
      Q => iis_state(0),
      R => '0'
    );
\FSM_sequential_iis_state_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \FSM_sequential_iis_state[1]_i_1_n_0\,
      Q => iis_state(1),
      R => '0'
    );
\FSM_sequential_iis_state_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \FSM_sequential_iis_state[2]_i_1_n_0\,
      Q => iis_state(2),
      R => '0'
    );
\bit_cntr[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \bit_cntr_reg__0\(0),
      O => \plusOp__1\(0)
    );
\bit_cntr[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \bit_cntr_reg__0\(0),
      I1 => \bit_cntr_reg__0\(1),
      O => \plusOp__1\(1)
    );
\bit_cntr[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \bit_cntr_reg__0\(1),
      I1 => \bit_cntr_reg__0\(0),
      I2 => \bit_cntr_reg__0\(2),
      O => \plusOp__1\(2)
    );
\bit_cntr[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6CCC"
    )
        port map (
      I0 => \bit_cntr_reg__0\(1),
      I1 => \bit_cntr_reg__0\(3),
      I2 => \bit_cntr_reg__0\(0),
      I3 => \bit_cntr_reg__0\(2),
      O => \plusOp__1\(3)
    );
\bit_cntr[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"D7"
    )
        port map (
      I0 => iis_state(1),
      I1 => iis_state(0),
      I2 => iis_state(2),
      O => \bit_cntr[4]_i_1_n_0\
    );
\bit_cntr[4]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => Q(0),
      I1 => \^sclk_d1\,
      O => bit_rdy
    );
\bit_cntr[4]_i_2__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => \^sclk_d1\,
      I1 => Q(0),
      O => \bit_cntr_reg[4]_0\(0)
    );
\bit_cntr[4]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"78F0F0F0"
    )
        port map (
      I0 => \bit_cntr_reg__0\(3),
      I1 => \bit_cntr_reg__0\(2),
      I2 => \bit_cntr_reg__0\(4),
      I3 => \bit_cntr_reg__0\(1),
      I4 => \bit_cntr_reg__0\(0),
      O => \plusOp__1\(4)
    );
\bit_cntr_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => bit_rdy,
      D => \plusOp__1\(0),
      Q => \bit_cntr_reg__0\(0),
      R => \bit_cntr[4]_i_1_n_0\
    );
\bit_cntr_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => bit_rdy,
      D => \plusOp__1\(1),
      Q => \bit_cntr_reg__0\(1),
      R => \bit_cntr[4]_i_1_n_0\
    );
\bit_cntr_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => bit_rdy,
      D => \plusOp__1\(2),
      Q => \bit_cntr_reg__0\(2),
      R => \bit_cntr[4]_i_1_n_0\
    );
\bit_cntr_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => bit_rdy,
      D => \plusOp__1\(3),
      Q => \bit_cntr_reg__0\(3),
      R => \bit_cntr[4]_i_1_n_0\
    );
\bit_cntr_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => bit_rdy,
      D => \plusOp__1\(4),
      Q => \bit_cntr_reg__0\(4),
      R => \bit_cntr[4]_i_1_n_0\
    );
data_rdy_bit_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CC00EA0000000000"
    )
        port map (
      I0 => data_rdy_bit,
      I1 => \^e\(0),
      I2 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\,
      I3 => \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\,
      I4 => data_rdy_bit_i_4_n_0,
      I5 => S_AXI_ARESETN,
      O => data_rdy_bit_reg
    );
data_rdy_bit_i_4: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000090000000"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      I1 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      I2 => eqOp,
      I3 => iis_state(2),
      I4 => iis_state(1),
      I5 => iis_state(0),
      O => data_rdy_bit_i_4_n_0
    );
\ldata_reg[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => iis_state(1),
      I1 => iis_state(0),
      I2 => iis_state(2),
      O => ldata_reg
    );
\ldata_reg[23]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00004000"
    )
        port map (
      I0 => iis_state(2),
      I1 => iis_state(0),
      I2 => iis_state(1),
      I3 => Q(0),
      I4 => \^sclk_d1\,
      O => ldata_reg0
    );
\ldata_reg_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => SDATA_I,
      Q => \^datarx_l_reg[23]\(0),
      R => ldata_reg
    );
\ldata_reg_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(9),
      Q => \^datarx_l_reg[23]\(10),
      R => ldata_reg
    );
\ldata_reg_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(10),
      Q => \^datarx_l_reg[23]\(11),
      R => ldata_reg
    );
\ldata_reg_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(11),
      Q => \^datarx_l_reg[23]\(12),
      R => ldata_reg
    );
\ldata_reg_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(12),
      Q => \^datarx_l_reg[23]\(13),
      R => ldata_reg
    );
\ldata_reg_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(13),
      Q => \^datarx_l_reg[23]\(14),
      R => ldata_reg
    );
\ldata_reg_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(14),
      Q => \^datarx_l_reg[23]\(15),
      R => ldata_reg
    );
\ldata_reg_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(15),
      Q => \^datarx_l_reg[23]\(16),
      R => ldata_reg
    );
\ldata_reg_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(16),
      Q => \^datarx_l_reg[23]\(17),
      R => ldata_reg
    );
\ldata_reg_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(17),
      Q => \^datarx_l_reg[23]\(18),
      R => ldata_reg
    );
\ldata_reg_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(18),
      Q => \^datarx_l_reg[23]\(19),
      R => ldata_reg
    );
\ldata_reg_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(0),
      Q => \^datarx_l_reg[23]\(1),
      R => ldata_reg
    );
\ldata_reg_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(19),
      Q => \^datarx_l_reg[23]\(20),
      R => ldata_reg
    );
\ldata_reg_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(20),
      Q => \^datarx_l_reg[23]\(21),
      R => ldata_reg
    );
\ldata_reg_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(21),
      Q => \^datarx_l_reg[23]\(22),
      R => ldata_reg
    );
\ldata_reg_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(22),
      Q => \^datarx_l_reg[23]\(23),
      R => ldata_reg
    );
\ldata_reg_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(1),
      Q => \^datarx_l_reg[23]\(2),
      R => ldata_reg
    );
\ldata_reg_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(2),
      Q => \^datarx_l_reg[23]\(3),
      R => ldata_reg
    );
\ldata_reg_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(3),
      Q => \^datarx_l_reg[23]\(4),
      R => ldata_reg
    );
\ldata_reg_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(4),
      Q => \^datarx_l_reg[23]\(5),
      R => ldata_reg
    );
\ldata_reg_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(5),
      Q => \^datarx_l_reg[23]\(6),
      R => ldata_reg
    );
\ldata_reg_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(6),
      Q => \^datarx_l_reg[23]\(7),
      R => ldata_reg
    );
\ldata_reg_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(7),
      Q => \^datarx_l_reg[23]\(8),
      R => ldata_reg
    );
\ldata_reg_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => ldata_reg0,
      D => \^datarx_l_reg[23]\(8),
      Q => \^datarx_l_reg[23]\(9),
      R => ldata_reg
    );
lrclk_d1_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => Q(1),
      Q => \^lrclk_d1\,
      R => '0'
    );
\rdata_reg[23]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00004000"
    )
        port map (
      I0 => iis_state(0),
      I1 => iis_state(1),
      I2 => iis_state(2),
      I3 => Q(0),
      I4 => \^sclk_d1\,
      O => rdata_reg0
    );
\rdata_reg[23]_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"4040FF4040404040"
    )
        port map (
      I0 => Q(0),
      I1 => \^sclk_d1\,
      I2 => \out\(2),
      I3 => \out\(0),
      I4 => Q(1),
      I5 => \^lrclk_d1\,
      O => \rdata_reg_reg[23]_0\(0)
    );
\rdata_reg_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => SDATA_I,
      Q => \^datarx_r_reg[23]\(0),
      R => ldata_reg
    );
\rdata_reg_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(9),
      Q => \^datarx_r_reg[23]\(10),
      R => ldata_reg
    );
\rdata_reg_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(10),
      Q => \^datarx_r_reg[23]\(11),
      R => ldata_reg
    );
\rdata_reg_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(11),
      Q => \^datarx_r_reg[23]\(12),
      R => ldata_reg
    );
\rdata_reg_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(12),
      Q => \^datarx_r_reg[23]\(13),
      R => ldata_reg
    );
\rdata_reg_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(13),
      Q => \^datarx_r_reg[23]\(14),
      R => ldata_reg
    );
\rdata_reg_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(14),
      Q => \^datarx_r_reg[23]\(15),
      R => ldata_reg
    );
\rdata_reg_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(15),
      Q => \^datarx_r_reg[23]\(16),
      R => ldata_reg
    );
\rdata_reg_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(16),
      Q => \^datarx_r_reg[23]\(17),
      R => ldata_reg
    );
\rdata_reg_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(17),
      Q => \^datarx_r_reg[23]\(18),
      R => ldata_reg
    );
\rdata_reg_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(18),
      Q => \^datarx_r_reg[23]\(19),
      R => ldata_reg
    );
\rdata_reg_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(0),
      Q => \^datarx_r_reg[23]\(1),
      R => ldata_reg
    );
\rdata_reg_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(19),
      Q => \^datarx_r_reg[23]\(20),
      R => ldata_reg
    );
\rdata_reg_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(20),
      Q => \^datarx_r_reg[23]\(21),
      R => ldata_reg
    );
\rdata_reg_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(21),
      Q => \^datarx_r_reg[23]\(22),
      R => ldata_reg
    );
\rdata_reg_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(22),
      Q => \^datarx_r_reg[23]\(23),
      R => ldata_reg
    );
\rdata_reg_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(1),
      Q => \^datarx_r_reg[23]\(2),
      R => ldata_reg
    );
\rdata_reg_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(2),
      Q => \^datarx_r_reg[23]\(3),
      R => ldata_reg
    );
\rdata_reg_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(3),
      Q => \^datarx_r_reg[23]\(4),
      R => ldata_reg
    );
\rdata_reg_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(4),
      Q => \^datarx_r_reg[23]\(5),
      R => ldata_reg
    );
\rdata_reg_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(5),
      Q => \^datarx_r_reg[23]\(6),
      R => ldata_reg
    );
\rdata_reg_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(6),
      Q => \^datarx_r_reg[23]\(7),
      R => ldata_reg
    );
\rdata_reg_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(7),
      Q => \^datarx_r_reg[23]\(8),
      R => ldata_reg
    );
\rdata_reg_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => rdata_reg0,
      D => \^datarx_r_reg[23]\(8),
      Q => \^datarx_r_reg[23]\(9),
      R => ldata_reg
    );
sclk_d1_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => Q(0),
      Q => \^sclk_d1\,
      R => '0'
    );
sdata_reg_i_2: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => Q(0),
      I1 => \^sclk_d1\,
      O => sdata_reg_reg
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_ser is
  port (
    SDATA_O : out STD_LOGIC;
    \out\ : out STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 1 downto 0 );
    sclk_d1 : in STD_LOGIC;
    lrclk_d1 : in STD_LOGIC;
    \DataTx_L_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \DataTx_R_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \clk_cntr_reg[4]\ : in STD_LOGIC;
    lrclk_d1_reg : in STD_LOGIC;
    lrclk_d1_reg_0 : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    sclk_d1_reg : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_ser;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_ser is
  signal \FSM_onehot_iis_state[1]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_iis_state[2]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_iis_state[3]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_iis_state[4]_i_1_n_0\ : STD_LOGIC;
  signal \FSM_onehot_iis_state[4]_i_2_n_0\ : STD_LOGIC;
  signal \^sdata_o\ : STD_LOGIC;
  signal \bit_cntr[4]_i_1__0_n_0\ : STD_LOGIC;
  signal \bit_cntr_reg__0\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal eqOp : STD_LOGIC;
  signal ldata_reg : STD_LOGIC;
  attribute RTL_KEEP : string;
  attribute RTL_KEEP of ldata_reg : signal is "yes";
  signal \ldata_reg[0]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[10]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[11]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[12]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[13]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[14]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[15]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[16]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[17]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[18]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[19]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[1]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[20]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[21]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[22]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[23]_i_1__0_n_0\ : STD_LOGIC;
  signal \ldata_reg[23]_i_2__0_n_0\ : STD_LOGIC;
  signal \ldata_reg[2]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[3]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[4]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[5]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[6]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[7]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[8]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg[9]_i_1_n_0\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[0]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[10]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[11]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[12]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[13]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[14]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[15]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[16]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[17]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[18]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[19]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[1]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[20]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[21]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[22]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[2]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[3]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[4]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[5]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[6]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[7]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[8]\ : STD_LOGIC;
  signal \ldata_reg_reg_n_0_[9]\ : STD_LOGIC;
  signal \^out\ : STD_LOGIC_VECTOR ( 2 downto 0 );
  attribute RTL_KEEP of \^out\ : signal is "yes";
  signal p_0_in2_in : STD_LOGIC;
  attribute RTL_KEEP of p_0_in2_in : signal is "yes";
  signal p_1_in : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal p_2_in : STD_LOGIC;
  signal \plusOp__2\ : STD_LOGIC_VECTOR ( 4 downto 0 );
  signal \rdata_reg_reg_n_0_[0]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[10]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[11]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[12]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[13]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[14]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[15]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[16]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[17]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[18]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[19]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[1]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[20]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[21]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[22]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[23]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[2]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[3]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[4]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[5]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[6]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[7]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[8]\ : STD_LOGIC;
  signal \rdata_reg_reg_n_0_[9]\ : STD_LOGIC;
  signal sdata_reg_i_1_n_0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \FSM_onehot_iis_state[4]_i_4\ : label is "soft_lutpair11";
  attribute FSM_ENCODED_STATES : string;
  attribute FSM_ENCODED_STATES of \FSM_onehot_iis_state_reg[0]\ : label is "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000";
  attribute KEEP : string;
  attribute KEEP of \FSM_onehot_iis_state_reg[0]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_onehot_iis_state_reg[1]\ : label is "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000";
  attribute KEEP of \FSM_onehot_iis_state_reg[1]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_onehot_iis_state_reg[2]\ : label is "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000";
  attribute KEEP of \FSM_onehot_iis_state_reg[2]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_onehot_iis_state_reg[3]\ : label is "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000";
  attribute KEEP of \FSM_onehot_iis_state_reg[3]\ : label is "yes";
  attribute FSM_ENCODED_STATES of \FSM_onehot_iis_state_reg[4]\ : label is "reset:00001,wait_left:00010,write_left:00100,wait_right:01000,write_right:10000";
  attribute KEEP of \FSM_onehot_iis_state_reg[4]\ : label is "yes";
  attribute SOFT_HLUTNM of \bit_cntr[0]_i_1__0\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \bit_cntr[1]_i_1__0\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \bit_cntr[2]_i_1__0\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \bit_cntr[3]_i_1__0\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \bit_cntr[4]_i_3__0\ : label is "soft_lutpair11";
begin
  SDATA_O <= \^sdata_o\;
  \out\(2 downto 0) <= \^out\(2 downto 0);
\FSM_onehot_iis_state[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AAAAAABA"
    )
        port map (
      I0 => ldata_reg,
      I1 => p_0_in2_in,
      I2 => \^out\(2),
      I3 => \^out\(1),
      I4 => \^out\(0),
      O => \FSM_onehot_iis_state[1]_i_1_n_0\
    );
\FSM_onehot_iis_state[2]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0ACA"
    )
        port map (
      I0 => p_0_in2_in,
      I1 => \^out\(0),
      I2 => \FSM_onehot_iis_state[4]_i_1_n_0\,
      I3 => ldata_reg,
      O => \FSM_onehot_iis_state[2]_i_1_n_0\
    );
\FSM_onehot_iis_state[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => p_0_in2_in,
      I1 => ldata_reg,
      I2 => \^out\(0),
      O => \FSM_onehot_iis_state[3]_i_1_n_0\
    );
\FSM_onehot_iis_state[4]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFEEFFFFFEEEFFFF"
    )
        port map (
      I0 => ldata_reg,
      I1 => lrclk_d1_reg,
      I2 => \^out\(2),
      I3 => eqOp,
      I4 => lrclk_d1_reg_0,
      I5 => p_0_in2_in,
      O => \FSM_onehot_iis_state[4]_i_1_n_0\
    );
\FSM_onehot_iis_state[4]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0010"
    )
        port map (
      I0 => ldata_reg,
      I1 => p_0_in2_in,
      I2 => \^out\(1),
      I3 => \^out\(0),
      O => \FSM_onehot_iis_state[4]_i_2_n_0\
    );
\FSM_onehot_iis_state[4]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"02000000"
    )
        port map (
      I0 => \bit_cntr_reg__0\(0),
      I1 => \bit_cntr_reg__0\(1),
      I2 => \bit_cntr_reg__0\(2),
      I3 => \bit_cntr_reg__0\(4),
      I4 => \bit_cntr_reg__0\(3),
      O => eqOp
    );
\FSM_onehot_iis_state_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '1'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \FSM_onehot_iis_state[4]_i_1_n_0\,
      D => '0',
      Q => ldata_reg,
      R => '0'
    );
\FSM_onehot_iis_state_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \FSM_onehot_iis_state[4]_i_1_n_0\,
      D => \FSM_onehot_iis_state[1]_i_1_n_0\,
      Q => \^out\(0),
      R => '0'
    );
\FSM_onehot_iis_state_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \FSM_onehot_iis_state[2]_i_1_n_0\,
      Q => p_0_in2_in,
      R => '0'
    );
\FSM_onehot_iis_state_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \FSM_onehot_iis_state[4]_i_1_n_0\,
      D => \FSM_onehot_iis_state[3]_i_1_n_0\,
      Q => \^out\(1),
      R => '0'
    );
\FSM_onehot_iis_state_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \FSM_onehot_iis_state[4]_i_1_n_0\,
      D => \FSM_onehot_iis_state[4]_i_2_n_0\,
      Q => \^out\(2),
      R => '0'
    );
\bit_cntr[0]_i_1__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \bit_cntr_reg__0\(0),
      O => \plusOp__2\(0)
    );
\bit_cntr[1]_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \bit_cntr_reg__0\(0),
      I1 => \bit_cntr_reg__0\(1),
      O => \plusOp__2\(1)
    );
\bit_cntr[2]_i_1__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \bit_cntr_reg__0\(1),
      I1 => \bit_cntr_reg__0\(0),
      I2 => \bit_cntr_reg__0\(2),
      O => \plusOp__2\(2)
    );
\bit_cntr[3]_i_1__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => \bit_cntr_reg__0\(2),
      I1 => \bit_cntr_reg__0\(0),
      I2 => \bit_cntr_reg__0\(1),
      I3 => \bit_cntr_reg__0\(3),
      O => \plusOp__2\(3)
    );
\bit_cntr[4]_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \^out\(2),
      I1 => p_0_in2_in,
      O => \bit_cntr[4]_i_1__0_n_0\
    );
\bit_cntr[4]_i_3__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"7FFF8000"
    )
        port map (
      I0 => \bit_cntr_reg__0\(3),
      I1 => \bit_cntr_reg__0\(1),
      I2 => \bit_cntr_reg__0\(0),
      I3 => \bit_cntr_reg__0\(2),
      I4 => \bit_cntr_reg__0\(4),
      O => \plusOp__2\(4)
    );
\bit_cntr_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => sclk_d1_reg(0),
      D => \plusOp__2\(0),
      Q => \bit_cntr_reg__0\(0),
      R => \bit_cntr[4]_i_1__0_n_0\
    );
\bit_cntr_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => sclk_d1_reg(0),
      D => \plusOp__2\(1),
      Q => \bit_cntr_reg__0\(1),
      R => \bit_cntr[4]_i_1__0_n_0\
    );
\bit_cntr_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => sclk_d1_reg(0),
      D => \plusOp__2\(2),
      Q => \bit_cntr_reg__0\(2),
      R => \bit_cntr[4]_i_1__0_n_0\
    );
\bit_cntr_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => sclk_d1_reg(0),
      D => \plusOp__2\(3),
      Q => \bit_cntr_reg__0\(3),
      R => \bit_cntr[4]_i_1__0_n_0\
    );
\bit_cntr_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => sclk_d1_reg(0),
      D => \plusOp__2\(4),
      Q => \bit_cntr_reg__0\(4),
      R => \bit_cntr[4]_i_1__0_n_0\
    );
\ldata_reg[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0800"
    )
        port map (
      I0 => \DataTx_L_reg[23]\(0),
      I1 => \^out\(0),
      I2 => Q(1),
      I3 => lrclk_d1,
      O => \ldata_reg[0]_i_1_n_0\
    );
\ldata_reg[10]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[9]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(10),
      O => \ldata_reg[10]_i_1_n_0\
    );
\ldata_reg[11]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[10]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(11),
      O => \ldata_reg[11]_i_1_n_0\
    );
\ldata_reg[12]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[11]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(12),
      O => \ldata_reg[12]_i_1_n_0\
    );
\ldata_reg[13]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[12]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(13),
      O => \ldata_reg[13]_i_1_n_0\
    );
\ldata_reg[14]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[13]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(14),
      O => \ldata_reg[14]_i_1_n_0\
    );
\ldata_reg[15]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[14]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(15),
      O => \ldata_reg[15]_i_1_n_0\
    );
\ldata_reg[16]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[15]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(16),
      O => \ldata_reg[16]_i_1_n_0\
    );
\ldata_reg[17]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[16]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(17),
      O => \ldata_reg[17]_i_1_n_0\
    );
\ldata_reg[18]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[17]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(18),
      O => \ldata_reg[18]_i_1_n_0\
    );
\ldata_reg[19]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[18]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(19),
      O => \ldata_reg[19]_i_1_n_0\
    );
\ldata_reg[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[0]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(1),
      O => \ldata_reg[1]_i_1_n_0\
    );
\ldata_reg[20]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[19]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(20),
      O => \ldata_reg[20]_i_1_n_0\
    );
\ldata_reg[21]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[20]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(21),
      O => \ldata_reg[21]_i_1_n_0\
    );
\ldata_reg[22]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[21]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(22),
      O => \ldata_reg[22]_i_1_n_0\
    );
\ldata_reg[23]_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2020FF2020202020"
    )
        port map (
      I0 => p_0_in2_in,
      I1 => Q(0),
      I2 => sclk_d1,
      I3 => \^out\(0),
      I4 => Q(1),
      I5 => lrclk_d1,
      O => \ldata_reg[23]_i_1__0_n_0\
    );
\ldata_reg[23]_i_2__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[22]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(23),
      O => \ldata_reg[23]_i_2__0_n_0\
    );
\ldata_reg[2]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[1]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(2),
      O => \ldata_reg[2]_i_1_n_0\
    );
\ldata_reg[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[2]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(3),
      O => \ldata_reg[3]_i_1_n_0\
    );
\ldata_reg[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[3]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(4),
      O => \ldata_reg[4]_i_1_n_0\
    );
\ldata_reg[5]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[4]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(5),
      O => \ldata_reg[5]_i_1_n_0\
    );
\ldata_reg[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[5]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(6),
      O => \ldata_reg[6]_i_1_n_0\
    );
\ldata_reg[7]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[6]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(7),
      O => \ldata_reg[7]_i_1_n_0\
    );
\ldata_reg[8]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[7]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(8),
      O => \ldata_reg[8]_i_1_n_0\
    );
\ldata_reg[9]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \ldata_reg_reg_n_0_[8]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_L_reg[23]\(9),
      O => \ldata_reg[9]_i_1_n_0\
    );
\ldata_reg_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[0]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[0]\,
      R => ldata_reg
    );
\ldata_reg_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[10]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[10]\,
      R => ldata_reg
    );
\ldata_reg_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[11]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[11]\,
      R => ldata_reg
    );
\ldata_reg_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[12]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[12]\,
      R => ldata_reg
    );
\ldata_reg_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[13]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[13]\,
      R => ldata_reg
    );
\ldata_reg_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[14]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[14]\,
      R => ldata_reg
    );
\ldata_reg_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[15]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[15]\,
      R => ldata_reg
    );
\ldata_reg_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[16]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[16]\,
      R => ldata_reg
    );
\ldata_reg_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[17]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[17]\,
      R => ldata_reg
    );
\ldata_reg_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[18]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[18]\,
      R => ldata_reg
    );
\ldata_reg_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[19]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[19]\,
      R => ldata_reg
    );
\ldata_reg_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[1]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[1]\,
      R => ldata_reg
    );
\ldata_reg_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[20]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[20]\,
      R => ldata_reg
    );
\ldata_reg_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[21]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[21]\,
      R => ldata_reg
    );
\ldata_reg_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[22]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[22]\,
      R => ldata_reg
    );
\ldata_reg_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[23]_i_2__0_n_0\,
      Q => p_2_in,
      R => ldata_reg
    );
\ldata_reg_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[2]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[2]\,
      R => ldata_reg
    );
\ldata_reg_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[3]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[3]\,
      R => ldata_reg
    );
\ldata_reg_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[4]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[4]\,
      R => ldata_reg
    );
\ldata_reg_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[5]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[5]\,
      R => ldata_reg
    );
\ldata_reg_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[6]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[6]\,
      R => ldata_reg
    );
\ldata_reg_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[7]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[7]\,
      R => ldata_reg
    );
\ldata_reg_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[8]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[8]\,
      R => ldata_reg
    );
\ldata_reg_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \ldata_reg[23]_i_1__0_n_0\,
      D => \ldata_reg[9]_i_1_n_0\,
      Q => \ldata_reg_reg_n_0_[9]\,
      R => ldata_reg
    );
\rdata_reg[0]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0800"
    )
        port map (
      I0 => \DataTx_R_reg[23]\(0),
      I1 => \^out\(0),
      I2 => Q(1),
      I3 => lrclk_d1,
      O => p_1_in(0)
    );
\rdata_reg[10]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[9]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(10),
      O => p_1_in(10)
    );
\rdata_reg[11]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[10]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(11),
      O => p_1_in(11)
    );
\rdata_reg[12]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[11]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(12),
      O => p_1_in(12)
    );
\rdata_reg[13]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[12]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(13),
      O => p_1_in(13)
    );
\rdata_reg[14]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[13]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(14),
      O => p_1_in(14)
    );
\rdata_reg[15]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[14]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(15),
      O => p_1_in(15)
    );
\rdata_reg[16]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[15]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(16),
      O => p_1_in(16)
    );
\rdata_reg[17]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[16]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(17),
      O => p_1_in(17)
    );
\rdata_reg[18]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[17]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(18),
      O => p_1_in(18)
    );
\rdata_reg[19]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[18]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(19),
      O => p_1_in(19)
    );
\rdata_reg[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[0]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(1),
      O => p_1_in(1)
    );
\rdata_reg[20]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[19]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(20),
      O => p_1_in(20)
    );
\rdata_reg[21]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[20]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(21),
      O => p_1_in(21)
    );
\rdata_reg[22]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[21]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(22),
      O => p_1_in(22)
    );
\rdata_reg[23]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[22]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(23),
      O => p_1_in(23)
    );
\rdata_reg[2]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[1]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(2),
      O => p_1_in(2)
    );
\rdata_reg[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[2]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(3),
      O => p_1_in(3)
    );
\rdata_reg[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[3]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(4),
      O => p_1_in(4)
    );
\rdata_reg[5]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[4]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(5),
      O => p_1_in(5)
    );
\rdata_reg[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[5]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(6),
      O => p_1_in(6)
    );
\rdata_reg[7]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[6]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(7),
      O => p_1_in(7)
    );
\rdata_reg[8]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[7]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(8),
      O => p_1_in(8)
    );
\rdata_reg[9]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAAA2AA"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[8]\,
      I1 => lrclk_d1,
      I2 => Q(1),
      I3 => \^out\(0),
      I4 => \DataTx_R_reg[23]\(9),
      O => p_1_in(9)
    );
\rdata_reg_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(0),
      Q => \rdata_reg_reg_n_0_[0]\,
      R => ldata_reg
    );
\rdata_reg_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(10),
      Q => \rdata_reg_reg_n_0_[10]\,
      R => ldata_reg
    );
\rdata_reg_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(11),
      Q => \rdata_reg_reg_n_0_[11]\,
      R => ldata_reg
    );
\rdata_reg_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(12),
      Q => \rdata_reg_reg_n_0_[12]\,
      R => ldata_reg
    );
\rdata_reg_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(13),
      Q => \rdata_reg_reg_n_0_[13]\,
      R => ldata_reg
    );
\rdata_reg_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(14),
      Q => \rdata_reg_reg_n_0_[14]\,
      R => ldata_reg
    );
\rdata_reg_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(15),
      Q => \rdata_reg_reg_n_0_[15]\,
      R => ldata_reg
    );
\rdata_reg_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(16),
      Q => \rdata_reg_reg_n_0_[16]\,
      R => ldata_reg
    );
\rdata_reg_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(17),
      Q => \rdata_reg_reg_n_0_[17]\,
      R => ldata_reg
    );
\rdata_reg_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(18),
      Q => \rdata_reg_reg_n_0_[18]\,
      R => ldata_reg
    );
\rdata_reg_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(19),
      Q => \rdata_reg_reg_n_0_[19]\,
      R => ldata_reg
    );
\rdata_reg_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(1),
      Q => \rdata_reg_reg_n_0_[1]\,
      R => ldata_reg
    );
\rdata_reg_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(20),
      Q => \rdata_reg_reg_n_0_[20]\,
      R => ldata_reg
    );
\rdata_reg_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(21),
      Q => \rdata_reg_reg_n_0_[21]\,
      R => ldata_reg
    );
\rdata_reg_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(22),
      Q => \rdata_reg_reg_n_0_[22]\,
      R => ldata_reg
    );
\rdata_reg_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(23),
      Q => \rdata_reg_reg_n_0_[23]\,
      R => ldata_reg
    );
\rdata_reg_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(2),
      Q => \rdata_reg_reg_n_0_[2]\,
      R => ldata_reg
    );
\rdata_reg_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(3),
      Q => \rdata_reg_reg_n_0_[3]\,
      R => ldata_reg
    );
\rdata_reg_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(4),
      Q => \rdata_reg_reg_n_0_[4]\,
      R => ldata_reg
    );
\rdata_reg_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(5),
      Q => \rdata_reg_reg_n_0_[5]\,
      R => ldata_reg
    );
\rdata_reg_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(6),
      Q => \rdata_reg_reg_n_0_[6]\,
      R => ldata_reg
    );
\rdata_reg_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(7),
      Q => \rdata_reg_reg_n_0_[7]\,
      R => ldata_reg
    );
\rdata_reg_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(8),
      Q => \rdata_reg_reg_n_0_[8]\,
      R => ldata_reg
    );
\rdata_reg_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => p_1_in(9),
      Q => \rdata_reg_reg_n_0_[9]\,
      R => ldata_reg
    );
sdata_reg_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFCCAF0000CCA0"
    )
        port map (
      I0 => \rdata_reg_reg_n_0_[23]\,
      I1 => p_2_in,
      I2 => \^out\(2),
      I3 => p_0_in2_in,
      I4 => \clk_cntr_reg[4]\,
      I5 => \^sdata_o\,
      O => sdata_reg_i_1_n_0
    );
sdata_reg_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => sdata_reg_i_1_n_0,
      Q => \^sdata_o\,
      R => ldata_reg
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_slave_attachment is
  port (
    \DataTx_R_reg[0]\ : out STD_LOGIC;
    \DataTx_R_reg[0]_0\ : out STD_LOGIC;
    \DataTx_R_reg[0]_1\ : out STD_LOGIC;
    \DataTx_R_reg[0]_2\ : out STD_LOGIC;
    \DataTx_R_reg[0]_3\ : out STD_LOGIC;
    \DataTx_R_reg[0]_4\ : out STD_LOGIC;
    S_AXI_RVALID : out STD_LOGIC;
    S_AXI_BVALID : out STD_LOGIC;
    data_rdy_bit_reg : out STD_LOGIC;
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \DataTx_L_reg[0]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    data_rdy_bit_reg_0 : out STD_LOGIC;
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    SR : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_WVALID : in STD_LOGIC;
    data_rdy_bit : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataTx_L_reg[31]\ : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataRx_R_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \DataRx_L_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_slave_attachment;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_slave_attachment is
  signal \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\ : STD_LOGIC;
  signal \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1]\ : STD_LOGIC;
  signal \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2]\ : STD_LOGIC;
  signal IP2Bus_Data : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal I_DECODER_n_46 : STD_LOGIC;
  signal I_DECODER_n_47 : STD_LOGIC;
  signal I_DECODER_n_7 : STD_LOGIC;
  signal I_DECODER_n_8 : STD_LOGIC;
  signal \^s_axi_bvalid\ : STD_LOGIC;
  signal \^s_axi_rvalid\ : STD_LOGIC;
  signal p_2_out : STD_LOGIC;
  signal plusOp : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal rst : STD_LOGIC;
  signal s_axi_rdata_i : STD_LOGIC;
  signal state : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \state[0]_i_2_n_0\ : STD_LOGIC;
  signal \state[1]_i_2_n_0\ : STD_LOGIC;
  signal \state[1]_i_3_n_0\ : STD_LOGIC;
  signal timeout : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \INCLUDE_DPHASE_TIMER.dpto_cnt[0]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \INCLUDE_DPHASE_TIMER.dpto_cnt[1]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \INCLUDE_DPHASE_TIMER.dpto_cnt[2]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \INCLUDE_DPHASE_TIMER.dpto_cnt[3]_i_2\ : label is "soft_lutpair4";
begin
  S_AXI_BVALID <= \^s_axi_bvalid\;
  S_AXI_RVALID <= \^s_axi_rvalid\;
\INCLUDE_DPHASE_TIMER.dpto_cnt[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\,
      O => plusOp(0)
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\,
      I1 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1]\,
      O => plusOp(1)
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1]\,
      I1 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\,
      I2 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2]\,
      O => plusOp(2)
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => state(1),
      I1 => state(0),
      O => p_2_out
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt[3]_i_2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2]\,
      I1 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\,
      I2 => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1]\,
      I3 => timeout,
      O => plusOp(3)
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => plusOp(0),
      Q => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[0]\,
      R => p_2_out
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => plusOp(1),
      Q => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[1]\,
      R => p_2_out
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[2]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => plusOp(2),
      Q => \INCLUDE_DPHASE_TIMER.dpto_cnt_reg_n_0_[2]\,
      R => p_2_out
    );
\INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => plusOp(3),
      Q => timeout,
      R => p_2_out
    );
I_DECODER: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_address_decoder
     port map (
      D(1) => I_DECODER_n_7,
      D(0) => I_DECODER_n_8,
      \DataRx_L_reg[23]\(23 downto 0) => \DataRx_L_reg[23]\(23 downto 0),
      \DataRx_R_reg[23]\(23 downto 0) => \DataRx_R_reg[23]\(23 downto 0),
      \DataTx_L_reg[0]\(0) => \DataTx_L_reg[0]\(0),
      \DataTx_L_reg[31]\(31 downto 0) => \DataTx_L_reg[31]\(31 downto 0),
      \DataTx_R_reg[0]\ => \DataTx_R_reg[0]\,
      \DataTx_R_reg[0]_0\ => \DataTx_R_reg[0]_0\,
      \DataTx_R_reg[0]_1\ => \DataTx_R_reg[0]_1\,
      \DataTx_R_reg[0]_2\ => \DataTx_R_reg[0]_2\,
      \DataTx_R_reg[0]_3\ => \DataTx_R_reg[0]_3\,
      \DataTx_R_reg[0]_4\ => \DataTx_R_reg[0]_4\,
      \DataTx_R_reg[31]\(31 downto 0) => Q(31 downto 0),
      E(0) => E(0),
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]_0\ => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\,
      \INCLUDE_DPHASE_TIMER.dpto_cnt_reg[3]\(0) => timeout,
      Q(1 downto 0) => state(1 downto 0),
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARADDR(2 downto 0) => S_AXI_ARADDR(2 downto 0),
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_AWADDR(2 downto 0) => S_AXI_AWADDR(2 downto 0),
      S_AXI_AWREADY => S_AXI_AWREADY,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_WVALID => S_AXI_WVALID,
      S_AXI_WVALID_0 => \state[1]_i_2_n_0\,
      data_rdy_bit => data_rdy_bit,
      data_rdy_bit_reg => data_rdy_bit_reg,
      data_rdy_bit_reg_0 => data_rdy_bit_reg_0,
      s_axi_bvalid_i_reg => I_DECODER_n_47,
      s_axi_bvalid_i_reg_0 => \state[0]_i_2_n_0\,
      s_axi_bvalid_i_reg_1 => \^s_axi_bvalid\,
      \s_axi_rdata_i_reg[31]\(31 downto 0) => IP2Bus_Data(31 downto 0),
      s_axi_rvalid_i_reg => I_DECODER_n_46,
      s_axi_rvalid_i_reg_0 => \^s_axi_rvalid\,
      \state_reg[1]\ => \state[1]_i_3_n_0\
    );
rst_reg: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => SR(0),
      Q => rst,
      R => '0'
    );
s_axi_bvalid_i_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => I_DECODER_n_47,
      Q => \^s_axi_bvalid\,
      R => rst
    );
\s_axi_rdata_i[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => state(0),
      I1 => state(1),
      O => s_axi_rdata_i
    );
\s_axi_rdata_i_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(0),
      Q => S_AXI_RDATA(0),
      R => rst
    );
\s_axi_rdata_i_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(10),
      Q => S_AXI_RDATA(10),
      R => rst
    );
\s_axi_rdata_i_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(11),
      Q => S_AXI_RDATA(11),
      R => rst
    );
\s_axi_rdata_i_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(12),
      Q => S_AXI_RDATA(12),
      R => rst
    );
\s_axi_rdata_i_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(13),
      Q => S_AXI_RDATA(13),
      R => rst
    );
\s_axi_rdata_i_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(14),
      Q => S_AXI_RDATA(14),
      R => rst
    );
\s_axi_rdata_i_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(15),
      Q => S_AXI_RDATA(15),
      R => rst
    );
\s_axi_rdata_i_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(16),
      Q => S_AXI_RDATA(16),
      R => rst
    );
\s_axi_rdata_i_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(17),
      Q => S_AXI_RDATA(17),
      R => rst
    );
\s_axi_rdata_i_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(18),
      Q => S_AXI_RDATA(18),
      R => rst
    );
\s_axi_rdata_i_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(19),
      Q => S_AXI_RDATA(19),
      R => rst
    );
\s_axi_rdata_i_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(1),
      Q => S_AXI_RDATA(1),
      R => rst
    );
\s_axi_rdata_i_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(20),
      Q => S_AXI_RDATA(20),
      R => rst
    );
\s_axi_rdata_i_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(21),
      Q => S_AXI_RDATA(21),
      R => rst
    );
\s_axi_rdata_i_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(22),
      Q => S_AXI_RDATA(22),
      R => rst
    );
\s_axi_rdata_i_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(23),
      Q => S_AXI_RDATA(23),
      R => rst
    );
\s_axi_rdata_i_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(24),
      Q => S_AXI_RDATA(24),
      R => rst
    );
\s_axi_rdata_i_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(25),
      Q => S_AXI_RDATA(25),
      R => rst
    );
\s_axi_rdata_i_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(26),
      Q => S_AXI_RDATA(26),
      R => rst
    );
\s_axi_rdata_i_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(27),
      Q => S_AXI_RDATA(27),
      R => rst
    );
\s_axi_rdata_i_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(28),
      Q => S_AXI_RDATA(28),
      R => rst
    );
\s_axi_rdata_i_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(29),
      Q => S_AXI_RDATA(29),
      R => rst
    );
\s_axi_rdata_i_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(2),
      Q => S_AXI_RDATA(2),
      R => rst
    );
\s_axi_rdata_i_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(30),
      Q => S_AXI_RDATA(30),
      R => rst
    );
\s_axi_rdata_i_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(31),
      Q => S_AXI_RDATA(31),
      R => rst
    );
\s_axi_rdata_i_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(3),
      Q => S_AXI_RDATA(3),
      R => rst
    );
\s_axi_rdata_i_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(4),
      Q => S_AXI_RDATA(4),
      R => rst
    );
\s_axi_rdata_i_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(5),
      Q => S_AXI_RDATA(5),
      R => rst
    );
\s_axi_rdata_i_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(6),
      Q => S_AXI_RDATA(6),
      R => rst
    );
\s_axi_rdata_i_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(7),
      Q => S_AXI_RDATA(7),
      R => rst
    );
\s_axi_rdata_i_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(8),
      Q => S_AXI_RDATA(8),
      R => rst
    );
\s_axi_rdata_i_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => s_axi_rdata_i,
      D => IP2Bus_Data(9),
      Q => S_AXI_RDATA(9),
      R => rst
    );
s_axi_rvalid_i_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => I_DECODER_n_46,
      Q => \^s_axi_rvalid\,
      R => rst
    );
\state[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"07770000FFFF0000"
    )
        port map (
      I0 => \^s_axi_bvalid\,
      I1 => S_AXI_BREADY,
      I2 => S_AXI_RREADY,
      I3 => \^s_axi_rvalid\,
      I4 => state(0),
      I5 => state(1),
      O => \state[0]_i_2_n_0\
    );
\state[1]_i_2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"8"
    )
        port map (
      I0 => S_AXI_AWVALID,
      I1 => S_AXI_WVALID,
      O => \state[1]_i_2_n_0\
    );
\state[1]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"002A2A2A"
    )
        port map (
      I0 => state(1),
      I1 => \^s_axi_rvalid\,
      I2 => S_AXI_RREADY,
      I3 => S_AXI_BREADY,
      I4 => \^s_axi_bvalid\,
      O => \state[1]_i_3_n_0\
    );
\state_reg[0]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => I_DECODER_n_8,
      Q => state(0),
      R => rst
    );
\state_reg[1]\: unisim.vcomponents.FDRE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => I_DECODER_n_7,
      Q => state(1),
      R => rst
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_user_logic is
  port (
    \s_axi_rdata_i_reg[24]\ : out STD_LOGIC;
    Q : out STD_LOGIC_VECTOR ( 1 downto 0 );
    data_rdy_bit : out STD_LOGIC;
    SDATA_O : out STD_LOGIC;
    \s_axi_rdata_i_reg[31]\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    \s_axi_rdata_i_reg[31]_0\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    SR : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s_axi_rdata_i_reg[23]\ : out STD_LOGIC_VECTOR ( 23 downto 0 );
    \s_axi_rdata_i_reg[23]_0\ : out STD_LOGIC_VECTOR ( 23 downto 0 );
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\ : in STD_LOGIC;
    Bus_RNW_reg : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\ : in STD_LOGIC;
    S_AXI_ACLK : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ : in STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\ : in STD_LOGIC;
    SDATA_I : in STD_LOGIC;
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\ : in STD_LOGIC_VECTOR ( 0 to 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_user_logic;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_user_logic is
  signal Inst_iis_deser_n_3 : STD_LOGIC;
  signal Inst_iis_deser_n_33 : STD_LOGIC;
  signal Inst_iis_deser_n_34 : STD_LOGIC;
  signal Inst_iis_deser_n_35 : STD_LOGIC;
  signal Inst_iis_deser_n_36 : STD_LOGIC;
  signal Inst_iis_deser_n_37 : STD_LOGIC;
  signal Inst_iis_deser_n_38 : STD_LOGIC;
  signal Inst_iis_deser_n_39 : STD_LOGIC;
  signal Inst_iis_deser_n_40 : STD_LOGIC;
  signal Inst_iis_deser_n_41 : STD_LOGIC;
  signal Inst_iis_deser_n_42 : STD_LOGIC;
  signal Inst_iis_deser_n_43 : STD_LOGIC;
  signal Inst_iis_deser_n_44 : STD_LOGIC;
  signal Inst_iis_deser_n_45 : STD_LOGIC;
  signal Inst_iis_deser_n_46 : STD_LOGIC;
  signal Inst_iis_deser_n_47 : STD_LOGIC;
  signal Inst_iis_deser_n_48 : STD_LOGIC;
  signal Inst_iis_deser_n_49 : STD_LOGIC;
  signal Inst_iis_deser_n_5 : STD_LOGIC;
  signal Inst_iis_deser_n_50 : STD_LOGIC;
  signal Inst_iis_deser_n_51 : STD_LOGIC;
  signal Inst_iis_deser_n_52 : STD_LOGIC;
  signal Inst_iis_deser_n_53 : STD_LOGIC;
  signal Inst_iis_deser_n_54 : STD_LOGIC;
  signal Inst_iis_deser_n_55 : STD_LOGIC;
  signal Inst_iis_deser_n_56 : STD_LOGIC;
  signal Inst_iis_deser_n_6 : STD_LOGIC;
  signal Inst_iis_deser_n_7 : STD_LOGIC;
  signal Inst_iis_deser_n_8 : STD_LOGIC;
  signal Inst_iis_ser_n_1 : STD_LOGIC;
  signal Inst_iis_ser_n_2 : STD_LOGIC;
  signal \^q\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^sr\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \clk_cntr[10]_i_2_n_0\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[0]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[1]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[2]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[3]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[5]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[6]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[7]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[8]\ : STD_LOGIC;
  signal \clk_cntr_reg_n_0_[9]\ : STD_LOGIC;
  signal data_rdy : STD_LOGIC;
  signal \^data_rdy_bit\ : STD_LOGIC;
  signal ldata_reg : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal lrclk_d1 : STD_LOGIC;
  signal p_0_in4_in : STD_LOGIC;
  signal \plusOp__0\ : STD_LOGIC_VECTOR ( 10 downto 0 );
  signal \^s_axi_rdata_i_reg[31]\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^s_axi_rdata_i_reg[31]_0\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal sclk_d1 : STD_LOGIC;
  signal write_bit : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \clk_cntr[1]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \clk_cntr[2]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \clk_cntr[3]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \clk_cntr[4]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \clk_cntr[6]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \clk_cntr[7]_i_1\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \clk_cntr[8]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \clk_cntr[9]_i_1\ : label is "soft_lutpair15";
begin
  Q(1 downto 0) <= \^q\(1 downto 0);
  SR(0) <= \^sr\(0);
  data_rdy_bit <= \^data_rdy_bit\;
  \s_axi_rdata_i_reg[31]\(31 downto 0) <= \^s_axi_rdata_i_reg[31]\(31 downto 0);
  \s_axi_rdata_i_reg[31]_0\(31 downto 0) <= \^s_axi_rdata_i_reg[31]_0\(31 downto 0);
\DataRx_L_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(0),
      Q => \s_axi_rdata_i_reg[23]\(0),
      R => '0'
    );
\DataRx_L_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(10),
      Q => \s_axi_rdata_i_reg[23]\(10),
      R => '0'
    );
\DataRx_L_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(11),
      Q => \s_axi_rdata_i_reg[23]\(11),
      R => '0'
    );
\DataRx_L_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(12),
      Q => \s_axi_rdata_i_reg[23]\(12),
      R => '0'
    );
\DataRx_L_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(13),
      Q => \s_axi_rdata_i_reg[23]\(13),
      R => '0'
    );
\DataRx_L_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(14),
      Q => \s_axi_rdata_i_reg[23]\(14),
      R => '0'
    );
\DataRx_L_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(15),
      Q => \s_axi_rdata_i_reg[23]\(15),
      R => '0'
    );
\DataRx_L_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(16),
      Q => \s_axi_rdata_i_reg[23]\(16),
      R => '0'
    );
\DataRx_L_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(17),
      Q => \s_axi_rdata_i_reg[23]\(17),
      R => '0'
    );
\DataRx_L_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(18),
      Q => \s_axi_rdata_i_reg[23]\(18),
      R => '0'
    );
\DataRx_L_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(19),
      Q => \s_axi_rdata_i_reg[23]\(19),
      R => '0'
    );
\DataRx_L_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(1),
      Q => \s_axi_rdata_i_reg[23]\(1),
      R => '0'
    );
\DataRx_L_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(20),
      Q => \s_axi_rdata_i_reg[23]\(20),
      R => '0'
    );
\DataRx_L_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(21),
      Q => \s_axi_rdata_i_reg[23]\(21),
      R => '0'
    );
\DataRx_L_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(22),
      Q => \s_axi_rdata_i_reg[23]\(22),
      R => '0'
    );
\DataRx_L_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(23),
      Q => \s_axi_rdata_i_reg[23]\(23),
      R => '0'
    );
\DataRx_L_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(2),
      Q => \s_axi_rdata_i_reg[23]\(2),
      R => '0'
    );
\DataRx_L_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(3),
      Q => \s_axi_rdata_i_reg[23]\(3),
      R => '0'
    );
\DataRx_L_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(4),
      Q => \s_axi_rdata_i_reg[23]\(4),
      R => '0'
    );
\DataRx_L_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(5),
      Q => \s_axi_rdata_i_reg[23]\(5),
      R => '0'
    );
\DataRx_L_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(6),
      Q => \s_axi_rdata_i_reg[23]\(6),
      R => '0'
    );
\DataRx_L_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(7),
      Q => \s_axi_rdata_i_reg[23]\(7),
      R => '0'
    );
\DataRx_L_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(8),
      Q => \s_axi_rdata_i_reg[23]\(8),
      R => '0'
    );
\DataRx_L_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => ldata_reg(9),
      Q => \s_axi_rdata_i_reg[23]\(9),
      R => '0'
    );
\DataRx_R_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_56,
      Q => \s_axi_rdata_i_reg[23]_0\(0),
      R => '0'
    );
\DataRx_R_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_46,
      Q => \s_axi_rdata_i_reg[23]_0\(10),
      R => '0'
    );
\DataRx_R_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_45,
      Q => \s_axi_rdata_i_reg[23]_0\(11),
      R => '0'
    );
\DataRx_R_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_44,
      Q => \s_axi_rdata_i_reg[23]_0\(12),
      R => '0'
    );
\DataRx_R_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_43,
      Q => \s_axi_rdata_i_reg[23]_0\(13),
      R => '0'
    );
\DataRx_R_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_42,
      Q => \s_axi_rdata_i_reg[23]_0\(14),
      R => '0'
    );
\DataRx_R_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_41,
      Q => \s_axi_rdata_i_reg[23]_0\(15),
      R => '0'
    );
\DataRx_R_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_40,
      Q => \s_axi_rdata_i_reg[23]_0\(16),
      R => '0'
    );
\DataRx_R_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_39,
      Q => \s_axi_rdata_i_reg[23]_0\(17),
      R => '0'
    );
\DataRx_R_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_38,
      Q => \s_axi_rdata_i_reg[23]_0\(18),
      R => '0'
    );
\DataRx_R_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_37,
      Q => \s_axi_rdata_i_reg[23]_0\(19),
      R => '0'
    );
\DataRx_R_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_55,
      Q => \s_axi_rdata_i_reg[23]_0\(1),
      R => '0'
    );
\DataRx_R_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_36,
      Q => \s_axi_rdata_i_reg[23]_0\(20),
      R => '0'
    );
\DataRx_R_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_35,
      Q => \s_axi_rdata_i_reg[23]_0\(21),
      R => '0'
    );
\DataRx_R_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_34,
      Q => \s_axi_rdata_i_reg[23]_0\(22),
      R => '0'
    );
\DataRx_R_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_33,
      Q => \s_axi_rdata_i_reg[23]_0\(23),
      R => '0'
    );
\DataRx_R_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_54,
      Q => \s_axi_rdata_i_reg[23]_0\(2),
      R => '0'
    );
\DataRx_R_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_53,
      Q => \s_axi_rdata_i_reg[23]_0\(3),
      R => '0'
    );
\DataRx_R_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_52,
      Q => \s_axi_rdata_i_reg[23]_0\(4),
      R => '0'
    );
\DataRx_R_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_51,
      Q => \s_axi_rdata_i_reg[23]_0\(5),
      R => '0'
    );
\DataRx_R_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_50,
      Q => \s_axi_rdata_i_reg[23]_0\(6),
      R => '0'
    );
\DataRx_R_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_49,
      Q => \s_axi_rdata_i_reg[23]_0\(7),
      R => '0'
    );
\DataRx_R_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_48,
      Q => \s_axi_rdata_i_reg[23]_0\(8),
      R => '0'
    );
\DataRx_R_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => data_rdy,
      D => Inst_iis_deser_n_47,
      Q => \s_axi_rdata_i_reg[23]_0\(9),
      R => '0'
    );
\DataTx_L_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(0),
      Q => \^s_axi_rdata_i_reg[31]\(0),
      R => \^sr\(0)
    );
\DataTx_L_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(10),
      Q => \^s_axi_rdata_i_reg[31]\(10),
      R => \^sr\(0)
    );
\DataTx_L_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(11),
      Q => \^s_axi_rdata_i_reg[31]\(11),
      R => \^sr\(0)
    );
\DataTx_L_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(12),
      Q => \^s_axi_rdata_i_reg[31]\(12),
      R => \^sr\(0)
    );
\DataTx_L_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(13),
      Q => \^s_axi_rdata_i_reg[31]\(13),
      R => \^sr\(0)
    );
\DataTx_L_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(14),
      Q => \^s_axi_rdata_i_reg[31]\(14),
      R => \^sr\(0)
    );
\DataTx_L_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(15),
      Q => \^s_axi_rdata_i_reg[31]\(15),
      R => \^sr\(0)
    );
\DataTx_L_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(16),
      Q => \^s_axi_rdata_i_reg[31]\(16),
      R => \^sr\(0)
    );
\DataTx_L_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(17),
      Q => \^s_axi_rdata_i_reg[31]\(17),
      R => \^sr\(0)
    );
\DataTx_L_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(18),
      Q => \^s_axi_rdata_i_reg[31]\(18),
      R => \^sr\(0)
    );
\DataTx_L_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(19),
      Q => \^s_axi_rdata_i_reg[31]\(19),
      R => \^sr\(0)
    );
\DataTx_L_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(1),
      Q => \^s_axi_rdata_i_reg[31]\(1),
      R => \^sr\(0)
    );
\DataTx_L_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(20),
      Q => \^s_axi_rdata_i_reg[31]\(20),
      R => \^sr\(0)
    );
\DataTx_L_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(21),
      Q => \^s_axi_rdata_i_reg[31]\(21),
      R => \^sr\(0)
    );
\DataTx_L_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(22),
      Q => \^s_axi_rdata_i_reg[31]\(22),
      R => \^sr\(0)
    );
\DataTx_L_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(23),
      Q => \^s_axi_rdata_i_reg[31]\(23),
      R => \^sr\(0)
    );
\DataTx_L_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(24),
      Q => \^s_axi_rdata_i_reg[31]\(24),
      R => \^sr\(0)
    );
\DataTx_L_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(25),
      Q => \^s_axi_rdata_i_reg[31]\(25),
      R => \^sr\(0)
    );
\DataTx_L_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(26),
      Q => \^s_axi_rdata_i_reg[31]\(26),
      R => \^sr\(0)
    );
\DataTx_L_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(27),
      Q => \^s_axi_rdata_i_reg[31]\(27),
      R => \^sr\(0)
    );
\DataTx_L_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(28),
      Q => \^s_axi_rdata_i_reg[31]\(28),
      R => \^sr\(0)
    );
\DataTx_L_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(29),
      Q => \^s_axi_rdata_i_reg[31]\(29),
      R => \^sr\(0)
    );
\DataTx_L_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(2),
      Q => \^s_axi_rdata_i_reg[31]\(2),
      R => \^sr\(0)
    );
\DataTx_L_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(30),
      Q => \^s_axi_rdata_i_reg[31]\(30),
      R => \^sr\(0)
    );
\DataTx_L_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(31),
      Q => \^s_axi_rdata_i_reg[31]\(31),
      R => \^sr\(0)
    );
\DataTx_L_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(3),
      Q => \^s_axi_rdata_i_reg[31]\(3),
      R => \^sr\(0)
    );
\DataTx_L_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(4),
      Q => \^s_axi_rdata_i_reg[31]\(4),
      R => \^sr\(0)
    );
\DataTx_L_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(5),
      Q => \^s_axi_rdata_i_reg[31]\(5),
      R => \^sr\(0)
    );
\DataTx_L_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(6),
      Q => \^s_axi_rdata_i_reg[31]\(6),
      R => \^sr\(0)
    );
\DataTx_L_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(7),
      Q => \^s_axi_rdata_i_reg[31]\(7),
      R => \^sr\(0)
    );
\DataTx_L_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(8),
      Q => \^s_axi_rdata_i_reg[31]\(8),
      R => \^sr\(0)
    );
\DataTx_L_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => E(0),
      D => S_AXI_WDATA(9),
      Q => \^s_axi_rdata_i_reg[31]\(9),
      R => \^sr\(0)
    );
\DataTx_R_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(0),
      Q => \^s_axi_rdata_i_reg[31]_0\(0),
      R => \^sr\(0)
    );
\DataTx_R_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(10),
      Q => \^s_axi_rdata_i_reg[31]_0\(10),
      R => \^sr\(0)
    );
\DataTx_R_reg[11]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(11),
      Q => \^s_axi_rdata_i_reg[31]_0\(11),
      R => \^sr\(0)
    );
\DataTx_R_reg[12]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(12),
      Q => \^s_axi_rdata_i_reg[31]_0\(12),
      R => \^sr\(0)
    );
\DataTx_R_reg[13]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(13),
      Q => \^s_axi_rdata_i_reg[31]_0\(13),
      R => \^sr\(0)
    );
\DataTx_R_reg[14]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(14),
      Q => \^s_axi_rdata_i_reg[31]_0\(14),
      R => \^sr\(0)
    );
\DataTx_R_reg[15]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(15),
      Q => \^s_axi_rdata_i_reg[31]_0\(15),
      R => \^sr\(0)
    );
\DataTx_R_reg[16]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(16),
      Q => \^s_axi_rdata_i_reg[31]_0\(16),
      R => \^sr\(0)
    );
\DataTx_R_reg[17]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(17),
      Q => \^s_axi_rdata_i_reg[31]_0\(17),
      R => \^sr\(0)
    );
\DataTx_R_reg[18]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(18),
      Q => \^s_axi_rdata_i_reg[31]_0\(18),
      R => \^sr\(0)
    );
\DataTx_R_reg[19]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(19),
      Q => \^s_axi_rdata_i_reg[31]_0\(19),
      R => \^sr\(0)
    );
\DataTx_R_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(1),
      Q => \^s_axi_rdata_i_reg[31]_0\(1),
      R => \^sr\(0)
    );
\DataTx_R_reg[20]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(20),
      Q => \^s_axi_rdata_i_reg[31]_0\(20),
      R => \^sr\(0)
    );
\DataTx_R_reg[21]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(21),
      Q => \^s_axi_rdata_i_reg[31]_0\(21),
      R => \^sr\(0)
    );
\DataTx_R_reg[22]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(22),
      Q => \^s_axi_rdata_i_reg[31]_0\(22),
      R => \^sr\(0)
    );
\DataTx_R_reg[23]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(23),
      Q => \^s_axi_rdata_i_reg[31]_0\(23),
      R => \^sr\(0)
    );
\DataTx_R_reg[24]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(24),
      Q => \^s_axi_rdata_i_reg[31]_0\(24),
      R => \^sr\(0)
    );
\DataTx_R_reg[25]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(25),
      Q => \^s_axi_rdata_i_reg[31]_0\(25),
      R => \^sr\(0)
    );
\DataTx_R_reg[26]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(26),
      Q => \^s_axi_rdata_i_reg[31]_0\(26),
      R => \^sr\(0)
    );
\DataTx_R_reg[27]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(27),
      Q => \^s_axi_rdata_i_reg[31]_0\(27),
      R => \^sr\(0)
    );
\DataTx_R_reg[28]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(28),
      Q => \^s_axi_rdata_i_reg[31]_0\(28),
      R => \^sr\(0)
    );
\DataTx_R_reg[29]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(29),
      Q => \^s_axi_rdata_i_reg[31]_0\(29),
      R => \^sr\(0)
    );
\DataTx_R_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(2),
      Q => \^s_axi_rdata_i_reg[31]_0\(2),
      R => \^sr\(0)
    );
\DataTx_R_reg[30]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(30),
      Q => \^s_axi_rdata_i_reg[31]_0\(30),
      R => \^sr\(0)
    );
\DataTx_R_reg[31]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(31),
      Q => \^s_axi_rdata_i_reg[31]_0\(31),
      R => \^sr\(0)
    );
\DataTx_R_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(3),
      Q => \^s_axi_rdata_i_reg[31]_0\(3),
      R => \^sr\(0)
    );
\DataTx_R_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(4),
      Q => \^s_axi_rdata_i_reg[31]_0\(4),
      R => \^sr\(0)
    );
\DataTx_R_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(5),
      Q => \^s_axi_rdata_i_reg[31]_0\(5),
      R => \^sr\(0)
    );
\DataTx_R_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(6),
      Q => \^s_axi_rdata_i_reg[31]_0\(6),
      R => \^sr\(0)
    );
\DataTx_R_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(7),
      Q => \^s_axi_rdata_i_reg[31]_0\(7),
      R => \^sr\(0)
    );
\DataTx_R_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(8),
      Q => \^s_axi_rdata_i_reg[31]_0\(8),
      R => \^sr\(0)
    );
\DataTx_R_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0),
      D => S_AXI_WDATA(9),
      Q => \^s_axi_rdata_i_reg[31]_0\(9),
      R => \^sr\(0)
    );
Inst_iis_deser: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_deser
     port map (
      \DataRx_L_reg[23]\(23 downto 0) => ldata_reg(23 downto 0),
      \DataRx_R_reg[23]\(23) => Inst_iis_deser_n_33,
      \DataRx_R_reg[23]\(22) => Inst_iis_deser_n_34,
      \DataRx_R_reg[23]\(21) => Inst_iis_deser_n_35,
      \DataRx_R_reg[23]\(20) => Inst_iis_deser_n_36,
      \DataRx_R_reg[23]\(19) => Inst_iis_deser_n_37,
      \DataRx_R_reg[23]\(18) => Inst_iis_deser_n_38,
      \DataRx_R_reg[23]\(17) => Inst_iis_deser_n_39,
      \DataRx_R_reg[23]\(16) => Inst_iis_deser_n_40,
      \DataRx_R_reg[23]\(15) => Inst_iis_deser_n_41,
      \DataRx_R_reg[23]\(14) => Inst_iis_deser_n_42,
      \DataRx_R_reg[23]\(13) => Inst_iis_deser_n_43,
      \DataRx_R_reg[23]\(12) => Inst_iis_deser_n_44,
      \DataRx_R_reg[23]\(11) => Inst_iis_deser_n_45,
      \DataRx_R_reg[23]\(10) => Inst_iis_deser_n_46,
      \DataRx_R_reg[23]\(9) => Inst_iis_deser_n_47,
      \DataRx_R_reg[23]\(8) => Inst_iis_deser_n_48,
      \DataRx_R_reg[23]\(7) => Inst_iis_deser_n_49,
      \DataRx_R_reg[23]\(6) => Inst_iis_deser_n_50,
      \DataRx_R_reg[23]\(5) => Inst_iis_deser_n_51,
      \DataRx_R_reg[23]\(4) => Inst_iis_deser_n_52,
      \DataRx_R_reg[23]\(3) => Inst_iis_deser_n_53,
      \DataRx_R_reg[23]\(2) => Inst_iis_deser_n_54,
      \DataRx_R_reg[23]\(1) => Inst_iis_deser_n_55,
      \DataRx_R_reg[23]\(0) => Inst_iis_deser_n_56,
      E(0) => data_rdy,
      \FSM_onehot_iis_state_reg[0]\ => Inst_iis_deser_n_6,
      \FSM_onehot_iis_state_reg[0]_0\ => Inst_iis_deser_n_8,
      \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\ => \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\,
      \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ => \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\,
      Q(1 downto 0) => \^q\(1 downto 0),
      SDATA_I => SDATA_I,
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARESETN => S_AXI_ARESETN,
      \bit_cntr_reg[4]_0\(0) => write_bit,
      data_rdy_bit => \^data_rdy_bit\,
      data_rdy_bit_reg => Inst_iis_deser_n_7,
      lrclk_d1 => lrclk_d1,
      \out\(2) => Inst_iis_ser_n_1,
      \out\(1) => Inst_iis_ser_n_2,
      \out\(0) => p_0_in4_in,
      \rdata_reg_reg[23]_0\(0) => Inst_iis_deser_n_3,
      sclk_d1 => sclk_d1,
      sdata_reg_reg => Inst_iis_deser_n_5
    );
Inst_iis_ser: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_iis_ser
     port map (
      \DataTx_L_reg[23]\(23 downto 0) => \^s_axi_rdata_i_reg[31]\(23 downto 0),
      \DataTx_R_reg[23]\(23 downto 0) => \^s_axi_rdata_i_reg[31]_0\(23 downto 0),
      E(0) => Inst_iis_deser_n_3,
      Q(1 downto 0) => \^q\(1 downto 0),
      SDATA_O => SDATA_O,
      S_AXI_ACLK => S_AXI_ACLK,
      \clk_cntr_reg[4]\ => Inst_iis_deser_n_5,
      lrclk_d1 => lrclk_d1,
      lrclk_d1_reg => Inst_iis_deser_n_8,
      lrclk_d1_reg_0 => Inst_iis_deser_n_6,
      \out\(2) => Inst_iis_ser_n_1,
      \out\(1) => Inst_iis_ser_n_2,
      \out\(0) => p_0_in4_in,
      sclk_d1 => sclk_d1,
      sclk_d1_reg(0) => write_bit
    );
\clk_cntr[0]_i_1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[0]\,
      O => \plusOp__0\(0)
    );
\clk_cntr[10]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F7FFFFFF08000000"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[9]\,
      I1 => \clk_cntr_reg_n_0_[7]\,
      I2 => \clk_cntr[10]_i_2_n_0\,
      I3 => \clk_cntr_reg_n_0_[6]\,
      I4 => \clk_cntr_reg_n_0_[8]\,
      I5 => \^q\(1),
      O => \plusOp__0\(10)
    );
\clk_cntr[10]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7FFFFFFFFFFFFFFF"
    )
        port map (
      I0 => \^q\(0),
      I1 => \clk_cntr_reg_n_0_[2]\,
      I2 => \clk_cntr_reg_n_0_[0]\,
      I3 => \clk_cntr_reg_n_0_[1]\,
      I4 => \clk_cntr_reg_n_0_[3]\,
      I5 => \clk_cntr_reg_n_0_[5]\,
      O => \clk_cntr[10]_i_2_n_0\
    );
\clk_cntr[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[0]\,
      I1 => \clk_cntr_reg_n_0_[1]\,
      O => \plusOp__0\(1)
    );
\clk_cntr[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[1]\,
      I1 => \clk_cntr_reg_n_0_[0]\,
      I2 => \clk_cntr_reg_n_0_[2]\,
      O => \plusOp__0\(2)
    );
\clk_cntr[3]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7F80"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[2]\,
      I1 => \clk_cntr_reg_n_0_[0]\,
      I2 => \clk_cntr_reg_n_0_[1]\,
      I3 => \clk_cntr_reg_n_0_[3]\,
      O => \plusOp__0\(3)
    );
\clk_cntr[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"7FFF8000"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[3]\,
      I1 => \clk_cntr_reg_n_0_[1]\,
      I2 => \clk_cntr_reg_n_0_[0]\,
      I3 => \clk_cntr_reg_n_0_[2]\,
      I4 => \^q\(0),
      O => \plusOp__0\(4)
    );
\clk_cntr[5]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7FFFFFFF80000000"
    )
        port map (
      I0 => \^q\(0),
      I1 => \clk_cntr_reg_n_0_[2]\,
      I2 => \clk_cntr_reg_n_0_[0]\,
      I3 => \clk_cntr_reg_n_0_[1]\,
      I4 => \clk_cntr_reg_n_0_[3]\,
      I5 => \clk_cntr_reg_n_0_[5]\,
      O => \plusOp__0\(5)
    );
\clk_cntr[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => \clk_cntr[10]_i_2_n_0\,
      I1 => \clk_cntr_reg_n_0_[6]\,
      O => \plusOp__0\(6)
    );
\clk_cntr[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"D2"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[6]\,
      I1 => \clk_cntr[10]_i_2_n_0\,
      I2 => \clk_cntr_reg_n_0_[7]\,
      O => \plusOp__0\(7)
    );
\clk_cntr[8]_i_1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"DF20"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[7]\,
      I1 => \clk_cntr[10]_i_2_n_0\,
      I2 => \clk_cntr_reg_n_0_[6]\,
      I3 => \clk_cntr_reg_n_0_[8]\,
      O => \plusOp__0\(8)
    );
\clk_cntr[9]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F7FF0800"
    )
        port map (
      I0 => \clk_cntr_reg_n_0_[8]\,
      I1 => \clk_cntr_reg_n_0_[6]\,
      I2 => \clk_cntr[10]_i_2_n_0\,
      I3 => \clk_cntr_reg_n_0_[7]\,
      I4 => \clk_cntr_reg_n_0_[9]\,
      O => \plusOp__0\(9)
    );
\clk_cntr_reg[0]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(0),
      Q => \clk_cntr_reg_n_0_[0]\,
      R => '0'
    );
\clk_cntr_reg[10]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(10),
      Q => \^q\(1),
      R => '0'
    );
\clk_cntr_reg[1]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(1),
      Q => \clk_cntr_reg_n_0_[1]\,
      R => '0'
    );
\clk_cntr_reg[2]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(2),
      Q => \clk_cntr_reg_n_0_[2]\,
      R => '0'
    );
\clk_cntr_reg[3]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(3),
      Q => \clk_cntr_reg_n_0_[3]\,
      R => '0'
    );
\clk_cntr_reg[4]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(4),
      Q => \^q\(0),
      R => '0'
    );
\clk_cntr_reg[5]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(5),
      Q => \clk_cntr_reg_n_0_[5]\,
      R => '0'
    );
\clk_cntr_reg[6]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(6),
      Q => \clk_cntr_reg_n_0_[6]\,
      R => '0'
    );
\clk_cntr_reg[7]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(7),
      Q => \clk_cntr_reg_n_0_[7]\,
      R => '0'
    );
\clk_cntr_reg[8]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(8),
      Q => \clk_cntr_reg_n_0_[8]\,
      R => '0'
    );
\clk_cntr_reg[9]\: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => \plusOp__0\(9),
      Q => \clk_cntr_reg_n_0_[9]\,
      R => '0'
    );
data_rdy_bit_reg: unisim.vcomponents.FDRE
    generic map(
      INIT => '0'
    )
        port map (
      C => S_AXI_ACLK,
      CE => '1',
      D => Inst_iis_deser_n_7,
      Q => \^data_rdy_bit\,
      R => '0'
    );
rst_i_1: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => S_AXI_ARESETN,
      O => \^sr\(0)
    );
slv_ip2bus_data: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000400040448"
    )
        port map (
      I0 => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\,
      I1 => Bus_RNW_reg,
      I2 => \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      I3 => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      I4 => \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\,
      I5 => \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\,
      O => \s_axi_rdata_i_reg[24]\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_axi_lite_ipif is
  port (
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\ : out STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ : out STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ : out STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\ : out STD_LOGIC;
    \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\ : out STD_LOGIC;
    Bus_RNW_reg : out STD_LOGIC;
    S_AXI_RVALID : out STD_LOGIC;
    S_AXI_BVALID : out STD_LOGIC;
    data_rdy_bit_reg : out STD_LOGIC;
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    \DataTx_L_reg[0]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    data_rdy_bit_reg_0 : out STD_LOGIC;
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    SR : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_WVALID : in STD_LOGIC;
    data_rdy_bit : in STD_LOGIC;
    Q : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataTx_L_reg[31]\ : in STD_LOGIC_VECTOR ( 31 downto 0 );
    \DataRx_R_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \DataRx_L_reg[23]\ : in STD_LOGIC_VECTOR ( 23 downto 0 );
    \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_axi_lite_ipif;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_axi_lite_ipif is
begin
I_SLAVE_ATTACHMENT: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_slave_attachment
     port map (
      \DataRx_L_reg[23]\(23 downto 0) => \DataRx_L_reg[23]\(23 downto 0),
      \DataRx_R_reg[23]\(23 downto 0) => \DataRx_R_reg[23]\(23 downto 0),
      \DataTx_L_reg[0]\(0) => \DataTx_L_reg[0]\(0),
      \DataTx_L_reg[31]\(31 downto 0) => \DataTx_L_reg[31]\(31 downto 0),
      \DataTx_R_reg[0]\ => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\,
      \DataTx_R_reg[0]_0\ => \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      \DataTx_R_reg[0]_1\ => \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      \DataTx_R_reg[0]_2\ => \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\,
      \DataTx_R_reg[0]_3\ => \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\,
      \DataTx_R_reg[0]_4\ => Bus_RNW_reg,
      E(0) => E(0),
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ => \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\,
      Q(31 downto 0) => Q(31 downto 0),
      SR(0) => SR(0),
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARADDR(2 downto 0) => S_AXI_ARADDR(2 downto 0),
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_AWADDR(2 downto 0) => S_AXI_AWADDR(2 downto 0),
      S_AXI_AWREADY => S_AXI_AWREADY,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_BVALID => S_AXI_BVALID,
      S_AXI_RDATA(31 downto 0) => S_AXI_RDATA(31 downto 0),
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_RVALID => S_AXI_RVALID,
      S_AXI_WVALID => S_AXI_WVALID,
      data_rdy_bit => data_rdy_bit,
      data_rdy_bit_reg => data_rdy_bit_reg,
      data_rdy_bit_reg_0 => data_rdy_bit_reg_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_i2s_ctrl is
  port (
    \out\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    S_AXI_BVALID : out STD_LOGIC;
    S_AXI_RVALID : out STD_LOGIC;
    SDATA_O : out STD_LOGIC;
    S_AXI_ACLK : in STD_LOGIC;
    SDATA_I : in STD_LOGIC;
    S_AXI_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 2 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_WVALID : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_i2s_ctrl;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_i2s_ctrl is
  signal AXI_LITE_IPIF_I_n_11 : STD_LOGIC;
  signal AXI_LITE_IPIF_I_n_12 : STD_LOGIC;
  signal AXI_LITE_IPIF_I_n_13 : STD_LOGIC;
  signal AXI_LITE_IPIF_I_n_8 : STD_LOGIC;
  signal DataRx_L : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal DataRx_R : STD_LOGIC_VECTOR ( 23 downto 0 );
  signal DataTx_L : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal DataTx_R : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg\ : STD_LOGIC;
  signal \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\ : STD_LOGIC;
  signal \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\ : STD_LOGIC;
  signal \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ : STD_LOGIC;
  signal \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ : STD_LOGIC;
  signal \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\ : STD_LOGIC;
  signal USER_LOGIC_I_n_0 : STD_LOGIC;
  signal USER_LOGIC_I_n_69 : STD_LOGIC;
  signal data_rdy_bit : STD_LOGIC;
begin
AXI_LITE_IPIF_I: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_axi_lite_ipif
     port map (
      Bus_RNW_reg => \I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg\,
      \DataRx_L_reg[23]\(23 downto 0) => DataRx_L(23 downto 0),
      \DataRx_R_reg[23]\(23 downto 0) => DataRx_R(23 downto 0),
      \DataTx_L_reg[0]\(0) => AXI_LITE_IPIF_I_n_12,
      \DataTx_L_reg[31]\(31 downto 0) => DataTx_L(31 downto 0),
      E(0) => AXI_LITE_IPIF_I_n_11,
      \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ => USER_LOGIC_I_n_0,
      Q(31 downto 0) => DataTx_R(31 downto 0),
      SR(0) => USER_LOGIC_I_n_69,
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARADDR(2 downto 0) => S_AXI_ARADDR(2 downto 0),
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_AWADDR(2 downto 0) => S_AXI_AWADDR(2 downto 0),
      S_AXI_AWREADY => S_AXI_AWREADY,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_BVALID => S_AXI_BVALID,
      S_AXI_RDATA(31 downto 0) => S_AXI_RDATA(31 downto 0),
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_RVALID => S_AXI_RVALID,
      S_AXI_WVALID => S_AXI_WVALID,
      data_rdy_bit => data_rdy_bit,
      data_rdy_bit_reg => AXI_LITE_IPIF_I_n_8,
      data_rdy_bit_reg_0 => AXI_LITE_IPIF_I_n_13
    );
USER_LOGIC_I: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_user_logic
     port map (
      Bus_RNW_reg => \I_SLAVE_ATTACHMENT/I_DECODER/Bus_RNW_reg\,
      E(0) => AXI_LITE_IPIF_I_n_12,
      \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[0].ce_out_i_reg[0]\ => AXI_LITE_IPIF_I_n_8,
      \GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[1].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[2].ce_out_i_reg[2]\(0) => AXI_LITE_IPIF_I_n_11,
      \GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[3].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\ => \I_SLAVE_ATTACHMENT/I_DECODER/GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg\,
      \GEN_BKEND_CE_REGISTERS[4].ce_out_i_reg[4]\ => AXI_LITE_IPIF_I_n_13,
      Q(1 downto 0) => \out\(1 downto 0),
      SDATA_I => SDATA_I,
      SDATA_O => SDATA_O,
      SR(0) => USER_LOGIC_I_n_69,
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_WDATA(31 downto 0) => S_AXI_WDATA(31 downto 0),
      data_rdy_bit => data_rdy_bit,
      \s_axi_rdata_i_reg[23]\(23 downto 0) => DataRx_L(23 downto 0),
      \s_axi_rdata_i_reg[23]_0\(23 downto 0) => DataRx_R(23 downto 0),
      \s_axi_rdata_i_reg[24]\ => USER_LOGIC_I_n_0,
      \s_axi_rdata_i_reg[31]\(31 downto 0) => DataTx_L(31 downto 0),
      \s_axi_rdata_i_reg[31]_0\(31 downto 0) => DataTx_R(31 downto 0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
    BCLK : out STD_LOGIC;
    LRCLK : out STD_LOGIC;
    SDATA_I : in STD_LOGIC;
    SDATA_O : out STD_LOGIC;
    S_AXI_ACLK : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    S_AXI_WVALID : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_RVALID : out STD_LOGIC;
    S_AXI_WREADY : out STD_LOGIC;
    S_AXI_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_BVALID : out STD_LOGIC;
    S_AXI_AWREADY : out STD_LOGIC
  );
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "ip_design_zed_audio_ctrl_0_0,i2s_ctrl,{}";
  attribute downgradeipidentifiedwarnings : string;
  attribute downgradeipidentifiedwarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute x_core_info : string;
  attribute x_core_info of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "i2s_ctrl,Vivado 2017.3";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal \<const0>\ : STD_LOGIC;
  signal \^s_axi_awready\ : STD_LOGIC;
  attribute max_fanout : string;
  attribute max_fanout of S_AXI_ACLK : signal is "10000";
  attribute sigis : string;
  attribute sigis of S_AXI_ACLK : signal is "Clk";
  attribute x_interface_info : string;
  attribute x_interface_info of S_AXI_ACLK : signal is "xilinx.com:signal:clock:1.0 S_AXI_signal_clock CLK";
  attribute x_interface_parameter : string;
  attribute x_interface_parameter of S_AXI_ACLK : signal is "XIL_INTERFACENAME S_AXI_signal_clock, ASSOCIATED_BUSIF S_AXI, ASSOCIATED_RESET S_AXI_ARESETN, FREQ_HZ 100000000, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0";
  attribute max_fanout of S_AXI_ARESETN : signal is "10000";
  attribute sigis of S_AXI_ARESETN : signal is "Rst";
  attribute x_interface_info of S_AXI_ARESETN : signal is "xilinx.com:signal:reset:1.0 S_AXI_signal_reset RST";
  attribute x_interface_parameter of S_AXI_ARESETN : signal is "XIL_INTERFACENAME S_AXI_signal_reset, POLARITY ACTIVE_LOW";
  attribute x_interface_info of S_AXI_ARREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARREADY";
  attribute x_interface_info of S_AXI_ARVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARVALID";
  attribute x_interface_info of S_AXI_AWREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWREADY";
  attribute x_interface_info of S_AXI_AWVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWVALID";
  attribute x_interface_info of S_AXI_BREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI BREADY";
  attribute x_interface_info of S_AXI_BVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI BVALID";
  attribute x_interface_info of S_AXI_RREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI RREADY";
  attribute x_interface_info of S_AXI_RVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI RVALID";
  attribute x_interface_info of S_AXI_WREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI WREADY";
  attribute x_interface_info of S_AXI_WVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI WVALID";
  attribute x_interface_info of S_AXI_ARADDR : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARADDR";
  attribute x_interface_info of S_AXI_AWADDR : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWADDR";
  attribute x_interface_parameter of S_AXI_AWADDR : signal is "XIL_INTERFACENAME S_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 100000000, ID_WIDTH 0, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ip_design_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0";
  attribute x_interface_info of S_AXI_BRESP : signal is "xilinx.com:interface:aximm:1.0 S_AXI BRESP";
  attribute x_interface_info of S_AXI_RDATA : signal is "xilinx.com:interface:aximm:1.0 S_AXI RDATA";
  attribute x_interface_info of S_AXI_RRESP : signal is "xilinx.com:interface:aximm:1.0 S_AXI RRESP";
  attribute x_interface_info of S_AXI_WDATA : signal is "xilinx.com:interface:aximm:1.0 S_AXI WDATA";
  attribute x_interface_info of S_AXI_WSTRB : signal is "xilinx.com:interface:aximm:1.0 S_AXI WSTRB";
begin
  S_AXI_AWREADY <= \^s_axi_awready\;
  S_AXI_BRESP(1) <= \<const0>\;
  S_AXI_BRESP(0) <= \<const0>\;
  S_AXI_RRESP(1) <= \<const0>\;
  S_AXI_RRESP(0) <= \<const0>\;
  S_AXI_WREADY <= \^s_axi_awready\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
U0: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_i2s_ctrl
     port map (
      SDATA_I => SDATA_I,
      SDATA_O => SDATA_O,
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARADDR(2 downto 0) => S_AXI_ARADDR(4 downto 2),
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_AWADDR(2 downto 0) => S_AXI_AWADDR(4 downto 2),
      S_AXI_AWREADY => \^s_axi_awready\,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_BVALID => S_AXI_BVALID,
      S_AXI_RDATA(31 downto 0) => S_AXI_RDATA(31 downto 0),
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_RVALID => S_AXI_RVALID,
      S_AXI_WDATA(31 downto 0) => S_AXI_WDATA(31 downto 0),
      S_AXI_WVALID => S_AXI_WVALID,
      \out\(1) => LRCLK,
      \out\(0) => BCLK
    );
end STRUCTURE;
