create_project lab3 ./lab3 -part xc7k325tffg900-2
set_property board_part xilinx.com:kc705:part0:1.4 [current_project]
set_property target_language VHDL [current_project]
create_bd_design "mb_subsystem"
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:microblaze:10.0 microblaze_0
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:mig_7series:4.0 mig_7series_0
apply_board_connection -board_interface "ddr3_sdram" -ip_intf "mig_7series_0/mig_ddr_interface" -diagram "mb_subsystem" 
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_uartlite:2.0 axi_uartlite_0
apply_board_connection -board_interface "rs232_uart" -ip_intf "axi_uartlite_0/UART" -diagram "mb_subsystem" 
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 axi_gpio_0
apply_board_connection -board_interface "led_8bits" -ip_intf "axi_gpio_0/GPIO" -diagram "mb_subsystem" 
endgroup
startgroup
create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.0 axi_bram_ctrl_0
endgroup
apply_bd_automation -rule xilinx.com:bd_rule:microblaze -config {local_mem "64KB" ecc "None" cache "32KB" debug_module "Extended Debug" axi_periph "Enabled" axi_intc "0" clk "/mig_7series_0/ui_addn_clk_0 (100 MHz)" }  [get_bd_cells microblaze_0]
startgroup
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/microblaze_0 (Cached)" Clk "Auto" }  [get_bd_intf_pins mig_7series_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:board -config {Board_Interface "reset ( FPGA Reset ) " }  [get_bd_pins mig_7series_0/sys_rst]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/microblaze_0 (Periph)" Clk "Auto" }  [get_bd_intf_pins axi_uartlite_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/microblaze_0 (Periph)" Clk "Auto" }  [get_bd_intf_pins axi_gpio_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/microblaze_0 (Cached)" Clk "Auto" }  [get_bd_intf_pins axi_bram_ctrl_0/S_AXI]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "New Blk_Mem_Gen" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTA]
apply_bd_automation -rule xilinx.com:bd_rule:bram_cntlr -config {BRAM "Blk_Mem_Gen of BRAM_PORTA" }  [get_bd_intf_pins axi_bram_ctrl_0/BRAM_PORTB]
apply_bd_automation -rule xilinx.com:bd_rule:trigger -config {ila_conn "Auto" }  [get_bd_intf_pins mdm_1/TRIG_IN_0]
apply_bd_automation -rule xilinx.com:bd_rule:trigger -config {ila_conn "Auto" }  [get_bd_intf_pins mdm_1/TRIG_OUT_0]
apply_bd_automation -rule xilinx.com:bd_rule:board -config {Board_Interface "reset ( FPGA Reset ) " }  [get_bd_pins rst_mig_7series_0_100M/ext_reset_in]
endgroup
set_property HDL_ATTRIBUTE.DEBUG true [get_bd_intf_nets {microblaze_0_axi_periph_M01_AXI }]
apply_bd_automation -rule xilinx.com:bd_rule:debug -dict [list \
                                                          [get_bd_intf_nets microblaze_0_axi_periph_M01_AXI] {AXI_R_ADDRESS "Data and Trigger" AXI_R_DATA "Data and Trigger" AXI_W_ADDRESS "Data and Trigger" AXI_W_DATA "Data and Trigger" AXI_W_RESPONSE "Data and Trigger" CLK_SRC "/mig_7series_0/ui_addn_clk_0" SYSTEM_ILA "Auto" APC_EN "0" } \
                                                         ]
