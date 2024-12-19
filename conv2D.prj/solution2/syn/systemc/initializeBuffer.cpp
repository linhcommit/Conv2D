// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "initializeBuffer.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic initializeBuffer::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic initializeBuffer::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> initializeBuffer::ap_ST_fsm_state1 = "1";
const sc_lv<5> initializeBuffer::ap_ST_fsm_state2 = "10";
const sc_lv<5> initializeBuffer::ap_ST_fsm_state3 = "100";
const sc_lv<5> initializeBuffer::ap_ST_fsm_state4 = "1000";
const sc_lv<5> initializeBuffer::ap_ST_fsm_state5 = "10000";
const sc_lv<32> initializeBuffer::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> initializeBuffer::ap_const_lv32_1 = "1";
const sc_lv<1> initializeBuffer::ap_const_lv1_1 = "1";
const sc_lv<32> initializeBuffer::ap_const_lv32_2 = "10";
const sc_lv<1> initializeBuffer::ap_const_lv1_0 = "0";
const sc_lv<32> initializeBuffer::ap_const_lv32_3 = "11";
const sc_lv<31> initializeBuffer::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<32> initializeBuffer::ap_const_lv32_4 = "100";
const sc_lv<31> initializeBuffer::ap_const_lv31_1 = "1";
const sc_lv<32> initializeBuffer::ap_const_lv32_1F = "11111";
const sc_lv<32> initializeBuffer::ap_const_lv32_FFFFFFFF = "11111111111111111111111111111111";
const sc_lv<15> initializeBuffer::ap_const_lv15_64 = "1100100";
const bool initializeBuffer::ap_const_boolean_1 = true;

