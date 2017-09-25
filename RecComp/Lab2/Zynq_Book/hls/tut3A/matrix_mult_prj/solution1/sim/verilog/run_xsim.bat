
call C:/Xilinx/Vivado/2017.2/bin/xelab xil_defaultlib.apatb_matrix_mult_top -prj matrix_mult.prj -L axi_protocol_checker_v1_1_12 -L axi_protocol_checker_v1_1_13 -L axis_protocol_checker_v1_1_11 -L axis_protocol_checker_v1_1_12 --initfile "C:/Xilinx/Vivado/2017.2/data/xsim/ip/xsim_ip.ini" --lib "ieee_proposed=./ieee_proposed" -s matrix_mult 
call C:/Xilinx/Vivado/2017.2/bin/xsim --noieeewarnings matrix_mult -tclbatch matrix_mult.tcl

