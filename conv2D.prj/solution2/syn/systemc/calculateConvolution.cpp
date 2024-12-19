// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "calculateConvolution.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic calculateConvolution::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic calculateConvolution::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> calculateConvolution::ap_ST_fsm_state1 = "1";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state2 = "10";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state3 = "100";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state4 = "1000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state5 = "10000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state6 = "100000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state7 = "1000000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state8 = "10000000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state9 = "100000000";
const sc_lv<10> calculateConvolution::ap_ST_fsm_state10 = "1000000000";
const sc_lv<32> calculateConvolution::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> calculateConvolution::ap_const_lv32_3 = "11";
const sc_lv<32> calculateConvolution::ap_const_lv32_6 = "110";
const sc_lv<32> calculateConvolution::ap_const_lv32_4 = "100";
const sc_lv<32> calculateConvolution::ap_const_lv32_7 = "111";
const sc_lv<32> calculateConvolution::ap_const_lv32_1 = "1";
const sc_lv<1> calculateConvolution::ap_const_lv1_1 = "1";
const sc_lv<32> calculateConvolution::ap_const_lv32_2 = "10";
const sc_lv<1> calculateConvolution::ap_const_lv1_0 = "0";
const sc_lv<32> calculateConvolution::ap_const_lv32_5 = "101";
const sc_lv<32> calculateConvolution::ap_const_lv32_8 = "1000";
const sc_lv<32> calculateConvolution::ap_const_lv32_9 = "1001";
const sc_lv<31> calculateConvolution::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<38> calculateConvolution::ap_const_lv38_0 = "00000000000000000000000000000000000000";
const sc_lv<38> calculateConvolution::ap_const_lv38_64 = "1100100";
const sc_lv<31> calculateConvolution::ap_const_lv31_1 = "1";
const sc_lv<32> calculateConvolution::ap_const_lv32_1F = "11111";
const sc_lv<32> calculateConvolution::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const bool calculateConvolution::ap_const_boolean_1 = true;

