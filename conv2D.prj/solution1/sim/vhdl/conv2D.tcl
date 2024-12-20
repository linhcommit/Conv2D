
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set out_data_group [add_wave_group out_data(memory) -into $coutputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/out_data_d0 -into $out_data_group -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/out_data_we0 -into $out_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/out_data_ce0 -into $out_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/out_data_address0 -into $out_data_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set kernel_size_col_group [add_wave_group kernel_size_col(wire) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/kernel_size_col -into $kernel_size_col_group -radix hex
set kernel_size_row_group [add_wave_group kernel_size_row(wire) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/kernel_size_row -into $kernel_size_row_group -radix hex
set kernel_group [add_wave_group kernel(memory) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/kernel_q0 -into $kernel_group -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/kernel_ce0 -into $kernel_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/kernel_address0 -into $kernel_group -radix hex
set col_in_group [add_wave_group col_in(wire) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/col_in -into $col_in_group -radix hex
set row_in_group [add_wave_group row_in(wire) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/row_in -into $row_in_group -radix hex
set in_data_group [add_wave_group in_data(memory) -into $cinputgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/in_data_q0 -into $in_data_group -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/in_data_ce0 -into $in_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/AESL_inst_conv2D/in_data_address0 -into $in_data_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_start -into $blocksiggroup
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_done -into $blocksiggroup
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_idle -into $blocksiggroup
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_conv2D_top/AESL_inst_conv2D/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_conv2D_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_conv2D_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_conv2D_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_in_data -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_out_data -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_row_in -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_col_in -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_kernel -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_kernel_size_row -into $tb_portdepth_group -radix hex
add_wave /apatb_conv2D_top/LENGTH_kernel_size_col -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_out_data_group [add_wave_group out_data(memory) -into $tbcoutputgroup]
add_wave /apatb_conv2D_top/out_data_d0 -into $tb_out_data_group -radix hex
add_wave /apatb_conv2D_top/out_data_we0 -into $tb_out_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/out_data_ce0 -into $tb_out_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/out_data_address0 -into $tb_out_data_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_kernel_size_col_group [add_wave_group kernel_size_col(wire) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/kernel_size_col -into $tb_kernel_size_col_group -radix hex
set tb_kernel_size_row_group [add_wave_group kernel_size_row(wire) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/kernel_size_row -into $tb_kernel_size_row_group -radix hex
set tb_kernel_group [add_wave_group kernel(memory) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/kernel_q0 -into $tb_kernel_group -radix hex
add_wave /apatb_conv2D_top/kernel_ce0 -into $tb_kernel_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/kernel_address0 -into $tb_kernel_group -radix hex
set tb_col_in_group [add_wave_group col_in(wire) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/col_in -into $tb_col_in_group -radix hex
set tb_row_in_group [add_wave_group row_in(wire) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/row_in -into $tb_row_in_group -radix hex
set tb_in_data_group [add_wave_group in_data(memory) -into $tbcinputgroup]
add_wave /apatb_conv2D_top/in_data_q0 -into $tb_in_data_group -radix hex
add_wave /apatb_conv2D_top/in_data_ce0 -into $tb_in_data_group -color #ffff00 -radix hex
add_wave /apatb_conv2D_top/in_data_address0 -into $tb_in_data_group -radix hex
save_wave_config conv2D.wcfg
run all
quit

