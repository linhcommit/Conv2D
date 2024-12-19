############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_unroll -factor 2 "initializeBuffer/Initialize_Buffer_Inner_Loop"
set_directive_unroll -factor 2 "calculateConvolution/Cal_Inner_Loop"
set_directive_unroll -factor 2 "updateBuffer/Update_Buffer_Inner_Loop"
set_directive_unroll -factor 2 "conv2D/Output_Col"
