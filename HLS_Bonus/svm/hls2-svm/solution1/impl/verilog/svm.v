// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="svm,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.232000,HLS_SYN_LAT=403261,HLS_SYN_TPT=none,HLS_SYN_MEM=68,HLS_SYN_DSP=45,HLS_SYN_FF=3517,HLS_SYN_LUT=6184,HLS_VERSION=2018_2}" *)

module svm (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        class_hw,
        class_hw_ap_vld,
        x_address0,
        x_ce0,
        x_q0
);

parameter    ap_ST_fsm_state1 = 58'd1;
parameter    ap_ST_fsm_state2 = 58'd2;
parameter    ap_ST_fsm_state3 = 58'd4;
parameter    ap_ST_fsm_state4 = 58'd8;
parameter    ap_ST_fsm_state5 = 58'd16;
parameter    ap_ST_fsm_state6 = 58'd32;
parameter    ap_ST_fsm_state7 = 58'd64;
parameter    ap_ST_fsm_state8 = 58'd128;
parameter    ap_ST_fsm_state9 = 58'd256;
parameter    ap_ST_fsm_state10 = 58'd512;
parameter    ap_ST_fsm_state11 = 58'd1024;
parameter    ap_ST_fsm_state12 = 58'd2048;
parameter    ap_ST_fsm_state13 = 58'd4096;
parameter    ap_ST_fsm_state14 = 58'd8192;
parameter    ap_ST_fsm_state15 = 58'd16384;
parameter    ap_ST_fsm_state16 = 58'd32768;
parameter    ap_ST_fsm_state17 = 58'd65536;
parameter    ap_ST_fsm_state18 = 58'd131072;
parameter    ap_ST_fsm_state19 = 58'd262144;
parameter    ap_ST_fsm_state20 = 58'd524288;
parameter    ap_ST_fsm_state21 = 58'd1048576;
parameter    ap_ST_fsm_state22 = 58'd2097152;
parameter    ap_ST_fsm_state23 = 58'd4194304;
parameter    ap_ST_fsm_state24 = 58'd8388608;
parameter    ap_ST_fsm_state25 = 58'd16777216;
parameter    ap_ST_fsm_state26 = 58'd33554432;
parameter    ap_ST_fsm_state27 = 58'd67108864;
parameter    ap_ST_fsm_state28 = 58'd134217728;
parameter    ap_ST_fsm_state29 = 58'd268435456;
parameter    ap_ST_fsm_state30 = 58'd536870912;
parameter    ap_ST_fsm_state31 = 58'd1073741824;
parameter    ap_ST_fsm_state32 = 58'd2147483648;
parameter    ap_ST_fsm_state33 = 58'd4294967296;
parameter    ap_ST_fsm_state34 = 58'd8589934592;
parameter    ap_ST_fsm_state35 = 58'd17179869184;
parameter    ap_ST_fsm_state36 = 58'd34359738368;
parameter    ap_ST_fsm_state37 = 58'd68719476736;
parameter    ap_ST_fsm_state38 = 58'd137438953472;
parameter    ap_ST_fsm_state39 = 58'd274877906944;
parameter    ap_ST_fsm_state40 = 58'd549755813888;
parameter    ap_ST_fsm_state41 = 58'd1099511627776;
parameter    ap_ST_fsm_state42 = 58'd2199023255552;
parameter    ap_ST_fsm_state43 = 58'd4398046511104;
parameter    ap_ST_fsm_state44 = 58'd8796093022208;
parameter    ap_ST_fsm_state45 = 58'd17592186044416;
parameter    ap_ST_fsm_state46 = 58'd35184372088832;
parameter    ap_ST_fsm_state47 = 58'd70368744177664;
parameter    ap_ST_fsm_state48 = 58'd140737488355328;
parameter    ap_ST_fsm_state49 = 58'd281474976710656;
parameter    ap_ST_fsm_state50 = 58'd562949953421312;
parameter    ap_ST_fsm_state51 = 58'd1125899906842624;
parameter    ap_ST_fsm_state52 = 58'd2251799813685248;
parameter    ap_ST_fsm_state53 = 58'd4503599627370496;
parameter    ap_ST_fsm_state54 = 58'd9007199254740992;
parameter    ap_ST_fsm_state55 = 58'd18014398509481984;
parameter    ap_ST_fsm_state56 = 58'd36028797018963968;
parameter    ap_ST_fsm_state57 = 58'd72057594037927936;
parameter    ap_ST_fsm_state58 = 58'd144115188075855872;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [15:0] class_hw;
output   class_hw_ap_vld;
output  [4:0] x_address0;
output   x_ce0;
input  [31:0] x_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg class_hw_ap_vld;
reg x_ce0;

