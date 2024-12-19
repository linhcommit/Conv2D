// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv2D_HH_
#define _conv2D_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "updateBuffer.h"
#include "initializeBuffer.h"
#include "conv2D_mux_255_32cud_x.h"
#include "conv2D_mac_muladdfYi.h"
#include "conv2D_mac_muladdg8j.h"

namespace ap_rtl {

struct conv2D : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > in_data_address0;
    sc_out< sc_logic > in_data_ce0;
    sc_in< sc_lv<32> > in_data_q0;
    sc_out< sc_lv<14> > out_data_address0;
    sc_out< sc_logic > out_data_ce0;
    sc_out< sc_logic > out_data_we0;
    sc_out< sc_lv<32> > out_data_d0;
    sc_in< sc_lv<32> > row_in;
    sc_in< sc_lv<32> > col_in;
    sc_out< sc_lv<10> > kernel_address0;
    sc_out< sc_logic > kernel_ce0;
    sc_in< sc_lv<32> > kernel_q0;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;


    // Module declarations
    conv2D(sc_module_name name);
    SC_HAS_PROCESS(conv2D);

    ~conv2D();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    updateBuffer* grp_updateBuffer_fu_307;
    initializeBuffer* grp_initializeBuffer_fu_345;
    conv2D_mux_255_32cud_x<1,1,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,5,32>* conv2D_mux_255_32cud_x_U118;
    conv2D_mac_muladdfYi<1,1,8,11,11,11>* conv2D_mac_muladdfYi_U119;
    conv2D_mac_muladdg8j<1,1,5,5,5,5>* conv2D_mac_muladdg8j_U120;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > indvar_flatten_reg_261;
    sc_signal< sc_lv<31> > ik_row_i_reg_272;
    sc_signal< sc_lv<32> > sum_1_i_reg_283;
    sc_signal< sc_lv<31> > ik_col_i_reg_296;
    sc_signal< sc_lv<32> > reg_505;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > tmp_21_fu_711_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > reg_511;
    sc_signal< sc_lv<32> > reg_517;
    sc_signal< sc_lv<32> > reg_523;
    sc_signal< sc_lv<32> > reg_529;
    sc_signal< sc_lv<32> > reg_535;
    sc_signal< sc_lv<32> > reg_541;
    sc_signal< sc_lv<32> > reg_547;
    sc_signal< sc_lv<32> > reg_553;
    sc_signal< sc_lv<32> > reg_559;
    sc_signal< sc_lv<32> > reg_565;
    sc_signal< sc_lv<32> > reg_571;
    sc_signal< sc_lv<32> > reg_577;
    sc_signal< sc_lv<32> > reg_583;
    sc_signal< sc_lv<32> > reg_589;
    sc_signal< sc_lv<32> > reg_595;
    sc_signal< sc_lv<32> > reg_601;
    sc_signal< sc_lv<32> > reg_607;
    sc_signal< sc_lv<32> > reg_613;
    sc_signal< sc_lv<32> > reg_619;
    sc_signal< sc_lv<32> > reg_625;
    sc_signal< sc_lv<32> > reg_631;
    sc_signal< sc_lv<32> > reg_637;
    sc_signal< sc_lv<32> > reg_643;
    sc_signal< sc_lv<32> > reg_649;
    sc_signal< sc_lv<32> > tmp_s_fu_661_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_1538;
    sc_signal< sc_lv<32> > tmp_20_fu_673_p2;
    sc_signal< sc_lv<32> > tmp_20_reg_1543;
    sc_signal< sc_lv<5> > tmp_26_fu_679_p1;
    sc_signal< sc_lv<5> > tmp_26_reg_1548;
    sc_signal< sc_lv<64> > bound_fu_691_p2;
    sc_signal< sc_lv<64> > bound_reg_1553;
    sc_signal< sc_lv<15> > tmp_27_fu_697_p1;
    sc_signal< sc_lv<15> > tmp_27_reg_1558;
    sc_signal< sc_lv<38> > next_mul_fu_701_p2;
    sc_signal< sc_lv<38> > next_mul_reg_1563;
    sc_signal< sc_lv<31> > index_row_out_1_fu_716_p2;
    sc_signal< sc_lv<31> > index_row_out_1_reg_1571;
    sc_signal< sc_lv<1> > tmp_23_fu_951_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<31> > index_col_out_1_fu_956_p2;
    sc_signal< sc_lv<31> > index_col_out_1_reg_1580;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_971_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1585;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1585_pp0_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1585_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1585_pp0_iter3_reg;
    sc_signal< sc_lv<64> > indvar_flatten_next_fu_976_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<31> > tmp_27_i_mid2_v_fu_996_p3;
    sc_signal< sc_lv<31> > tmp_27_i_mid2_v_reg_1594;
    sc_signal< sc_lv<11> > tmp_33_fu_1004_p1;
    sc_signal< sc_lv<11> > tmp_33_reg_1599;
    sc_signal< sc_lv<5> > tmp_34_fu_1008_p1;
    sc_signal< sc_lv<5> > tmp_34_reg_1604;
    sc_signal< sc_lv<5> > tmp_35_fu_1012_p1;
    sc_signal< sc_lv<5> > tmp_35_reg_1609;
    sc_signal< sc_lv<11> > tmp_36_fu_1016_p1;
    sc_signal< sc_lv<11> > tmp_36_reg_1614;
    sc_signal< sc_lv<31> > ik_col_fu_1020_p2;
    sc_signal< sc_lv<5> > grp_fu_1340_p3;
    sc_signal< sc_lv<5> > tmp_29_t_i_reg_1624;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > tmp_28_fu_1030_p27;
    sc_signal< sc_lv<32> > tmp_28_reg_1634;
    sc_signal< sc_lv<32> > kernel_load_reg_1639;
    sc_signal< sc_lv<32> > tmp_32_i_fu_1085_p2;
    sc_signal< sc_lv<32> > tmp_32_i_reg_1644;
    sc_signal< sc_lv<32> > sum_fu_1089_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_ap_start;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_ap_done;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_ap_idle;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_ap_ready;
    sc_signal< sc_lv<14> > grp_updateBuffer_fu_307_in_data_address0;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_in_data_ce0;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_0;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_1;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_2;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_3;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_4;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_5;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_6;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_7;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_8;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_9;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_10;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_11;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_12;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_13;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_14;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_15;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_16;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_17;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_18;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_19;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_20;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_21;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_22;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_23;
    sc_signal< sc_lv<32> > grp_updateBuffer_fu_307_ap_return_24;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_ap_start;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_ap_done;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_ap_idle;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_ap_ready;
    sc_signal< sc_lv<14> > grp_initializeBuffer_fu_345_in_data_address0;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_in_data_ce0;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_0;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_1;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_2;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_3;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_4;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_5;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_6;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_7;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_8;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_9;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_10;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_11;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_12;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_13;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_14;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_15;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_16;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_17;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_18;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_19;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_20;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_21;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_22;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_23;
    sc_signal< sc_lv<32> > grp_initializeBuffer_fu_345_ap_return_24;
    sc_signal< sc_lv<31> > index_row_out_reg_226;
    sc_signal< sc_lv<38> > phi_mul_reg_238;
    sc_signal< sc_lv<31> > index_col_out_reg_249;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<31> > ap_phi_mux_ik_row_i_phi_fu_276_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_logic > grp_updateBuffer_fu_307_ap_start_reg;
    sc_signal< sc_logic > grp_initializeBuffer_fu_345_ap_start_reg;
    sc_signal< sc_lv<64> > tmp_31_cast_fu_1026_p1;
    sc_signal< sc_lv<64> > tmp_29_cast_fu_1103_p1;
    sc_signal< sc_lv<32> > buffer_0_fu_76;
    sc_signal< sc_lv<32> > buffer_1_fu_80;
    sc_signal< sc_lv<32> > buffer_2_fu_84;
    sc_signal< sc_lv<32> > buffer_3_fu_88;
    sc_signal< sc_lv<32> > buffer_4_fu_92;
    sc_signal< sc_lv<32> > buffer_5_fu_96;
    sc_signal< sc_lv<32> > buffer_6_fu_100;
    sc_signal< sc_lv<32> > buffer_7_fu_104;
    sc_signal< sc_lv<32> > buffer_8_fu_108;
    sc_signal< sc_lv<32> > buffer_9_fu_112;
    sc_signal< sc_lv<32> > buffer_10_fu_116;
    sc_signal< sc_lv<32> > buffer_11_fu_120;
    sc_signal< sc_lv<32> > buffer_12_fu_124;
    sc_signal< sc_lv<32> > buffer_13_fu_128;
    sc_signal< sc_lv<32> > buffer_14_fu_132;
    sc_signal< sc_lv<32> > buffer_15_fu_136;
    sc_signal< sc_lv<32> > buffer_16_fu_140;
    sc_signal< sc_lv<32> > buffer_17_fu_144;
    sc_signal< sc_lv<32> > buffer_18_fu_148;
    sc_signal< sc_lv<32> > buffer_19_fu_152;
    sc_signal< sc_lv<32> > buffer_20_fu_156;
    sc_signal< sc_lv<32> > buffer_21_fu_160;
    sc_signal< sc_lv<32> > buffer_22_fu_164;
    sc_signal< sc_lv<32> > buffer_23_fu_168;
    sc_signal< sc_lv<32> > buffer_24_fu_172;
    sc_signal< sc_lv<32> > tmp_fu_655_p2;
    sc_signal< sc_lv<32> > tmp_19_fu_667_p2;
    sc_signal< sc_lv<32> > bound_fu_691_p0;
    sc_signal< sc_lv<32> > bound_fu_691_p1;
    sc_signal< sc_lv<32> > index_row_out_cast_fu_707_p1;
    sc_signal< sc_lv<32> > index_col_out_cast_fu_947_p1;
    sc_signal< sc_lv<32> > ik_col_i_cast_fu_962_p1;
    sc_signal< sc_lv<1> > tmp_28_i_fu_966_p2;
    sc_signal< sc_lv<31> > ik_row_fu_982_p2;
    sc_signal< sc_lv<31> > ik_col_i_mid2_fu_988_p3;
    sc_signal< sc_lv<11> > grp_fu_1333_p3;
    sc_signal< sc_lv<15> > tmp_32_fu_1094_p1;
    sc_signal< sc_lv<15> > tmp_25_fu_1098_p2;
    sc_signal< sc_lv<8> > grp_fu_1333_p0;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<64> > bound_fu_691_p00;
    sc_signal< sc_lv<64> > bound_fu_691_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_pp0_stage0;
    static const sc_lv<7> ap_ST_fsm_state10;
    static const sc_lv<7> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<38> ap_const_lv38_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<38> ap_const_lv38_64;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<11> ap_const_lv11_64;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state5_pp0_stage0_iter0();
    void thread_ap_block_state6_pp0_stage0_iter1();
    void thread_ap_block_state7_pp0_stage0_iter2();
    void thread_ap_block_state8_pp0_stage0_iter3();
    void thread_ap_block_state9_pp0_stage0_iter4();
    void thread_ap_condition_pp0_exit_iter0_state5();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_ik_row_i_phi_fu_276_p4();
    void thread_ap_ready();
    void thread_bound_fu_691_p0();
    void thread_bound_fu_691_p00();
    void thread_bound_fu_691_p1();
    void thread_bound_fu_691_p10();
    void thread_bound_fu_691_p2();
    void thread_exitcond_flatten_fu_971_p2();
    void thread_grp_fu_1333_p0();
    void thread_grp_initializeBuffer_fu_345_ap_start();
    void thread_grp_updateBuffer_fu_307_ap_start();
    void thread_ik_col_fu_1020_p2();
    void thread_ik_col_i_cast_fu_962_p1();
    void thread_ik_col_i_mid2_fu_988_p3();
    void thread_ik_row_fu_982_p2();
    void thread_in_data_address0();
    void thread_in_data_ce0();
    void thread_index_col_out_1_fu_956_p2();
    void thread_index_col_out_cast_fu_947_p1();
    void thread_index_row_out_1_fu_716_p2();
    void thread_index_row_out_cast_fu_707_p1();
    void thread_indvar_flatten_next_fu_976_p2();
    void thread_kernel_address0();
    void thread_kernel_ce0();
    void thread_next_mul_fu_701_p2();
    void thread_out_data_address0();
    void thread_out_data_ce0();
    void thread_out_data_d0();
    void thread_out_data_we0();
    void thread_sum_fu_1089_p2();
    void thread_tmp_19_fu_667_p2();
    void thread_tmp_20_fu_673_p2();
    void thread_tmp_21_fu_711_p2();
    void thread_tmp_23_fu_951_p2();
    void thread_tmp_25_fu_1098_p2();
    void thread_tmp_26_fu_679_p1();
    void thread_tmp_27_fu_697_p1();
    void thread_tmp_27_i_mid2_v_fu_996_p3();
    void thread_tmp_28_i_fu_966_p2();
    void thread_tmp_29_cast_fu_1103_p1();
    void thread_tmp_31_cast_fu_1026_p1();
    void thread_tmp_32_fu_1094_p1();
    void thread_tmp_32_i_fu_1085_p2();
    void thread_tmp_33_fu_1004_p1();
    void thread_tmp_34_fu_1008_p1();
    void thread_tmp_35_fu_1012_p1();
    void thread_tmp_36_fu_1016_p1();
    void thread_tmp_fu_655_p2();
    void thread_tmp_s_fu_661_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