initializeBuffer::initializeBuffer(sc_module_name name) : sc_module(name), mVcdFile(0) {
    conv2D_mul_mul_8nbkb_U1 = new conv2D_mul_mul_8nbkb<1,1,8,15,15>("conv2D_mul_mul_8nbkb_U1");
    conv2D_mul_mul_8nbkb_U1->din0(tmp_18_fu_372_p0);
    conv2D_mul_mul_8nbkb_U1->din1(tmp_18_fu_372_p1);
    conv2D_mul_mul_8nbkb_U1->dout(tmp_18_fu_372_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_197_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_197_p2 );

    SC_METHOD(thread_buffer_r_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_20_fu_326_p1 );
    sensitive << ( tmp_20_1_fu_368_p1 );

    SC_METHOD(thread_buffer_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_buffer_r_d0);
    sensitive << ( in_data_q0 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_buffer_r_we0);
    sensitive << ( tmp_34_reg_425 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_i_buffer_1_fu_208_p2);
    sensitive << ( smax_cast_reg_396 );
    sensitive << ( i_buffer_reg_125 );

    SC_METHOD(thread_ik_col_2_1_fu_362_p2);
    sensitive << ( ik_col_reg_159 );

    SC_METHOD(thread_ik_col_2_s_fu_331_p2);
    sensitive << ( ik_col_reg_159 );

    SC_METHOD(thread_ik_row_2_fu_202_p2);
    sensitive << ( ik_row_reg_137 );

    SC_METHOD(thread_ik_row_cast_fu_193_p1);
    sensitive << ( ik_row_reg_137 );

    SC_METHOD(thread_in_data_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_22_cast_fu_315_p1 );
    sensitive << ( tmp_23_cast_fu_351_p1 );

    SC_METHOD(thread_in_data_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_kernel_size_col_op_o_fu_233_p2);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_p_lshr_fu_251_p4);
    sensitive << ( p_neg_fu_246_p2 );

    SC_METHOD(thread_p_neg_fu_246_p2);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_p_neg_t_fu_261_p2);
    sensitive << ( p_lshr_fu_251_p4 );

    SC_METHOD(thread_smax_cast_fu_189_p1);
    sensitive << ( smax_fu_181_p3 );

    SC_METHOD(thread_smax_fu_181_p3);
    sensitive << ( tmp_fu_171_p2 );
    sensitive << ( tmp_24_fu_177_p1 );

    SC_METHOD(thread_tmp_17_1_fu_337_p2);
    sensitive << ( kernel_size_col );
    sensitive << ( tmp_34_reg_425 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ik_col_2_s_fu_331_p2 );

    SC_METHOD(thread_tmp_18_fu_372_p0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp_18_fu_372_p1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_26_fu_216_p1 );
    sensitive << ( tmp_25_fu_213_p1 );

    SC_METHOD(thread_tmp_19_1_fu_356_p2);
    sensitive << ( i_buffer_s_reg_148 );

    SC_METHOD(thread_tmp_19_fu_320_p2);
    sensitive << ( i_buffer_s_reg_148 );

    SC_METHOD(thread_tmp_20_1_fu_368_p1);
    sensitive << ( tmp_19_reg_434 );

    SC_METHOD(thread_tmp_20_fu_326_p1);
    sensitive << ( i_buffer_s_reg_148 );

    SC_METHOD(thread_tmp_21_fu_310_p2);
    sensitive << ( tmp_18_reg_414 );
    sensitive << ( tmp_35_fu_306_p1 );

    SC_METHOD(thread_tmp_22_cast_fu_315_p1);
    sensitive << ( tmp_21_fu_310_p2 );

    SC_METHOD(thread_tmp_22_fu_346_p2);
    sensitive << ( tmp_18_reg_414 );
    sensitive << ( tmp_36_fu_342_p1 );

    SC_METHOD(thread_tmp_23_cast_fu_351_p1);
    sensitive << ( tmp_22_fu_346_p2 );

    SC_METHOD(thread_tmp_24_fu_177_p1);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_25_fu_213_p1);
    sensitive << ( index_row_out );

    SC_METHOD(thread_tmp_26_fu_216_p1);
    sensitive << ( ik_row_reg_137 );

    SC_METHOD(thread_tmp_28_fu_226_p3);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_29_fu_238_p3);
    sensitive << ( kernel_size_col_op_o_fu_233_p2 );

    SC_METHOD(thread_tmp_30_fu_267_p4);
    sensitive << ( kernel_size_col_op_o_fu_233_p2 );

    SC_METHOD(thread_tmp_31_fu_277_p3);
    sensitive << ( tmp_29_fu_238_p3 );
    sensitive << ( p_neg_t_fu_261_p2 );
    sensitive << ( tmp_30_fu_267_p4 );

    SC_METHOD(thread_tmp_32_fu_285_p3);
    sensitive << ( tmp_28_fu_226_p3 );
    sensitive << ( tmp_31_fu_277_p3 );

    SC_METHOD(thread_tmp_33_fu_293_p3);
    sensitive << ( tmp_32_fu_285_p3 );

    SC_METHOD(thread_tmp_34_fu_301_p2);
    sensitive << ( tmp_33_reg_420 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ik_col_reg_159 );

    SC_METHOD(thread_tmp_35_fu_306_p1);
    sensitive << ( ik_col_reg_159 );

    SC_METHOD(thread_tmp_36_fu_342_p1);
    sensitive << ( ik_col_2_s_fu_331_p2 );

    SC_METHOD(thread_tmp_fu_171_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_s_fu_197_p2);
    sensitive << ( kernel_size_row );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ik_row_cast_fu_193_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_197_p2 );
    sensitive << ( tmp_34_reg_425 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_17_1_fu_337_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "initializeBuffer_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, buffer_r_we0, "(port)buffer_r_we0");
    sc_trace(mVcdFile, buffer_r_d0, "(port)buffer_r_d0");
    sc_trace(mVcdFile, in_data_address0, "(port)in_data_address0");
    sc_trace(mVcdFile, in_data_ce0, "(port)in_data_ce0");
    sc_trace(mVcdFile, in_data_q0, "(port)in_data_q0");
    sc_trace(mVcdFile, index_row_out, "(port)index_row_out");
    sc_trace(mVcdFile, kernel_size_row, "(port)kernel_size_row");
    sc_trace(mVcdFile, kernel_size_col, "(port)kernel_size_col");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, smax_cast_fu_189_p1, "smax_cast_fu_189_p1");
    sc_trace(mVcdFile, smax_cast_reg_396, "smax_cast_reg_396");
    sc_trace(mVcdFile, ik_row_2_fu_202_p2, "ik_row_2_fu_202_p2");
    sc_trace(mVcdFile, ik_row_2_reg_404, "ik_row_2_reg_404");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_buffer_1_fu_208_p2, "i_buffer_1_fu_208_p2");
    sc_trace(mVcdFile, i_buffer_1_reg_409, "i_buffer_1_reg_409");
    sc_trace(mVcdFile, tmp_s_fu_197_p2, "tmp_s_fu_197_p2");
    sc_trace(mVcdFile, tmp_18_fu_372_p2, "tmp_18_fu_372_p2");
    sc_trace(mVcdFile, tmp_18_reg_414, "tmp_18_reg_414");
    sc_trace(mVcdFile, tmp_33_fu_293_p3, "tmp_33_fu_293_p3");
    sc_trace(mVcdFile, tmp_33_reg_420, "tmp_33_reg_420");
    sc_trace(mVcdFile, tmp_34_fu_301_p2, "tmp_34_fu_301_p2");
    sc_trace(mVcdFile, tmp_34_reg_425, "tmp_34_reg_425");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_19_fu_320_p2, "tmp_19_fu_320_p2");
    sc_trace(mVcdFile, tmp_19_reg_434, "tmp_19_reg_434");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_17_1_fu_337_p2, "tmp_17_1_fu_337_p2");
    sc_trace(mVcdFile, tmp_19_1_fu_356_p2, "tmp_19_1_fu_356_p2");
    sc_trace(mVcdFile, tmp_19_1_reg_447, "tmp_19_1_reg_447");
    sc_trace(mVcdFile, ik_col_2_1_fu_362_p2, "ik_col_2_1_fu_362_p2");
    sc_trace(mVcdFile, ik_col_2_1_reg_452, "ik_col_2_1_reg_452");
    sc_trace(mVcdFile, i_buffer_reg_125, "i_buffer_reg_125");
    sc_trace(mVcdFile, ik_row_reg_137, "ik_row_reg_137");
    sc_trace(mVcdFile, i_buffer_s_reg_148, "i_buffer_s_reg_148");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ik_col_reg_159, "ik_col_reg_159");
    sc_trace(mVcdFile, tmp_22_cast_fu_315_p1, "tmp_22_cast_fu_315_p1");
    sc_trace(mVcdFile, tmp_20_fu_326_p1, "tmp_20_fu_326_p1");
    sc_trace(mVcdFile, tmp_23_cast_fu_351_p1, "tmp_23_cast_fu_351_p1");
    sc_trace(mVcdFile, tmp_20_1_fu_368_p1, "tmp_20_1_fu_368_p1");
    sc_trace(mVcdFile, tmp_fu_171_p2, "tmp_fu_171_p2");
    sc_trace(mVcdFile, tmp_24_fu_177_p1, "tmp_24_fu_177_p1");
    sc_trace(mVcdFile, smax_fu_181_p3, "smax_fu_181_p3");
    sc_trace(mVcdFile, ik_row_cast_fu_193_p1, "ik_row_cast_fu_193_p1");
    sc_trace(mVcdFile, tmp_26_fu_216_p1, "tmp_26_fu_216_p1");
    sc_trace(mVcdFile, tmp_25_fu_213_p1, "tmp_25_fu_213_p1");
    sc_trace(mVcdFile, kernel_size_col_op_o_fu_233_p2, "kernel_size_col_op_o_fu_233_p2");
    sc_trace(mVcdFile, p_neg_fu_246_p2, "p_neg_fu_246_p2");
    sc_trace(mVcdFile, p_lshr_fu_251_p4, "p_lshr_fu_251_p4");
    sc_trace(mVcdFile, tmp_29_fu_238_p3, "tmp_29_fu_238_p3");
    sc_trace(mVcdFile, p_neg_t_fu_261_p2, "p_neg_t_fu_261_p2");
    sc_trace(mVcdFile, tmp_30_fu_267_p4, "tmp_30_fu_267_p4");
    sc_trace(mVcdFile, tmp_28_fu_226_p3, "tmp_28_fu_226_p3");
    sc_trace(mVcdFile, tmp_31_fu_277_p3, "tmp_31_fu_277_p3");
    sc_trace(mVcdFile, tmp_32_fu_285_p3, "tmp_32_fu_285_p3");
    sc_trace(mVcdFile, tmp_35_fu_306_p1, "tmp_35_fu_306_p1");
    sc_trace(mVcdFile, tmp_21_fu_310_p2, "tmp_21_fu_310_p2");
    sc_trace(mVcdFile, ik_col_2_s_fu_331_p2, "ik_col_2_s_fu_331_p2");
    sc_trace(mVcdFile, tmp_36_fu_342_p1, "tmp_36_fu_342_p1");
    sc_trace(mVcdFile, tmp_22_fu_346_p2, "tmp_22_fu_346_p2");
    sc_trace(mVcdFile, tmp_18_fu_372_p0, "tmp_18_fu_372_p0");
    sc_trace(mVcdFile, tmp_18_fu_372_p1, "tmp_18_fu_372_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

initializeBuffer::~initializeBuffer() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete conv2D_mul_mul_8nbkb_U1;
}