(* fsm_encoding = "none" *) reg   [57:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [14:0] SupVec_address0;
reg    SupVec_ce0;
wire   [31:0] SupVec_q0;
wire   [10:0] Co_address0;
reg    Co_ce0;
wire   [31:0] Co_q0;
wire   [63:0] grp_fu_179_p1;
reg   [63:0] reg_205;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond_fu_313_p2;
wire    ap_CS_fsm_state42;
wire   [63:0] grp_fu_189_p2;
reg   [63:0] reg_210;
wire    ap_CS_fsm_state24;
wire    ap_CS_fsm_state48;
wire   [10:0] i_1_fu_222_p2;
reg   [10:0] i_1_reg_347;
wire    ap_CS_fsm_state2;
wire   [63:0] tmp_1_fu_228_p1;
reg   [63:0] tmp_1_reg_352;
wire   [0:0] exitcond1_fu_216_p2;
wire   [15:0] tmp_16_fu_256_p2;
reg   [15:0] tmp_16_reg_357;
wire   [4:0] j_1_fu_319_p2;
reg   [4:0] j_1_reg_365;
reg   [31:0] x_load_reg_385;
wire    ap_CS_fsm_state4;
reg   [31:0] SupVec_load_reg_390;
wire   [31:0] grp_fu_170_p2;
reg   [31:0] dif_reg_395;
wire    ap_CS_fsm_state9;
wire   [31:0] grp_fu_175_p2;
reg   [31:0] tmp_8_reg_401;
wire    ap_CS_fsm_state13;
wire    ap_CS_fsm_state18;
reg   [31:0] Co_load_reg_411;
wire    ap_CS_fsm_state19;
wire   [63:0] grp_fu_200_p2;
reg   [63:0] tmp_5_reg_416;
wire   [63:0] grp_fu_183_p2;
reg   [63:0] tmp_7_reg_421;
wire    ap_CS_fsm_state53;
wire    ap_CS_fsm_state58;
reg   [63:0] sum_reg_124;
reg   [10:0] i_reg_136;
reg   [31:0] norm_reg_147;
reg   [4:0] j_reg_159;
wire   [63:0] tmp_17_cast_fu_339_p1;
wire   [63:0] tmp_s_fu_325_p1;
reg   [31:0] grp_fu_170_p0;
reg   [31:0] grp_fu_170_p1;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state10;
reg   [31:0] grp_fu_179_p0;
reg   [63:0] grp_fu_183_p0;
reg   [63:0] grp_fu_183_p1;
wire    ap_CS_fsm_state49;
wire    ap_CS_fsm_state54;
reg   [63:0] grp_fu_189_p1;
wire    ap_CS_fsm_state43;
wire    ap_CS_fsm_state25;
wire   [14:0] tmp_14_fu_232_p3;
wire   [11:0] tmp_15_fu_244_p3;
wire   [15:0] p_shl1_cast_fu_252_p1;
wire   [15:0] p_shl_cast_fu_240_p1;
wire   [63:0] sum_to_int_fu_262_p1;
wire   [10:0] tmp_fu_266_p4;
wire   [51:0] tmp_10_fu_276_p1;
wire   [0:0] notrhs_fu_286_p2;
wire   [0:0] notlhs_fu_280_p2;
wire   [0:0] tmp_11_fu_292_p2;
wire   [0:0] tmp_12_fu_194_p2;
wire   [0:0] tmp_13_fu_298_p2;
wire   [15:0] tmp_cast_fu_330_p1;
wire   [15:0] tmp_17_fu_334_p2;
reg   [1:0] grp_fu_170_opcode;
reg   [57:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 58'd1;
end

svm_SupVec #(
    .DataWidth( 32 ),
    .AddressRange( 21996 ),
    .AddressWidth( 15 ))
SupVec_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(SupVec_address0),
    .ce0(SupVec_ce0),
    .q0(SupVec_q0)
);

