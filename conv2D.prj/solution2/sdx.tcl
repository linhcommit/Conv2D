# ==============================================================
# File generated on Thu Dec 19 06:31:14 +0700 2024
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../../conv2D_test.c -cflags { -Wno-unknown-pragmas}
add_files conv2D.c
set_part xc7z020clg484-1
create_clock -name default -period 10
set_directive_unroll initializeBuffer/Initialize_Buffer_Inner_Loop -factor 2
set_directive_unroll calculateConvolution/Cal_Inner_Loop -factor 2
set_directive_unroll updateBuffer/Update_Buffer_Inner_Loop -factor 2
set_directive_unroll conv2D/Output_Col -factor 2
