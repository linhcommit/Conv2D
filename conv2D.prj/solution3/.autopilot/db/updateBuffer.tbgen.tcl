set moduleName updateBuffer
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
set C_modelName {updateBuffer}
set C_modelType { void 0 }
set C_modelArgList {
	{ buffer_r int 32 regular {array 25 { 2 3 } 1 1 }  }
	{ in_data int 32 regular {array 10000 { 1 3 } 1 1 }  }
	{ index_row_out int 31 regular  }
	{ index_col_out int 31 regular  }
	{ kernel_size_row int 32 regular  }
	{ kernel_size_col int 32 regular  }
	{ col_in int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "buffer_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "in_data", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "index_row_out", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "index_col_out", "interface" : "wire", "bitwidth" : 31, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_size_row", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_size_col", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "col_in", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ buffer_r_address0 sc_out sc_lv 5 signal 0 } 
	{ buffer_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ buffer_r_we0 sc_out sc_logic 1 signal 0 } 
	{ buffer_r_d0 sc_out sc_lv 32 signal 0 } 
	{ buffer_r_q0 sc_in sc_lv 32 signal 0 } 
	{ in_data_address0 sc_out sc_lv 14 signal 1 } 
	{ in_data_ce0 sc_out sc_logic 1 signal 1 } 
	{ in_data_q0 sc_in sc_lv 32 signal 1 } 
	{ index_row_out sc_in sc_lv 31 signal 2 } 
	{ index_col_out sc_in sc_lv 31 signal 3 } 
	{ kernel_size_row sc_in sc_lv 32 signal 4 } 
	{ kernel_size_col sc_in sc_lv 32 signal 5 } 
	{ col_in sc_in sc_lv 32 signal 6 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "buffer_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "buffer_r", "role": "address0" }} , 
 	{ "name": "buffer_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer_r", "role": "ce0" }} , 
 	{ "name": "buffer_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer_r", "role": "we0" }} , 
 	{ "name": "buffer_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_r", "role": "d0" }} , 
 	{ "name": "buffer_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "buffer_r", "role": "q0" }} , 
 	{ "name": "in_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_data", "role": "address0" }} , 
 	{ "name": "in_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "ce0" }} , 
 	{ "name": "in_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "q0" }} , 
 	{ "name": "index_row_out", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "index_row_out", "role": "default" }} , 
 	{ "name": "index_col_out", "direction": "in", "datatype": "sc_lv", "bitwidth":31, "type": "signal", "bundle":{"name": "index_col_out", "role": "default" }} , 
 	{ "name": "kernel_size_row", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_row", "role": "default" }} , 
 	{ "name": "kernel_size_col", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_col", "role": "default" }} , 
 	{ "name": "col_in", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "col_in", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
			{"Name" : "buffer_r", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "index_row_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "index_col_out", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_in", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2D_ama_addmulcud_U12", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	updateBuffer {
		buffer_r {Type IO LastRead 2 FirstWrite 3}
		in_data {Type I LastRead 2 FirstWrite -1}
		index_row_out {Type I LastRead 0 FirstWrite -1}
		index_col_out {Type I LastRead 0 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}
		col_in {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "6", "Max" : "231"}
	, {"Name" : "Interval", "Min" : "6", "Max" : "231"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	buffer_r { ap_memory {  { buffer_r_address0 mem_address 1 5 }  { buffer_r_ce0 mem_ce 1 1 }  { buffer_r_we0 mem_we 1 1 }  { buffer_r_d0 mem_din 1 32 }  { buffer_r_q0 mem_dout 0 32 } } }
	in_data { ap_memory {  { in_data_address0 mem_address 1 14 }  { in_data_ce0 mem_ce 1 1 }  { in_data_q0 mem_dout 0 32 } } }
	index_row_out { ap_none {  { index_row_out in_data 0 31 } } }
	index_col_out { ap_none {  { index_col_out in_data 0 31 } } }
	kernel_size_row { ap_none {  { kernel_size_row in_data 0 32 } } }
	kernel_size_col { ap_none {  { kernel_size_col in_data 0 32 } } }
	col_in { ap_none {  { col_in in_data 0 32 } } }
}
