############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project conv2D.prj
set_top conv2D
add_files conv2D.c
add_files -tb conv2D_test.c -cflags "-Wno-unknown-pragmas"
open_solution "solution3"
set_part {xc7z020clg484-1} -tool vivado
create_clock -period 10 -name default
source "./conv2D.prj/solution3/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl -tool xsim
export_design -format ip_catalog
