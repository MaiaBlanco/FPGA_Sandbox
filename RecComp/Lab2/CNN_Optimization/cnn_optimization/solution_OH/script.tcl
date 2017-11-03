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
open_solution "solution_OH"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 5 -name default
#source "./cnn_optimization/solution_OH/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog -description "Reshaped Dim 1 All 16x16x16x16 Tile" -vendor "RecComp" -library "RecComp" -version "3.7" -display_name "Kernel_Resh_All_Size_16_Dim_1"
