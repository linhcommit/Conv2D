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

#include "Loop_Output_Row_proc.h"

namespace ap_rtl {

struct conv2D : public sc_module {
    // Port declarations 40
    sc_out< sc_lv<14> > in_data_address0;
    sc_out< sc_logic > in_data_ce0;
    sc_out< sc_lv<32> > in_data_d0;
    sc_in< sc_lv<32> > in_data_q0;
    sc_out< sc_logic > in_data_we0;
    sc_out< sc_lv<14> > in_data_address1;
    sc_out< sc_logic > in_data_ce1;
    sc_out< sc_lv<32> > in_data_d1;
    sc_in< sc_lv<32> > in_data_q1;
    sc_out< sc_logic > in_data_we1;
    sc_out< sc_lv<14> > out_data_address0;
    sc_out< sc_logic > out_data_ce0;
    sc_out< sc_lv<32> > out_data_d0;
    sc_in< sc_lv<32> > out_data_q0;
    sc_out< sc_logic > out_data_we0;
    sc_out< sc_lv<14> > out_data_address1;
    sc_out< sc_logic > out_data_ce1;
    sc_out< sc_lv<32> > out_data_d1;
    sc_in< sc_lv<32> > out_data_q1;
    sc_out< sc_logic > out_data_we1;
    sc_in< sc_lv<32> > row_in;
    sc_in< sc_lv<32> > col_in;
    sc_out< sc_lv<10> > kernel_address0;
    sc_out< sc_logic > kernel_ce0;
    sc_out< sc_lv<32> > kernel_d0;
    sc_in< sc_lv<32> > kernel_q0;
    sc_out< sc_logic > kernel_we0;
    sc_out< sc_lv<10> > kernel_address1;
    sc_out< sc_logic > kernel_ce1;
    sc_out< sc_lv<32> > kernel_d1;
    sc_in< sc_lv<32> > kernel_q1;
    sc_out< sc_logic > kernel_we1;
    sc_in< sc_lv<32> > kernel_size_row;
    sc_in< sc_lv<32> > kernel_size_col;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > ap_idle;


    // Module declarations
    conv2D(sc_module_name name);
    SC_HAS_PROCESS(conv2D);

    ~conv2D();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    Loop_Output_Row_proc* Loop_Output_Row_proc_U0;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_ap_start;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_ap_done;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_ap_continue;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_ap_idle;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_ap_ready;
    sc_signal< sc_lv<14> > Loop_Output_Row_proc_U0_in_data_address0;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_in_data_ce0;
    sc_signal< sc_lv<10> > Loop_Output_Row_proc_U0_kernel_address0;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_kernel_ce0;
    sc_signal< sc_lv<14> > Loop_Output_Row_proc_U0_out_data_address0;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_out_data_ce0;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_out_data_we0;
    sc_signal< sc_lv<32> > Loop_Output_Row_proc_U0_out_data_d0;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > ap_sync_done;
    sc_signal< sc_logic > ap_sync_ready;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_start_full_n;
    sc_signal< sc_logic > Loop_Output_Row_proc_U0_start_write;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_logic ap_const_logic_1;
    // Thread declarations
    void thread_Loop_Output_Row_proc_U0_ap_continue();
    void thread_Loop_Output_Row_proc_U0_ap_start();
    void thread_Loop_Output_Row_proc_U0_start_full_n();
    void thread_Loop_Output_Row_proc_U0_start_write();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sync_continue();
    void thread_ap_sync_done();
    void thread_ap_sync_ready();
    void thread_in_data_address0();
    void thread_in_data_address1();
    void thread_in_data_ce0();
    void thread_in_data_ce1();
    void thread_in_data_d0();
    void thread_in_data_d1();
    void thread_in_data_we0();
    void thread_in_data_we1();
    void thread_kernel_address0();
    void thread_kernel_address1();
    void thread_kernel_ce0();
    void thread_kernel_ce1();
    void thread_kernel_d0();
    void thread_kernel_d1();
    void thread_kernel_we0();
    void thread_kernel_we1();
    void thread_out_data_address0();
    void thread_out_data_address1();
    void thread_out_data_ce0();
    void thread_out_data_ce1();
    void thread_out_data_d0();
    void thread_out_data_d1();
    void thread_out_data_we0();
    void thread_out_data_we1();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
