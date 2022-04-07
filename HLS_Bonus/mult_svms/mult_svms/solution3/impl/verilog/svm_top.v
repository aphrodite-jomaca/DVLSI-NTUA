// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="svm_top,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=8.317400,HLS_SYN_LAT=175969,HLS_SYN_TPT=175970,HLS_SYN_MEM=272,HLS_SYN_DSP=200,HLS_SYN_FF=16256,HLS_SYN_LUT=30218,HLS_VERSION=2018_2}" *)

module svm_top (
        class_hw0,
        class_hw1,
        class_hw2,
        class_hw3,
        x0_address0,
        x0_ce0,
        x0_d0,
        x0_q0,
        x0_we0,
        x0_address1,
        x0_ce1,
        x0_d1,
        x0_q1,
        x0_we1,
        x1_address0,
        x1_ce0,
        x1_d0,
        x1_q0,
        x1_we0,
        x1_address1,
        x1_ce1,
        x1_d1,
        x1_q1,
        x1_we1,
        x2_address0,
        x2_ce0,
        x2_d0,
        x2_q0,
        x2_we0,
        x2_address1,
        x2_ce1,
        x2_d1,
        x2_q1,
        x2_we1,
        x3_address0,
        x3_ce0,
        x3_d0,
        x3_q0,
        x3_we0,
        x3_address1,
        x3_ce1,
        x3_d1,
        x3_q1,
        x3_we1,
        ap_clk,
        ap_rst,
        class_hw0_ap_vld,
        ap_done,
        class_hw1_ap_vld,
        class_hw2_ap_vld,
        class_hw3_ap_vld,
        ap_start,
        ap_ready,
        ap_idle
);


output  [15:0] class_hw0;
output  [15:0] class_hw1;
output  [15:0] class_hw2;
output  [15:0] class_hw3;
output  [4:0] x0_address0;
output   x0_ce0;
output  [31:0] x0_d0;
input  [31:0] x0_q0;
output   x0_we0;
output  [4:0] x0_address1;
output   x0_ce1;
output  [31:0] x0_d1;
input  [31:0] x0_q1;
output   x0_we1;
output  [4:0] x1_address0;
output   x1_ce0;
output  [31:0] x1_d0;
input  [31:0] x1_q0;
output   x1_we0;
output  [4:0] x1_address1;
output   x1_ce1;
output  [31:0] x1_d1;
input  [31:0] x1_q1;
output   x1_we1;
output  [4:0] x2_address0;
output   x2_ce0;
output  [31:0] x2_d0;
input  [31:0] x2_q0;
output   x2_we0;
output  [4:0] x2_address1;
output   x2_ce1;
output  [31:0] x2_d1;
input  [31:0] x2_q1;
output   x2_we1;
output  [4:0] x3_address0;
output   x3_ce0;
output  [31:0] x3_d0;
input  [31:0] x3_q0;
output   x3_we0;
output  [4:0] x3_address1;
output   x3_ce1;
output  [31:0] x3_d1;
input  [31:0] x3_q1;
output   x3_we1;
input   ap_clk;
input   ap_rst;
output   class_hw0_ap_vld;
output   ap_done;
output   class_hw1_ap_vld;
output   class_hw2_ap_vld;
output   class_hw3_ap_vld;
input   ap_start;
output   ap_ready;
output   ap_idle;