void initializeBuffer::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_17_1_fu_337_p2.read()) || 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_34_reg_425.read())))) {
        i_buffer_reg_125 = i_buffer_1_reg_409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_buffer_reg_125 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_buffer_s_reg_148 = tmp_19_1_reg_447.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_1))) {
        i_buffer_s_reg_148 = i_buffer_reg_125.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ik_col_reg_159 = ik_col_2_1_reg_452.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_1))) {
        ik_col_reg_159 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_17_1_fu_337_p2.read()) || 
          esl_seteq<1,1,1>(ap_const_lv1_1, tmp_34_reg_425.read())))) {
        ik_row_reg_137 = ik_row_2_reg_404.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ik_row_reg_137 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_1))) {
        i_buffer_1_reg_409 = i_buffer_1_fu_208_p2.read();
        tmp_18_reg_414 = tmp_18_fu_372_p2.read();
        tmp_33_reg_420 = tmp_33_fu_293_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(tmp_34_reg_425.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_17_1_fu_337_p2.read()))) {
        ik_col_2_1_reg_452 = ik_col_2_1_fu_362_p2.read();
        tmp_19_1_reg_447 = tmp_19_1_fu_356_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ik_row_2_reg_404 = ik_row_2_fu_202_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        smax_cast_reg_396 = smax_cast_fu_189_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(tmp_34_reg_425.read(), ap_const_lv1_0))) {
        tmp_19_reg_434 = tmp_19_fu_320_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        tmp_34_reg_425 = tmp_34_fu_301_p2.read();
    }
}