calculateConvolution::calculateConvolution(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_234_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_234_p2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_234_p2 );
    sensitive << ( sum_reg_116 );
    sensitive << ( ap_return_preg );

    SC_METHOD(thread_buffer_r_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_25_fu_331_p1 );
    sensitive << ( tmp_30_1_fu_373_p1 );

    SC_METHOD(thread_buffer_r_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_grp_fu_205_p2);
    sensitive << ( reg_197 );
    sensitive << ( reg_201 );

    SC_METHOD(thread_ik_col_3_1_fu_392_p2);
    sensitive << ( ik_col_reg_173 );

    SC_METHOD(thread_ik_col_3_s_fu_356_p2);
    sensitive << ( ik_col_reg_173 );

    SC_METHOD(thread_ik_row_3_fu_239_p2);
    sensitive << ( ik_row_reg_128 );

    SC_METHOD(thread_ik_row_cast_fu_230_p1);
    sensitive << ( ik_row_reg_128 );

    SC_METHOD(thread_kernel_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_29_cast_fu_345_p1 );
    sensitive << ( tmp_30_cast_fu_387_p1 );

    SC_METHOD(thread_kernel_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_kernel_size_col_op_o_fu_252_p2);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_next_mul2_fu_219_p2);
    sensitive << ( phi_mul1_reg_151 );

    SC_METHOD(thread_next_mul_fu_225_p2);
    sensitive << ( kernel_size_col );
    sensitive << ( phi_mul_reg_139 );

    SC_METHOD(thread_p_lshr_fu_270_p4);
    sensitive << ( p_neg_fu_265_p2 );

    SC_METHOD(thread_p_neg_fu_265_p2);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_p_neg_t_fu_280_p2);
    sensitive << ( p_lshr_fu_270_p4 );

    SC_METHOD(thread_sum_2_1_fu_398_p2);
    sensitive << ( reg_211 );
    sensitive << ( sum_2_reg_459 );

    SC_METHOD(thread_sum_2_fu_350_p2);
    sensitive << ( reg_211 );
    sensitive << ( sum_1_reg_162 );

    SC_METHOD(thread_tmp_24_fu_325_p2);
    sensitive << ( phi_mul_reg_139 );
    sensitive << ( ik_col_reg_173 );

    SC_METHOD(thread_tmp_25_fu_331_p1);
    sensitive << ( tmp_24_fu_325_p2 );

    SC_METHOD(thread_tmp_28_1_fu_362_p2);
    sensitive << ( kernel_size_col );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ik_col_3_s_fu_356_p2 );

    SC_METHOD(thread_tmp_28_fu_382_p2);
    sensitive << ( tmp_47_reg_417 );
    sensitive << ( tmp_56_fu_378_p1 );

    SC_METHOD(thread_tmp_29_1_fu_367_p2);
    sensitive << ( phi_mul_reg_139 );
    sensitive << ( ik_col_3_s_fu_356_p2 );

    SC_METHOD(thread_tmp_29_cast_fu_345_p1);
    sensitive << ( tmp_s_fu_340_p2 );

    SC_METHOD(thread_tmp_30_1_fu_373_p1);
    sensitive << ( tmp_29_1_fu_367_p2 );

    SC_METHOD(thread_tmp_30_cast_fu_387_p1);
    sensitive << ( tmp_28_fu_382_p2 );

    SC_METHOD(thread_tmp_47_fu_215_p1);
    sensitive << ( phi_mul1_reg_151 );

    SC_METHOD(thread_tmp_48_fu_245_p3);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_49_fu_257_p3);
    sensitive << ( kernel_size_col_op_o_fu_252_p2 );

    SC_METHOD(thread_tmp_50_fu_286_p4);
    sensitive << ( kernel_size_col_op_o_fu_252_p2 );

    SC_METHOD(thread_tmp_51_fu_296_p3);
    sensitive << ( tmp_49_fu_257_p3 );
    sensitive << ( p_neg_t_fu_280_p2 );
    sensitive << ( tmp_50_fu_286_p4 );

    SC_METHOD(thread_tmp_52_fu_304_p3);
    sensitive << ( tmp_48_fu_245_p3 );
    sensitive << ( tmp_51_fu_296_p3 );

    SC_METHOD(thread_tmp_53_fu_312_p3);
    sensitive << ( tmp_52_fu_304_p3 );

    SC_METHOD(thread_tmp_54_fu_320_p2);
    sensitive << ( tmp_53_reg_441 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ik_col_reg_173 );

    SC_METHOD(thread_tmp_55_fu_336_p1);
    sensitive << ( ik_col_reg_173 );

    SC_METHOD(thread_tmp_56_fu_378_p1);
    sensitive << ( ik_col_3_s_fu_356_p2 );

    SC_METHOD(thread_tmp_fu_234_p2);
    sensitive << ( kernel_size_row );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ik_row_cast_fu_230_p1 );

    SC_METHOD(thread_tmp_s_fu_340_p2);
    sensitive << ( tmp_47_reg_417 );
    sensitive << ( tmp_55_fu_336_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_234_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_54_fu_320_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_28_1_fu_362_p2 );

    ap_CS_fsm = "0000000001";
    ap_return_preg = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "calculateConvolution_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, buffer_r_address0, "(port)buffer_r_address0");
    sc_trace(mVcdFile, buffer_r_ce0, "(port)buffer_r_ce0");
    sc_trace(mVcdFile, buffer_r_q0, "(port)buffer_r_q0");
    sc_trace(mVcdFile, kernel_address0, "(port)kernel_address0");
    sc_trace(mVcdFile, kernel_ce0, "(port)kernel_ce0");
    sc_trace(mVcdFile, kernel_q0, "(port)kernel_q0");
    sc_trace(mVcdFile, kernel_size_row, "(port)kernel_size_row");
    sc_trace(mVcdFile, kernel_size_col, "(port)kernel_size_col");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, reg_197, "reg_197");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, reg_201, "reg_201");
    sc_trace(mVcdFile, grp_fu_205_p2, "grp_fu_205_p2");
    sc_trace(mVcdFile, reg_211, "reg_211");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_47_fu_215_p1, "tmp_47_fu_215_p1");
    sc_trace(mVcdFile, tmp_47_reg_417, "tmp_47_reg_417");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, next_mul2_fu_219_p2, "next_mul2_fu_219_p2");
    sc_trace(mVcdFile, next_mul2_reg_423, "next_mul2_reg_423");
    sc_trace(mVcdFile, next_mul_fu_225_p2, "next_mul_fu_225_p2");
    sc_trace(mVcdFile, next_mul_reg_428, "next_mul_reg_428");
    sc_trace(mVcdFile, ik_row_3_fu_239_p2, "ik_row_3_fu_239_p2");
    sc_trace(mVcdFile, ik_row_3_reg_436, "ik_row_3_reg_436");
    sc_trace(mVcdFile, tmp_53_fu_312_p3, "tmp_53_fu_312_p3");
    sc_trace(mVcdFile, tmp_53_reg_441, "tmp_53_reg_441");
    sc_trace(mVcdFile, tmp_fu_234_p2, "tmp_fu_234_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_54_fu_320_p2, "tmp_54_fu_320_p2");
    sc_trace(mVcdFile, sum_2_fu_350_p2, "sum_2_fu_350_p2");
    sc_trace(mVcdFile, sum_2_reg_459, "sum_2_reg_459");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, tmp_28_1_fu_362_p2, "tmp_28_1_fu_362_p2");
    sc_trace(mVcdFile, ik_col_3_1_fu_392_p2, "ik_col_3_1_fu_392_p2");
    sc_trace(mVcdFile, ik_col_3_1_reg_478, "ik_col_3_1_reg_478");
    sc_trace(mVcdFile, sum_2_1_fu_398_p2, "sum_2_1_fu_398_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, sum_reg_116, "sum_reg_116");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, ik_row_reg_128, "ik_row_reg_128");
    sc_trace(mVcdFile, phi_mul_reg_139, "phi_mul_reg_139");
    sc_trace(mVcdFile, phi_mul1_reg_151, "phi_mul1_reg_151");
    sc_trace(mVcdFile, sum_1_reg_162, "sum_1_reg_162");
    sc_trace(mVcdFile, ik_col_reg_173, "ik_col_reg_173");
    sc_trace(mVcdFile, sum_1_lcssa_reg_185, "sum_1_lcssa_reg_185");
    sc_trace(mVcdFile, tmp_25_fu_331_p1, "tmp_25_fu_331_p1");
    sc_trace(mVcdFile, tmp_29_cast_fu_345_p1, "tmp_29_cast_fu_345_p1");
    sc_trace(mVcdFile, tmp_30_1_fu_373_p1, "tmp_30_1_fu_373_p1");
    sc_trace(mVcdFile, tmp_30_cast_fu_387_p1, "tmp_30_cast_fu_387_p1");
    sc_trace(mVcdFile, ik_row_cast_fu_230_p1, "ik_row_cast_fu_230_p1");
    sc_trace(mVcdFile, kernel_size_col_op_o_fu_252_p2, "kernel_size_col_op_o_fu_252_p2");
    sc_trace(mVcdFile, p_neg_fu_265_p2, "p_neg_fu_265_p2");
    sc_trace(mVcdFile, p_lshr_fu_270_p4, "p_lshr_fu_270_p4");
    sc_trace(mVcdFile, tmp_49_fu_257_p3, "tmp_49_fu_257_p3");
    sc_trace(mVcdFile, p_neg_t_fu_280_p2, "p_neg_t_fu_280_p2");
    sc_trace(mVcdFile, tmp_50_fu_286_p4, "tmp_50_fu_286_p4");
    sc_trace(mVcdFile, tmp_48_fu_245_p3, "tmp_48_fu_245_p3");
    sc_trace(mVcdFile, tmp_51_fu_296_p3, "tmp_51_fu_296_p3");
    sc_trace(mVcdFile, tmp_52_fu_304_p3, "tmp_52_fu_304_p3");
    sc_trace(mVcdFile, tmp_24_fu_325_p2, "tmp_24_fu_325_p2");
    sc_trace(mVcdFile, tmp_55_fu_336_p1, "tmp_55_fu_336_p1");
    sc_trace(mVcdFile, tmp_s_fu_340_p2, "tmp_s_fu_340_p2");
    sc_trace(mVcdFile, ik_col_3_s_fu_356_p2, "ik_col_3_s_fu_356_p2");
    sc_trace(mVcdFile, tmp_29_1_fu_367_p2, "tmp_29_1_fu_367_p2");
    sc_trace(mVcdFile, tmp_56_fu_378_p1, "tmp_56_fu_378_p1");
    sc_trace(mVcdFile, tmp_28_fu_382_p2, "tmp_28_fu_382_p2");
    sc_trace(mVcdFile, ap_return_preg, "ap_return_preg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

calculateConvolution::~calculateConvolution() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void calculateConvolution::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_preg = ap_const_lv32_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
             esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_0))) {
            ap_return_preg = sum_reg_116.read();
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        ik_col_reg_173 = ik_col_3_1_reg_478.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_1))) {
        ik_col_reg_173 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        ik_row_reg_128 = ik_row_3_reg_436.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ik_row_reg_128 = ap_const_lv31_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        phi_mul1_reg_151 = next_mul2_reg_423.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul1_reg_151 = ap_const_lv38_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        phi_mul_reg_139 = next_mul_reg_428.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_139 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_28_1_fu_362_p2.read()))) {
        sum_1_lcssa_reg_185 = sum_2_fu_350_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_54_fu_320_p2.read()))) {
        sum_1_lcssa_reg_185 = sum_1_reg_162.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        sum_1_reg_162 = sum_2_1_fu_398_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_1))) {
        sum_1_reg_162 = sum_reg_116.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        sum_reg_116 = sum_1_lcssa_reg_185.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sum_reg_116 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_28_1_fu_362_p2.read()))) {
        ik_col_3_1_reg_478 = ik_col_3_1_fu_392_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ik_row_3_reg_436 = ik_row_3_fu_239_p2.read();
        next_mul2_reg_423 = next_mul2_fu_219_p2.read();
        next_mul_reg_428 = next_mul_fu_225_p2.read();
        tmp_47_reg_417 = tmp_47_fu_215_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        reg_197 = buffer_r_q0.read();
        reg_201 = kernel_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        reg_211 = grp_fu_205_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        sum_2_reg_459 = sum_2_fu_350_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_1))) {
        tmp_53_reg_441 = tmp_53_fu_312_p3.read();
    }
}

