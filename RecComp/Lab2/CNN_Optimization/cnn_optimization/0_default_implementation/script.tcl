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
open_solution "0_default_implementation"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
source "./cnn_optimization/0_default_implementation/directives.tcl"
csim_design -compiler gcc
csynth_design
cosim_design
export_design -format ip_catalog