void initializeBuffer::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void initializeBuffer::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void initializeBuffer::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void initializeBuffer::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void initializeBuffer::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void initializeBuffer::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_0)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void initializeBuffer::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void initializeBuffer::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void initializeBuffer::thread_buffer_r_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        buffer_r_address0 =  (sc_lv<5>) (tmp_20_1_fu_368_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer_r_address0 =  (sc_lv<5>) (tmp_20_fu_326_p1.read());
    } else {
        buffer_r_address0 = "XXXXX";
    }
}

void initializeBuffer::thread_buffer_r_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        buffer_r_ce0 = ap_const_logic_1;
    } else {
        buffer_r_ce0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_buffer_r_d0() {
    buffer_r_d0 = in_data_q0.read();
}

void initializeBuffer::thread_buffer_r_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
          esl_seteq<1,1,1>(tmp_34_reg_425.read(), ap_const_lv1_0)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        buffer_r_we0 = ap_const_logic_1;
    } else {
        buffer_r_we0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_i_buffer_1_fu_208_p2() {
    i_buffer_1_fu_208_p2 = (!smax_cast_reg_396.read().is_01() || !i_buffer_reg_125.read().is_01())? sc_lv<32>(): (sc_biguint<32>(smax_cast_reg_396.read()) + sc_biguint<32>(i_buffer_reg_125.read()));
}

void initializeBuffer::thread_ik_col_2_1_fu_362_p2() {
    ik_col_2_1_fu_362_p2 = (!ap_const_lv32_2.is_01() || !ik_col_reg_159.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2) + sc_biguint<32>(ik_col_reg_159.read()));
}

