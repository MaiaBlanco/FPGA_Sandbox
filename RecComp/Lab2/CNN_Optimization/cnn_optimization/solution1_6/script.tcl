############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project cnn_optimization
set_top convolve_kernel
add_files kernel.h
add_files kernel.cpp
add_files -tb main.cpp
add_files -tb data.cpp
add_files -tb convolve.cpp
open_solution "solution1_6"
set_part {xc7z020clg484-1}
create_clock -period 3 -name default
#source "./cnn_optimization/solution1_6/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -description "Convolution kernel from HLS with single port interface" -vendor "RecComp" -library "cnn_lab2_single_port" -version "3.1" -display_name "CNN Kernel Lab2 16x16x16x16 No Reshape FROM DEFAULT"
