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
const sc_lv<4> initializeBuffer::ap_ST_fsm_state1 = "1";
const sc_lv<4> initializeBuffer::ap_ST_fsm_state2 = "10";
const sc_lv<4> initializeBuffer::ap_ST_fsm_state3 = "100";
const sc_lv<4> initializeBuffer::ap_ST_fsm_state4 = "1000";
const sc_lv<32> initializeBuffer::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> initializeBuffer::ap_const_lv32_1 = "1";
const sc_lv<1> initializeBuffer::ap_const_lv1_1 = "1";
const sc_lv<32> initializeBuffer::ap_const_lv32_2 = "10";
const sc_lv<32> initializeBuffer::ap_const_lv32_3 = "11";
const sc_lv<1> initializeBuffer::ap_const_lv1_0 = "0";
const sc_lv<31> initializeBuffer::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<31> initializeBuffer::ap_const_lv31_1 = "1";
const sc_lv<15> initializeBuffer::ap_const_lv15_64 = "1100100";
const bool initializeBuffer::ap_const_boolean_1 = true;

initializeBuffer::initializeBuffer(sc_module_name name) : sc_module(name), mVcdFile(0) {
    conv2D_mul_mul_8nbkb_U1 = new conv2D_mul_mul_8nbkb<1,1,8,15,15>("conv2D_mul_mul_8nbkb_U1");
    conv2D_mul_mul_8nbkb_U1->din0(tmp_23_fu_233_p0);
    conv2D_mul_mul_8nbkb_U1->din1(tmp_23_fu_233_p1);
    conv2D_mul_mul_8nbkb_U1->dout(tmp_23_fu_233_p2);

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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_164_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_164_p2 );

    SC_METHOD(thread_buffer_r_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_20_fu_228_p1 );

    SC_METHOD(thread_buffer_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer_r_d0);
    sensitive << ( in_data_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer_r_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_buffer_2_fu_175_p2);
    sensitive << ( smax_cast_reg_254 );
    sensitive << ( i_buffer_reg_93 );

    SC_METHOD(thread_ik_col_2_fu_202_p2);
    sensitive << ( ik_col_reg_127 );

    SC_METHOD(thread_ik_col_cast_fu_193_p1);
    sensitive << ( ik_col_reg_127 );

    SC_METHOD(thread_ik_row_2_fu_169_p2);
    sensitive << ( ik_row_reg_105 );

    SC_METHOD(thread_ik_row_cast_fu_160_p1);
    sensitive << ( ik_row_reg_105 );

    SC_METHOD(thread_in_data_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_24_cast_fu_217_p1 );

    SC_METHOD(thread_in_data_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_smax_cast_fu_156_p1);
    sensitive << ( smax_fu_148_p3 );

    SC_METHOD(thread_smax_fu_148_p3);
    sensitive << ( tmp_fu_138_p2 );
    sensitive << ( tmp_16_fu_144_p1 );

    SC_METHOD(thread_tmp_16_fu_144_p1);
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_17_fu_197_p2);
    sensitive << ( kernel_size_col );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ik_col_cast_fu_193_p1 );

    SC_METHOD(thread_tmp_19_fu_222_p2);
    sensitive << ( i_buffer_1_reg_116 );

    SC_METHOD(thread_tmp_20_fu_228_p1);
    sensitive << ( i_buffer_1_reg_116 );

    SC_METHOD(thread_tmp_21_fu_180_p1);
    sensitive << ( ik_row_reg_105 );

    SC_METHOD(thread_tmp_23_fu_233_p0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp_23_fu_233_p1);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_25_fu_184_p1 );
    sensitive << ( tmp_21_fu_180_p1 );

    SC_METHOD(thread_tmp_24_cast_fu_217_p1);
    sensitive << ( tmp_24_fu_212_p2 );

    SC_METHOD(thread_tmp_24_fu_212_p2);
    sensitive << ( tmp_23_reg_272 );
    sensitive << ( tmp_27_fu_208_p1 );

    SC_METHOD(thread_tmp_25_fu_184_p1);
    sensitive << ( index_row_out );

    SC_METHOD(thread_tmp_27_fu_208_p1);
    sensitive << ( ik_col_reg_127 );

    SC_METHOD(thread_tmp_fu_138_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( kernel_size_col );

    SC_METHOD(thread_tmp_s_fu_164_p2);
    sensitive << ( kernel_size_row );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ik_row_cast_fu_160_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_s_fu_164_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_17_fu_197_p2 );

    ap_CS_fsm = "0001";
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
    sc_trace(mVcdFile, smax_cast_fu_156_p1, "smax_cast_fu_156_p1");
    sc_trace(mVcdFile, smax_cast_reg_254, "smax_cast_reg_254");
    sc_trace(mVcdFile, ik_row_2_fu_169_p2, "ik_row_2_fu_169_p2");
    sc_trace(mVcdFile, ik_row_2_reg_262, "ik_row_2_reg_262");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_buffer_2_fu_175_p2, "i_buffer_2_fu_175_p2");
    sc_trace(mVcdFile, i_buffer_2_reg_267, "i_buffer_2_reg_267");
    sc_trace(mVcdFile, tmp_s_fu_164_p2, "tmp_s_fu_164_p2");
    sc_trace(mVcdFile, tmp_23_fu_233_p2, "tmp_23_fu_233_p2");
    sc_trace(mVcdFile, tmp_23_reg_272, "tmp_23_reg_272");
    sc_trace(mVcdFile, ik_col_2_fu_202_p2, "ik_col_2_fu_202_p2");
    sc_trace(mVcdFile, ik_col_2_reg_280, "ik_col_2_reg_280");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_17_fu_197_p2, "tmp_17_fu_197_p2");
    sc_trace(mVcdFile, tmp_19_fu_222_p2, "tmp_19_fu_222_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, i_buffer_reg_93, "i_buffer_reg_93");
    sc_trace(mVcdFile, ik_row_reg_105, "ik_row_reg_105");
    sc_trace(mVcdFile, i_buffer_1_reg_116, "i_buffer_1_reg_116");
    sc_trace(mVcdFile, ik_col_reg_127, "ik_col_reg_127");
    sc_trace(mVcdFile, tmp_24_cast_fu_217_p1, "tmp_24_cast_fu_217_p1");
    sc_trace(mVcdFile, tmp_20_fu_228_p1, "tmp_20_fu_228_p1");
    sc_trace(mVcdFile, tmp_fu_138_p2, "tmp_fu_138_p2");
    sc_trace(mVcdFile, tmp_16_fu_144_p1, "tmp_16_fu_144_p1");
    sc_trace(mVcdFile, smax_fu_148_p3, "smax_fu_148_p3");
    sc_trace(mVcdFile, ik_row_cast_fu_160_p1, "ik_row_cast_fu_160_p1");
    sc_trace(mVcdFile, tmp_25_fu_184_p1, "tmp_25_fu_184_p1");
    sc_trace(mVcdFile, tmp_21_fu_180_p1, "tmp_21_fu_180_p1");
    sc_trace(mVcdFile, ik_col_cast_fu_193_p1, "ik_col_cast_fu_193_p1");
    sc_trace(mVcdFile, tmp_27_fu_208_p1, "tmp_27_fu_208_p1");
    sc_trace(mVcdFile, tmp_24_fu_212_p2, "tmp_24_fu_212_p2");
    sc_trace(mVcdFile, tmp_23_fu_233_p0, "tmp_23_fu_233_p0");
    sc_trace(mVcdFile, tmp_23_fu_233_p1, "tmp_23_fu_233_p1");
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        i_buffer_1_reg_116 = tmp_19_fu_222_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_1))) {
        i_buffer_1_reg_116 = i_buffer_reg_93.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_17_fu_197_p2.read(), ap_const_lv1_0))) {
        i_buffer_reg_93 = i_buffer_2_reg_267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_buffer_reg_93 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        ik_col_reg_127 = ik_col_2_reg_280.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_1))) {
        ik_col_reg_127 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_17_fu_197_p2.read(), ap_const_lv1_0))) {
        ik_row_reg_105 = ik_row_2_reg_262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        ik_row_reg_105 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_1))) {
        i_buffer_2_reg_267 = i_buffer_2_fu_175_p2.read();
        tmp_23_reg_272 = tmp_23_fu_233_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ik_col_2_reg_280 = ik_col_2_fu_202_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ik_row_2_reg_262 = ik_row_2_fu_169_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        smax_cast_reg_254 = smax_cast_fu_156_p1.read();
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

void initializeBuffer::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_0)))) {
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
         esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void initializeBuffer::thread_buffer_r_address0() {
    buffer_r_address0 =  (sc_lv<5>) (tmp_20_fu_228_p1.read());
}

void initializeBuffer::thread_buffer_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer_r_ce0 = ap_const_logic_1;
    } else {
        buffer_r_ce0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_buffer_r_d0() {
    buffer_r_d0 = in_data_q0.read();
}

void initializeBuffer::thread_buffer_r_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer_r_we0 = ap_const_logic_1;
    } else {
        buffer_r_we0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_i_buffer_2_fu_175_p2() {
    i_buffer_2_fu_175_p2 = (!i_buffer_reg_93.read().is_01() || !smax_cast_reg_254.read().is_01())? sc_lv<32>(): (sc_biguint<32>(i_buffer_reg_93.read()) + sc_biguint<32>(smax_cast_reg_254.read()));
}

void initializeBuffer::thread_ik_col_2_fu_202_p2() {
    ik_col_2_fu_202_p2 = (!ik_col_reg_127.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(ik_col_reg_127.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void initializeBuffer::thread_ik_col_cast_fu_193_p1() {
    ik_col_cast_fu_193_p1 = esl_zext<32,31>(ik_col_reg_127.read());
}

void initializeBuffer::thread_ik_row_2_fu_169_p2() {
    ik_row_2_fu_169_p2 = (!ik_row_reg_105.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(ik_row_reg_105.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void initializeBuffer::thread_ik_row_cast_fu_160_p1() {
    ik_row_cast_fu_160_p1 = esl_zext<32,31>(ik_row_reg_105.read());
}

void initializeBuffer::thread_in_data_address0() {
    in_data_address0 =  (sc_lv<14>) (tmp_24_cast_fu_217_p1.read());
}

void initializeBuffer::thread_in_data_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        in_data_ce0 = ap_const_logic_1;
    } else {
        in_data_ce0 = ap_const_logic_0;
    }
}

void initializeBuffer::thread_smax_cast_fu_156_p1() {
    smax_cast_fu_156_p1 = esl_zext<32,31>(smax_fu_148_p3.read());
}

void initializeBuffer::thread_smax_fu_148_p3() {
    smax_fu_148_p3 = (!tmp_fu_138_p2.read()[0].is_01())? sc_lv<31>(): ((tmp_fu_138_p2.read()[0].to_bool())? tmp_16_fu_144_p1.read(): ap_const_lv31_0);
}

void initializeBuffer::thread_tmp_16_fu_144_p1() {
    tmp_16_fu_144_p1 = kernel_size_col.read().range(31-1, 0);
}

void initializeBuffer::thread_tmp_17_fu_197_p2() {
    tmp_17_fu_197_p2 = (!ik_col_cast_fu_193_p1.read().is_01() || !kernel_size_col.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_col_cast_fu_193_p1.read()) < sc_bigint<32>(kernel_size_col.read()));
}

void initializeBuffer::thread_tmp_19_fu_222_p2() {
    tmp_19_fu_222_p2 = (!ap_const_lv32_1.is_01() || !i_buffer_1_reg_116.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_bigint<32>(i_buffer_1_reg_116.read()));
}

void initializeBuffer::thread_tmp_20_fu_228_p1() {
    tmp_20_fu_228_p1 = esl_sext<64,32>(i_buffer_1_reg_116.read());
}

void initializeBuffer::thread_tmp_21_fu_180_p1() {
    tmp_21_fu_180_p1 = ik_row_reg_105.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_23_fu_233_p0() {
    tmp_23_fu_233_p0 =  (sc_lv<8>) (ap_const_lv15_64);
}

void initializeBuffer::thread_tmp_23_fu_233_p1() {
    tmp_23_fu_233_p1 = (!tmp_25_fu_184_p1.read().is_01() || !tmp_21_fu_180_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_25_fu_184_p1.read()) + sc_biguint<15>(tmp_21_fu_180_p1.read()));
}

void initializeBuffer::thread_tmp_24_cast_fu_217_p1() {
    tmp_24_cast_fu_217_p1 = esl_sext<64,15>(tmp_24_fu_212_p2.read());
}

void initializeBuffer::thread_tmp_24_fu_212_p2() {
    tmp_24_fu_212_p2 = (!tmp_23_reg_272.read().is_01() || !tmp_27_fu_208_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp_23_reg_272.read()) + sc_biguint<15>(tmp_27_fu_208_p1.read()));
}

void initializeBuffer::thread_tmp_25_fu_184_p1() {
    tmp_25_fu_184_p1 = index_row_out.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_27_fu_208_p1() {
    tmp_27_fu_208_p1 = ik_col_reg_127.read().range(15-1, 0);
}

void initializeBuffer::thread_tmp_fu_138_p2() {
    tmp_fu_138_p2 = (!kernel_size_col.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): (sc_bigint<32>(kernel_size_col.read()) > sc_bigint<32>(ap_const_lv32_0));
}

void initializeBuffer::thread_tmp_s_fu_164_p2() {
    tmp_s_fu_164_p2 = (!ik_row_cast_fu_160_p1.read().is_01() || !kernel_size_row.read().is_01())? sc_lv<1>(): (sc_bigint<32>(ik_row_cast_fu_160_p1.read()) < sc_bigint<32>(kernel_size_row.read()));
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_s_fu_164_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_17_fu_197_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

