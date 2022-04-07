set moduleName svm5
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
set C_modelName {svm5}
set C_modelType { void 0 }
set C_modelArgList {
	{ class_hw int 16 regular {pointer 1}  }
	{ x float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x1 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x2 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x3 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x4 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x5 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x6 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x7 float 32 regular {array 2 { 1 3 } 1 1 }  }
	{ x8 float 32 regular {array 2 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "class_hw", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY"} , 
 	{ "Name" : "x", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x4", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x5", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x6", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x7", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "x8", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 36
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_continue sc_in sc_logic 1 continue -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ class_hw sc_out sc_lv 16 signal 0 } 
	{ class_hw_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ x_address0 sc_out sc_lv 1 signal 1 } 
	{ x_ce0 sc_out sc_logic 1 signal 1 } 
	{ x_q0 sc_in sc_lv 32 signal 1 } 
	{ x1_address0 sc_out sc_lv 1 signal 2 } 
	{ x1_ce0 sc_out sc_logic 1 signal 2 } 
	{ x1_q0 sc_in sc_lv 32 signal 2 } 
	{ x2_address0 sc_out sc_lv 1 signal 3 } 
	{ x2_ce0 sc_out sc_logic 1 signal 3 } 
	{ x2_q0 sc_in sc_lv 32 signal 3 } 
	{ x3_address0 sc_out sc_lv 1 signal 4 } 
	{ x3_ce0 sc_out sc_logic 1 signal 4 } 
	{ x3_q0 sc_in sc_lv 32 signal 4 } 
	{ x4_address0 sc_out sc_lv 1 signal 5 } 
	{ x4_ce0 sc_out sc_logic 1 signal 5 } 
	{ x4_q0 sc_in sc_lv 32 signal 5 } 
	{ x5_address0 sc_out sc_lv 1 signal 6 } 
	{ x5_ce0 sc_out sc_logic 1 signal 6 } 
	{ x5_q0 sc_in sc_lv 32 signal 6 } 
	{ x6_address0 sc_out sc_lv 1 signal 7 } 
	{ x6_ce0 sc_out sc_logic 1 signal 7 } 
	{ x6_q0 sc_in sc_lv 32 signal 7 } 
	{ x7_address0 sc_out sc_lv 1 signal 8 } 
	{ x7_ce0 sc_out sc_logic 1 signal 8 } 
	{ x7_q0 sc_in sc_lv 32 signal 8 } 
	{ x8_address0 sc_out sc_lv 1 signal 9 } 
	{ x8_ce0 sc_out sc_logic 1 signal 9 } 
	{ x8_q0 sc_in sc_lv 32 signal 9 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_continue", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "continue", "bundle":{"name": "ap_continue", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "class_hw", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw", "role": "default" }} , 
 	{ "name": "class_hw_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw", "role": "ap_vld" }} , 
 	{ "name": "x_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x", "role": "address0" }} , 
 	{ "name": "x_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x", "role": "ce0" }} , 
 	{ "name": "x_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x", "role": "q0" }} , 
 	{ "name": "x1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "address0" }} , 
 	{ "name": "x1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "ce0" }} , 
 	{ "name": "x1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x1", "role": "q0" }} , 
 	{ "name": "x2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "address0" }} , 
 	{ "name": "x2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "ce0" }} , 
 	{ "name": "x2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x2", "role": "q0" }} , 
 	{ "name": "x3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "address0" }} , 
 	{ "name": "x3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "ce0" }} , 
 	{ "name": "x3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x3", "role": "q0" }} , 
 	{ "name": "x4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x4", "role": "address0" }} , 
 	{ "name": "x4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x4", "role": "ce0" }} , 
 	{ "name": "x4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x4", "role": "q0" }} , 
 	{ "name": "x5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x5", "role": "address0" }} , 
 	{ "name": "x5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x5", "role": "ce0" }} , 
 	{ "name": "x5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x5", "role": "q0" }} , 
 	{ "name": "x6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x6", "role": "address0" }} , 
 	{ "name": "x6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x6", "role": "ce0" }} , 
 	{ "name": "x6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x6", "role": "q0" }} , 
 	{ "name": "x7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x7", "role": "address0" }} , 
 	{ "name": "x7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x7", "role": "ce0" }} , 
 	{ "name": "x7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x7", "role": "q0" }} , 
 	{ "name": "x8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "x8", "role": "address0" }} , 
 	{ "name": "x8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x8", "role": "ce0" }} , 
 	{ "name": "x8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x8", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21"],
		"CDFG" : "svm5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "1", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "175969", "EstimateLatencyMax" : "175969",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "1",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "class_hw", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "x", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "x8", "Type" : "Memory", "Direction" : "I"},
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
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_faddfsub_bkb_U1", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fsub_32nscud_U2", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fsub_32nscud_U3", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fsub_32nscud_U4", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fmul_32nsdEe_U5", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fmul_32nsdEe_U6", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_fpext_32neOg_U7", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_dadd_64nsfYi_U8", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_dmul_64nsg8j_U9", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_dcmp_64nshbi_U10", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_top_dexp_64nsibs_U11", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	svm5 {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x {Type I LastRead 2 FirstWrite -1}
		x1 {Type I LastRead 2 FirstWrite -1}
		x2 {Type I LastRead 7 FirstWrite -1}
		x3 {Type I LastRead 12 FirstWrite -1}
		x4 {Type I LastRead 17 FirstWrite -1}
		x5 {Type I LastRead 22 FirstWrite -1}
		x6 {Type I LastRead 27 FirstWrite -1}
		x7 {Type I LastRead 2 FirstWrite -1}
		x8 {Type I LastRead 2 FirstWrite -1}
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
	, {"Name" : "Interval", "Min" : "175969", "Max" : "175969"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	class_hw { ap_vld {  { class_hw out_data 1 16 }  { class_hw_ap_vld out_vld 1 1 } } }
	x { ap_memory {  { x_address0 mem_address 1 1 }  { x_ce0 mem_ce 1 1 }  { x_q0 mem_dout 0 32 } } }
	x1 { ap_memory {  { x1_address0 mem_address 1 1 }  { x1_ce0 mem_ce 1 1 }  { x1_q0 mem_dout 0 32 } } }
	x2 { ap_memory {  { x2_address0 mem_address 1 1 }  { x2_ce0 mem_ce 1 1 }  { x2_q0 mem_dout 0 32 } } }
	x3 { ap_memory {  { x3_address0 mem_address 1 1 }  { x3_ce0 mem_ce 1 1 }  { x3_q0 mem_dout 0 32 } } }
	x4 { ap_memory {  { x4_address0 mem_address 1 1 }  { x4_ce0 mem_ce 1 1 }  { x4_q0 mem_dout 0 32 } } }
	x5 { ap_memory {  { x5_address0 mem_address 1 1 }  { x5_ce0 mem_ce 1 1 }  { x5_q0 mem_dout 0 32 } } }
	x6 { ap_memory {  { x6_address0 mem_address 1 1 }  { x6_ce0 mem_ce 1 1 }  { x6_q0 mem_dout 0 32 } } }
	x7 { ap_memory {  { x7_address0 mem_address 1 1 }  { x7_ce0 mem_ce 1 1 }  { x7_q0 mem_dout 0 32 } } }
	x8 { ap_memory {  { x8_address0 mem_address 1 1 }  { x8_ce0 mem_ce 1 1 }  { x8_q0 mem_dout 0 32 } } }
}
