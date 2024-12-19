// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _updateBuffer_HH_
#define _updateBuffer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "conv2D_mux_255_32cud.h"
#include "conv2D_mux_325_32dEe.h"
#include "conv2D_ama_addmuleOg.h"

namespace ap_rtl {

struct updateBuffer : public sc_module {
    // Port declarations 64
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > buffer_0_read;
    sc_in< sc_lv<32> > buffer_1_read;
    sc_in< sc_lv<32> > buffer_2_read;
    sc_in< sc_lv<32> > buffer_3_read;
    sc_in< sc_lv<32> > buffer_4_read;
    sc_in< sc_lv<32> > buffer_5_read;
    sc_in< sc_lv<32> > buffer_6_read;
    sc_in< sc_lv<32> > buffer_7_read;
    sc_in< sc_lv<32> > buffer_8_read;
    sc_in< sc_lv<32> > buffer_9_read;
    sc_in< sc_lv<32> > buffer_10_read;
    sc_in< sc_lv<32> > buffer_11_read;
    sc_in< sc_lv<32> > buffer_12_read;
    sc_in< sc_lv<32> > buffer_13_read;
    sc_in< sc_lv<32> > buffer_14_read;
    sc_in< sc_lv<32> > buffer_15_read;
    sc_in< sc_lv<32> > buffer_16_read;
    sc_in< sc_lv<32> > buffer_17_read;
    sc_in< sc_lv<32> > buffer_18_read;
    sc_in< sc_lv<32> > buffer_19_read;
    sc_in< sc_lv<32> > buffer_20_read;
    sc_in< sc_lv<32> > buffer_21_read;
    sc_in< sc_lv<32> > buffer_22_read;
    sc_in< sc_lv<32> > buffer_23_read;
    sc_in< sc_lv<32> > buffer_24_read;
    sc_out< sc_lv<14> > in_data_address0;
    sc_out< sc_logic > in_data_ce0;
    sc_in< sc_lv<32> > in_data_q0;
    sc_in< sc_lv<31> > index_row_out;
    sc_in< sc_lv<31> > index_col_out;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;
    sc_in< sc_lv<32> > col_in;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_lv<32> > ap_return_2;
    sc_out< sc_lv<32> > ap_return_3;
    sc_out< sc_lv<32> > ap_return_4;
    sc_out< sc_lv<32> > ap_return_5;
    sc_out< sc_lv<32> > ap_return_6;
    sc_out< sc_lv<32> > ap_return_7;
    sc_out< sc_lv<32> > ap_return_8;
    sc_out< sc_lv<32> > ap_return_9;
    sc_out< sc_lv<32> > ap_return_10;
    sc_out< sc_lv<32> > ap_return_11;
    sc_out< sc_lv<32> > ap_return_12;
    sc_out< sc_lv<32> > ap_return_13;
    sc_out< sc_lv<32> > ap_return_14;
    sc_out< sc_lv<32> > ap_return_15;
    sc_out< sc_lv<32> > ap_return_16;
    sc_out< sc_lv<32> > ap_return_17;
    sc_out< sc_lv<32> > ap_return_18;
    sc_out< sc_lv<32> > ap_return_19;
    sc_out< sc_lv<32> > ap_return_20;
    sc_out< sc_lv<32> > ap_return_21;
    sc_out< sc_lv<32> > ap_return_22;
    sc_out< sc_lv<32> > ap_return_23;
    sc_out< sc_lv<32> > ap_return_24;


    // Module declarations
    updateBuffer(sc_module_name name);
    SC_HAS_PROCESS(updateBuffer);

    ~updateBuffer();

    sc_trace_file* mVcdFile;

