// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _initializeBuffer_HH_
#define _initializeBuffer_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "conv2D_mul_mul_8nbkb.h"

namespace ap_rtl {

struct initializeBuffer : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > buffer_r_address0;
    sc_out< sc_logic > buffer_r_ce0;
    sc_out< sc_logic > buffer_r_we0;
    sc_out< sc_lv<32> > buffer_r_d0;
    sc_out< sc_lv<14> > in_data_address0;
    sc_out< sc_logic > in_data_ce0;
    sc_in< sc_lv<32> > in_data_q0;
    sc_in< sc_lv<31> > index_row_out;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;


    // Module declarations
    initializeBuffer(sc_module_name name);
    SC_HAS_PROCESS(initializeBuffer);

    ~initializeBuffer();

    sc_trace_file* mVcdFile;

    conv2D_mul_mul_8nbkb<1,1,8,15,15>* conv2D_mul_mul_8nbkb_U1;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > smax_cast_fu_189_p1;
    sc_signal< sc_lv<32> > smax_cast_reg_396;
    sc_signal< sc_lv<31> > ik_row_2_fu_202_p2;
    sc_signal< sc_lv<31> > ik_row_2_reg_404;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > i_buffer_1_fu_208_p2;
    sc_signal< sc_lv<32> > i_buffer_1_reg_409;
    sc_signal< sc_lv<1> > tmp_s_fu_197_p2;
    sc_signal< sc_lv<15> > tmp_18_fu_372_p2;
    sc_signal< sc_lv<15> > tmp_18_reg_414;
    sc_signal< sc_lv<32> > tmp_33_fu_293_p3;
    sc_signal< sc_lv<32> > tmp_33_reg_420;
    sc_signal< sc_lv<1> > tmp_34_fu_301_p2;
    sc_signal< sc_lv<1> > tmp_34_reg_425;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > tmp_19_fu_320_p2;
    sc_signal< sc_lv<32> > tmp_19_reg_434;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_17_1_fu_337_p2;
    sc_signal< sc_lv<32> > tmp_19_1_fu_356_p2;
    sc_signal< sc_lv<32> > tmp_19_1_reg_447;
    sc_signal< sc_lv<32> > ik_col_2_1_fu_362_p2;
    sc_signal< sc_lv<32> > ik_col_2_1_reg_452;
    sc_signal< sc_lv<32> > i_buffer_reg_125;
    sc_signal< sc_lv<31> > ik_row_reg_137;
    sc_signal< sc_lv<32> > i_buffer_s_reg_148;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > ik_col_reg_159;
    sc_signal< sc_lv<64> > tmp_22_cast_fu_315_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_326_p1;
    sc_signal< sc_lv<64> > tmp_23_cast_fu_351_p1;
    sc_signal< sc_lv<64> > tmp_20_1_fu_368_p1;
    sc_signal< sc_lv<1> > tmp_fu_171_p2;
    sc_signal< sc_lv<31> > tmp_24_fu_177_p1;
    sc_signal< sc_lv<31> > smax_fu_181_p3;
    sc_signal< sc_lv<32> > ik_row_cast_fu_193_p1;
    sc_signal< sc_lv<15> > tmp_26_fu_216_p1;
    sc_signal< sc_lv<15> > tmp_25_fu_213_p1;
    sc_signal< sc_lv<32> > kernel_size_col_op_o_fu_233_p2;
    sc_signal< sc_lv<32> > p_neg_fu_246_p2;
    sc_signal< sc_lv<31> > p_lshr_fu_251_p4;
    sc_signal< sc_lv<1> > tmp_29_fu_238_p3;
    sc_signal< sc_lv<31> > p_neg_t_fu_261_p2;
    sc_signal< sc_lv<31> > tmp_30_fu_267_p4;
    sc_signal< sc_lv<1> > tmp_28_fu_226_p3;
    sc_signal< sc_lv<31> > tmp_31_fu_277_p3;
    sc_signal< sc_lv<31> > tmp_32_fu_285_p3;
    sc_signal< sc_lv<15> > tmp_35_fu_306_p1;
    sc_signal< sc_lv<15> > tmp_21_fu_310_p2;
    sc_signal< sc_lv<32> > ik_col_2_s_fu_331_p2;
    sc_signal< sc_lv<15> > tmp_36_fu_342_p1;
    sc_signal< sc_lv<15> > tmp_22_fu_346_p2;
    sc_signal< sc_lv<8> > tmp_18_fu_372_p0;
    sc_signal< sc_lv<15> > tmp_18_fu_372_p1;
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
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
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
    void thread_ap_ready();
    void thread_buffer_r_address0();
    void thread_buffer_r_ce0();
    void thread_buffer_r_d0();
    void thread_buffer_r_we0();
    void thread_i_buffer_1_fu_208_p2();
    void thread_ik_col_2_1_fu_362_p2();
    void thread_ik_col_2_s_fu_331_p2();
    void thread_ik_row_2_fu_202_p2();
    void thread_ik_row_cast_fu_193_p1();
    void thread_in_data_address0();
    void thread_in_data_ce0();
    void thread_kernel_size_col_op_o_fu_233_p2();
    void thread_p_lshr_fu_251_p4();
    void thread_p_neg_fu_246_p2();
    void thread_p_neg_t_fu_261_p2();
    void thread_smax_cast_fu_189_p1();
    void thread_smax_fu_181_p3();
    void thread_tmp_17_1_fu_337_p2();
    void thread_tmp_18_fu_372_p0();
    void thread_tmp_18_fu_372_p1();
    void thread_tmp_19_1_fu_356_p2();
    void thread_tmp_19_fu_320_p2();
    void thread_tmp_20_1_fu_368_p1();
    void thread_tmp_20_fu_326_p1();
    void thread_tmp_21_fu_310_p2();
    void thread_tmp_22_cast_fu_315_p1();
    void thread_tmp_22_fu_346_p2();
    void thread_tmp_23_cast_fu_351_p1();
    void thread_tmp_24_fu_177_p1();
    void thread_tmp_25_fu_213_p1();
    void thread_tmp_26_fu_216_p1();
    void thread_tmp_28_fu_226_p3();
    void thread_tmp_29_fu_238_p3();
    void thread_tmp_30_fu_267_p4();
    void thread_tmp_31_fu_277_p3();
    void thread_tmp_32_fu_285_p3();
    void thread_tmp_33_fu_293_p3();
    void thread_tmp_34_fu_301_p2();
    void thread_tmp_35_fu_306_p1();
    void thread_tmp_36_fu_342_p1();
    void thread_tmp_fu_171_p2();
    void thread_tmp_s_fu_197_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
