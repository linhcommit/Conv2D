# This script segment is generated automatically by AutoPilot

set id 1
set name conv2D_mac_muladdbkb
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 0
set in1_width 15
set in1_signed 1
set in2_width 15
set in2_signed 0
set out_width 15
set exp i0*i1+i2
set arg_lists {i0 {8 0 +} i1 {15 1 +} m {15 1 +} i2 {15 0 +} p {15 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name in_data \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename in_data \
    op interface \
    ports { in_data_address0 { O 14 vector } in_data_ce0 { O 1 bit } in_data_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'in_data'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 3 \
    name buffer_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_0_read \
    op interface \
    ports { buffer_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 4 \
    name buffer_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_1_read \
    op interface \
    ports { buffer_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 5 \
    name buffer_2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_2_read \
    op interface \
    ports { buffer_2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 6 \
    name buffer_3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_3_read \
    op interface \
    ports { buffer_3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 7 \
    name buffer_4_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_4_read \
    op interface \
    ports { buffer_4_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 8 \
    name buffer_5_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_5_read \
    op interface \
    ports { buffer_5_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 9 \
    name buffer_6_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_6_read \
    op interface \
    ports { buffer_6_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 10 \
    name buffer_7_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_7_read \
    op interface \
    ports { buffer_7_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 11 \
    name buffer_8_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_8_read \
    op interface \
    ports { buffer_8_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 12 \
    name buffer_9_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_9_read \
    op interface \
    ports { buffer_9_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 13 \
    name buffer_10_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_10_read \
    op interface \
    ports { buffer_10_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 14 \
    name buffer_11_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_11_read \
    op interface \
    ports { buffer_11_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 15 \
    name buffer_12_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_12_read \
    op interface \
    ports { buffer_12_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 16 \
    name buffer_13_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_13_read \
    op interface \
    ports { buffer_13_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 17 \
    name buffer_14_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_14_read \
    op interface \
    ports { buffer_14_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 18 \
    name buffer_15_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_15_read \
    op interface \
    ports { buffer_15_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 19 \
    name buffer_16_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_16_read \
    op interface \
    ports { buffer_16_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 20 \
    name buffer_17_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_17_read \
    op interface \
    ports { buffer_17_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 21 \
    name buffer_18_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_18_read \
    op interface \
    ports { buffer_18_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 22 \
    name buffer_19_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_19_read \
    op interface \
    ports { buffer_19_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name buffer_20_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_20_read \
    op interface \
    ports { buffer_20_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name buffer_21_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_21_read \
    op interface \
    ports { buffer_21_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 25 \
    name buffer_22_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_22_read \
    op interface \
    ports { buffer_22_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 26 \
    name buffer_23_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_23_read \
    op interface \
    ports { buffer_23_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 27 \
    name buffer_24_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_buffer_24_read \
    op interface \
    ports { buffer_24_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 29 \
    name index_row_out \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_index_row_out \
    op interface \
    ports { index_row_out { I 31 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 30 \
    name kernel_size_row \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_size_row \
    op interface \
    ports { kernel_size_row { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 31 \
    name kernel_size_col \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_kernel_size_col \
    op interface \
    ports { kernel_size_col { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