    conv2D_mux_255_32cud<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_255_32cud_U32;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U33;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U34;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U35;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U36;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U37;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U38;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U39;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U40;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U41;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U42;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U43;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U44;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U45;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U46;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U47;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U48;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U49;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U50;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U51;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U52;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U53;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U54;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U55;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U56;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U57;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U58;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U59;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U60;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U61;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U62;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U63;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U64;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U65;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U66;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U67;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U68;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U69;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U70;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U71;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U72;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U73;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U74;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U75;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U76;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U77;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U78;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U79;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U80;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U81;
    conv2D_mux_325_32dEe<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_325_32dEe_U82;
    conv2D_ama_addmuleOg<1,1,15,15,8,15,15>* conv2D_ama_addmuleOg_U83;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > tmp_fu_1165_p2;
    sc_signal< sc_lv<32> > tmp_reg_5096;
    sc_signal< sc_lv<1> > tmp_2_fu_1177_p2;
    sc_signal< sc_lv<1> > tmp_2_reg_5102;
    sc_signal< sc_lv<15> > tmp_3_fu_1183_p1;
    sc_signal< sc_lv<15> > tmp_3_reg_5106;
    sc_signal< sc_lv<32> > next_mul_fu_1187_p2;
    sc_signal< sc_lv<32> > next_mul_reg_5111;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > ik_row_1_fu_1201_p2;
    sc_signal< sc_lv<31> > ik_row_1_reg_5119;
    sc_signal< sc_lv<5> > tmp_5_fu_1207_p1;
    sc_signal< sc_lv<5> > tmp_5_reg_5124;
    sc_signal< sc_lv<1> > tmp_4_fu_1196_p2;
    sc_signal< sc_lv<31> > ik_col_1_fu_1370_p2;
    sc_signal< sc_lv<31> > ik_col_1_reg_5133;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > tmp_8_t_fu_1386_p2;
    sc_signal< sc_lv<5> > tmp_8_t_reg_5138;
    sc_signal< sc_lv<1> > tmp_6_fu_1365_p2;
    sc_signal< sc_lv<5> > tmp_t_fu_1391_p2;
    sc_signal< sc_lv<5> > tmp_t_reg_5143;
    sc_signal< sc_lv<5> > tmp_16_fu_1412_p1;
    sc_signal< sc_lv<5> > tmp_16_reg_5177;
    sc_signal< sc_lv<32> > buffer_24_2_fu_1471_p34;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > buffer_23_2_fu_1540_p34;
    sc_signal< sc_lv<32> > buffer_22_2_fu_1609_p34;
    sc_signal< sc_lv<32> > buffer_21_2_fu_1678_p34;
    sc_signal< sc_lv<32> > buffer_20_2_fu_1747_p34;
    sc_signal< sc_lv<32> > buffer_19_2_fu_1816_p34;
    sc_signal< sc_lv<32> > buffer_18_2_fu_1885_p34;
    sc_signal< sc_lv<32> > buffer_17_2_fu_1954_p34;
    sc_signal< sc_lv<32> > buffer_16_2_fu_2023_p34;
    sc_signal< sc_lv<32> > buffer_15_2_fu_2092_p34;
    sc_signal< sc_lv<32> > buffer_14_2_fu_2161_p34;
    sc_signal< sc_lv<32> > buffer_13_2_fu_2230_p34;
    sc_signal< sc_lv<32> > buffer_12_2_fu_2299_p34;
    sc_signal< sc_lv<32> > buffer_11_2_fu_2368_p34;
    sc_signal< sc_lv<32> > buffer_10_2_fu_2437_p34;
    sc_signal< sc_lv<32> > buffer_9_2_fu_2506_p34;
    sc_signal< sc_lv<32> > buffer_8_2_fu_2575_p34;
    sc_signal< sc_lv<32> > buffer_7_2_fu_2644_p34;
    sc_signal< sc_lv<32> > buffer_6_2_fu_2713_p34;
    sc_signal< sc_lv<32> > buffer_5_2_fu_2782_p34;
    sc_signal< sc_lv<32> > buffer_4_2_fu_2851_p34;
    sc_signal< sc_lv<32> > buffer_3_2_fu_2920_p34;
    sc_signal< sc_lv<32> > buffer_2_2_fu_2989_p34;
    sc_signal< sc_lv<32> > buffer_1_2_fu_3058_p34;
    sc_signal< sc_lv<32> > buffer_0_2_fu_3127_p34;
    sc_signal< sc_lv<32> > buffer_0_reg_301;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_0_4_phi_fu_865_p4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > buffer_1_reg_311;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_1_4_phi_fu_877_p4;
    sc_signal< sc_lv<32> > buffer_2_reg_321;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_2_4_phi_fu_889_p4;
    sc_signal< sc_lv<32> > buffer_3_reg_331;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_3_4_phi_fu_901_p4;
    sc_signal< sc_lv<32> > buffer_4_reg_341;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_4_4_phi_fu_913_p4;
    sc_signal< sc_lv<32> > buffer_5_reg_351;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_5_4_phi_fu_925_p4;
    sc_signal< sc_lv<32> > buffer_6_reg_361;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_6_4_phi_fu_937_p4;
    sc_signal< sc_lv<32> > buffer_7_reg_371;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_7_4_phi_fu_949_p4;
    sc_signal< sc_lv<32> > buffer_8_reg_381;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_8_4_phi_fu_961_p4;
    sc_signal< sc_lv<32> > buffer_9_reg_391;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_9_4_phi_fu_973_p4;
    sc_signal< sc_lv<32> > buffer_10_reg_401;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_10_4_phi_fu_985_p4;
    sc_signal< sc_lv<32> > buffer_11_reg_411;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_11_4_phi_fu_997_p4;
    sc_signal< sc_lv<32> > buffer_12_reg_421;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_12_4_phi_fu_1009_p4;
    sc_signal< sc_lv<32> > buffer_13_reg_431;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_13_4_phi_fu_1021_p4;
    sc_signal< sc_lv<32> > buffer_14_reg_441;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_14_4_phi_fu_1033_p4;
    sc_signal< sc_lv<32> > buffer_15_reg_451;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_15_4_phi_fu_1045_p4;
    sc_signal< sc_lv<32> > buffer_16_reg_461;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_16_4_phi_fu_1057_p4;
    sc_signal< sc_lv<32> > buffer_17_reg_471;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_17_4_phi_fu_1069_p4;
    sc_signal< sc_lv<32> > buffer_18_reg_481;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_18_4_phi_fu_1081_p4;
    sc_signal< sc_lv<32> > buffer_19_reg_491;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_19_4_phi_fu_1093_p4;
    sc_signal< sc_lv<32> > buffer_20_reg_501;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_20_4_phi_fu_1105_p4;
    sc_signal< sc_lv<32> > buffer_21_reg_511;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_21_4_phi_fu_1117_p4;
    sc_signal< sc_lv<32> > buffer_22_reg_521;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_22_4_phi_fu_1129_p4;
    sc_signal< sc_lv<32> > buffer_23_reg_531;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_23_4_phi_fu_1141_p4;
    sc_signal< sc_lv<32> > buffer_24_reg_541;
    sc_signal< sc_lv<32> > ap_phi_mux_buffer_24_4_phi_fu_1153_p4;
    sc_signal< sc_lv<31> > ik_row_reg_551;
    sc_signal< sc_lv<32> > phi_mul_reg_563;
    sc_signal< sc_lv<32> > buffer_0_1_reg_575;
    sc_signal< sc_lv<32> > buffer_1_1_reg_586;
    sc_signal< sc_lv<32> > buffer_2_1_reg_597;
    sc_signal< sc_lv<32> > buffer_3_1_reg_608;
    sc_signal< sc_lv<32> > buffer_4_1_reg_619;
    sc_signal< sc_lv<32> > buffer_5_1_reg_630;
    sc_signal< sc_lv<32> > buffer_6_1_reg_641;
    sc_signal< sc_lv<32> > buffer_7_1_reg_652;
    sc_signal< sc_lv<32> > buffer_8_1_reg_663;
    sc_signal< sc_lv<32> > buffer_9_1_reg_674;
    sc_signal< sc_lv<32> > buffer_10_1_reg_685;
    sc_signal< sc_lv<32> > buffer_11_1_reg_696;
    sc_signal< sc_lv<32> > buffer_12_1_reg_707;
    sc_signal< sc_lv<32> > buffer_13_1_reg_718;
    sc_signal< sc_lv<32> > buffer_14_1_reg_729;
    sc_signal< sc_lv<32> > buffer_15_1_reg_740;
    sc_signal< sc_lv<32> > buffer_16_1_reg_751;
    sc_signal< sc_lv<32> > buffer_17_1_reg_762;
    sc_signal< sc_lv<32> > buffer_18_1_reg_773;
    sc_signal< sc_lv<32> > buffer_19_1_reg_784;
    sc_signal< sc_lv<32> > buffer_20_1_reg_795;
    sc_signal< sc_lv<32> > buffer_21_1_reg_806;
    sc_signal< sc_lv<32> > buffer_22_1_reg_817;
    sc_signal< sc_lv<32> > buffer_23_1_reg_828;
    sc_signal< sc_lv<32> > buffer_24_1_reg_839;
    sc_signal< sc_lv<31> > ik_col_reg_850;
    sc_signal< sc_lv<32> > buffer_0_3_fu_4876_p34;
    sc_signal< sc_lv<32> > buffer_0_4_reg_861;
    sc_signal< sc_lv<32> > buffer_1_3_fu_4806_p34;
    sc_signal< sc_lv<32> > buffer_1_4_reg_873;
    sc_signal< sc_lv<32> > buffer_2_3_fu_4736_p34;
    sc_signal< sc_lv<32> > buffer_2_4_reg_885;
    sc_signal< sc_lv<32> > buffer_3_3_fu_4666_p34;
    sc_signal< sc_lv<32> > buffer_3_4_reg_897;
    sc_signal< sc_lv<32> > buffer_4_3_fu_4596_p34;
    sc_signal< sc_lv<32> > buffer_4_4_reg_909;
    sc_signal< sc_lv<32> > buffer_5_3_fu_4526_p34;
    sc_signal< sc_lv<32> > buffer_5_4_reg_921;
    sc_signal< sc_lv<32> > buffer_6_3_fu_4456_p34;
    sc_signal< sc_lv<32> > buffer_6_4_reg_933;
    sc_signal< sc_lv<32> > buffer_7_3_fu_4386_p34;
    sc_signal< sc_lv<32> > buffer_7_4_reg_945;
    sc_signal< sc_lv<32> > buffer_8_3_fu_4316_p34;
    sc_signal< sc_lv<32> > buffer_8_4_reg_957;
    sc_signal< sc_lv<32> > buffer_9_3_fu_4246_p34;
    sc_signal< sc_lv<32> > buffer_9_4_reg_969;
    sc_signal< sc_lv<32> > buffer_10_3_fu_4176_p34;
    sc_signal< sc_lv<32> > buffer_10_4_reg_981;
    sc_signal< sc_lv<32> > buffer_11_3_fu_4106_p34;
    sc_signal< sc_lv<32> > buffer_11_4_reg_993;
    sc_signal< sc_lv<32> > buffer_12_3_fu_4036_p34;
    sc_signal< sc_lv<32> > buffer_12_4_reg_1005;
    sc_signal< sc_lv<32> > buffer_13_3_fu_3966_p34;
    sc_signal< sc_lv<32> > buffer_13_4_reg_1017;
    sc_signal< sc_lv<32> > buffer_14_3_fu_3896_p34;
    sc_signal< sc_lv<32> > buffer_14_4_reg_1029;
    sc_signal< sc_lv<32> > buffer_15_3_fu_3826_p34;
    sc_signal< sc_lv<32> > buffer_15_4_reg_1041;
    sc_signal< sc_lv<32> > buffer_16_3_fu_3756_p34;
    sc_signal< sc_lv<32> > buffer_16_4_reg_1053;
    sc_signal< sc_lv<32> > buffer_17_3_fu_3686_p34;
    sc_signal< sc_lv<32> > buffer_17_4_reg_1065;
    sc_signal< sc_lv<32> > buffer_18_3_fu_3616_p34;
    sc_signal< sc_lv<32> > buffer_18_4_reg_1077;
    sc_signal< sc_lv<32> > buffer_19_3_fu_3546_p34;
    sc_signal< sc_lv<32> > buffer_19_4_reg_1089;
    sc_signal< sc_lv<32> > buffer_20_3_fu_3476_p34;
    sc_signal< sc_lv<32> > buffer_20_4_reg_1101;
    sc_signal< sc_lv<32> > buffer_21_3_fu_3406_p34;
    sc_signal< sc_lv<32> > buffer_21_4_reg_1113;
    sc_signal< sc_lv<32> > buffer_22_3_fu_3336_p34;
    sc_signal< sc_lv<32> > buffer_22_4_reg_1125;
    sc_signal< sc_lv<32> > buffer_23_3_fu_3266_p34;
    sc_signal< sc_lv<32> > buffer_23_4_reg_1137;
    sc_signal< sc_lv<32> > buffer_24_3_fu_3196_p34;
    sc_signal< sc_lv<32> > buffer_24_4_reg_1149;
    sc_signal< sc_lv<64> > tmp_15_cast_fu_1403_p1;
    sc_signal< sc_lv<32> > index_col_out_cast_fu_1161_p1;
    sc_signal< sc_lv<32> > tmp_1_fu_1171_p2;
    sc_signal< sc_lv<32> > ik_row_cast_fu_1192_p1;
    sc_signal< sc_lv<32> > ik_col_cast_fu_1361_p1;
    sc_signal< sc_lv<5> > tmp_7_fu_1376_p1;
    sc_signal< sc_lv<5> > tmp1_fu_1380_p2;
    sc_signal< sc_lv<15> > grp_fu_4946_p4;
    sc_signal< sc_lv<32> > tmp_13_fu_1407_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_1416_p27;
    sc_signal< sc_lv<15> > grp_fu_4946_p0;
    sc_signal< sc_lv<15> > grp_fu_4946_p1;
    sc_signal< sc_lv<8> > grp_fu_4946_p2;
    sc_signal< sc_lv<32> > ap_return_0_preg;
    sc_signal< sc_lv<32> > ap_return_1_preg;
    sc_signal< sc_lv<32> > ap_return_2_preg;
    sc_signal< sc_lv<32> > ap_return_3_preg;
    sc_signal< sc_lv<32> > ap_return_4_preg;
    sc_signal< sc_lv<32> > ap_return_5_preg;
    sc_signal< sc_lv<32> > ap_return_6_preg;
    sc_signal< sc_lv<32> > ap_return_7_preg;
    sc_signal< sc_lv<32> > ap_return_8_preg;
    sc_signal< sc_lv<32> > ap_return_9_preg;
    sc_signal< sc_lv<32> > ap_return_10_preg;
    sc_signal< sc_lv<32> > ap_return_11_preg;
    sc_signal< sc_lv<32> > ap_return_12_preg;
    sc_signal< sc_lv<32> > ap_return_13_preg;
    sc_signal< sc_lv<32> > ap_return_14_preg;
    sc_signal< sc_lv<32> > ap_return_15_preg;
    sc_signal< sc_lv<32> > ap_return_16_preg;
    sc_signal< sc_lv<32> > ap_return_17_preg;
    sc_signal< sc_lv<32> > ap_return_18_preg;
    sc_signal< sc_lv<32> > ap_return_19_preg;
    sc_signal< sc_lv<32> > ap_return_20_preg;
    sc_signal< sc_lv<32> > ap_return_21_preg;
    sc_signal< sc_lv<32> > ap_return_22_preg;
    sc_signal< sc_lv<32> > ap_return_23_preg;
    sc_signal< sc_lv<32> > ap_return_24_preg;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<15> ap_const_lv15_64;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_phi_mux_buffer_0_4_phi_fu_865_p4();
    void thread_ap_phi_mux_buffer_10_4_phi_fu_985_p4();
    void thread_ap_phi_mux_buffer_11_4_phi_fu_997_p4();
    void thread_ap_phi_mux_buffer_12_4_phi_fu_1009_p4();
    void thread_ap_phi_mux_buffer_13_4_phi_fu_1021_p4();
    void thread_ap_phi_mux_buffer_14_4_phi_fu_1033_p4();
    void thread_ap_phi_mux_buffer_15_4_phi_fu_1045_p4();
    void thread_ap_phi_mux_buffer_16_4_phi_fu_1057_p4();
    void thread_ap_phi_mux_buffer_17_4_phi_fu_1069_p4();
    void thread_ap_phi_mux_buffer_18_4_phi_fu_1081_p4();
    void thread_ap_phi_mux_buffer_19_4_phi_fu_1093_p4();
    void thread_ap_phi_mux_buffer_1_4_phi_fu_877_p4();
    void thread_ap_phi_mux_buffer_20_4_phi_fu_1105_p4();
    void thread_ap_phi_mux_buffer_21_4_phi_fu_1117_p4();
    void thread_ap_phi_mux_buffer_22_4_phi_fu_1129_p4();
    void thread_ap_phi_mux_buffer_23_4_phi_fu_1141_p4();
    void thread_ap_phi_mux_buffer_24_4_phi_fu_1153_p4();
    void thread_ap_phi_mux_buffer_2_4_phi_fu_889_p4();
    void thread_ap_phi_mux_buffer_3_4_phi_fu_901_p4();
    void thread_ap_phi_mux_buffer_4_4_phi_fu_913_p4();
    void thread_ap_phi_mux_buffer_5_4_phi_fu_925_p4();
    void thread_ap_phi_mux_buffer_6_4_phi_fu_937_p4();
    void thread_ap_phi_mux_buffer_7_4_phi_fu_949_p4();
    void thread_ap_phi_mux_buffer_8_4_phi_fu_961_p4();
    void thread_ap_phi_mux_buffer_9_4_phi_fu_973_p4();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_ap_return_10();
    void thread_ap_return_11();
    void thread_ap_return_12();
    void thread_ap_return_13();
    void thread_ap_return_14();
    void thread_ap_return_15();
    void thread_ap_return_16();
    void thread_ap_return_17();
    void thread_ap_return_18();
    void thread_ap_return_19();
    void thread_ap_return_2();
    void thread_ap_return_20();
    void thread_ap_return_21();
    void thread_ap_return_22();
    void thread_ap_return_23();
    void thread_ap_return_24();
    void thread_ap_return_3();
    void thread_ap_return_4();
    void thread_ap_return_5();
    void thread_ap_return_6();
    void thread_ap_return_7();
    void thread_ap_return_8();
    void thread_ap_return_9();
    void thread_grp_fu_4946_p0();
    void thread_grp_fu_4946_p1();
    void thread_grp_fu_4946_p2();
    void thread_ik_col_1_fu_1370_p2();
    void thread_ik_col_cast_fu_1361_p1();
    void thread_ik_row_1_fu_1201_p2();
    void thread_ik_row_cast_fu_1192_p1();
    void thread_in_data_address0();
    void thread_in_data_ce0();
    void thread_index_col_out_cast_fu_1161_p1();
    void thread_next_mul_fu_1187_p2();
    void thread_tmp1_fu_1380_p2();
    void thread_tmp_13_fu_1407_p2();
    void thread_tmp_15_cast_fu_1403_p1();
    void thread_tmp_16_fu_1412_p1();
    void thread_tmp_1_fu_1171_p2();
    void thread_tmp_2_fu_1177_p2();
    void thread_tmp_3_fu_1183_p1();
    void thread_tmp_4_fu_1196_p2();
    void thread_tmp_5_fu_1207_p1();
    void thread_tmp_6_fu_1365_p2();
    void thread_tmp_7_fu_1376_p1();
    void thread_tmp_8_t_fu_1386_p2();
    void thread_tmp_fu_1165_p2();
    void thread_tmp_t_fu_1391_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
