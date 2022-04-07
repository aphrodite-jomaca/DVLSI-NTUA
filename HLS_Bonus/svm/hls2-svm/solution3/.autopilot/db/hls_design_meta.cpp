#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("class_hw", 16, hls_out, 0, "ap_vld", "out_data", 1),
	Port_Property("class_hw_ap_vld", 1, hls_out, 0, "ap_vld", "out_vld", 1),
	Port_Property("x_address0", 5, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("x_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("x_q0", 32, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("x_address1", 5, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("x_ce1", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("x_q1", 32, hls_in, 1, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "svm";
