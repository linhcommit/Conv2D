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

#include "conv2D_ama_addmulcud.h"

namespace ap_rtl {

struct updateBuffer : public sc_module {
    // Port declarations 19
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
    sc_in< sc_lv<32> > buffer_r_q0;
    sc_out< sc_lv<14> > in_data_address0;
    sc_out< sc_logic > in_data_ce0;
    sc_in< sc_lv<32> > in_data_q0;
    sc_in< sc_lv<31> > index_row_out;
    sc_in< sc_lv<32> > index_col_out;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;
    sc_in< sc_lv<32> > col_in;


    // Module declarations
    updateBuffer(sc_module_name name);
    SC_HAS_PROCESS(updateBuffer);

    ~updateBuffer();

    sc_trace_file* mVcdFile;

    conv2D_ama_addmulcud<1,1,15,15,8,15,15>* conv2D_ama_addmulcud_U12;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > tmp_fu_194_p2;
    sc_signal< sc_lv<32> > tmp_reg_420;
    sc_signal< sc_lv<1> > tmp_2_fu_206_p2;
    sc_signal< sc_lv<1> > tmp_2_reg_427;
    sc_signal< sc_lv<15> > tmp_3_fu_212_p1;
    sc_signal< sc_lv<15> > tmp_3_reg_431;
    sc_signal< sc_lv<32> > next_mul_fu_216_p2;
    sc_signal< sc_lv<32> > next_mul_reg_436;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<31> > ik_row_1_fu_230_p2;
    sc_signal< sc_lv<31> > ik_row_1_reg_444;
    sc_signal< sc_lv<32> > tmp_7_fu_236_p2;
    sc_signal< sc_lv<32> > tmp_7_reg_449;
    sc_signal< sc_lv<1> > tmp_4_fu_225_p2;
    sc_signal< sc_lv<32> > tmp_19_fu_302_p3;
    sc_signal< sc_lv<32> > tmp_19_reg_455;
    sc_signal< sc_lv<1> > tmp_20_fu_310_p2;
    sc_signal< sc_lv<1> > tmp_20_reg_460;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > tmp_8_1_fu_347_p2;
    sc_signal< sc_lv<32> > tmp_8_1_reg_472;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_6_1_fu_342_p2;
    sc_signal< sc_lv<32> > tmp_1_5_fu_352_p2;
    sc_signal< sc_lv<32> > tmp_1_5_reg_477;
    sc_signal< sc_lv<32> > ik_col_1_1_fu_358_p2;
    sc_signal< sc_lv<32> > ik_col_1_1_reg_482;
    sc_signal< sc_lv<32> > tmp_13_fu_375_p2;
    sc_signal< sc_lv<32> > tmp_13_reg_492;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<31> > ik_row_reg_158;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > phi_mul_reg_170;
    sc_signal< sc_lv<32> > ik_col_reg_182;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_9_fu_320_p1;
    sc_signal< sc_lv<64> > tmp_10_fu_331_p1;
    sc_signal< sc_lv<64> > tmp_17_cast_fu_371_p1;
    sc_signal< sc_lv<64> > tmp_9_1_fu_380_p1;
    sc_signal< sc_lv<64> > tmp_10_1_fu_384_p1;
    sc_signal< sc_lv<64> > tmp_14_fu_388_p1;
    sc_signal< sc_lv<32> > tmp_1_fu_200_p2;
    sc_signal< sc_lv<32> > ik_row_cast_fu_221_p1;
    sc_signal< sc_lv<32> > p_neg_fu_256_p2;
    sc_signal< sc_lv<31> > p_lshr_fu_261_p4;
    sc_signal< sc_lv<1> > tmp_11_fu_249_p3;
    sc_signal< sc_lv<31> > p_neg_t_fu_271_p2;
    sc_signal< sc_lv<31> > tmp_12_fu_277_p4;
    sc_signal< sc_lv<1> > tmp_5_fu_242_p3;
    sc_signal< sc_lv<31> > tmp_15_fu_286_p3;
    sc_signal< sc_lv<31> > tmp_18_fu_294_p3;
    sc_signal< sc_lv<32> > tmp_8_fu_315_p2;
    sc_signal< sc_lv<32> > tmp_s_fu_325_p2;
    sc_signal< sc_lv<32> > ik_col_1_s_fu_336_p2;
    sc_signal< sc_lv<15> > grp_fu_392_p4;
    sc_signal< sc_lv<15> > grp_fu_392_p0;
    sc_signal< sc_lv<15> > grp_fu_392_p1;
    sc_signal< sc_lv<8> > grp_fu_392_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<15> ap_const_lv15_64;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_buffer_r_address0();
    void thread_buffer_r_ce0();
    void thread_buffer_r_d0();
    void thread_buffer_r_we0();
    void thread_grp_fu_392_p0();
    void thread_grp_fu_392_p1();
    void thread_grp_fu_392_p2();
    void thread_ik_col_1_1_fu_358_p2();
    void thread_ik_col_1_s_fu_336_p2();
    void thread_ik_row_1_fu_230_p2();
    void thread_ik_row_cast_fu_221_p1();
    void thread_in_data_address0();
    void thread_in_data_ce0();
    void thread_next_mul_fu_216_p2();
    void thread_p_lshr_fu_261_p4();
    void thread_p_neg_fu_256_p2();
    void thread_p_neg_t_fu_271_p2();
    void thread_tmp_10_1_fu_384_p1();
    void thread_tmp_10_fu_331_p1();
    void thread_tmp_11_fu_249_p3();
    void thread_tmp_12_fu_277_p4();
    void thread_tmp_13_fu_375_p2();
    void thread_tmp_14_fu_388_p1();
    void thread_tmp_15_fu_286_p3();
    void thread_tmp_17_cast_fu_371_p1();
    void thread_tmp_18_fu_294_p3();
    void thread_tmp_19_fu_302_p3();
    void thread_tmp_1_5_fu_352_p2();
    void thread_tmp_1_fu_200_p2();
    void thread_tmp_20_fu_310_p2();
    void thread_tmp_2_fu_206_p2();
    void thread_tmp_3_fu_212_p1();
    void thread_tmp_4_fu_225_p2();
    void thread_tmp_5_fu_242_p3();
    void thread_tmp_6_1_fu_342_p2();
    void thread_tmp_7_fu_236_p2();
    void thread_tmp_8_1_fu_347_p2();
    void thread_tmp_8_fu_315_p2();
    void thread_tmp_9_1_fu_380_p1();
    void thread_tmp_9_fu_320_p1();
    void thread_tmp_fu_194_p2();
    void thread_tmp_s_fu_325_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
