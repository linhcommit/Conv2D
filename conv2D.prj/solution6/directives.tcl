############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_array_partition -type complete -dim 1 "conv2D" buffer
set_directive_pipeline "conv2D/Output_Col"
set_directive_pipeline "updateBuffer/Update_Buffer_Inner_Loop"
set_directive_pipeline "calculateConvolution/Cal_Inner_Loop"
set_directive_pipeline "initializeBuffer/Initialize_Buffer_Inner_Loop"
set_directive_inline "updateBuffer"
set_directive_inline "calculateConvolution"
set_directive_inline "initializeBuffer"