void calculateConvolution::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void calculateConvolution::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void calculateConvolution::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void calculateConvolution::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void calculateConvolution::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void calculateConvolution::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void calculateConvolution::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void calculateConvolution::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void calculateConvolution::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void calculateConvolution::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void calculateConvolution::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void calculateConvolution::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void calculateConvolution::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void calculateConvolution::thread_ap_return() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_0))) {
        ap_return = sum_reg_116.read();
    } else {
        ap_return = ap_return_preg.read();
    }
}

void calculateConvolution::thread_buffer_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        buffer_r_address0 =  (sc_lv<5>) (tmp_30_1_fu_373_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        buffer_r_address0 =  (sc_lv<5>) (tmp_25_fu_331_p1.read());
    } else {
        buffer_r_address0 = "XXXXX";
    }
}

void calculateConvolution::thread_buffer_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        buffer_r_ce0 = ap_const_logic_1;
    } else {
        buffer_r_ce0 = ap_const_logic_0;
    }
}

void calculateConvolution::thread_grp_fu_205_p2() {
    grp_fu_205_p2 = (!reg_201.read().is_01() || !reg_197.read().is_01())? sc_lv<32>(): sc_bigint<32>(reg_201.read()) * sc_bigint<32>(reg_197.read());
}

void calculateConvolution::thread_ik_col_3_1_fu_392_p2() {
    ik_col_3_1_fu_392_p2 = (!ap_const_lv32_2.is_01() || !ik_col_reg_173.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2) + sc_biguint<32>(ik_col_reg_173.read()));
}