void initializeBuffer::thread_ik_col_2_s_fu_331_p2() {
    ik_col_2_s_fu_331_p2 = (ik_col_reg_159.read() | ap_const_lv32_1);
}

void initializeBuffer::thread_ik_row_2_fu_202_p2() {
    ik_row_2_fu_202_p2 = (!ik_row_reg_137.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(ik_row_reg_137.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void initializeBuffer::thread_ik_row_cast_fu_193_p1() {
    ik_row_cast_fu_193_p1 = esl_zext<32,31>(ik_row_reg_137.read());
}

void initializeBuffer::thread_in_data_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        in_data_address0 =  (sc_lv<14>) (tmp_23_cast_fu_351_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        in_data_address0 =  (sc_lv<14>) (tmp_22_cast_fu_315_p1.read());
    } else {
        in_data_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void initializeBuffer::thread_in_data_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        in_data_ce0 = ap_const_logic_1;
    } else {
        in_data_ce0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_kernel_size_col_op_o_fu_233_p2() {
    kernel_size_col_op_o_fu_233_p2 = (!ap_const_lv32_1.is_01() || !kernel_size_col.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(kernel_size_col.read()));
}

void initializeBuffer::thread_p_lshr_fu_251_p4() {
    p_lshr_fu_251_p4 = p_neg_fu_246_p2.read().range(31, 1);
}

void initializeBuffer::thread_p_neg_fu_246_p2() {
    p_neg_fu_246_p2 = (kernel_size_col.read() ^ ap_const_lv32_FFFFFFFF);
}

void initializeBuffer::thread_p_neg_t_fu_261_p2() {
    p_neg_t_fu_261_p2 = (!ap_const_lv31_0.is_01() || !p_lshr_fu_251_p4.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_0) - sc_biguint<31>(p_lshr_fu_251_p4.read()));
}

void initializeBuffer::thread_smax_cast_fu_189_p1() {
    smax_cast_fu_189_p1 = esl_zext<32,31>(smax_fu_181_p3.read());
}

void initializeBuffer::thread_smax_fu_181_p3() {
    smax_fu_181_p3 = (!tmp_fu_171_p2.read()[0].is_01())? sc_lv<31>(): ((tmp_fu_171_p2.read()[0].to_bool())? tmp_24_fu_177_p1.read(): ap_const_lv31_0);
}

void initializeBuffer::thread_tmp_17_1_fu_337_p2() {
    tmp_17_1_fu_337_p2 = (!ik_col_2_s_fu_331_p2.read().is_01() || !kernel_size_col.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_col_2_s_fu_331_p2.read()) < sc_bigint<32>(kernel_size_col.read()));
}

void initializeBuffer::thread_tmp_18_fu_372_p0() {
    tmp_18_fu_372_p0 =  (sc_lv<8>) (ap_const_lv15_64);
}

void initializeBuffer::thread_tmp_18_fu_372_p1() {
    tmp_18_fu_372_p1 = (!tmp_26_fu_216_p1.read().is_01() || !tmp_25_fu_213_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_26_fu_216_p1.read()) + sc_biguint<15>(tmp_25_fu_213_p1.read()));
}

void initializeBuffer::thread_tmp_19_1_fu_356_p2() {
    tmp_19_1_fu_356_p2 = (!ap_const_lv32_2.is_01() || !i_buffer_s_reg_148.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_2) + sc_bigint<32>(i_buffer_s_reg_148.read()));
}

void initializeBuffer::thread_tmp_19_fu_320_p2() {
    tmp_19_fu_320_p2 = (!ap_const_lv32_1.is_01() || !i_buffer_s_reg_148.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_bigint<32>(i_buffer_s_reg_148.read()));
}

void initializeBuffer::thread_tmp_20_1_fu_368_p1() {
    tmp_20_1_fu_368_p1 = esl_sext<64,32>(tmp_19_reg_434.read());
}