svm_Co #(
    .DataWidth( 32 ),
    .AddressRange( 1222 ),
    .AddressWidth( 11 ))
Co_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(Co_address0),
    .ce0(Co_ce0),
    .q0(Co_q0)
);

svm_faddfsub_32nsbkb #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
svm_faddfsub_32nsbkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_170_p0),
    .din1(grp_fu_170_p1),
    .opcode(grp_fu_170_opcode),
    .ce(1'b1),
    .dout(grp_fu_170_p2)
);

svm_fmul_32ns_32ncud #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
svm_fmul_32ns_32ncud_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(dif_reg_395),
    .din1(dif_reg_395),
    .ce(1'b1),
    .dout(grp_fu_175_p2)
);

svm_fpext_32ns_64dEe #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
svm_fpext_32ns_64dEe_U3(
    .din0(grp_fu_179_p0),
    .dout(grp_fu_179_p1)
);

svm_dadd_64ns_64neOg #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
svm_dadd_64ns_64neOg_U4(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_183_p0),
    .din1(grp_fu_183_p1),
    .ce(1'b1),
    .dout(grp_fu_183_p2)
);

svm_dmul_64ns_64nfYi #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
svm_dmul_64ns_64nfYi_U5(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_205),
    .din1(grp_fu_189_p1),
    .ce(1'b1),
    .dout(grp_fu_189_p2)
);