void calculateConvolution::thread_ik_col_3_s_fu_356_p2() {
    ik_col_3_s_fu_356_p2 = (ik_col_reg_173.read() | ap_const_lv32_1);
}

void calculateConvolution::thread_ik_row_3_fu_239_p2() {
    ik_row_3_fu_239_p2 = (!ap_const_lv31_1.is_01() || !ik_row_reg_128.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(ik_row_reg_128.read()));
}

void calculateConvolution::thread_ik_row_cast_fu_230_p1() {
    ik_row_cast_fu_230_p1 = esl_zext<32,31>(ik_row_reg_128.read());
}

void calculateConvolution::thread_kernel_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        kernel_address0 =  (sc_lv<10>) (tmp_30_cast_fu_387_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        kernel_address0 =  (sc_lv<10>) (tmp_29_cast_fu_345_p1.read());
    } else {
        kernel_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void calculateConvolution::thread_kernel_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        kernel_ce0 = ap_const_logic_1;
    } else {
        kernel_ce0 = ap_const_logic_0;
    }
}

void calculateConvolution::thread_kernel_size_col_op_o_fu_252_p2() {
    kernel_size_col_op_o_fu_252_p2 = (!kernel_size_col.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(kernel_size_col.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void calculateConvolution::thread_next_mul2_fu_219_p2() {
    next_mul2_fu_219_p2 = (!ap_const_lv38_64.is_01() || !phi_mul1_reg_151.read().is_01())? sc_lv<38>(): (sc_biguint<38>(ap_const_lv38_64) + sc_biguint<38>(phi_mul1_reg_151.read()));
}

void calculateConvolution::thread_next_mul_fu_225_p2() {
    next_mul_fu_225_p2 = (!phi_mul_reg_139.read().is_01() || !kernel_size_col.read().is_01())? sc_lv<32>(): (sc_biguint<32>(phi_mul_reg_139.read()) + sc_biguint<32>(kernel_size_col.read()));
}

void calculateConvolution::thread_p_lshr_fu_270_p4() {
    p_lshr_fu_270_p4 = p_neg_fu_265_p2.read().range(31, 1);
}

void calculateConvolution::thread_p_neg_fu_265_p2() {
    p_neg_fu_265_p2 = (kernel_size_col.read() ^ ap_const_lv32_FFFFFFFF);
}

void calculateConvolution::thread_p_neg_t_fu_280_p2() {
    p_neg_t_fu_280_p2 = (!ap_const_lv31_0.is_01() || !p_lshr_fu_270_p4.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_0) - sc_biguint<31>(p_lshr_fu_270_p4.read()));
}

void calculateConvolution::thread_sum_2_1_fu_398_p2() {
    sum_2_1_fu_398_p2 = (!reg_211.read().is_01() || !sum_2_reg_459.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_211.read()) + sc_biguint<32>(sum_2_reg_459.read()));
}

void calculateConvolution::thread_sum_2_fu_350_p2() {
    sum_2_fu_350_p2 = (!reg_211.read().is_01() || !sum_1_reg_162.read().is_01())? sc_lv<32>(): (sc_biguint<32>(reg_211.read()) + sc_biguint<32>(sum_1_reg_162.read()));
}

void calculateConvolution::thread_tmp_24_fu_325_p2() {
    tmp_24_fu_325_p2 = (!ik_col_reg_173.read().is_01() || !phi_mul_reg_139.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ik_col_reg_173.read()) + sc_biguint<32>(phi_mul_reg_139.read()));
}