void initializeBuffer::thread_tmp_20_fu_326_p1() {
    tmp_20_fu_326_p1 = esl_sext<64,32>(i_buffer_s_reg_148.read());
}

void initializeBuffer::thread_tmp_21_fu_310_p2() {
    tmp_21_fu_310_p2 = (!tmp_18_reg_414.read().is_01() || !tmp_35_fu_306_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_18_reg_414.read()) + sc_biguint<15>(tmp_35_fu_306_p1.read()));
}

void initializeBuffer::thread_tmp_22_cast_fu_315_p1() {
    tmp_22_cast_fu_315_p1 = esl_sext<64,15>(tmp_21_fu_310_p2.read());
}

void initializeBuffer::thread_tmp_22_fu_346_p2() {
    tmp_22_fu_346_p2 = (!tmp_18_reg_414.read().is_01() || !tmp_36_fu_342_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_18_reg_414.read()) + sc_biguint<15>(tmp_36_fu_342_p1.read()));
}

void initializeBuffer::thread_tmp_23_cast_fu_351_p1() {
    tmp_23_cast_fu_351_p1 = esl_sext<64,15>(tmp_22_fu_346_p2.read());
}

void initializeBuffer::thread_tmp_24_fu_177_p1() {
    tmp_24_fu_177_p1 = kernel_size_col.read().range(31-1, 0);
}

void initializeBuffer::thread_tmp_25_fu_213_p1() {
    tmp_25_fu_213_p1 = index_row_out.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_26_fu_216_p1() {
    tmp_26_fu_216_p1 = ik_row_reg_137.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_28_fu_226_p3() {
    tmp_28_fu_226_p3 = kernel_size_col.read().range(31, 31);
}

void initializeBuffer::thread_tmp_29_fu_238_p3() {
    tmp_29_fu_238_p3 = kernel_size_col_op_o_fu_233_p2.read().range(31, 31);
}

void initializeBuffer::thread_tmp_30_fu_267_p4() {
    tmp_30_fu_267_p4 = kernel_size_col_op_o_fu_233_p2.read().range(31, 1);
}

void initializeBuffer::thread_tmp_31_fu_277_p3() {
    tmp_31_fu_277_p3 = (!tmp_29_fu_238_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_29_fu_238_p3.read()[0].to_bool())? p_neg_t_fu_261_p2.read(): tmp_30_fu_267_p4.read());
}

void initializeBuffer::thread_tmp_32_fu_285_p3() {
    tmp_32_fu_285_p3 = (!tmp_28_fu_226_p3.read()[0].is_01())? sc_lv<31>(): ((tmp_28_fu_226_p3.read()[0].to_bool())? ap_const_lv31_0: tmp_31_fu_277_p3.read());
}

void initializeBuffer::thread_tmp_33_fu_293_p3() {
    tmp_33_fu_293_p3 = esl_concat<31,1>(tmp_32_fu_285_p3.read(), ap_const_lv1_0);
}

void initializeBuffer::thread_tmp_34_fu_301_p2() {
    tmp_34_fu_301_p2 = (!ik_col_reg_159.read().is_01() || !tmp_33_reg_420.read().is_01())? sc_lv<1>(): sc_lv<1>(ik_col_reg_159.read() == tmp_33_reg_420.read());
}

void initializeBuffer::thread_tmp_35_fu_306_p1() {
    tmp_35_fu_306_p1 = ik_col_reg_159.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_36_fu_342_p1() {
    tmp_36_fu_342_p1 = ik_col_2_s_fu_331_p2.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_fu_171_p2() {
    tmp_fu_171_p2 = (!kernel_size_col.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(kernel_size_col.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void initializeBuffer::thread_tmp_s_fu_197_p2() {
    tmp_s_fu_197_p2 = (!ik_row_cast_fu_193_p1.read().is_01() || !kernel_size_row.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_row_cast_fu_193_p1.read()) < sc_bigint<32>(kernel_size_row.read()));
}

void initializeBuffer::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_s_fu_197_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_17_1_fu_337_p2.read()) || 
  esl_seteq<1,1,1>(ap_const_lv1_1, tmp_34_reg_425.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}
