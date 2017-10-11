############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type complete -dim 3 "convolve_kernel" bufi
set_directive_array_partition -type complete -dim 3 "convolve_kernel" bufw
set_directive_pipeline "convolve_kernel/convolve_kernel_traversal_outer"
set_directive_interface -mode bram "convolve_kernel" bufi
set_directive_interface -mode bram "convolve_kernel" bufw