void calculateConvolution::thread_tmp_25_fu_331_p1() {
    tmp_25_fu_331_p1 = esl_sext<64,32>(tmp_24_fu_325_p2.read());
}

void calculateConvolution::thread_tmp_28_1_fu_362_p2() {
    tmp_28_1_fu_362_p2 = (!ik_col_3_s_fu_356_p2.read().is_01() || !kernel_size_col.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_col_3_s_fu_356_p2.read()) < sc_bigint<32>(kernel_size_col.read()));
}

void calculateConvolution::thread_tmp_28_fu_382_p2() {
    tmp_28_fu_382_p2 = (!tmp_47_reg_417.read().is_01() || !tmp_56_fu_378_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_47_reg_417.read()) + sc_biguint<11>(tmp_56_fu_378_p1.read()));
}

void calculateConvolution::thread_tmp_29_1_fu_367_p2() {
    tmp_29_1_fu_367_p2 = (!ik_col_3_s_fu_356_p2.read().is_01() || !phi_mul_reg_139.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ik_col_3_s_fu_356_p2.read()) + sc_biguint<32>(phi_mul_reg_139.read()));
}

void calculateConvolution::thread_tmp_29_cast_fu_345_p1() {
    tmp_29_cast_fu_345_p1 = esl_zext<64,11>(tmp_s_fu_340_p2.read());
}

