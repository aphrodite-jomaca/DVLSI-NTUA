set C_TypeInfoList {{ 
"svm_top" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"class_hw0": [[],{ "pointer": "0"}] }, {"class_hw1": [[],{ "pointer": "0"}] }, {"class_hw2": [[],{ "pointer": "0"}] }, {"class_hw3": [[],{ "pointer": "0"}] }, {"x0": [[], {"array": ["1", [18]]}] }, {"x1": [[], {"array": ["1", [18]]}] }, {"x2": [[], {"array": ["1", [18]]}] }, {"x3": [[], {"array": ["1", [18]]}] }],[],""], 
"1": [ "input_t", {"typedef": [[[], {"scalar": "float"}],""]}], 
"0": [ "output_t", {"typedef": [[[], {"scalar": "short"}],""]}]
}}
set moduleName svm_top
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
set C_modelName {svm_top}
set C_modelType { void 0 }
set C_modelArgList {
	{ class_hw0 int 16 regular {pointer 1}  }
	{ class_hw1 int 16 regular {pointer 1}  }
	{ class_hw2 int 16 regular {pointer 1}  }
	{ class_hw3 int 16 regular {pointer 1}  }
	{ x0 float 32 regular {array 18 { 1 1 } 1 1 }  }
	{ x1 float 32 regular {array 18 { 1 1 } 1 1 }  }
	{ x2 float 32 regular {array 18 { 1 1 } 1 1 }  }
	{ x3 float 32 regular {array 18 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "class_hw0", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "class_hw0","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "class_hw1", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "class_hw1","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "class_hw2", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "class_hw2","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "class_hw3", "interface" : "wire", "bitwidth" : 16, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":15,"cElement": [{"cName": "class_hw3","cData": "short","bit_use": { "low": 0,"up": 15},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "x0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x0","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 17,"step" : 1}]}]}]} , 
 	{ "Name" : "x1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x1","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 17,"step" : 1}]}]}]} , 
 	{ "Name" : "x2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x2","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 17,"step" : 1}]}]}]} , 
 	{ "Name" : "x3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "x3","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 17,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 54
set portList { 
	{ class_hw0 sc_out sc_lv 16 signal 0 } 
	{ class_hw1 sc_out sc_lv 16 signal 1 } 
	{ class_hw2 sc_out sc_lv 16 signal 2 } 
	{ class_hw3 sc_out sc_lv 16 signal 3 } 
	{ x0_address0 sc_out sc_lv 5 signal 4 } 
	{ x0_ce0 sc_out sc_logic 1 signal 4 } 
	{ x0_d0 sc_out sc_lv 32 signal 4 } 
	{ x0_q0 sc_in sc_lv 32 signal 4 } 
	{ x0_we0 sc_out sc_logic 1 signal 4 } 
	{ x0_address1 sc_out sc_lv 5 signal 4 } 
	{ x0_ce1 sc_out sc_logic 1 signal 4 } 
	{ x0_d1 sc_out sc_lv 32 signal 4 } 
	{ x0_q1 sc_in sc_lv 32 signal 4 } 
	{ x0_we1 sc_out sc_logic 1 signal 4 } 
	{ x1_address0 sc_out sc_lv 5 signal 5 } 
	{ x1_ce0 sc_out sc_logic 1 signal 5 } 
	{ x1_d0 sc_out sc_lv 32 signal 5 } 
	{ x1_q0 sc_in sc_lv 32 signal 5 } 
	{ x1_we0 sc_out sc_logic 1 signal 5 } 
	{ x1_address1 sc_out sc_lv 5 signal 5 } 
	{ x1_ce1 sc_out sc_logic 1 signal 5 } 
	{ x1_d1 sc_out sc_lv 32 signal 5 } 
	{ x1_q1 sc_in sc_lv 32 signal 5 } 
	{ x1_we1 sc_out sc_logic 1 signal 5 } 
	{ x2_address0 sc_out sc_lv 5 signal 6 } 
	{ x2_ce0 sc_out sc_logic 1 signal 6 } 
	{ x2_d0 sc_out sc_lv 32 signal 6 } 
	{ x2_q0 sc_in sc_lv 32 signal 6 } 
	{ x2_we0 sc_out sc_logic 1 signal 6 } 
	{ x2_address1 sc_out sc_lv 5 signal 6 } 
	{ x2_ce1 sc_out sc_logic 1 signal 6 } 
	{ x2_d1 sc_out sc_lv 32 signal 6 } 
	{ x2_q1 sc_in sc_lv 32 signal 6 } 
	{ x2_we1 sc_out sc_logic 1 signal 6 } 
	{ x3_address0 sc_out sc_lv 5 signal 7 } 
	{ x3_ce0 sc_out sc_logic 1 signal 7 } 
	{ x3_d0 sc_out sc_lv 32 signal 7 } 
	{ x3_q0 sc_in sc_lv 32 signal 7 } 
	{ x3_we0 sc_out sc_logic 1 signal 7 } 
	{ x3_address1 sc_out sc_lv 5 signal 7 } 
	{ x3_ce1 sc_out sc_logic 1 signal 7 } 
	{ x3_d1 sc_out sc_lv 32 signal 7 } 
	{ x3_q1 sc_in sc_lv 32 signal 7 } 
	{ x3_we1 sc_out sc_logic 1 signal 7 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ class_hw0_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ class_hw1_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ class_hw2_ap_vld sc_out sc_logic 1 outvld 2 } 
	{ class_hw3_ap_vld sc_out sc_logic 1 outvld 3 } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
}
set NewPortList {[ 
	{ "name": "class_hw0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw0", "role": "default" }} , 
 	{ "name": "class_hw1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw1", "role": "default" }} , 
 	{ "name": "class_hw2", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw2", "role": "default" }} , 
 	{ "name": "class_hw3", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "class_hw3", "role": "default" }} , 
 	{ "name": "x0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x0", "role": "address0" }} , 
 	{ "name": "x0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x0", "role": "ce0" }} , 
 	{ "name": "x0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x0", "role": "d0" }} , 
 	{ "name": "x0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x0", "role": "q0" }} , 
 	{ "name": "x0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x0", "role": "we0" }} , 
 	{ "name": "x0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x0", "role": "address1" }} , 
 	{ "name": "x0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x0", "role": "ce1" }} , 
 	{ "name": "x0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x0", "role": "d1" }} , 
 	{ "name": "x0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x0", "role": "q1" }} , 
 	{ "name": "x0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x0", "role": "we1" }} , 
 	{ "name": "x1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x1", "role": "address0" }} , 
 	{ "name": "x1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "ce0" }} , 
 	{ "name": "x1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x1", "role": "d0" }} , 
 	{ "name": "x1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x1", "role": "q0" }} , 
 	{ "name": "x1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "we0" }} , 
 	{ "name": "x1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x1", "role": "address1" }} , 
 	{ "name": "x1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "ce1" }} , 
 	{ "name": "x1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x1", "role": "d1" }} , 
 	{ "name": "x1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x1", "role": "q1" }} , 
 	{ "name": "x1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x1", "role": "we1" }} , 
 	{ "name": "x2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x2", "role": "address0" }} , 
 	{ "name": "x2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "ce0" }} , 
 	{ "name": "x2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x2", "role": "d0" }} , 
 	{ "name": "x2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x2", "role": "q0" }} , 
 	{ "name": "x2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "we0" }} , 
 	{ "name": "x2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x2", "role": "address1" }} , 
 	{ "name": "x2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "ce1" }} , 
 	{ "name": "x2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x2", "role": "d1" }} , 
 	{ "name": "x2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x2", "role": "q1" }} , 
 	{ "name": "x2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x2", "role": "we1" }} , 
 	{ "name": "x3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x3", "role": "address0" }} , 
 	{ "name": "x3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "ce0" }} , 
 	{ "name": "x3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x3", "role": "d0" }} , 
 	{ "name": "x3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x3", "role": "q0" }} , 
 	{ "name": "x3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "we0" }} , 
 	{ "name": "x3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "x3", "role": "address1" }} , 
 	{ "name": "x3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "ce1" }} , 
 	{ "name": "x3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x3", "role": "d1" }} , 
 	{ "name": "x3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "x3", "role": "q1" }} , 
 	{ "name": "x3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "x3", "role": "we1" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "class_hw0_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw0", "role": "ap_vld" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "class_hw1_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw1", "role": "ap_vld" }} , 
 	{ "name": "class_hw2_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw2", "role": "ap_vld" }} , 
 	{ "name": "class_hw3_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "class_hw3", "role": "ap_vld" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "13", "25", "37"],
		"CDFG" : "svm_top",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Dataflow", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "175969", "EstimateLatencyMax" : "175969",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "1",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"InputProcess" : [
			{"ID" : "1", "Name" : "svm5_U0", "ReadyCount" : "svm5_U0_ap_ready_count"},
			{"ID" : "13", "Name" : "svm6_U0", "ReadyCount" : "svm6_U0_ap_ready_count"},
			{"ID" : "25", "Name" : "svm7_U0", "ReadyCount" : "svm7_U0_ap_ready_count"},
			{"ID" : "37", "Name" : "svm_U0", "ReadyCount" : "svm_U0_ap_ready_count"}],
		"OutputProcess" : [
			{"ID" : "1", "Name" : "svm5_U0"},
			{"ID" : "13", "Name" : "svm6_U0"},
			{"ID" : "25", "Name" : "svm7_U0"},
			{"ID" : "37", "Name" : "svm_U0"}],
		"Port" : [
			{"Name" : "class_hw0", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "svm5_U0", "Port" : "class_hw"}]},
			{"Name" : "class_hw1", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "svm6_U0", "Port" : "class_hw"}]},
			{"Name" : "class_hw2", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "svm7_U0", "Port" : "class_hw"}]},
			{"Name" : "class_hw3", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "svm_U0", "Port" : "class_hw"}]},
			{"Name" : "x0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "svm5_U0", "Port" : "x"}]},
			{"Name" : "x1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "svm6_U0", "Port" : "x"}]},
			{"Name" : "x2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "svm7_U0", "Port" : "x"}]},
			{"Name" : "x3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "svm_U0", "Port" : "x"}]},
			{"Name" : "SupVec12", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "svm5_U0", "Port" : "SupVec12"}]},
			{"Name" : "Co9", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "svm5_U0", "Port" : "Co9"}]},
			{"Name" : "SupVec11", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "svm6_U0", "Port" : "SupVec11"}]},
			{"Name" : "Co8", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "svm6_U0", "Port" : "Co8"}]},
			{"Name" : "SupVec", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "svm7_U0", "Port" : "SupVec"}]},
			{"Name" : "Co", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "25", "SubInstance" : "svm7_U0", "Port" : "Co"}]},
			{"Name" : "SupVec13", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "svm_U0", "Port" : "SupVec13"}]},
			{"Name" : "Co10", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "37", "SubInstance" : "svm_U0", "Port" : "Co10"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm5_U0", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"],
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
			{"Name" : "SupVec12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Co9", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.SupVec12_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.Co9_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_faddfsub_bkb_U1", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_fsub_32nscud_U2", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_fmul_32nsdEe_U3", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_fmul_32nsdEe_U4", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_fpext_32neOg_U5", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_dadd_64nsfYi_U6", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_dmul_64nsg8j_U7", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_dcmp_64nshbi_U8", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm5_U0.svm_top_dexp_64nsibs_U9", "Parent" : "1"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm6_U0", "Parent" : "0", "Child" : ["14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24"],
		"CDFG" : "svm6",
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
			{"Name" : "SupVec11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Co8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.SupVec11_U", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.Co8_U", "Parent" : "13"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_faddfsub_bkb_U22", "Parent" : "13"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_fsub_32nscud_U23", "Parent" : "13"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_fmul_32nsdEe_U24", "Parent" : "13"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_fmul_32nsdEe_U25", "Parent" : "13"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_fpext_32neOg_U26", "Parent" : "13"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_dadd_64nsfYi_U27", "Parent" : "13"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_dmul_64nsg8j_U28", "Parent" : "13"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_dcmp_64nshbi_U29", "Parent" : "13"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm6_U0.svm_top_dexp_64nsibs_U30", "Parent" : "13"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm7_U0", "Parent" : "0", "Child" : ["26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36"],
		"CDFG" : "svm7",
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
			{"Name" : "SupVec", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Co", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.SupVec_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.Co_U", "Parent" : "25"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_faddfsub_bkb_U33", "Parent" : "25"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_fsub_32nscud_U34", "Parent" : "25"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_fmul_32nsdEe_U35", "Parent" : "25"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_fmul_32nsdEe_U36", "Parent" : "25"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_fpext_32neOg_U37", "Parent" : "25"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_dadd_64nsfYi_U38", "Parent" : "25"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_dmul_64nsg8j_U39", "Parent" : "25"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_dcmp_64nshbi_U40", "Parent" : "25"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm7_U0.svm_top_dexp_64nsibs_U41", "Parent" : "25"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.svm_U0", "Parent" : "0", "Child" : ["38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48"],
		"CDFG" : "svm",
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
			{"Name" : "SupVec13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "Co10", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.SupVec13_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.Co10_U", "Parent" : "37"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_faddfsub_bkb_U44", "Parent" : "37"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_fsub_32nscud_U45", "Parent" : "37"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_fmul_32nsdEe_U46", "Parent" : "37"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_fmul_32nsdEe_U47", "Parent" : "37"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_fpext_32neOg_U48", "Parent" : "37"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_dadd_64nsfYi_U49", "Parent" : "37"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_dmul_64nsg8j_U50", "Parent" : "37"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_dcmp_64nshbi_U51", "Parent" : "37"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.svm_U0.svm_top_dexp_64nsibs_U52", "Parent" : "37"}]}


set ArgLastReadFirstWriteLatency {
	svm_top {
		class_hw0 {Type O LastRead -1 FirstWrite 1}
		class_hw1 {Type O LastRead -1 FirstWrite 1}
		class_hw2 {Type O LastRead -1 FirstWrite 1}
		class_hw3 {Type O LastRead -1 FirstWrite 1}
		x0 {Type I LastRead 37 FirstWrite -1}
		x1 {Type I LastRead 37 FirstWrite -1}
		x2 {Type I LastRead 37 FirstWrite -1}
		x3 {Type I LastRead 37 FirstWrite -1}
		SupVec12 {Type I LastRead -1 FirstWrite -1}
		Co9 {Type I LastRead -1 FirstWrite -1}
		SupVec11 {Type I LastRead -1 FirstWrite -1}
		Co8 {Type I LastRead -1 FirstWrite -1}
		SupVec {Type I LastRead -1 FirstWrite -1}
		Co {Type I LastRead -1 FirstWrite -1}
		SupVec13 {Type I LastRead -1 FirstWrite -1}
		Co10 {Type I LastRead -1 FirstWrite -1}}
	svm5 {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x {Type I LastRead 37 FirstWrite -1}
		SupVec12 {Type I LastRead -1 FirstWrite -1}
		Co9 {Type I LastRead -1 FirstWrite -1}}
	svm6 {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x {Type I LastRead 37 FirstWrite -1}
		SupVec11 {Type I LastRead -1 FirstWrite -1}
		Co8 {Type I LastRead -1 FirstWrite -1}}
	svm7 {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x {Type I LastRead 37 FirstWrite -1}
		SupVec {Type I LastRead -1 FirstWrite -1}
		Co {Type I LastRead -1 FirstWrite -1}}
	svm {
		class_hw {Type O LastRead -1 FirstWrite 1}
		x {Type I LastRead 37 FirstWrite -1}
		SupVec13 {Type I LastRead -1 FirstWrite -1}
		Co10 {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "175969", "Max" : "175969"}
	, {"Name" : "Interval", "Min" : "175970", "Max" : "175970"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	class_hw0 { ap_vld {  { class_hw0 out_data 1 16 }  { class_hw0_ap_vld out_vld 1 1 } } }
	class_hw1 { ap_vld {  { class_hw1 out_data 1 16 }  { class_hw1_ap_vld out_vld 1 1 } } }
	class_hw2 { ap_vld {  { class_hw2 out_data 1 16 }  { class_hw2_ap_vld out_vld 1 1 } } }
	class_hw3 { ap_vld {  { class_hw3 out_data 1 16 }  { class_hw3_ap_vld out_vld 1 1 } } }
	x0 { ap_memory {  { x0_address0 mem_address 1 5 }  { x0_ce0 mem_ce 1 1 }  { x0_d0 mem_din 1 32 }  { x0_q0 mem_dout 0 32 }  { x0_we0 mem_we 1 1 }  { x0_address1 mem_address 1 5 }  { x0_ce1 mem_ce 1 1 }  { x0_d1 mem_din 1 32 }  { x0_q1 mem_dout 0 32 }  { x0_we1 mem_we 1 1 } } }
	x1 { ap_memory {  { x1_address0 mem_address 1 5 }  { x1_ce0 mem_ce 1 1 }  { x1_d0 mem_din 1 32 }  { x1_q0 mem_dout 0 32 }  { x1_we0 mem_we 1 1 }  { x1_address1 mem_address 1 5 }  { x1_ce1 mem_ce 1 1 }  { x1_d1 mem_din 1 32 }  { x1_q1 mem_dout 0 32 }  { x1_we1 mem_we 1 1 } } }
	x2 { ap_memory {  { x2_address0 mem_address 1 5 }  { x2_ce0 mem_ce 1 1 }  { x2_d0 mem_din 1 32 }  { x2_q0 mem_dout 0 32 }  { x2_we0 mem_we 1 1 }  { x2_address1 mem_address 1 5 }  { x2_ce1 mem_ce 1 1 }  { x2_d1 mem_din 1 32 }  { x2_q1 mem_dout 0 32 }  { x2_we1 mem_we 1 1 } } }
	x3 { ap_memory {  { x3_address0 mem_address 1 5 }  { x3_ce0 mem_ce 1 1 }  { x3_d0 mem_din 1 32 }  { x3_q0 mem_dout 0 32 }  { x3_we0 mem_we 1 1 }  { x3_address1 mem_address 1 5 }  { x3_ce1 mem_ce 1 1 }  { x3_d1 mem_din 1 32 }  { x3_q1 mem_dout 0 32 }  { x3_we1 mem_we 1 1 } } }
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
