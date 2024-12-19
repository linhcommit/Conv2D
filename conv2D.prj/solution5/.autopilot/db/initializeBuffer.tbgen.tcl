set moduleName initializeBuffer
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
set C_modelName {initializeBuffer}
set C_modelType { int 800 }
set C_modelArgList {
	{ buffer_0_read int 32 regular  }
	{ buffer_1_read int 32 regular  }
	{ buffer_2_read int 32 regular  }
	{ buffer_3_read int 32 regular  }
	{ buffer_4_read int 32 regular  }
	{ buffer_5_read int 32 regular  }
	{ buffer_6_read int 32 regular  }
	{ buffer_7_read int 32 regular  }
	{ buffer_8_read int 32 regular  }
	{ buffer_9_read int 32 regular  }
	{ buffer_10_read int 32 regular  }
	{ buffer_11_read int 32 regular  }
	{ buffer_12_read int 32 regular  }
	{ buffer_13_read int 32 regular  }
	{ buffer_14_read int 32 regular  }
	{ buffer_15_read int 32 regular  }
	{ buffer_16_read int 32 regular  }
	{ buffer_17_read int 32 regular  }
	{ buffer_18_read int 32 regular  }
	{ buffer_19_read int 32 regular  }
	{ buffer_20_read int 32 regular  }
	{ buffer_21_read int 32 regular  }
	{ buffer_22_read int 32 regular  }
	{ buffer_23_read int 32 regular  }
	{ buffer_24_read int 32 regular  }
	{ in_data int 32 regular {array 10000 { 1 3 } 1 1 }  }
	{ index_row_out int 31 regular  }
	{ kernel_size_row int 32 regular  }
	{ kernel_size_col int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "buffer_0_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_1_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_2_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_3_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_4_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_5_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_6_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_7_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_8_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_9_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_10_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_11_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_12_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_13_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_14_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_15_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_16_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_17_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_18_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_19_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_20_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_21_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_22_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_23_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "buffer_24_read", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "in_data", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "index_row_out", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_size_row", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_size_col", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 800} ]}
# RTL Port declarations: 
set portNum 62
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ buffer_0_read sc_in sc_lv 32 signal 0 } 
	{ buffer_1_read sc_in sc_lv 32 signal 1 } 
	{ buffer_2_read sc_in sc_lv 32 signal 2 } 
	{ buffer_3_read sc_in sc_lv 32 signal 3 } 
	{ buffer_4_read sc_in sc_lv 32 signal 4 } 
	{ buffer_5_read sc_in sc_lv 32 signal 5 } 
	{ buffer_6_read sc_in sc_lv 32 signal 6 } 
	{ buffer_7_read sc_in sc_lv 32 signal 7 } 
	{ buffer_8_read sc_in sc_lv 32 signal 8 } 
	{ buffer_9_read sc_in sc_lv 32 signal 9 } 
	{ buffer_10_read sc_in sc_lv 32 signal 10 } 
	{ buffer_11_read sc_in sc_lv 32 signal 11 } 
	{ buffer_12_read sc_in sc_lv 32 signal 12 } 
	{ buffer_13_read sc_in sc_lv 32 signal 13 } 
	{ buffer_14_read sc_in sc_lv 32 signal 14 } 
	{ buffer_15_read sc_in sc_lv 32 signal 15 } 
	{ buffer_16_read sc_in sc_lv 32 signal 16 } 
	{ buffer_17_read sc_in sc_lv 32 signal 17 } 
	{ buffer_18_read sc_in sc_lv 32 signal 18 } 
	{ buffer_19_read sc_in sc_lv 32 signal 19 } 
	{ buffer_20_read sc_in sc_lv 32 signal 20 } 
	{ buffer_21_read sc_in sc_lv 32 signal 21 } 
	{ buffer_22_read sc_in sc_lv 32 signal 22 } 
	{ buffer_23_read sc_in sc_lv 32 signal 23 } 
	{ buffer_24_read sc_in sc_lv 32 signal 24 } 
	{ in_data_address0 sc_out sc_lv 14 signal 25 } 
	{ in_data_ce0 sc_out sc_logic 1 signal 25 } 
	{ in_data_q0 sc_in sc_lv 32 signal 25 } 
	{ index_row_out sc_in sc_lv 31 signal 26 } 
	{ kernel_size_row sc_in sc_lv 32 signal 27 } 
	{ kernel_size_col sc_in sc_lv 32 signal 28 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
	{ ap_return_10 sc_out sc_lv 32 signal -1 } 
	{ ap_return_11 sc_out sc_lv 32 signal -1 } 
	{ ap_return_12 sc_out sc_lv 32 signal -1 } 
	{ ap_return_13 sc_out sc_lv 32 signal -1 } 
	{ ap_return_14 sc_out sc_lv 32 signal -1 } 
	{ ap_return_15 sc_out sc_lv 32 signal -1 } 
	{ ap_return_16 sc_out sc_lv 32 signal -1 } 
	{ ap_return_17 sc_out sc_lv 32 signal -1 } 
	{ ap_return_18 sc_out sc_lv 32 signal -1 } 
	{ ap_return_19 sc_out sc_lv 32 signal -1 } 
	{ ap_return_20 sc_out sc_lv 32 signal -1 } 
	{ ap_return_21 sc_out sc_lv 32 signal -1 } 
	{ ap_return_22 sc_out sc_lv 32 signal -1 } 
	{ ap_return_23 sc_out sc_lv 32 signal -1 } 
	{ ap_return_24 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "buffer_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_0_read", "role": "default" }} , 
 	{ "name": "buffer_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_1_read", "role": "default" }} , 
 	{ "name": "buffer_2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_2_read", "role": "default" }} , 
 	{ "name": "buffer_3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_3_read", "role": "default" }} , 
 	{ "name": "buffer_4_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_4_read", "role": "default" }} , 
 	{ "name": "buffer_5_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_5_read", "role": "default" }} , 
 	{ "name": "buffer_6_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_6_read", "role": "default" }} , 
 	{ "name": "buffer_7_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_7_read", "role": "default" }} , 
 	{ "name": "buffer_8_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_8_read", "role": "default" }} , 
 	{ "name": "buffer_9_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_9_read", "role": "default" }} , 
 	{ "name": "buffer_10_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_10_read", "role": "default" }} , 
 	{ "name": "buffer_11_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_11_read", "role": "default" }} , 
 	{ "name": "buffer_12_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_12_read", "role": "default" }} , 
 	{ "name": "buffer_13_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_13_read", "role": "default" }} , 
 	{ "name": "buffer_14_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_14_read", "role": "default" }} , 
 	{ "name": "buffer_15_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_15_read", "role": "default" }} , 
 	{ "name": "buffer_16_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_16_read", "role": "default" }} , 
 	{ "name": "buffer_17_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_17_read", "role": "default" }} , 
 	{ "name": "buffer_18_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_18_read", "role": "default" }} , 
 	{ "name": "buffer_19_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_19_read", "role": "default" }} , 
 	{ "name": "buffer_20_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_20_read", "role": "default" }} , 
 	{ "name": "buffer_21_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_21_read", "role": "default" }} , 
 	{ "name": "buffer_22_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_22_read", "role": "default" }} , 
 	{ "name": "buffer_23_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_23_read", "role": "default" }} , 
 	{ "name": "buffer_24_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_24_read", "role": "default" }} , 
 	{ "name": "in_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_data", "role": "address0" }} , 
 	{ "name": "in_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "ce0" }} , 
 	{ "name": "in_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "q0" }} , 
 	{ "name": "index_row_out", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "index_row_out", "role": "default" }} , 
 	{ "name": "kernel_size_row", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_row", "role": "default" }} , 
 	{ "name": "kernel_size_col", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_col", "role": "default" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2D_mac_muladdbkb_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
	{"Name" : "Latency", "Min" : "4", "Max" : "103"}
	, {"Name" : "Interval", "Min" : "4", "Max" : "103"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	buffer_0_read { ap_none {  { buffer_0_read in_data 0 32 } } }
	buffer_1_read { ap_none {  { buffer_1_read in_data 0 32 } } }
	buffer_2_read { ap_none {  { buffer_2_read in_data 0 32 } } }
	buffer_3_read { ap_none {  { buffer_3_read in_data 0 32 } } }
	buffer_4_read { ap_none {  { buffer_4_read in_data 0 32 } } }
	buffer_5_read { ap_none {  { buffer_5_read in_data 0 32 } } }
	buffer_6_read { ap_none {  { buffer_6_read in_data 0 32 } } }
	buffer_7_read { ap_none {  { buffer_7_read in_data 0 32 } } }
	buffer_8_read { ap_none {  { buffer_8_read in_data 0 32 } } }
	buffer_9_read { ap_none {  { buffer_9_read in_data 0 32 } } }
	buffer_10_read { ap_none {  { buffer_10_read in_data 0 32 } } }
	buffer_11_read { ap_none {  { buffer_11_read in_data 0 32 } } }
	buffer_12_read { ap_none {  { buffer_12_read in_data 0 32 } } }
	buffer_13_read { ap_none {  { buffer_13_read in_data 0 32 } } }
	buffer_14_read { ap_none {  { buffer_14_read in_data 0 32 } } }
	buffer_15_read { ap_none {  { buffer_15_read in_data 0 32 } } }
	buffer_16_read { ap_none {  { buffer_16_read in_data 0 32 } } }
	buffer_17_read { ap_none {  { buffer_17_read in_data 0 32 } } }
	buffer_18_read { ap_none {  { buffer_18_read in_data 0 32 } } }
	buffer_19_read { ap_none {  { buffer_19_read in_data 0 32 } } }
	buffer_20_read { ap_none {  { buffer_20_read in_data 0 32 } } }
	buffer_21_read { ap_none {  { buffer_21_read in_data 0 32 } } }
	buffer_22_read { ap_none {  { buffer_22_read in_data 0 32 } } }
	buffer_23_read { ap_none {  { buffer_23_read in_data 0 32 } } }
	buffer_24_read { ap_none {  { buffer_24_read in_data 0 32 } } }
	in_data { ap_memory {  { in_data_address0 mem_address 1 14 }  { in_data_ce0 mem_ce 1 1 }  { in_data_q0 mem_dout 0 32 } } }
	index_row_out { ap_none {  { index_row_out in_data 0 31 } } }
	kernel_size_row { ap_none {  { kernel_size_row in_data 0 32 } } }
	kernel_size_col { ap_none {  { kernel_size_col in_data 0 32 } } }
}