void calculateConvolution::thread_tmp_30_1_fu_373_p1() {
    tmp_30_1_fu_373_p1 = esl_sext<64,32>(tmp_29_1_fu_367_p2.read());
}

void calculateConvolution::thread_tmp_30_cast_fu_387_p1() {
    tmp_30_cast_fu_387_p1 = esl_zext<64,11>(tmp_28_fu_382_p2.read());
}

void calculateConvolution::thread_tmp_47_fu_215_p1() {
    tmp_47_fu_215_p1 = phi_mul1_reg_151.read().range(11-1, 0);
}

void calculateConvolution::thread_tmp_48_fu_245_p3() {
    tmp_48_fu_245_p3 = kernel_size_col.read().range(31, 31);
}

void calculateConvolution::thread_tmp_49_fu_257_p3() {
    tmp_49_fu_257_p3 = kernel_size_col_op_o_fu_252_p2.read().range(31, 31);
}

void calculateConvolution::thread_tmp_50_fu_286_p4() {
    tmp_50_fu_286_p4 = kernel_size_col_op_o_fu_252_p2.read().range(31, 1);
}

void calculateConvolution::thread_tmp_51_fu_296_p3() {
    tmp_51_fu_296_p3 = (!tmp_49_fu_257_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_49_fu_257_p3.read()[0].to_bool())? p_neg_t_fu_280_p2.read(): tmp_50_fu_286_p4.read());
}

void calculateConvolution::thread_tmp_52_fu_304_p3() {
    tmp_52_fu_304_p3 = (!tmp_48_fu_245_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_48_fu_245_p3.read()[0].to_bool())? ap_const_lv31_0: tmp_51_fu_296_p3.read());
}

void calculateConvolution::thread_tmp_53_fu_312_p3() {
    tmp_53_fu_312_p3 = esl_concat<31,1>(tmp_52_fu_304_p3.read(), ap_const_lv1_0);
}

void calculateConvolution::thread_tmp_54_fu_320_p2() {
    tmp_54_fu_320_p2 = (!ik_col_reg_173.read().is_01() || !tmp_53_reg_441.read().is_01())? sc_lv<1>(): sc_lv<1>(ik_col_reg_173.read() == tmp_53_reg_441.read());
}

void calculateConvolution::thread_tmp_55_fu_336_p1() {
    tmp_55_fu_336_p1 = ik_col_reg_173.read().range(11-1, 0);
}

void calculateConvolution::thread_tmp_56_fu_378_p1() {
    tmp_56_fu_378_p1 = ik_col_3_s_fu_356_p2.read().range(11-1, 0);
}

void calculateConvolution::thread_tmp_fu_234_p2() {
    tmp_fu_234_p2 = (!ik_row_cast_fu_230_p1.read().is_01() || !kernel_size_row.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_row_cast_fu_230_p1.read()) < sc_bigint<32>(kernel_size_row.read()));
}

void calculateConvolution::thread_tmp_s_fu_340_p2() {
    tmp_s_fu_340_p2 = (!tmp_47_reg_417.read().is_01() || !tmp_55_fu_336_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_47_reg_417.read()) + sc_biguint<11>(tmp_55_fu_336_p1.read()));
}

void calculateConvolution::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_fu_234_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_54_fu_320_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_28_1_fu_362_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state10;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<10>) ("XXXXXXXXXX");
            break;
    }
}

}

