-makelib ies/xil_defaultlib -sv \
  "C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies/xpm \
  "C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies/axi_infrastructure_v1_1_0 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/7e3a/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib ies/xil_common_vip_v1_0_0 -sv \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/2ad9/hdl/xil_common_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/smartconnect_v1_0 -sv \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/39ca/hdl/sc_util_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/axi_protocol_checker_v1_1_14 -sv \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/a1b2/hdl/axi_protocol_checker_v1_1_vl_rfs.sv" \
-endlib
-makelib ies/axi_vip_v1_0_2 -sv \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/6eb1/hdl/axi_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/axi_vip_v1_0_1 -sv \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/1d61/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_processing_system7_0_2/sim/zynq_design_1_processing_system7_0_2.v" \
-endlib
-makelib ies/axi_lite_ipif_v3_0_4 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/0ba0/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies/lib_cdc_v1_0_2 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/52cb/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib ies/interrupt_control_v3_1_4 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/e956/hdl/interrupt_control_v3_1_vh_rfs.vhd" \
-endlib
-makelib ies/axi_gpio_v2_0_15 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/cb07/hdl/axi_gpio_v2_0_vh_rfs.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_axi_gpio_0_1/sim/zynq_design_1_axi_gpio_0_1.vhd" \
-endlib
-makelib ies/blk_mem_gen_v8_3_6 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/4158/simulation/blk_mem_gen_v8_3.v" \
-endlib
-makelib ies/axi_bram_ctrl_v4_0_11 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/9183/hdl/axi_bram_ctrl_v4_0_rfs.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_axi_bram_ctrl_0_1/sim/zynq_design_1_axi_bram_ctrl_0_1.vhd" \
-endlib
-makelib ies/proc_sys_reset_v5_0_11 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/5db7/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_rst_ps7_0_100M_1/sim/zynq_design_1_rst_ps7_0_100M_1.vhd" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_axi_bram_ctrl_0_bram_0/sim/zynq_design_1_axi_bram_ctrl_0_bram_0.v" \
-endlib
-makelib ies/generic_baseblocks_v2_1_0 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/f9c1/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib ies/axi_register_slice_v2_1_13 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/55c0/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/ebc2/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.vhd" \
-endlib
-makelib ies/fifo_generator_v13_1_4 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.v" \
-endlib
-makelib ies/axi_data_fifo_v2_1_12 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/95b9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib ies/axi_crossbar_v2_1_14 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/f582/hdl/axi_crossbar_v2_1_vl_rfs.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_xbar_0/sim/zynq_design_1_xbar_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_0/sim/bd_c3fe_ila_lib_0.v" \
-endlib
-makelib ies/gigantic_mux \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/c0d4/hdl/gigantic_mux_v1_0_cntr.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_1/bd_c3fe_g_inst_0_gigantic_mux.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_1/sim/bd_c3fe_g_inst_0.v" \
-endlib
-makelib ies/xlconcat_v2_1_1 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/73b7/hdl/xlconcat_v2_1_vl_rfs.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_2/sim/bd_c3fe_slot_0_aw_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_3/sim/bd_c3fe_slot_0_w_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_4/sim/bd_c3fe_slot_0_b_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_5/sim/bd_c3fe_slot_0_ar_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/ip/ip_6/sim/bd_c3fe_slot_0_r_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/bd_0/hdl/bd_c3fe.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_system_ila_0_0/sim/zynq_design_1_system_ila_0_0.v" \
-endlib
-makelib ies/axi_protocol_converter_v2_1_13 \
  "../../../../embedded_lab_1.srcs/sources_1/bd/zynq_design_1/ipshared/f0ae/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies/xil_defaultlib \
  "../../../bd/zynq_design_1/ip/zynq_design_1_auto_pc_0/sim/zynq_design_1_auto_pc_0.v" \
  "../../../bd/zynq_design_1/ip/zynq_design_1_auto_pc_1/sim/zynq_design_1_auto_pc_1.v" \
  "../../../bd/zynq_design_1/hdl/zynq_design_1.v" \
-endlib
-makelib ies/xil_defaultlib \
  glbl.v
-endlib

