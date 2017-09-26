
/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado/2017.2/bin/xelab xil_defaultlib.apatb_fir_top -prj fir.prj -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 --initfile "/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado/2017.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s fir 
/afs/ece/support/xilinx/xilinx.release/Vivado-2017.2/Vivado/2017.2/bin/xsim --noieeewarnings fir -tclbatch fir.tcl

