connect -url tcp:127.0.0.1:3121
source /home/mark/Documents/Repos/FPGA_Sandbox/RecComp/Lab3/adventures_with_ip/adventures_with_ip.sdk/ip_design_wrapper_hw_platform_0/ps7_init.tcl
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248774271"} -index 0
loadhw -hw /home/mark/Documents/Repos/FPGA_Sandbox/RecComp/Lab3/adventures_with_ip/adventures_with_ip.sdk/ip_design_wrapper_hw_platform_0/system.hdf -mem-ranges [list {0x40000000 0xbfffffff}]
configparams force-mem-access 1
targets -set -nocase -filter {name =~"APU*" && jtag_cable_name =~ "Digilent Zed 210248774271"} -index 0
stop
ps7_init
ps7_post_config
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248774271"} -index 0
rst -processor
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248774271"} -index 0
dow /home/mark/Documents/Repos/FPGA_Sandbox/RecComp/Lab3/adventures_with_ip/adventures_with_ip.sdk/adventures_with_ip/Debug/adventures_with_ip.elf
configparams force-mem-access 0
targets -set -nocase -filter {name =~ "ARM*#0" && jtag_cable_name =~ "Digilent Zed 210248774271"} -index 0
con