wire    svm5_U0_ap_start;
wire    svm5_U0_ap_done;
wire    svm5_U0_ap_continue;
wire    svm5_U0_ap_idle;
wire    svm5_U0_ap_ready;
wire   [15:0] svm5_U0_class_hw;
wire    svm5_U0_class_hw_ap_vld;
wire   [4:0] svm5_U0_x_address0;
wire    svm5_U0_x_ce0;
wire   [4:0] svm5_U0_x_address1;
wire    svm5_U0_x_ce1;
wire    ap_sync_continue;
wire    svm6_U0_ap_start;
wire    svm6_U0_ap_done;
wire    svm6_U0_ap_continue;
wire    svm6_U0_ap_idle;
wire    svm6_U0_ap_ready;
wire   [15:0] svm6_U0_class_hw;
wire    svm6_U0_class_hw_ap_vld;
wire   [4:0] svm6_U0_x_address0;
wire    svm6_U0_x_ce0;
wire   [4:0] svm6_U0_x_address1;
wire    svm6_U0_x_ce1;
wire    svm7_U0_ap_start;
wire    svm7_U0_ap_done;
wire    svm7_U0_ap_continue;
wire    svm7_U0_ap_idle;
wire    svm7_U0_ap_ready;
wire   [15:0] svm7_U0_class_hw;
wire    svm7_U0_class_hw_ap_vld;
wire   [4:0] svm7_U0_x_address0;
wire    svm7_U0_x_ce0;
wire   [4:0] svm7_U0_x_address1;
wire    svm7_U0_x_ce1;
wire    svm_U0_ap_start;
wire    svm_U0_ap_done;
wire    svm_U0_ap_continue;
wire    svm_U0_ap_idle;
wire    svm_U0_ap_ready;
wire   [15:0] svm_U0_class_hw;
wire    svm_U0_class_hw_ap_vld;
wire   [4:0] svm_U0_x_address0;
wire    svm_U0_x_ce0;
wire   [4:0] svm_U0_x_address1;
wire    svm_U0_x_ce1;
wire    ap_sync_done;
wire    ap_sync_ready;
reg    ap_sync_reg_svm5_U0_ap_ready;
wire    ap_sync_svm5_U0_ap_ready;
reg   [1:0] svm5_U0_ap_ready_count;
reg    ap_sync_reg_svm6_U0_ap_ready;
wire    ap_sync_svm6_U0_ap_ready;
reg   [1:0] svm6_U0_ap_ready_count;
reg    ap_sync_reg_svm7_U0_ap_ready;
wire    ap_sync_svm7_U0_ap_ready;
reg   [1:0] svm7_U0_ap_ready_count;
reg    ap_sync_reg_svm_U0_ap_ready;
wire    ap_sync_svm_U0_ap_ready;
reg   [1:0] svm_U0_ap_ready_count;
wire    svm5_U0_start_full_n;
wire    svm5_U0_start_write;
wire    svm6_U0_start_full_n;
wire    svm6_U0_start_write;
wire    svm7_U0_start_full_n;
wire    svm7_U0_start_write;
wire    svm_U0_start_full_n;
wire    svm_U0_start_write;

// power-on initialization
initial begin
#0 ap_sync_reg_svm5_U0_ap_ready = 1'b0;
#0 svm5_U0_ap_ready_count = 2'd0;
#0 ap_sync_reg_svm6_U0_ap_ready = 1'b0;
#0 svm6_U0_ap_ready_count = 2'd0;
#0 ap_sync_reg_svm7_U0_ap_ready = 1'b0;
#0 svm7_U0_ap_ready_count = 2'd0;
#0 ap_sync_reg_svm_U0_ap_ready = 1'b0;
#0 svm_U0_ap_ready_count = 2'd0;
end

svm5 svm5_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(svm5_U0_ap_start),
    .ap_done(svm5_U0_ap_done),
    .ap_continue(svm5_U0_ap_continue),
    .ap_idle(svm5_U0_ap_idle),
    .ap_ready(svm5_U0_ap_ready),
    .class_hw(svm5_U0_class_hw),
    .class_hw_ap_vld(svm5_U0_class_hw_ap_vld),
    .x_address0(svm5_U0_x_address0),
    .x_ce0(svm5_U0_x_ce0),
    .x_q0(x0_q0),
    .x_address1(svm5_U0_x_address1),
    .x_ce1(svm5_U0_x_ce1),
    .x_q1(x0_q1)
);

svm6 svm6_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(svm6_U0_ap_start),
    .ap_done(svm6_U0_ap_done),
    .ap_continue(svm6_U0_ap_continue),
    .ap_idle(svm6_U0_ap_idle),
    .ap_ready(svm6_U0_ap_ready),
    .class_hw(svm6_U0_class_hw),
    .class_hw_ap_vld(svm6_U0_class_hw_ap_vld),
    .x_address0(svm6_U0_x_address0),
    .x_ce0(svm6_U0_x_ce0),
    .x_q0(x1_q0),
    .x_address1(svm6_U0_x_address1),
    .x_ce1(svm6_U0_x_ce1),
    .x_q1(x1_q1)
);

