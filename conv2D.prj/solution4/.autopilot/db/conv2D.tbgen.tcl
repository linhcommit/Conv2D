set moduleName conv2D
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type dataflow
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
set portNum 40
set portList { 
	{ in_data_address0 sc_out sc_lv 14 signal 0 } 
	{ in_data_ce0 sc_out sc_logic 1 signal 0 } 
	{ in_data_d0 sc_out sc_lv 32 signal 0 } 
	{ in_data_q0 sc_in sc_lv 32 signal 0 } 
	{ in_data_we0 sc_out sc_logic 1 signal 0 } 
	{ in_data_address1 sc_out sc_lv 14 signal 0 } 
	{ in_data_ce1 sc_out sc_logic 1 signal 0 } 
	{ in_data_d1 sc_out sc_lv 32 signal 0 } 
	{ in_data_q1 sc_in sc_lv 32 signal 0 } 
	{ in_data_we1 sc_out sc_logic 1 signal 0 } 
	{ out_data_address0 sc_out sc_lv 14 signal 1 } 
	{ out_data_ce0 sc_out sc_logic 1 signal 1 } 
	{ out_data_d0 sc_out sc_lv 32 signal 1 } 
	{ out_data_q0 sc_in sc_lv 32 signal 1 } 
	{ out_data_we0 sc_out sc_logic 1 signal 1 } 
	{ out_data_address1 sc_out sc_lv 14 signal 1 } 
	{ out_data_ce1 sc_out sc_logic 1 signal 1 } 
	{ out_data_d1 sc_out sc_lv 32 signal 1 } 
	{ out_data_q1 sc_in sc_lv 32 signal 1 } 
	{ out_data_we1 sc_out sc_logic 1 signal 1 } 
	{ row_in sc_in sc_lv 32 signal 2 } 
	{ col_in sc_in sc_lv 32 signal 3 } 
	{ kernel_address0 sc_out sc_lv 10 signal 4 } 
	{ kernel_ce0 sc_out sc_logic 1 signal 4 } 
	{ kernel_d0 sc_out sc_lv 32 signal 4 } 
	{ kernel_q0 sc_in sc_lv 32 signal 4 } 
	{ kernel_we0 sc_out sc_logic 1 signal 4 } 
	{ kernel_address1 sc_out sc_lv 10 signal 4 } 
	{ kernel_ce1 sc_out sc_logic 1 signal 4 } 
	{ kernel_d1 sc_out sc_lv 32 signal 4 } 
	{ kernel_q1 sc_in sc_lv 32 signal 4 } 
	{ kernel_we1 sc_out sc_logic 1 signal 4 } 
	{ kernel_size_row sc_in sc_lv 32 signal 5 } 
	{ kernel_size_col sc_in sc_lv 32 signal 6 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "in_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_data", "role": "address0" }} , 
 	{ "name": "in_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "ce0" }} , 
 	{ "name": "in_data_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "d0" }} , 
 	{ "name": "in_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "q0" }} , 
 	{ "name": "in_data_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "we0" }} , 
 	{ "name": "in_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "in_data", "role": "address1" }} , 
 	{ "name": "in_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "ce1" }} , 
 	{ "name": "in_data_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "d1" }} , 
 	{ "name": "in_data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "in_data", "role": "q1" }} , 
 	{ "name": "in_data_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "in_data", "role": "we1" }} , 
 	{ "name": "out_data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "out_data", "role": "address0" }} , 
 	{ "name": "out_data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "ce0" }} , 
 	{ "name": "out_data_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data", "role": "d0" }} , 
 	{ "name": "out_data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data", "role": "q0" }} , 
 	{ "name": "out_data_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "we0" }} , 
 	{ "name": "out_data_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "out_data", "role": "address1" }} , 
 	{ "name": "out_data_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "ce1" }} , 
 	{ "name": "out_data_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data", "role": "d1" }} , 
 	{ "name": "out_data_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "out_data", "role": "q1" }} , 
 	{ "name": "out_data_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "out_data", "role": "we1" }} , 
 	{ "name": "row_in", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "row_in", "role": "default" }} , 
 	{ "name": "col_in", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "col_in", "role": "default" }} , 
 	{ "name": "kernel_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "kernel", "role": "address0" }} , 
 	{ "name": "kernel_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce0" }} , 
 	{ "name": "kernel_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "d0" }} , 
 	{ "name": "kernel_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "q0" }} , 
 	{ "name": "kernel_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "we0" }} , 
 	{ "name": "kernel_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "kernel", "role": "address1" }} , 
 	{ "name": "kernel_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce1" }} , 
 	{ "name": "kernel_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "d1" }} , 
 	{ "name": "kernel_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "q1" }} , 
 	{ "name": "kernel_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "we1" }} , 
 	{ "name": "kernel_size_row", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_row", "role": "default" }} , 
 	{ "name": "kernel_size_col", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_size_col", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "conv2D",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23", "EstimateLatencyMax" : "67631",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "Loop_Output_Row_proc_U0"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "Loop_Output_Row_proc_U0"}],
		"Port" : [
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Loop_Output_Row_proc_U0", "Port" : "in_data"}]},
			{"Name" : "out_data", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Loop_Output_Row_proc_U0", "Port" : "out_data"}]},
			{"Name" : "row_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "Loop_Output_Row_proc_U0", "Port" : "kernel"}]},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Loop_Output_Row_proc_U0", "Parent" : "0", "Child" : ["2", "3", "5"],
		"CDFG" : "Loop_Output_Row_proc",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "23", "EstimateLatencyMax" : "67631",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_updateBuffer_fu_303"}],
		"Port" : [
			{"Name" : "row_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col_in", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_size_col", "Type" : "None", "Direction" : "I"},
			{"Name" : "in_data", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_updateBuffer_fu_303", "Port" : "in_data"}]},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "out_data", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Output_Row_proc_U0.buffer_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Output_Row_proc_U0.grp_updateBuffer_fu_303", "Parent" : "1", "Child" : ["4"],
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
	{"ID" : "4", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.Loop_Output_Row_proc_U0.grp_updateBuffer_fu_303.conv2D_ama_addmulbkb_U1", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.Loop_Output_Row_proc_U0.conv2D_mul_mul_8ndEe_U10", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	conv2D {
		in_data {Type I LastRead 3 FirstWrite -1}
		out_data {Type O LastRead -1 FirstWrite 4}
		row_in {Type I LastRead 0 FirstWrite -1}
		col_in {Type I LastRead 0 FirstWrite -1}
		kernel {Type I LastRead 5 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}}
	Loop_Output_Row_proc {
		row_in {Type I LastRead 0 FirstWrite -1}
		kernel_size_row {Type I LastRead 0 FirstWrite -1}
		col_in {Type I LastRead 0 FirstWrite -1}
		kernel_size_col {Type I LastRead 0 FirstWrite -1}
		in_data {Type I LastRead 3 FirstWrite -1}
		kernel {Type I LastRead 5 FirstWrite -1}
		out_data {Type O LastRead -1 FirstWrite 4}}
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
	{"Name" : "Latency", "Min" : "23", "Max" : "67631"}
	, {"Name" : "Interval", "Min" : "24", "Max" : "67632"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	in_data { ap_memory {  { in_data_address0 mem_address 1 14 }  { in_data_ce0 mem_ce 1 1 }  { in_data_d0 mem_din 1 32 }  { in_data_q0 mem_dout 0 32 }  { in_data_we0 mem_we 1 1 }  { in_data_address1 mem_address 1 14 }  { in_data_ce1 mem_ce 1 1 }  { in_data_d1 mem_din 1 32 }  { in_data_q1 mem_dout 0 32 }  { in_data_we1 mem_we 1 1 } } }
	out_data { ap_memory {  { out_data_address0 mem_address 1 14 }  { out_data_ce0 mem_ce 1 1 }  { out_data_d0 mem_din 1 32 }  { out_data_q0 mem_dout 0 32 }  { out_data_we0 mem_we 1 1 }  { out_data_address1 mem_address 1 14 }  { out_data_ce1 mem_ce 1 1 }  { out_data_d1 mem_din 1 32 }  { out_data_q1 mem_dout 0 32 }  { out_data_we1 mem_we 1 1 } } }
	row_in { ap_none {  { row_in in_data 0 32 } } }
	col_in { ap_none {  { col_in in_data 0 32 } } }
	kernel { ap_memory {  { kernel_address0 mem_address 1 10 }  { kernel_ce0 mem_ce 1 1 }  { kernel_d0 mem_din 1 32 }  { kernel_q0 mem_dout 0 32 }  { kernel_we0 mem_we 1 1 }  { kernel_address1 mem_address 1 10 }  { kernel_ce1 mem_ce 1 1 }  { kernel_d1 mem_din 1 32 }  { kernel_q1 mem_dout 0 32 }  { kernel_we1 mem_we 1 1 } } }
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
