// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="conv2D,hls_ip_2018_3,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=9.634000,HLS_SYN_LAT=4791,HLS_SYN_TPT=4792,HLS_SYN_MEM=0,HLS_SYN_DSP=5,HLS_SYN_FF=1363,HLS_SYN_LUT=1672,HLS_VERSION=2018_3}" *)

module conv2D (
        in_data_address0,
        in_data_ce0,
        in_data_d0,
        in_data_q0,
        in_data_we0,
        in_data_address1,
        in_data_ce1,
        in_data_d1,
        in_data_q1,
        in_data_we1,
        out_data_address0,
        out_data_ce0,
        out_data_d0,
        out_data_q0,
        out_data_we0,
        out_data_address1,
        out_data_ce1,
        out_data_d1,
        out_data_q1,
        out_data_we1,
        row_in,
        col_in,
        kernel_address0,
        kernel_ce0,
        kernel_d0,
        kernel_q0,
        kernel_we0,
        kernel_address1,
        kernel_ce1,
        kernel_d1,
        kernel_q1,
        kernel_we1,
        kernel_size_row,
        kernel_size_col,
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_ready,
        ap_idle
);


output  [13:0] in_data_address0;
output   in_data_ce0;
output  [31:0] in_data_d0;
input  [31:0] in_data_q0;
output   in_data_we0;
output  [13:0] in_data_address1;
output   in_data_ce1;
output  [31:0] in_data_d1;
input  [31:0] in_data_q1;
output   in_data_we1;
output  [13:0] out_data_address0;
output   out_data_ce0;
output  [31:0] out_data_d0;
input  [31:0] out_data_q0;
output   out_data_we0;
output  [13:0] out_data_address1;
output   out_data_ce1;
output  [31:0] out_data_d1;
input  [31:0] out_data_q1;
output   out_data_we1;
input  [31:0] row_in;
input  [31:0] col_in;
output  [9:0] kernel_address0;
output   kernel_ce0;
output  [31:0] kernel_d0;
input  [31:0] kernel_q0;
output   kernel_we0;
output  [9:0] kernel_address1;
output   kernel_ce1;
output  [31:0] kernel_d1;
input  [31:0] kernel_q1;
output   kernel_we1;
input  [31:0] kernel_size_row;
input  [31:0] kernel_size_col;
input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_ready;
output   ap_idle;

wire    Loop_Output_Row_proc_U0_ap_start;
wire    Loop_Output_Row_proc_U0_ap_done;
wire    Loop_Output_Row_proc_U0_ap_continue;
wire    Loop_Output_Row_proc_U0_ap_idle;
wire    Loop_Output_Row_proc_U0_ap_ready;
wire   [13:0] Loop_Output_Row_proc_U0_in_data_address0;
wire    Loop_Output_Row_proc_U0_in_data_ce0;
wire   [9:0] Loop_Output_Row_proc_U0_kernel_address0;
wire    Loop_Output_Row_proc_U0_kernel_ce0;
wire   [13:0] Loop_Output_Row_proc_U0_out_data_address0;
wire    Loop_Output_Row_proc_U0_out_data_ce0;
wire    Loop_Output_Row_proc_U0_out_data_we0;
wire   [31:0] Loop_Output_Row_proc_U0_out_data_d0;
wire    ap_sync_continue;
wire    ap_sync_done;
wire    ap_sync_ready;
wire    Loop_Output_Row_proc_U0_start_full_n;
wire    Loop_Output_Row_proc_U0_start_write;

Loop_Output_Row_proc Loop_Output_Row_proc_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(Loop_Output_Row_proc_U0_ap_start),
    .ap_done(Loop_Output_Row_proc_U0_ap_done),
    .ap_continue(Loop_Output_Row_proc_U0_ap_continue),
    .ap_idle(Loop_Output_Row_proc_U0_ap_idle),
    .ap_ready(Loop_Output_Row_proc_U0_ap_ready),
    .row_in(row_in),
    .kernel_size_row(kernel_size_row),
    .col_in(col_in),
    .kernel_size_col(kernel_size_col),
    .in_data_address0(Loop_Output_Row_proc_U0_in_data_address0),
    .in_data_ce0(Loop_Output_Row_proc_U0_in_data_ce0),
    .in_data_q0(in_data_q0),
    .kernel_address0(Loop_Output_Row_proc_U0_kernel_address0),
    .kernel_ce0(Loop_Output_Row_proc_U0_kernel_ce0),
    .kernel_q0(kernel_q0),
    .out_data_address0(Loop_Output_Row_proc_U0_out_data_address0),
    .out_data_ce0(Loop_Output_Row_proc_U0_out_data_ce0),
    .out_data_we0(Loop_Output_Row_proc_U0_out_data_we0),
    .out_data_d0(Loop_Output_Row_proc_U0_out_data_d0)
);

assign Loop_Output_Row_proc_U0_ap_continue = 1'b1;

assign Loop_Output_Row_proc_U0_ap_start = ap_start;

assign Loop_Output_Row_proc_U0_start_full_n = 1'b1;

assign Loop_Output_Row_proc_U0_start_write = 1'b0;

assign ap_done = Loop_Output_Row_proc_U0_ap_done;

assign ap_idle = Loop_Output_Row_proc_U0_ap_idle;

assign ap_ready = Loop_Output_Row_proc_U0_ap_ready;

assign ap_sync_continue = 1'b1;

assign ap_sync_done = Loop_Output_Row_proc_U0_ap_done;

assign ap_sync_ready = Loop_Output_Row_proc_U0_ap_ready;

assign in_data_address0 = Loop_Output_Row_proc_U0_in_data_address0;

assign in_data_address1 = 14'd0;

assign in_data_ce0 = Loop_Output_Row_proc_U0_in_data_ce0;

assign in_data_ce1 = 1'b0;

assign in_data_d0 = 32'd0;

assign in_data_d1 = 32'd0;

assign in_data_we0 = 1'b0;

assign in_data_we1 = 1'b0;

assign kernel_address0 = Loop_Output_Row_proc_U0_kernel_address0;

assign kernel_address1 = 10'd0;

assign kernel_ce0 = Loop_Output_Row_proc_U0_kernel_ce0;

assign kernel_ce1 = 1'b0;

assign kernel_d0 = 32'd0;

assign kernel_d1 = 32'd0;

assign kernel_we0 = 1'b0;

assign kernel_we1 = 1'b0;

assign out_data_address0 = Loop_Output_Row_proc_U0_out_data_address0;

assign out_data_address1 = 14'd0;

assign out_data_ce0 = Loop_Output_Row_proc_U0_out_data_ce0;

assign out_data_ce1 = 1'b0;

assign out_data_d0 = Loop_Output_Row_proc_U0_out_data_d0;

assign out_data_d1 = 32'd0;

assign out_data_we0 = Loop_Output_Row_proc_U0_out_data_we0;

assign out_data_we1 = 1'b0;

endmodule //conv2D
