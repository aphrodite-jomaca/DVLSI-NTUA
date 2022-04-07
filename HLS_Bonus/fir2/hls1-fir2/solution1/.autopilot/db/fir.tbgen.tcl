set C_TypeInfoList {{ 
"fir" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"y": [[],{ "pointer": "0"}] }, {"x": [[],"1"] }],[],""], 
"0": [ "acc_t8", {"typedef": [[[],"2"],""]}], 
"1": [ "data_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_uint<8>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 8}}]],""]}}], 
"2": [ "ap_uint<19>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 19}}]],""]}}]
}}
set moduleName fir
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
set C_modelName {fir}
set C_modelType { void 0 }
set C_modelArgList {
	{ y_V int 19 regular {pointer 1}  }
	{ x_V int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "y_V", "interface" : "wire", "bitwidth" : 19, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":18,"cElement": [{"cName": "y.V","cData": "uint19","bit_use": { "low": 0,"up": 18},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "x_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "x.V","cData": "uint8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 9
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ y_V sc_out sc_lv 19 signal 0 } 
	{ y_V_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ x_V sc_in sc_lv 8 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "y_V", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "y_V", "role": "default" }} , 
 	{ "name": "y_V_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "y_V", "role": "ap_vld" }} , 
 	{ "name": "x_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "x_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "fir",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1", "EstimateLatencyMax" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "y_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "x_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shift_reg_V_6", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_5", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_4", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_3", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_2", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_1", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "shift_reg_V_0", "Type" : "OVld", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	fir {
		y_V {Type O LastRead -1 FirstWrite 1}
		x_V {Type I LastRead 1 FirstWrite -1}
		shift_reg_V_6 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_5 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_4 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_3 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_2 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_1 {Type IO LastRead -1 FirstWrite -1}
		shift_reg_V_0 {Type IO LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1", "Max" : "1"}
	, {"Name" : "Interval", "Min" : "2", "Max" : "2"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	y_V { ap_vld {  { y_V out_data 1 19 }  { y_V_ap_vld out_vld 1 1 } } }
	x_V { ap_none {  { x_V in_data 0 8 } } }
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
