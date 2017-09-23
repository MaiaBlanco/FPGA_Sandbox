create_project lab1 ./lab1 -part xc7z020clg484-1
set_property board_part xilinx.com:zc702:part0:1.2 [current_project]
set_property target_language VHDL [current_project]
create_bd_design "zynq_design_1"
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0
endgroup
apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {make_external "FIXED_IO, DDR" apply_board_preset "1" Master "Disable" Slave "Disable" }  [get_bd_cells processing_system7_0]
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 axi_gpio_0
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_0
endgroup
startgroup
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins axi_gpio_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:board -config {Board_Interface "leds_4bits ( LED ) " }  [get_bd_intf_pins axi_gpio_0/GPIO]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins axi_bram_ctrl_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "New Blk_Mem_Gen" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTA]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "Blk_Mem_Gen of BRAM_PORTA" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTB]
endgroup
set_property range 64K [get_bd_addr_segs {processing_system7_0/Data/SEG_axi_bram_ctrl_0_Mem0}]
regenerate_bd_layout
save_bd_design
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {ps7_0_axi_periph_M00_AXI }]
startgroup
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
                                                          [get_bd_intf_nets ps7_0_axi_periph_M00_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/processing_system7_0/FCLK_CLK0" SYSTEM_ILA "Auto" APC_EN "0" } \
                                                         ]
endgroup
validate_bd_design
save_bd_design
generate_target all [get_files  ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/zynq_design_1.bd]
export_ip_user_files -of_objects [get_files ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/zynq_design_1.bd] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/zynq_design_1.bd]
launch_runs -jobs 4 {zynq_design_1_processing_system7_0_0_synth_1 zynq_design_1_axi_gpio_0_0_synth_1 zynq_design_1_axi_bram_ctrl_0_0_synth_1 zynq_design_1_rst_ps7_0_50M_0_synth_1 zynq_design_1_xbar_0_synth_1 zynq_design_1_axi_bram_ctrl_0_bram_0_synth_1 zynq_design_1_system_ila_0_synth_1 zynq_design_1_auto_pc_0_synth_1 zynq_design_1_auto_pc_1_synth_1}
export_simulation -of_objects [get_files ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/zynq_design_1.bd] -directory ./lab1/lab1.ip_user_files/sim_scripts -ip_user_files_dir ./lab1/lab1.ip_user_files -ipstatic_source_dir ./lab1/lab1.ip_user_files/ipstatic -lib_map_path [list {modelsim=./lab1/lab1.cache/compile_simlib/modelsim} {questa=./lab1/lab1.cache/compile_simlib/questa} {riviera=./lab1/lab1.cache/compile_simlib/riviera} {activehdl=./lab1/lab1.cache/compile_simlib/activehdl}] -use_ip_compiled_libs -force -quiet
make_wrapper -files [get_files ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/zynq_design_1.bd] -top
add_files -norecurse ./lab1/lab1.srcs/sources_1/bd/zynq_design_1/hdl/zynq_design_1_wrapper.vhd
update_compile_order -fileset sources_1
update_compile_order -fileset sim_1
launch_runs synth_1 -jobs 4 
wait_on_run synth_1
launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
open_run impl_1
file mkdir ./lab1/lab1.sdk
file copy -force ./lab1/lab1.runs/impl_1/zynq_design_1_wrapper.sysdef ./lab1/lab1.sdk/zynq_design_1_wrapper.hdf

launch_sdk -workspace ./lab1/lab1.sdk -hwspec ./lab1/lab1.sdk/zynq_design_1_wrapper.hdf