svm_dcmp_64ns_64ng8j #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 1 ))
svm_dcmp_64ns_64ng8j_U6(
    .din0(sum_reg_124),
    .din1(64'd0),
    .opcode(5'd2),
    .dout(tmp_12_fu_194_p2)
);

svm_dexp_64ns_64nhbi #(
    .ID( 1 ),
    .NUM_STAGE( 18 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
svm_dexp_64ns_64nhbi_U7(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(64'd0),
    .din1(reg_210),
    .ce(1'b1),
    .dout(grp_fu_200_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state58)) begin
        i_reg_136 <= i_1_reg_347;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_136 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        j_reg_159 <= j_1_reg_365;
    end else if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd0))) begin
        j_reg_159 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        norm_reg_147 <= grp_fu_170_p2;
    end else if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd0))) begin
        norm_reg_147 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state58)) begin
        sum_reg_124 <= grp_fu_183_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        sum_reg_124 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        Co_load_reg_411 <= Co_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        SupVec_load_reg_390 <= SupVec_q0;
        x_load_reg_385 <= x_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        dif_reg_395 <= grp_fu_170_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_347 <= i_1_fu_222_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_365 <= j_1_fu_319_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state42) | ((1'b1 == ap_CS_fsm_state3) & (exitcond_fu_313_p2 == 1'd1)))) begin
        reg_205 <= grp_fu_179_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state48) | (1'b1 == ap_CS_fsm_state24))) begin
        reg_210 <= grp_fu_189_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd0))) begin
        tmp_16_reg_357[15 : 1] <= tmp_16_fu_256_p2[15 : 1];
        tmp_1_reg_352[10 : 0] <= tmp_1_fu_228_p1[10 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        tmp_5_reg_416 <= grp_fu_200_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state53)) begin
        tmp_7_reg_421 <= grp_fu_183_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        tmp_8_reg_401 <= grp_fu_175_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        Co_ce0 = 1'b1;
    end else begin
        Co_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        SupVec_ce0 = 1'b1;
    end else begin
        SupVec_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd1))) begin
        class_hw_ap_vld = 1'b1;
    end else begin
        class_hw_ap_vld = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_170_opcode = 2'd1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        grp_fu_170_opcode = 2'd0;
    end else begin
        grp_fu_170_opcode = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        grp_fu_170_p0 = norm_reg_147;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_170_p0 = x_load_reg_385;
    end else begin
        grp_fu_170_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        grp_fu_170_p1 = tmp_8_reg_401;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        grp_fu_170_p1 = SupVec_load_reg_390;
    end else begin
        grp_fu_170_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state42)) begin
        grp_fu_179_p0 = Co_load_reg_411;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        grp_fu_179_p0 = norm_reg_147;
    end else begin
        grp_fu_179_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        grp_fu_183_p0 = sum_reg_124;
    end else if ((1'b1 == ap_CS_fsm_state49)) begin
        grp_fu_183_p0 = reg_210;
    end else begin
        grp_fu_183_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state54)) begin
        grp_fu_183_p1 = tmp_7_reg_421;
    end else if ((1'b1 == ap_CS_fsm_state49)) begin
        grp_fu_183_p1 = 64'd13836900027705851904;
    end else begin
        grp_fu_183_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state43)) begin
        grp_fu_189_p1 = tmp_5_reg_416;
    end else if ((1'b1 == ap_CS_fsm_state19)) begin
        grp_fu_189_p1 = 64'd13844065254536904704;
    end else begin
        grp_fu_189_p1 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        x_ce0 = 1'b1;
    end else begin
        x_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_216_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond_fu_313_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            ap_NS_fsm = ap_ST_fsm_state26;
        end
        ap_ST_fsm_state26 : begin
            ap_NS_fsm = ap_ST_fsm_state27;
        end
        ap_ST_fsm_state27 : begin
            ap_NS_fsm = ap_ST_fsm_state28;
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state29;
        end
        ap_ST_fsm_state29 : begin
            ap_NS_fsm = ap_ST_fsm_state30;
        end
        ap_ST_fsm_state30 : begin
            ap_NS_fsm = ap_ST_fsm_state31;
        end
        ap_ST_fsm_state31 : begin
            ap_NS_fsm = ap_ST_fsm_state32;
        end
        ap_ST_fsm_state32 : begin
            ap_NS_fsm = ap_ST_fsm_state33;
        end
        ap_ST_fsm_state33 : begin
            ap_NS_fsm = ap_ST_fsm_state34;
        end
        ap_ST_fsm_state34 : begin
            ap_NS_fsm = ap_ST_fsm_state35;
        end
        ap_ST_fsm_state35 : begin
            ap_NS_fsm = ap_ST_fsm_state36;
        end
        ap_ST_fsm_state36 : begin
            ap_NS_fsm = ap_ST_fsm_state37;
        end
        ap_ST_fsm_state37 : begin
            ap_NS_fsm = ap_ST_fsm_state38;
        end
        ap_ST_fsm_state38 : begin
            ap_NS_fsm = ap_ST_fsm_state39;
        end
        ap_ST_fsm_state39 : begin
            ap_NS_fsm = ap_ST_fsm_state40;
        end
        ap_ST_fsm_state40 : begin
            ap_NS_fsm = ap_ST_fsm_state41;
        end
        ap_ST_fsm_state41 : begin
            ap_NS_fsm = ap_ST_fsm_state42;
        end
        ap_ST_fsm_state42 : begin
            ap_NS_fsm = ap_ST_fsm_state43;
        end
        ap_ST_fsm_state43 : begin
            ap_NS_fsm = ap_ST_fsm_state44;
        end
        ap_ST_fsm_state44 : begin
            ap_NS_fsm = ap_ST_fsm_state45;
        end
        ap_ST_fsm_state45 : begin
            ap_NS_fsm = ap_ST_fsm_state46;
        end
        ap_ST_fsm_state46 : begin
            ap_NS_fsm = ap_ST_fsm_state47;
        end
        ap_ST_fsm_state47 : begin
            ap_NS_fsm = ap_ST_fsm_state48;
        end
        ap_ST_fsm_state48 : begin
            ap_NS_fsm = ap_ST_fsm_state49;
        end
        ap_ST_fsm_state49 : begin
            ap_NS_fsm = ap_ST_fsm_state50;
        end
        ap_ST_fsm_state50 : begin
            ap_NS_fsm = ap_ST_fsm_state51;
        end
        ap_ST_fsm_state51 : begin
            ap_NS_fsm = ap_ST_fsm_state52;
        end
        ap_ST_fsm_state52 : begin
            ap_NS_fsm = ap_ST_fsm_state53;
        end
        ap_ST_fsm_state53 : begin
            ap_NS_fsm = ap_ST_fsm_state54;
        end
        ap_ST_fsm_state54 : begin
            ap_NS_fsm = ap_ST_fsm_state55;
        end
        ap_ST_fsm_state55 : begin
            ap_NS_fsm = ap_ST_fsm_state56;
        end
        ap_ST_fsm_state56 : begin
            ap_NS_fsm = ap_ST_fsm_state57;
        end
        ap_ST_fsm_state57 : begin
            ap_NS_fsm = ap_ST_fsm_state58;
        end
        ap_ST_fsm_state58 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Co_address0 = tmp_1_reg_352;

assign SupVec_address0 = tmp_17_cast_fu_339_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state42 = ap_CS_fsm[32'd41];

assign ap_CS_fsm_state43 = ap_CS_fsm[32'd42];

assign ap_CS_fsm_state48 = ap_CS_fsm[32'd47];

assign ap_CS_fsm_state49 = ap_CS_fsm[32'd48];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state53 = ap_CS_fsm[32'd52];

assign ap_CS_fsm_state54 = ap_CS_fsm[32'd53];

assign ap_CS_fsm_state58 = ap_CS_fsm[32'd57];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign class_hw = ((tmp_13_fu_298_p2[0:0] === 1'b1) ? 16'd1 : 16'd65535);

assign exitcond1_fu_216_p2 = ((i_reg_136 == 11'd1222) ? 1'b1 : 1'b0);

assign exitcond_fu_313_p2 = ((j_reg_159 == 5'd18) ? 1'b1 : 1'b0);

assign i_1_fu_222_p2 = (i_reg_136 + 11'd1);

assign j_1_fu_319_p2 = (j_reg_159 + 5'd1);

assign notlhs_fu_280_p2 = ((tmp_fu_266_p4 != 11'd2047) ? 1'b1 : 1'b0);

assign notrhs_fu_286_p2 = ((tmp_10_fu_276_p1 == 52'd0) ? 1'b1 : 1'b0);

assign p_shl1_cast_fu_252_p1 = tmp_15_fu_244_p3;

assign p_shl_cast_fu_240_p1 = tmp_14_fu_232_p3;

assign sum_to_int_fu_262_p1 = sum_reg_124;

assign tmp_10_fu_276_p1 = sum_to_int_fu_262_p1[51:0];

assign tmp_11_fu_292_p2 = (notrhs_fu_286_p2 | notlhs_fu_280_p2);

assign tmp_13_fu_298_p2 = (tmp_12_fu_194_p2 & tmp_11_fu_292_p2);

assign tmp_14_fu_232_p3 = {{i_reg_136}, {4'd0}};

assign tmp_15_fu_244_p3 = {{i_reg_136}, {1'd0}};

assign tmp_16_fu_256_p2 = (p_shl1_cast_fu_252_p1 + p_shl_cast_fu_240_p1);

assign tmp_17_cast_fu_339_p1 = tmp_17_fu_334_p2;

assign tmp_17_fu_334_p2 = (tmp_16_reg_357 + tmp_cast_fu_330_p1);

assign tmp_1_fu_228_p1 = i_reg_136;

assign tmp_cast_fu_330_p1 = j_reg_159;

assign tmp_fu_266_p4 = {{sum_to_int_fu_262_p1[62:52]}};

assign tmp_s_fu_325_p1 = j_reg_159;

assign x_address0 = tmp_s_fu_325_p1;

always @ (posedge ap_clk) begin
    tmp_1_reg_352[63:11] <= 53'b00000000000000000000000000000000000000000000000000000;
    tmp_16_reg_357[0] <= 1'b0;
end

endmodule //svm