############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project fir_prj
set_top fir
add_files fir.c
add_files -tb fir_test.c
add_files -tb out.gold.dat
open_solution "solution1"
set_part {xc7k160tfbg484-2} -tool vivado
create_clock -period 10 -name default
#source "./fir_prj/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