regenerate_bd_layout
set_property range 512M [get_bd_addr_segs {microblaze_0/Data/SEG_mig_7series_0_memaddr}]
set_property range 512M [get_bd_addr_segs {microblaze_0/Instruction/SEG_mig_7series_0_memaddr}]
startgroup
set_property -dict [list CONFIG.C_DCACHE_ALWAYS_USED.VALUE_SRC USER CONFIG.C_DCACHE_HIGHADDR.VALUE_SRC USER CONFIG.C_DCACHE_BASEADDR.VALUE_SRC USER CONFIG.C_ICACHE_ALWAYS_USED.VALUE_SRC USER CONFIG.C_ICACHE_HIGHADDR.VALUE_SRC USER CONFIG.C_ICACHE_BASEADDR.VALUE_SRC USER] [get_bd_cells microblaze_0]
set_property -dict [list CONFIG.C_ICACHE_BASEADDR {0x80000000} CONFIG.C_ICACHE_HIGHADDR {0xFFFFFFFF} CONFIG.C_ICACHE_LINE_LEN {8} CONFIG.C_ICACHE_ALWAYS_USED {1} CONFIG.C_DCACHE_BASEADDR {0x0000000080000000} CONFIG.C_DCACHE_HIGHADDR {0x00000000FFFFFFFF} CONFIG.C_DCACHE_LINE_LEN {8} CONFIG.C_DCACHE_ALWAYS_USED {1}] [get_bd_cells microblaze_0]
endgroup
validate_bd_design
save_bd_design
generate_target all [get_files  ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/mb_subsystem.bd]
export_ip_user_files -of_objects [get_files ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/mb_subsystem.bd] -no_script -sync -force -quiet
create_ip_run [get_files -of_objects [get_fileset sources_1] ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/mb_subsystem.bd]
launch_runs -jobs 4 {mb_subsystem_microblaze_0_0_synth_1 mb_subsystem_mig_7series_0_0_synth_1 mb_subsystem_axi_uartlite_0_0_synth_1 mb_subsystem_axi_gpio_0_0_synth_1 mb_subsystem_axi_bram_ctrl_0_0_synth_1 mb_subsystem_dlmb_v10_0_synth_1 mb_subsystem_ilmb_v10_0_synth_1 mb_subsystem_dlmb_bram_if_cntlr_0_synth_1 mb_subsystem_ilmb_bram_if_cntlr_0_synth_1 mb_subsystem_lmb_bram_0_synth_1 mb_subsystem_lmb_v10_0_synth_1 mb_subsystem_mdm_1_0_synth_1 mb_subsystem_rst_mig_7series_0_100M_0_synth_1 mb_subsystem_rst_mig_7series_0_200M_0_synth_1 mb_subsystem_xbar_0_synth_1 mb_subsystem_xbar_1_synth_1 mb_subsystem_axi_bram_ctrl_0_bram_0_synth_1 mb_subsystem_system_ila_0_synth_1 mb_subsystem_auto_ds_0_synth_1 mb_subsystem_auto_us_0_synth_1 mb_subsystem_auto_cc_0_synth_1 mb_subsystem_auto_us_1_synth_1 mb_subsystem_auto_cc_1_synth_1}
export_simulation -of_objects [get_files ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/mb_subsystem.bd] -directory ./lab3/lab3.ip_user_files/sim_scripts -ip_user_files_dir ./lab3/lab3.ip_user_files -ipstatic_source_dir ./lab3/lab3.ip_user_files/ipstatic -lib_map_path [list {modelsim=./lab3/lab3.cache/compile_simlib/modelsim} {questa=./lab3/lab3.cache/compile_simlib/questa} {riviera=./lab3/lab3.cache/compile_simlib/riviera} {activehdl=./lab3/lab3.cache/compile_simlib/activehdl}] -use_ip_compiled_libs -force -quiet
make_wrapper -files [get_files ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/mb_subsystem.bd] -top
add_files -norecurse ./lab3/lab3.srcs/sources_1/bd/mb_subsystem/hdl/mb_subsystem_wrapper.vhd
launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
open_run impl_1
file mkdir ./lab3/lab3.sdk
file copy -force ./lab3/lab3.runs/impl_1/mb_subsystem_wrapper.sysdef ./lab3/lab3.sdk/mb_subsystem_wrapper.hdf

launch_sdk -workspace ./lab3/lab3.sdk -hwspec ./lab3/lab3.sdk/mb_subsystem_wrapper.hdf

