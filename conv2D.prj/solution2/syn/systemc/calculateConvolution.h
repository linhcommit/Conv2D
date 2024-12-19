// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _calculateConvolution_HH_
#define _calculateConvolution_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct calculateConvolution : public sc_module {
    // Port declarations 15
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<5> > buffer_r_address0;
    sc_out< sc_logic > buffer_r_ce0;
    sc_in< sc_lv<32> > buffer_r_q0;
    sc_out< sc_lv<10> > kernel_address0;
    sc_out< sc_logic > kernel_ce0;
    sc_in< sc_lv<32> > kernel_q0;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    calculateConvolution(sc_module_name name);
    SC_HAS_PROCESS(calculateConvolution);

    ~calculateConvolution();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_197;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > reg_201;
    sc_signal< sc_lv<32> > grp_fu_205_p2;
    sc_signal< sc_lv<32> > reg_211;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<11> > tmp_47_fu_215_p1;
    sc_signal< sc_lv<11> > tmp_47_reg_417;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<38> > next_mul2_fu_219_p2;
    sc_signal< sc_lv<38> > next_mul2_reg_423;
    sc_signal< sc_lv<32> > next_mul_fu_225_p2;
    sc_signal< sc_lv<32> > next_mul_reg_428;
    sc_signal< sc_lv<31> > ik_row_3_fu_239_p2;
    sc_signal< sc_lv<31> > ik_row_3_reg_436;
    sc_signal< sc_lv<32> > tmp_53_fu_312_p3;
    sc_signal< sc_lv<32> > tmp_53_reg_441;
    sc_signal< sc_lv<1> > tmp_fu_234_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > tmp_54_fu_320_p2;
    sc_signal< sc_lv<32> > sum_2_fu_350_p2;
    sc_signal< sc_lv<32> > sum_2_reg_459;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_28_1_fu_362_p2;
    sc_signal< sc_lv<32> > ik_col_3_1_fu_392_p2;
    sc_signal< sc_lv<32> > ik_col_3_1_reg_478;
    sc_signal< sc_lv<32> > sum_2_1_fu_398_p2;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > sum_reg_116;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<31> > ik_row_reg_128;
    sc_signal< sc_lv<32> > phi_mul_reg_139;
    sc_signal< sc_lv<38> > phi_mul1_reg_151;
    sc_signal< sc_lv<32> > sum_1_reg_162;
    sc_signal< sc_lv<32> > ik_col_reg_173;
    sc_signal< sc_lv<32> > sum_1_lcssa_reg_185;
    sc_signal< sc_lv<64> > tmp_25_fu_331_p1;
    sc_signal< sc_lv<64> > tmp_29_cast_fu_345_p1;
    sc_signal< sc_lv<64> > tmp_30_1_fu_373_p1;
    sc_signal< sc_lv<64> > tmp_30_cast_fu_387_p1;
    sc_signal< sc_lv<32> > ik_row_cast_fu_230_p1;
    sc_signal< sc_lv<32> > kernel_size_col_op_o_fu_252_p2;
    sc_signal< sc_lv<32> > p_neg_fu_265_p2;
    sc_signal< sc_lv<31> > p_lshr_fu_270_p4;
    sc_signal< sc_lv<1> > tmp_49_fu_257_p3;
    sc_signal< sc_lv<31> > p_neg_t_fu_280_p2;
    sc_signal< sc_lv<31> > tmp_50_fu_286_p4;
    sc_signal< sc_lv<1> > tmp_48_fu_245_p3;
    sc_signal< sc_lv<31> > tmp_51_fu_296_p3;
    sc_signal< sc_lv<31> > tmp_52_fu_304_p3;
    sc_signal< sc_lv<32> > tmp_24_fu_325_p2;
    sc_signal< sc_lv<11> > tmp_55_fu_336_p1;
    sc_signal< sc_lv<11> > tmp_s_fu_340_p2;
    sc_signal< sc_lv<32> > ik_col_3_s_fu_356_p2;
    sc_signal< sc_lv<32> > tmp_29_1_fu_367_p2;
    sc_signal< sc_lv<11> > tmp_56_fu_378_p1;
    sc_signal< sc_lv<11> > tmp_28_fu_382_p2;
    sc_signal< sc_lv<32> > ap_return_preg;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<38> ap_const_lv38_0;
    static const sc_lv<38> ap_const_lv38_64;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_buffer_r_address0();
    void thread_buffer_r_ce0();
    void thread_grp_fu_205_p2();
    void thread_ik_col_3_1_fu_392_p2();
    void thread_ik_col_3_s_fu_356_p2();
    void thread_ik_row_3_fu_239_p2();
    void thread_ik_row_cast_fu_230_p1();
    void thread_kernel_address0();
    void thread_kernel_ce0();
    void thread_kernel_size_col_op_o_fu_252_p2();
    void thread_next_mul2_fu_219_p2();
    void thread_next_mul_fu_225_p2();
    void thread_p_lshr_fu_270_p4();
    void thread_p_neg_fu_265_p2();
    void thread_p_neg_t_fu_280_p2();
    void thread_sum_2_1_fu_398_p2();
    void thread_sum_2_fu_350_p2();
    void thread_tmp_24_fu_325_p2();
    void thread_tmp_25_fu_331_p1();
    void thread_tmp_28_1_fu_362_p2();
    void thread_tmp_28_fu_382_p2();
    void thread_tmp_29_1_fu_367_p2();
    void thread_tmp_29_cast_fu_345_p1();
    void thread_tmp_30_1_fu_373_p1();
    void thread_tmp_30_cast_fu_387_p1();
    void thread_tmp_47_fu_215_p1();
    void thread_tmp_48_fu_245_p3();
    void thread_tmp_49_fu_257_p3();
    void thread_tmp_50_fu_286_p4();
    void thread_tmp_51_fu_296_p3();
    void thread_tmp_52_fu_304_p3();
    void thread_tmp_53_fu_312_p3();
    void thread_tmp_54_fu_320_p2();
    void thread_tmp_55_fu_336_p1();
    void thread_tmp_56_fu_378_p1();
    void thread_tmp_fu_234_p2();
    void thread_tmp_s_fu_340_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
