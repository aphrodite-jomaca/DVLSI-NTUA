set C_TypeInfoList {{ 
"svm" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"class_hw": [[],{ "pointer": "0"}] }, {"x": [[], {"array": ["1", [18]]}] }],[],""], 
"0": [ "output_t", {"typedef": [[[], {"scalar": "short"}],""]}], 
"1": [ "input_t", {"typedef": [[[], {"scalar": "float"}],""]}]
}}
set moduleName svm
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
set C_modelName {svm}
set C_modelType { void 0 }
set C_modelArgList {
	{ class_hw int 16 regular {pointer 1}  }
	{ x_0 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_1 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_2 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_3 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_4 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_5 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_6 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_7 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x_8 float 32 regular {array 2 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "class_hw", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "class_hw","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "x_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 9}]}]}]} , 
 	{ "Name" : "x_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 1,"up" : 10,"step" : 9}]}]}]} , 
 	{ "Name" : "x_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 2,"up" : 11,"step" : 9}]}]}]} , 
 	{ "Name" : "x_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 3,"up" : 12,"step" : 9}]}]}]} , 
 	{ "Name" : "x_4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 4,"up" : 13,"step" : 9}]}]}]} , 
 	{ "Name" : "x_5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 5,"up" : 14,"step" : 9}]}]}]} , 
 	{ "Name" : "x_6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 6,"up" : 15,"step" : 9}]}]}]} , 
 	{ "Name" : "x_7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 7,"up" : 16,"step" : 9}]}]}]} , 
 	{ "Name" : "x_8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 8,"up" : 17,"step" : 9}]}]}]} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ class_hw sc_out sc_lv 16 signal 0 } 
	{ class_hw_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ x_0_address0 sc_out sc_lv 1 signal 1 } 
	{ x_0_ce0 sc_out sc_logic 1 signal 1 } 
	{ x_0_q0 sc_in sc_lv 32 signal 1 } 
	{ x_1_address0 sc_out sc_lv 1 signal 2 } 
	{ x_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ x_1_q0 sc_in sc_lv 32 signal 2 } 
	{ x_2_address0 sc_out sc_lv 1 signal 3 } 
	{ x_2_ce0 sc_out sc_logic 1 signal 3 } 
	{ x_2_q0 sc_in sc_lv 32 signal 3 } 
	{ x_3_address0 sc_out sc_lv 1 signal 4 } 
	{ x_3_ce0 sc_out sc_logic 1 signal 4 } 
	{ x_3_q0 sc_in sc_lv 32 signal 4 } 
	{ x_4_address0 sc_out sc_lv 1 signal 5 } 
	{ x_4_ce0 sc_out sc_logic 1 signal 5 } 
	{ x_4_q0 sc_in sc_lv 32 signal 5 } 
	{ x_5_address0 sc_out sc_lv 1 signal 6 } 
	{ x_5_ce0 sc_out sc_logic 1 signal 6 } 
	{ x_5_q0 sc_in sc_lv 32 signal 6 } 
	{ x_6_address0 sc_out sc_lv 1 signal 7 } 
	{ x_6_ce0 sc_out sc_logic 1 signal 7 } 
	{ x_6_q0 sc_in sc_lv 32 signal 7 } 
	{ x_7_address0 sc_out sc_lv 1 signal 8 } 
	{ x_7_ce0 sc_out sc_logic 1 signal 8 } 
	{ x_7_q0 sc_in sc_lv 32 signal 8 } 
	{ x_8_address0 sc_out sc_lv 1 signal 9 } 
	{ x_8_ce0 sc_out sc_logic 1 signal 9 } 
	{ x_8_q0 sc_in sc_lv 32 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "class_hw", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw", "role": "default" }} , 
 	{ "name": "class_hw_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw", "role": "ap_vld" }} , 
 	{ "name": "x_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_0", "role": "address0" }} , 
 	{ "name": "x_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_0", "role": "ce0" }} , 
 	{ "name": "x_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_0", "role": "q0" }} , 
 	{ "name": "x_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_1", "role": "address0" }} , 
 	{ "name": "x_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_1", "role": "ce0" }} , 
 	{ "name": "x_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_1", "role": "q0" }} , 
 	{ "name": "x_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_2", "role": "address0" }} , 
 	{ "name": "x_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_2", "role": "ce0" }} , 
 	{ "name": "x_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_2", "role": "q0" }} , 
 	{ "name": "x_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_3", "role": "address0" }} , 
 	{ "name": "x_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_3", "role": "ce0" }} , 
 	{ "name": "x_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_3", "role": "q0" }} , 
 	{ "name": "x_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_4", "role": "address0" }} , 
 	{ "name": "x_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_4", "role": "ce0" }} , 
 	{ "name": "x_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_4", "role": "q0" }} , 
 	{ "name": "x_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_5", "role": "address0" }} , 
 	{ "name": "x_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_5", "role": "ce0" }} , 
 	{ "name": "x_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_5", "role": "q0" }} , 
 	{ "name": "x_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_6", "role": "address0" }} , 
 	{ "name": "x_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_6", "role": "ce0" }} , 
 	{ "name": "x_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_6", "role": "q0" }} , 
 	{ "name": "x_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_7", "role": "address0" }} , 
 	{ "name": "x_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_7", "role": "ce0" }} , 
 	{ "name": "x_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_7", "role": "q0" }} , 
 	{ "name": "x_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x_8", "role": "address0" }} , 
 	{ "name": "x_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x_8", "role": "ce0" }} , 
 	{ "name": "x_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x_8", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21"],
		"CDFG" : "svm",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "175969", "EstimateLatencyMax" : "175969",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "class_hw", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "x_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "SupVec_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Co", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.SupVec_8_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Co_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_faddfsub_32nsbkb_U1", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fsub_32ns_32ncud_U2", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fsub_32ns_32ncud_U3", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fsub_32ns_32ncud_U4", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fmul_32ns_32ndEe_U5", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fmul_32ns_32ndEe_U6", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_fpext_32ns_64eOg_U7", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_dadd_64ns_64nfYi_U8", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_dmul_64ns_64ng8j_U9", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_dcmp_64ns_64nhbi_U10", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_dexp_64ns_64nibs_U11", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	svm {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x_0 {Type I LastRead 2 FirstWrite -1}
		x_1 {Type I LastRead 2 FirstWrite -1}
		x_2 {Type I LastRead 7 FirstWrite -1}
		x_3 {Type I LastRead 12 FirstWrite -1}
		x_4 {Type I LastRead 17 FirstWrite -1}
		x_5 {Type I LastRead 22 FirstWrite -1}
		x_6 {Type I LastRead 27 FirstWrite -1}
		x_7 {Type I LastRead 2 FirstWrite -1}
		x_8 {Type I LastRead 2 FirstWrite -1}
		SupVec_0 {Type I LastRead -1 FirstWrite -1}
		SupVec_1 {Type I LastRead -1 FirstWrite -1}
		SupVec_2 {Type I LastRead -1 FirstWrite -1}
		SupVec_3 {Type I LastRead -1 FirstWrite -1}
		SupVec_4 {Type I LastRead -1 FirstWrite -1}
		SupVec_5 {Type I LastRead -1 FirstWrite -1}
		SupVec_6 {Type I LastRead -1 FirstWrite -1}
		SupVec_7 {Type I LastRead -1 FirstWrite -1}
		SupVec_8 {Type I LastRead -1 FirstWrite -1}
		Co {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "175969", "Max" : "175969"}
	, {"Name" : "Interval", "Min" : "175970", "Max" : "175970"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	class_hw { ap_vld {  { class_hw out_data 1 16 }  { class_hw_ap_vld out_vld 1 1 } } }
	x_0 { ap_memory {  { x_0_address0 mem_address 1 1 }  { x_0_ce0 mem_ce 1 1 }  { x_0_q0 mem_dout 0 32 } } }
	x_1 { ap_memory {  { x_1_address0 mem_address 1 1 }  { x_1_ce0 mem_ce 1 1 }  { x_1_q0 mem_dout 0 32 } } }
	x_2 { ap_memory {  { x_2_address0 mem_address 1 1 }  { x_2_ce0 mem_ce 1 1 }  { x_2_q0 mem_dout 0 32 } } }
	x_3 { ap_memory {  { x_3_address0 mem_address 1 1 }  { x_3_ce0 mem_ce 1 1 }  { x_3_q0 mem_dout 0 32 } } }
	x_4 { ap_memory {  { x_4_address0 mem_address 1 1 }  { x_4_ce0 mem_ce 1 1 }  { x_4_q0 mem_dout 0 32 } } }
	x_5 { ap_memory {  { x_5_address0 mem_address 1 1 }  { x_5_ce0 mem_ce 1 1 }  { x_5_q0 mem_dout 0 32 } } }
	x_6 { ap_memory {  { x_6_address0 mem_address 1 1 }  { x_6_ce0 mem_ce 1 1 }  { x_6_q0 mem_dout 0 32 } } }
	x_7 { ap_memory {  { x_7_address0 mem_address 1 1 }  { x_7_ce0 mem_ce 1 1 }  { x_7_q0 mem_dout 0 32 } } }
	x_8 { ap_memory {  { x_8_address0 mem_address 1 1 }  { x_8_ce0 mem_ce 1 1 }  { x_8_q0 mem_dout 0 32 } } }
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