svm7 svm7_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(svm7_U0_ap_start),
    .ap_done(svm7_U0_ap_done),
    .ap_continue(svm7_U0_ap_continue),
    .ap_idle(svm7_U0_ap_idle),
    .ap_ready(svm7_U0_ap_ready),
    .class_hw(svm7_U0_class_hw),
    .class_hw_ap_vld(svm7_U0_class_hw_ap_vld),
    .x_address0(svm7_U0_x_address0),
    .x_ce0(svm7_U0_x_ce0),
    .x_q0(x2_q0),
    .x_address1(svm7_U0_x_address1),
    .x_ce1(svm7_U0_x_ce1),
    .x_q1(x2_q1)
);

svm svm_U0(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(svm_U0_ap_start),
    .ap_done(svm_U0_ap_done),
    .ap_continue(svm_U0_ap_continue),
    .ap_idle(svm_U0_ap_idle),
    .ap_ready(svm_U0_ap_ready),
    .class_hw(svm_U0_class_hw),
    .class_hw_ap_vld(svm_U0_class_hw_ap_vld),
    .x_address0(svm_U0_x_address0),
    .x_ce0(svm_U0_x_ce0),
    .x_q0(x3_q0),
    .x_address1(svm_U0_x_address1),
    .x_ce1(svm_U0_x_ce1),
    .x_q1(x3_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_svm5_U0_ap_ready <= 1'b0;
    end else begin
        if (((ap_sync_ready & ap_start) == 1'b1)) begin
            ap_sync_reg_svm5_U0_ap_ready <= 1'b0;
        end else begin
            ap_sync_reg_svm5_U0_ap_ready <= ap_sync_svm5_U0_ap_ready;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_svm6_U0_ap_ready <= 1'b0;
    end else begin
        if (((ap_sync_ready & ap_start) == 1'b1)) begin
            ap_sync_reg_svm6_U0_ap_ready <= 1'b0;
        end else begin
            ap_sync_reg_svm6_U0_ap_ready <= ap_sync_svm6_U0_ap_ready;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_svm7_U0_ap_ready <= 1'b0;
    end else begin
        if (((ap_sync_ready & ap_start) == 1'b1)) begin
            ap_sync_reg_svm7_U0_ap_ready <= 1'b0;
        end else begin
            ap_sync_reg_svm7_U0_ap_ready <= ap_sync_svm7_U0_ap_ready;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_sync_reg_svm_U0_ap_ready <= 1'b0;
    end else begin
        if (((ap_sync_ready & ap_start) == 1'b1)) begin
            ap_sync_reg_svm_U0_ap_ready <= 1'b0;
        end else begin
            ap_sync_reg_svm_U0_ap_ready <= ap_sync_svm_U0_ap_ready;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((svm5_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1))) begin
        svm5_U0_ap_ready_count <= (svm5_U0_ap_ready_count - 2'd1);
    end else if (((ap_sync_ready == 1'b0) & (svm5_U0_ap_ready == 1'b1))) begin
        svm5_U0_ap_ready_count <= (svm5_U0_ap_ready_count + 2'd1);
    end
end

always @ (posedge ap_clk) begin
    if (((svm6_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1))) begin
        svm6_U0_ap_ready_count <= (svm6_U0_ap_ready_count - 2'd1);
    end else if (((ap_sync_ready == 1'b0) & (svm6_U0_ap_ready == 1'b1))) begin
        svm6_U0_ap_ready_count <= (svm6_U0_ap_ready_count + 2'd1);
    end
end

always @ (posedge ap_clk) begin
    if (((svm7_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1))) begin
        svm7_U0_ap_ready_count <= (svm7_U0_ap_ready_count - 2'd1);
    end else if (((ap_sync_ready == 1'b0) & (svm7_U0_ap_ready == 1'b1))) begin
        svm7_U0_ap_ready_count <= (svm7_U0_ap_ready_count + 2'd1);
    end
end

always @ (posedge ap_clk) begin
    if (((svm_U0_ap_ready == 1'b0) & (ap_sync_ready == 1'b1))) begin
        svm_U0_ap_ready_count <= (svm_U0_ap_ready_count - 2'd1);
    end else if (((ap_sync_ready == 1'b0) & (svm_U0_ap_ready == 1'b1))) begin
        svm_U0_ap_ready_count <= (svm_U0_ap_ready_count + 2'd1);
    end
end

assign ap_done = ap_sync_done;

assign ap_idle = (svm_U0_ap_idle & svm7_U0_ap_idle & svm6_U0_ap_idle & svm5_U0_ap_idle);

assign ap_ready = ap_sync_ready;

assign ap_sync_continue = ap_sync_done;

assign ap_sync_done = (svm_U0_ap_done & svm7_U0_ap_done & svm6_U0_ap_done & svm5_U0_ap_done);

assign ap_sync_ready = (ap_sync_svm_U0_ap_ready & ap_sync_svm7_U0_ap_ready & ap_sync_svm6_U0_ap_ready & ap_sync_svm5_U0_ap_ready);

assign ap_sync_svm5_U0_ap_ready = (svm5_U0_ap_ready | ap_sync_reg_svm5_U0_ap_ready);

assign ap_sync_svm6_U0_ap_ready = (svm6_U0_ap_ready | ap_sync_reg_svm6_U0_ap_ready);

assign ap_sync_svm7_U0_ap_ready = (svm7_U0_ap_ready | ap_sync_reg_svm7_U0_ap_ready);

assign ap_sync_svm_U0_ap_ready = (svm_U0_ap_ready | ap_sync_reg_svm_U0_ap_ready);

assign class_hw0 = svm5_U0_class_hw;

assign class_hw0_ap_vld = svm5_U0_class_hw_ap_vld;

assign class_hw1 = svm6_U0_class_hw;

assign class_hw1_ap_vld = svm6_U0_class_hw_ap_vld;

assign class_hw2 = svm7_U0_class_hw;

assign class_hw2_ap_vld = svm7_U0_class_hw_ap_vld;

assign class_hw3 = svm_U0_class_hw;

assign class_hw3_ap_vld = svm_U0_class_hw_ap_vld;

assign svm5_U0_ap_continue = ap_sync_done;

assign svm5_U0_ap_start = ((ap_sync_reg_svm5_U0_ap_ready ^ 1'b1) & ap_start);

assign svm5_U0_start_full_n = 1'b1;

assign svm5_U0_start_write = 1'b0;

assign svm6_U0_ap_continue = ap_sync_done;

assign svm6_U0_ap_start = ((ap_sync_reg_svm6_U0_ap_ready ^ 1'b1) & ap_start);

assign svm6_U0_start_full_n = 1'b1;

assign svm6_U0_start_write = 1'b0;

assign svm7_U0_ap_continue = ap_sync_done;

assign svm7_U0_ap_start = ((ap_sync_reg_svm7_U0_ap_ready ^ 1'b1) & ap_start);

assign svm7_U0_start_full_n = 1'b1;

assign svm7_U0_start_write = 1'b0;

assign svm_U0_ap_continue = ap_sync_done;

assign svm_U0_ap_start = ((ap_sync_reg_svm_U0_ap_ready ^ 1'b1) & ap_start);

assign svm_U0_start_full_n = 1'b1;

assign svm_U0_start_write = 1'b0;

assign x0_address0 = svm5_U0_x_address0;

assign x0_address1 = svm5_U0_x_address1;

assign x0_ce0 = svm5_U0_x_ce0;

assign x0_ce1 = svm5_U0_x_ce1;

assign x0_d0 = 32'd0;

assign x0_d1 = 32'd0;

assign x0_we0 = 1'b0;

assign x0_we1 = 1'b0;

assign x1_address0 = svm6_U0_x_address0;

assign x1_address1 = svm6_U0_x_address1;

assign x1_ce0 = svm6_U0_x_ce0;

assign x1_ce1 = svm6_U0_x_ce1;

assign x1_d0 = 32'd0;

assign x1_d1 = 32'd0;

assign x1_we0 = 1'b0;

assign x1_we1 = 1'b0;

assign x2_address0 = svm7_U0_x_address0;

assign x2_address1 = svm7_U0_x_address1;

assign x2_ce0 = svm7_U0_x_ce0;

assign x2_ce1 = svm7_U0_x_ce1;

assign x2_d0 = 32'd0;

assign x2_d1 = 32'd0;

assign x2_we0 = 1'b0;

assign x2_we1 = 1'b0;

assign x3_address0 = svm_U0_x_address0;

assign x3_address1 = svm_U0_x_address1;

assign x3_ce0 = svm_U0_x_ce0;

assign x3_ce1 = svm_U0_x_ce1;

assign x3_d0 = 32'd0;

assign x3_d1 = 32'd0;

assign x3_we0 = 1'b0;

assign x3_we1 = 1'b0;

endmodule //svm_top