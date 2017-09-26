############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "matrix_mult/Col"
set_directive_array_reshape -type complete -dim 2 "matrix_mult" a
set_directive_array_reshape -type complete -dim 1 "matrix_mult" b
