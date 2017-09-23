vlib work
vlib riviera

vlib riviera/xil_defaultlib
vlib riviera/xpm
vlib riviera/axi_lite_ipif_v3_0_4
vlib riviera/lib_cdc_v1_0_2
vlib riviera/interrupt_control_v3_1_4
vlib riviera/axi_gpio_v2_0_15
vlib riviera/lib_pkg_v1_0_2
vlib riviera/axi_timer_v2_0_15
vlib riviera/blk_mem_gen_v8_3_6
vlib riviera/axi_bram_ctrl_v4_0_11
vlib riviera/proc_sys_reset_v5_0_11
vlib riviera/generic_baseblocks_v2_1_0
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_register_slice_v2_1_13
vlib riviera/fifo_generator_v13_1_4
vlib riviera/axi_data_fifo_v2_1_12
vlib riviera/axi_crossbar_v2_1_14
vlib riviera/xlconcat_v2_1_1
vlib riviera/xil_common_vip_v1_0_0
vlib riviera/smartconnect_v1_0
vlib riviera/axi_protocol_checker_v1_1_14
vlib riviera/axi_vip_v1_0_2
vlib riviera/axi_vip_v1_0_1
vlib riviera/axi_protocol_converter_v2_1_13

vmap xil_defaultlib riviera/xil_defaultlib
vmap xpm riviera/xpm
vmap axi_lite_ipif_v3_0_4 riviera/axi_lite_ipif_v3_0_4
vmap lib_cdc_v1_0_2 riviera/lib_cdc_v1_0_2
vmap interrupt_control_v3_1_4 riviera/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_15 riviera/axi_gpio_v2_0_15
vmap lib_pkg_v1_0_2 riviera/lib_pkg_v1_0_2
vmap axi_timer_v2_0_15 riviera/axi_timer_v2_0_15
vmap blk_mem_gen_v8_3_6 riviera/blk_mem_gen_v8_3_6
vmap axi_bram_ctrl_v4_0_11 riviera/axi_bram_ctrl_v4_0_11
vmap proc_sys_reset_v5_0_11 riviera/proc_sys_reset_v5_0_11
vmap generic_baseblocks_v2_1_0 riviera/generic_baseblocks_v2_1_0
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_13 riviera/axi_register_slice_v2_1_13
vmap fifo_generator_v13_1_4 riviera/fifo_generator_v13_1_4
vmap axi_data_fifo_v2_1_12 riviera/axi_data_fifo_v2_1_12
vmap axi_crossbar_v2_1_14 riviera/axi_crossbar_v2_1_14
vmap xlconcat_v2_1_1 riviera/xlconcat_v2_1_1
vmap xil_common_vip_v1_0_0 riviera/xil_common_vip_v1_0_0
vmap smartconnect_v1_0 riviera/smartconnect_v1_0
vmap axi_protocol_checker_v1_1_14 riviera/axi_protocol_checker_v1_1_14
vmap axi_vip_v1_0_2 riviera/axi_vip_v1_0_2
vmap axi_vip_v1_0_1 riviera/axi_vip_v1_0_1
vmap axi_protocol_converter_v2_1_13 riviera/axi_protocol_converter_v2_1_13

vlog -work xil_defaultlib  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -93 \
"C:/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work axi_lite_ipif_v3_0_4 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/0ba0/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work lib_cdc_v1_0_2 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/52cb/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work interrupt_control_v3_1_4 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/e956/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_15 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/cb07/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_axi_gpio_0_0/sim/zqynq_lab_1_design_axi_gpio_0_0.vhd" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_axi_gpio_1_0/sim/zqynq_lab_1_design_axi_gpio_1_0.vhd" \

vcom -work lib_pkg_v1_0_2 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/832a/hdl/lib_pkg_v1_0_rfs.vhd" \

vcom -work axi_timer_v2_0_15 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/a004/hdl/axi_timer_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_axi_timer_0_0/sim/zqynq_lab_1_design_axi_timer_0_0.vhd" \

vlog -work blk_mem_gen_v8_3_6  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/4158/simulation/blk_mem_gen_v8_3.v" \

vcom -work axi_bram_ctrl_v4_0_11 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/9183/hdl/axi_bram_ctrl_v4_0_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_axi_bram_ctrl_0_0/sim/zqynq_lab_1_design_axi_bram_ctrl_0_0.vhd" \

vcom -work proc_sys_reset_v5_0_11 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/5db7/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93 \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_rst_ps7_0_100M_0/sim/zqynq_lab_1_design_rst_ps7_0_100M_0.vhd" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_axi_bram_ctrl_0_bram_0/sim/zqynq_lab_1_design_axi_bram_ctrl_0_bram_0.v" \

vlog -work generic_baseblocks_v2_1_0  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/f9c1/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_13  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/55c0/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_1_4  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/ebc2/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_1_4 -93 \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.vhd" \

vlog -work fifo_generator_v13_1_4  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/ebc2/hdl/fifo_generator_v13_1_rfs.v" \

vlog -work axi_data_fifo_v2_1_12  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/95b9/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_14  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/f582/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_xbar_0/sim/zqynq_lab_1_design_xbar_0.v" \
"../../../bd/zqynq_lab_1_design/hdl/zqynq_lab_1_design.v" \

vlog -work xlconcat_v2_1_1  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/73b7/hdl/xlconcat_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_xlconcat_0_0/sim/zqynq_lab_1_design_xlconcat_0_0.v" \

vlog -work xil_common_vip_v1_0_0  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl/xil_common_vip_v1_0_vl_rfs.sv" \

vlog -work smartconnect_v1_0  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/sc_util_v1_0_vl_rfs.sv" \

vlog -work axi_protocol_checker_v1_1_14  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/a1b2/hdl/axi_protocol_checker_v1_1_vl_rfs.sv" \

vlog -work axi_vip_v1_0_2  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl/axi_vip_v1_0_vl_rfs.sv" \

vlog -work axi_vip_v1_0_1  -sv2k12 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_processing_system7_0_1/sim/zqynq_lab_1_design_processing_system7_0_1.v" \

vlog -work axi_protocol_converter_v2_1_13  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/f0ae/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/7e3a/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/2ad9/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/39ca/hdl/verilog" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/6eb1/hdl" "+incdir+../../../../my_lab_1.srcs/sources_1/bd/zqynq_lab_1_design/ipshared/1d61/hdl" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_auto_pc_2/sim/zqynq_lab_1_design_auto_pc_2.v" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_auto_pc_1/sim/zqynq_lab_1_design_auto_pc_1.v" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_auto_pc_0/sim/zqynq_lab_1_design_auto_pc_0.v" \
"../../../bd/zqynq_lab_1_design/ip/zqynq_lab_1_design_auto_pc_3/sim/zqynq_lab_1_design_auto_pc_3.v" \

vlog -work xil_defaultlib \
"glbl.v"

