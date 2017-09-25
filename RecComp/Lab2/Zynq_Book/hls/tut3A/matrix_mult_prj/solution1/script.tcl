############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project matrix_mult_prj
set_top matrix_mult
add_files matrix_mult.h
add_files matrix_mult.cpp
add_files -tb matrix_mult_test.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 5 -name default
#source "./matrix_mult_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
