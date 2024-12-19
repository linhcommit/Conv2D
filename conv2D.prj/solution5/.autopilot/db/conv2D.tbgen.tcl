set moduleName conv2D
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {conv2D}
set C_modelType { void 0 }
set C_modelArgList {
	{ in_data int 32 regular {array 10000 { 1 3 } 1 1 }  }
	{ out_data int 32 regular {array 10000 { 0 3 } 0 1 }  }
	{ row_in int 32 regular  }
	{ col_in int 32 regular  }
	{ kernel int 32 regular {array 1000 { 1 3 } 1 1 }  }
	{ kernel_size_row int 32 regular  }
	{ kernel_size_col int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "in_data", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "in_data","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "out_data", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "out_data","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 99,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "row_in", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "row_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "col_in", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "col_in","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "kernel", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "kernel","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 99,"step" : 1}]}]}]} , 
 	{ "Name" : "kernel_size_row", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "kernel_size_row","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "kernel_size_col", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "kernel_size_col","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ in_data_address0 sc_out sc_lv 14 signal 0 } 
	{ in_data_ce0 sc_out sc_logic 1 signal 0 } 
	{ in_data_q0 sc_in sc_lv 32 signal 0 } 
	{ out_data_address0 sc_out sc_lv 14 signal 1 } 
	{ out_data_ce0 sc_out sc_logic 1 signal 1 } 
	{ out_data_we0 sc_out sc_logic 1 signal 1 } 
	{ out_data_d0 sc_out sc_lv 32 signal 1 } 
	{ row_in sc_in sc_lv 32 signal 2 } 
	{ col_in sc_in sc_lv 32 signal 3 } 
	{ kernel_address0 sc_out sc_lv 10 signal 4 } 
	{ kernel_ce0 sc_out sc_logic 1 signal 4 } 
	{ kernel_q0 sc_in sc_lv 32 signal 4 } 
	{ kernel_size_row sc_in sc_lv 32 signal 5 } 
	{ kernel_size_col sc_in sc_lv 32 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "in_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_data", "role": "address0" }} , 
 	{ "name": "in_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "ce0" }} , 
 	{ "name": "in_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "q0" }} , 
 	{ "name": "out_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "out_data", "role": "address0" }} , 
 	{ "name": "out_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "ce0" }} , 
 	{ "name": "out_data_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "we0" }} , 
 	{ "name": "out_data_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data", "role": "d0" }} , 
 	{ "name": "row_in", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "row_in", "role": "default" }} , 
 	{ "name": "col_in", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "col_in", "role": "default" }} , 
 	{ "name": "kernel_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "kernel", "role": "address0" }} , 
 	{ "name": "kernel_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce0" }} , 
 	{ "name": "kernel_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "q0" }} , 
 	{ "name": "kernel_size_row", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_row", "role": "default" }} , 
 	{ "name": "kernel_size_col", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_col", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "54", "56", "57", "58"],
		"CDFG" : "conv2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "22", "EstimateLatencyMax" : "34861",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_updateBuffer_fu_307"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_initializeBuffer_fu_345"}],
		"Port" : [
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_initializeBuffer_fu_345", "Port" : "in_data"},
					{"ID" : "1", "SubInstance" : "grp_updateBuffer_fu_307", "Port" : "in_data"}]},
			{"Name" : "out_data", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "row_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53"],
		"CDFG" : "updateBuffer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "6", "EstimateLatencyMax" : "231",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buffer_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_8_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_9_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_10_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_11_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_12_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_13_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_14_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_15_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_16_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_17_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_18_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_19_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_20_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_21_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_22_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_23_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_24_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "index_row_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "index_col_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_in", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_255_32cud_U32", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U33", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U34", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U35", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U36", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U37", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U38", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U39", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U40", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U41", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U42", "Parent" : "1"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U43", "Parent" : "1"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U44", "Parent" : "1"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U45", "Parent" : "1"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U46", "Parent" : "1"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U47", "Parent" : "1"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U48", "Parent" : "1"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U49", "Parent" : "1"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U50", "Parent" : "1"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U51", "Parent" : "1"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U52", "Parent" : "1"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U53", "Parent" : "1"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U54", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U55", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U56", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U57", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U58", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U59", "Parent" : "1"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U60", "Parent" : "1"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U61", "Parent" : "1"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U62", "Parent" : "1"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U63", "Parent" : "1"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U64", "Parent" : "1"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U65", "Parent" : "1"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U66", "Parent" : "1"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U67", "Parent" : "1"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U68", "Parent" : "1"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U69", "Parent" : "1"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U70", "Parent" : "1"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U71", "Parent" : "1"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U72", "Parent" : "1"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U73", "Parent" : "1"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U74", "Parent" : "1"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U75", "Parent" : "1"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U76", "Parent" : "1"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U77", "Parent" : "1"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U78", "Parent" : "1"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U79", "Parent" : "1"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U80", "Parent" : "1"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U81", "Parent" : "1"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_mux_325_32dEe_U82", "Parent" : "1"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_updateBuffer_fu_307.conv2D_ama_addmuleOg_U83", "Parent" : "1"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_initializeBuffer_fu_345", "Parent" : "0", "Child" : ["55"],
		"CDFG" : "initializeBuffer",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4", "EstimateLatencyMax" : "103",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "buffer_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_3_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_4_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_5_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_6_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_7_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_8_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_9_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_10_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_11_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_12_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_13_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_14_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_15_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_16_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_17_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_18_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_19_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_20_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_21_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_22_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_23_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "buffer_24_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "index_row_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_initializeBuffer_fu_345.conv2D_mac_muladdbkb_U1", "Parent" : "54"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2D_mux_255_32cud_x_U118", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2D_mac_muladdfYi_U119", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2D_mac_muladdg8j_U120", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	conv2D {
		in_data {Type I LastRead 2 FirstWrite -1}
		out_data {Type O LastRead -1 FirstWrite 5}
		row_in {Type I LastRead 0 FirstWrite -1}
		col_in {Type I LastRead 0 FirstWrite -1}
		kernel {Type I LastRead 5 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}}
	updateBuffer {
		buffer_0_read {Type I LastRead 0 FirstWrite -1}
		buffer_1_read {Type I LastRead 0 FirstWrite -1}
		buffer_2_read {Type I LastRead 0 FirstWrite -1}
		buffer_3_read {Type I LastRead 0 FirstWrite -1}
		buffer_4_read {Type I LastRead 0 FirstWrite -1}
		buffer_5_read {Type I LastRead 0 FirstWrite -1}
		buffer_6_read {Type I LastRead 0 FirstWrite -1}
		buffer_7_read {Type I LastRead 0 FirstWrite -1}
		buffer_8_read {Type I LastRead 0 FirstWrite -1}
		buffer_9_read {Type I LastRead 0 FirstWrite -1}
		buffer_10_read {Type I LastRead 0 FirstWrite -1}
		buffer_11_read {Type I LastRead 0 FirstWrite -1}
		buffer_12_read {Type I LastRead 0 FirstWrite -1}
		buffer_13_read {Type I LastRead 0 FirstWrite -1}
		buffer_14_read {Type I LastRead 0 FirstWrite -1}
		buffer_15_read {Type I LastRead 0 FirstWrite -1}
		buffer_16_read {Type I LastRead 0 FirstWrite -1}
		buffer_17_read {Type I LastRead 0 FirstWrite -1}
		buffer_18_read {Type I LastRead 0 FirstWrite -1}
		buffer_19_read {Type I LastRead 0 FirstWrite -1}
		buffer_20_read {Type I LastRead 0 FirstWrite -1}
		buffer_21_read {Type I LastRead 0 FirstWrite -1}
		buffer_22_read {Type I LastRead 0 FirstWrite -1}
		buffer_23_read {Type I LastRead 0 FirstWrite -1}
		buffer_24_read {Type I LastRead 0 FirstWrite -1}
		in_data {Type I LastRead 2 FirstWrite -1}
		index_row_out {Type I LastRead 0 FirstWrite -1}
		index_col_out {Type I LastRead 0 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}
		col_in {Type I LastRead 0 FirstWrite -1}}
	initializeBuffer {
		buffer_0_read {Type I LastRead 0 FirstWrite -1}
		buffer_1_read {Type I LastRead 0 FirstWrite -1}
		buffer_2_read {Type I LastRead 0 FirstWrite -1}
		buffer_3_read {Type I LastRead 0 FirstWrite -1}
		buffer_4_read {Type I LastRead 0 FirstWrite -1}
		buffer_5_read {Type I LastRead 0 FirstWrite -1}
		buffer_6_read {Type I LastRead 0 FirstWrite -1}
		buffer_7_read {Type I LastRead 0 FirstWrite -1}
		buffer_8_read {Type I LastRead 0 FirstWrite -1}
		buffer_9_read {Type I LastRead 0 FirstWrite -1}
		buffer_10_read {Type I LastRead 0 FirstWrite -1}
		buffer_11_read {Type I LastRead 0 FirstWrite -1}
		buffer_12_read {Type I LastRead 0 FirstWrite -1}
		buffer_13_read {Type I LastRead 0 FirstWrite -1}
		buffer_14_read {Type I LastRead 0 FirstWrite -1}
		buffer_15_read {Type I LastRead 0 FirstWrite -1}
		buffer_16_read {Type I LastRead 0 FirstWrite -1}
		buffer_17_read {Type I LastRead 0 FirstWrite -1}
		buffer_18_read {Type I LastRead 0 FirstWrite -1}
		buffer_19_read {Type I LastRead 0 FirstWrite -1}
		buffer_20_read {Type I LastRead 0 FirstWrite -1}
		buffer_21_read {Type I LastRead 0 FirstWrite -1}
		buffer_22_read {Type I LastRead 0 FirstWrite -1}
		buffer_23_read {Type I LastRead 0 FirstWrite -1}
		buffer_24_read {Type I LastRead 0 FirstWrite -1}
		in_data {Type I LastRead 2 FirstWrite -1}
		index_row_out {Type I LastRead 0 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "22", "Max" : "34861"}
	, {"Name" : "Interval", "Min" : "23", "Max" : "34862"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	in_data { ap_memory {  { in_data_address0 mem_address 1 14 }  { in_data_ce0 mem_ce 1 1 }  { in_data_q0 mem_dout 0 32 } } }
	out_data { ap_memory {  { out_data_address0 mem_address 1 14 }  { out_data_ce0 mem_ce 1 1 }  { out_data_we0 mem_we 1 1 }  { out_data_d0 mem_din 1 32 } } }
	row_in { ap_none {  { row_in in_data 0 32 } } }
	col_in { ap_none {  { col_in in_data 0 32 } } }
	kernel { ap_memory {  { kernel_address0 mem_address 1 10 }  { kernel_ce0 mem_ce 1 1 }  { kernel_q0 mem_dout 0 32 } } }
	kernel_size_row { ap_none {  { kernel_size_row in_data 0 32 } } }
	kernel_size_col { ap_none {  { kernel_size_col in_data 0 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
