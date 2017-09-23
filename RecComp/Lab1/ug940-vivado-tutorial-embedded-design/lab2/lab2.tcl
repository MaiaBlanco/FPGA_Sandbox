create_project lab2 ./lab2 -part xc7z020clg484-1
set_property board_part xilinx.com:zc702:part0:1.2 [current_project]
set_property target_language VHDL [current_project]
create_bd_design "zynq_processor_system"
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0
endgroup
apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {make_external "FIXED_IO, DDR" apply_board_preset "1" Master "Enable" Slave "Enable" }  [get_bd_cells processing_system7_0]
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 axi_gpio_0
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_0
endgroup
startgroup
apply_bd_automation -rule xilinx.com:bd_rule:trigger -config {ila_conn "Auto" }  [get_bd_intf_pins processing_system7_0/TRIGGER_IN_0]
apply_bd_automation -rule xilinx.com:bd_rule:trigger -config {ila_conn "Auto" }  [get_bd_intf_pins processing_system7_0/TRIGGER_OUT_0]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins axi_gpio_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:board -config {Board_Interface "leds_4bits ( LED ) " }  [get_bd_intf_pins axi_gpio_0/GPIO]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins axi_bram_ctrl_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "New Blk_Mem_Gen" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTA]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "Blk_Mem_Gen of BRAM_PORTA" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTB]
endgroup
set_property range 64K [get_bd_addr_segs {processing_system7_0/Data/SEG_axi_bram_ctrl_0_Mem0}]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {axi_gpio_0_GPIO }]
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {ps7_0_axi_periph_M00_AXI }]
startgroup
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
   [get_bd_intf_nets ps7_0_axi_periph_M00_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/processing_system7_0/FCLK_CLK0" SYSTEM_ILA "Auto" APC_EN "0" } \
   [get_bd_intf_nets axi_gpio_0_GPIO] {NON_AXI_SIGNALS "Data and Trigger" CLK_SRC "/processing_system7_0/FCLK_CLK0" SYSTEM_ILA "Auto" } \
]
endgroup
regenerate_bd_layout
validate_bd_design
save_bd_design
generate_target all [get_files  ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd]
export_ip_user_files -of_objects [get_files ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd]
launch_runs  {zynq_processor_system_processing_system7_0_0_synth_1 zynq_processor_system_axi_gpio_0_0_synth_1 zynq_processor_system_axi_bram_ctrl_0_0_synth_1 zynq_processor_system_system_ila_0_synth_1 zynq_processor_system_rst_ps7_0_50M_0_synth_1 zynq_processor_system_xbar_0_synth_1 zynq_processor_system_axi_bram_ctrl_0_bram_0_synth_1 zynq_processor_system_auto_pc_0_synth_1 zynq_processor_system_auto_pc_1_synth_1}
export_simulation -of_objects [get_files ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd] -directory ./lab2/lab2.ip_user_files/sim_scripts -ip_user_files_dir ./lab2/lab2.ip_user_files -ipstatic_source_dir ./lab2/lab2.ip_user_files/ipstatic -lib_map_path [list {modelsim=./lab2/lab2.cache/compile_simlib/modelsim} {questa=./lab2/lab2.cache/compile_simlib/questa} {riviera=./lab2/lab2.cache/compile_simlib/riviera} {activehdl=./lab2/lab2.cache/compile_simlib/activehdl}] -use_ip_compiled_libs -force -quiet
# export_simulation -of_objects [get_files ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd] -directory ./lab2/lab2.ip_user_files/sim_scripts -ip_user_files_dir ./lab2/lab2.ip_user_files -ipstatic_source_dir ./lab2/lab2.ip_user_files/ipstatic -use_ip_compiled_libs -force -quiet
make_wrapper -files [get_files ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/zynq_processor_system.bd] -top
add_files -norecurse ./lab2/lab2.srcs/sources_1/bd/zynq_processor_system/hdl/zynq_processor_system_wrapper.vhd
update_compile_order -fileset sources_1
update_compile_order -fileset sim_1
launch_runs impl_1 -to_step write_bitstream
wait_on_run impl_1
open_run impl_1
file mkdir ./lab2/lab2.sdk
file copy -force ./lab2/lab2.runs/impl_1/zynq_processor_system_wrapper.sysdef ./lab2/lab2.sdk/zynq_processor_system_wrapper.hdf
launch_sdk -workspace ./lab2/lab2.sdk -hwspec ./lab2/lab2.sdk/zynq_processor_system_wrapper.hdf
