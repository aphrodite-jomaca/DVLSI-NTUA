// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "fir.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic fir::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic fir::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<2> fir::ap_ST_fsm_state1 = "1";
const sc_lv<2> fir::ap_ST_fsm_state2 = "10";
const sc_lv<32> fir::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> fir::ap_const_lv32_1 = "1";
const sc_lv<3> fir::ap_const_lv3_0 = "000";
const sc_lv<1> fir::ap_const_lv1_0 = "0";
const sc_lv<2> fir::ap_const_lv2_0 = "00";
const bool fir::ap_const_boolean_1 = true;

fir::fir(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_lhs_V_10_cast_fu_271_p1);
    sensitive << ( r_V_8_reg_333 );

    SC_METHOD(thread_lhs_V_1_fu_97_p1);
    sensitive << ( r_V_fu_57_p3 );

    SC_METHOD(thread_lhs_V_2_fu_151_p1);
    sensitive << ( r_V_2_fu_105_p2 );

    SC_METHOD(thread_lhs_V_5_cast2_fu_175_p1);
    sensitive << ( shift_reg_V_3 );

    SC_METHOD(thread_lhs_V_9_cast1_fu_245_p1);
    sensitive << ( shift_reg_V_1 );

    SC_METHOD(thread_lhs_V_fu_75_p1);
    sensitive << ( shift_reg_V_5 );

    SC_METHOD(thread_p_shl1_cast_fu_187_p1);
    sensitive << ( p_shl1_fu_179_p3 );

    SC_METHOD(thread_p_shl1_fu_179_p3);
    sensitive << ( shift_reg_V_3 );

    SC_METHOD(thread_p_shl2_cast_fu_129_p1);
    sensitive << ( p_shl2_fu_121_p3 );

    SC_METHOD(thread_p_shl2_fu_121_p3);
    sensitive << ( shift_reg_V_4 );

    SC_METHOD(thread_p_shl3_cast_fu_141_p1);
    sensitive << ( p_shl3_fu_133_p3 );

    SC_METHOD(thread_p_shl3_fu_133_p3);
    sensitive << ( shift_reg_V_4 );

    SC_METHOD(thread_p_shl4_cast_fu_87_p1);
    sensitive << ( p_shl4_fu_79_p3 );

    SC_METHOD(thread_p_shl4_fu_79_p3);
    sensitive << ( shift_reg_V_5 );

    SC_METHOD(thread_p_shl_cast_fu_257_p1);
    sensitive << ( p_shl_fu_249_p3 );

    SC_METHOD(thread_p_shl_fu_249_p3);
    sensitive << ( shift_reg_V_1 );

    SC_METHOD(thread_r_V_10_fu_278_p2);
    sensitive << ( rhs_V_4_cast_fu_274_p1 );
    sensitive << ( lhs_V_10_cast_fu_271_p1 );

    SC_METHOD(thread_r_V_11_fu_294_p3);
    sensitive << ( shift_reg_V_0 );

    SC_METHOD(thread_r_V_12_fu_306_p2);
    sensitive << ( rhs_V_5_cast_fu_302_p1 );
    sensitive << ( r_V_10_fu_278_p2 );

    SC_METHOD(thread_r_V_13_fu_322_p2);
    sensitive << ( rhs_V_6_cast_fu_318_p1 );
    sensitive << ( r_V_12_fu_306_p2 );

    SC_METHOD(thread_r_V_1_fu_91_p2);
    sensitive << ( p_shl4_cast_fu_87_p1 );
    sensitive << ( lhs_V_fu_75_p1 );

    SC_METHOD(thread_r_V_2_fu_105_p2);
    sensitive << ( rhs_V_fu_101_p1 );
    sensitive << ( lhs_V_1_fu_97_p1 );

    SC_METHOD(thread_r_V_3_fu_145_p2);
    sensitive << ( p_shl2_cast_fu_129_p1 );
    sensitive << ( p_shl3_cast_fu_141_p1 );

    SC_METHOD(thread_r_V_4_fu_159_p2);
    sensitive << ( rhs_V_1_fu_155_p1 );
    sensitive << ( lhs_V_2_fu_151_p1 );

    SC_METHOD(thread_r_V_5_fu_191_p2);
    sensitive << ( lhs_V_5_cast2_fu_175_p1 );
    sensitive << ( p_shl1_cast_fu_187_p1 );

    SC_METHOD(thread_r_V_6_fu_201_p2);
    sensitive << ( rhs_V_2_cast_fu_197_p1 );
    sensitive << ( r_V_4_fu_159_p2 );

    SC_METHOD(thread_r_V_7_fu_217_p3);
    sensitive << ( shift_reg_V_2 );

    SC_METHOD(thread_r_V_8_fu_229_p2);
    sensitive << ( rhs_V_3_cast_fu_225_p1 );
    sensitive << ( r_V_6_fu_201_p2 );

    SC_METHOD(thread_r_V_9_cast_fu_267_p1);
    sensitive << ( r_V_9_fu_261_p2 );

    SC_METHOD(thread_r_V_9_fu_261_p2);
    sensitive << ( p_shl_cast_fu_257_p1 );
    sensitive << ( lhs_V_9_cast1_fu_245_p1 );

    SC_METHOD(thread_r_V_fu_57_p3);
    sensitive << ( shift_reg_V_6 );

    SC_METHOD(thread_rhs_V_1_fu_155_p1);
    sensitive << ( r_V_3_fu_145_p2 );

    SC_METHOD(thread_rhs_V_2_cast_fu_197_p1);
    sensitive << ( r_V_5_fu_191_p2 );

    SC_METHOD(thread_rhs_V_3_cast_fu_225_p1);
    sensitive << ( r_V_7_fu_217_p3 );

    SC_METHOD(thread_rhs_V_4_cast_fu_274_p1);
    sensitive << ( r_V_9_cast_fu_267_p1 );

    SC_METHOD(thread_rhs_V_5_cast_fu_302_p1);
    sensitive << ( r_V_11_fu_294_p3 );

    SC_METHOD(thread_rhs_V_6_cast_fu_318_p1);
    sensitive << ( x_V );

    SC_METHOD(thread_rhs_V_fu_101_p1);
    sensitive << ( r_V_1_fu_91_p2 );

    SC_METHOD(thread_y_V);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( r_V_13_fu_322_p2 );

    SC_METHOD(thread_y_V_ap_vld);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "01";
    shift_reg_V_6 = "00000000";
    shift_reg_V_5 = "00000000";
    shift_reg_V_4 = "00000000";
    shift_reg_V_3 = "00000000";
    shift_reg_V_2 = "00000000";
    shift_reg_V_1 = "00000000";
    shift_reg_V_0 = "00000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "fir_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, y_V, "(port)y_V");
    sc_trace(mVcdFile, y_V_ap_vld, "(port)y_V_ap_vld");
    sc_trace(mVcdFile, x_V, "(port)x_V");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, shift_reg_V_6, "shift_reg_V_6");
    sc_trace(mVcdFile, shift_reg_V_5, "shift_reg_V_5");
    sc_trace(mVcdFile, shift_reg_V_4, "shift_reg_V_4");
    sc_trace(mVcdFile, shift_reg_V_3, "shift_reg_V_3");
    sc_trace(mVcdFile, shift_reg_V_2, "shift_reg_V_2");
    sc_trace(mVcdFile, shift_reg_V_1, "shift_reg_V_1");
    sc_trace(mVcdFile, shift_reg_V_0, "shift_reg_V_0");
    sc_trace(mVcdFile, r_V_8_fu_229_p2, "r_V_8_fu_229_p2");
    sc_trace(mVcdFile, r_V_8_reg_333, "r_V_8_reg_333");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, p_shl4_fu_79_p3, "p_shl4_fu_79_p3");
    sc_trace(mVcdFile, p_shl4_cast_fu_87_p1, "p_shl4_cast_fu_87_p1");
    sc_trace(mVcdFile, lhs_V_fu_75_p1, "lhs_V_fu_75_p1");
    sc_trace(mVcdFile, r_V_fu_57_p3, "r_V_fu_57_p3");
    sc_trace(mVcdFile, r_V_1_fu_91_p2, "r_V_1_fu_91_p2");
    sc_trace(mVcdFile, rhs_V_fu_101_p1, "rhs_V_fu_101_p1");
    sc_trace(mVcdFile, lhs_V_1_fu_97_p1, "lhs_V_1_fu_97_p1");
    sc_trace(mVcdFile, p_shl2_fu_121_p3, "p_shl2_fu_121_p3");
    sc_trace(mVcdFile, p_shl3_fu_133_p3, "p_shl3_fu_133_p3");
    sc_trace(mVcdFile, p_shl2_cast_fu_129_p1, "p_shl2_cast_fu_129_p1");
    sc_trace(mVcdFile, p_shl3_cast_fu_141_p1, "p_shl3_cast_fu_141_p1");
    sc_trace(mVcdFile, r_V_2_fu_105_p2, "r_V_2_fu_105_p2");
    sc_trace(mVcdFile, r_V_3_fu_145_p2, "r_V_3_fu_145_p2");
    sc_trace(mVcdFile, rhs_V_1_fu_155_p1, "rhs_V_1_fu_155_p1");
    sc_trace(mVcdFile, lhs_V_2_fu_151_p1, "lhs_V_2_fu_151_p1");
    sc_trace(mVcdFile, p_shl1_fu_179_p3, "p_shl1_fu_179_p3");
    sc_trace(mVcdFile, lhs_V_5_cast2_fu_175_p1, "lhs_V_5_cast2_fu_175_p1");
    sc_trace(mVcdFile, p_shl1_cast_fu_187_p1, "p_shl1_cast_fu_187_p1");
    sc_trace(mVcdFile, r_V_5_fu_191_p2, "r_V_5_fu_191_p2");
    sc_trace(mVcdFile, rhs_V_2_cast_fu_197_p1, "rhs_V_2_cast_fu_197_p1");
    sc_trace(mVcdFile, r_V_4_fu_159_p2, "r_V_4_fu_159_p2");
    sc_trace(mVcdFile, r_V_7_fu_217_p3, "r_V_7_fu_217_p3");
    sc_trace(mVcdFile, rhs_V_3_cast_fu_225_p1, "rhs_V_3_cast_fu_225_p1");
    sc_trace(mVcdFile, r_V_6_fu_201_p2, "r_V_6_fu_201_p2");
    sc_trace(mVcdFile, p_shl_fu_249_p3, "p_shl_fu_249_p3");
    sc_trace(mVcdFile, p_shl_cast_fu_257_p1, "p_shl_cast_fu_257_p1");
    sc_trace(mVcdFile, lhs_V_9_cast1_fu_245_p1, "lhs_V_9_cast1_fu_245_p1");
    sc_trace(mVcdFile, r_V_9_fu_261_p2, "r_V_9_fu_261_p2");
    sc_trace(mVcdFile, r_V_9_cast_fu_267_p1, "r_V_9_cast_fu_267_p1");
    sc_trace(mVcdFile, rhs_V_4_cast_fu_274_p1, "rhs_V_4_cast_fu_274_p1");
    sc_trace(mVcdFile, lhs_V_10_cast_fu_271_p1, "lhs_V_10_cast_fu_271_p1");
    sc_trace(mVcdFile, r_V_11_fu_294_p3, "r_V_11_fu_294_p3");
    sc_trace(mVcdFile, rhs_V_5_cast_fu_302_p1, "rhs_V_5_cast_fu_302_p1");
    sc_trace(mVcdFile, r_V_10_fu_278_p2, "r_V_10_fu_278_p2");
    sc_trace(mVcdFile, rhs_V_6_cast_fu_318_p1, "rhs_V_6_cast_fu_318_p1");
    sc_trace(mVcdFile, r_V_12_fu_306_p2, "r_V_12_fu_306_p2");
    sc_trace(mVcdFile, r_V_13_fu_322_p2, "r_V_13_fu_322_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("fir.hdltvin.dat");
    mHdltvoutHandle.open("fir.hdltvout.dat");
}

fir::~fir() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void fir::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        r_V_8_reg_333 = r_V_8_fu_229_p2.read();
        shift_reg_V_3 = shift_reg_V_2.read();
        shift_reg_V_4 = shift_reg_V_3.read();
        shift_reg_V_5 = shift_reg_V_4.read();
        shift_reg_V_6 = shift_reg_V_5.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        shift_reg_V_0 = x_V.read();
        shift_reg_V_1 = shift_reg_V_0.read();
        shift_reg_V_2 = shift_reg_V_1.read();
    }
}

void fir::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void fir::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void fir::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void fir::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void fir::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void fir::thread_lhs_V_10_cast_fu_271_p1() {
    lhs_V_10_cast_fu_271_p1 = esl_zext<15,14>(r_V_8_reg_333.read());
}

void fir::thread_lhs_V_1_fu_97_p1() {
    lhs_V_1_fu_97_p1 = esl_zext<13,11>(r_V_fu_57_p3.read());
}

void fir::thread_lhs_V_2_fu_151_p1() {
    lhs_V_2_fu_151_p1 = esl_zext<14,13>(r_V_2_fu_105_p2.read());
}

void fir::thread_lhs_V_5_cast2_fu_175_p1() {
    lhs_V_5_cast2_fu_175_p1 = esl_zext<11,8>(shift_reg_V_3.read());
}

void fir::thread_lhs_V_9_cast1_fu_245_p1() {
    lhs_V_9_cast1_fu_245_p1 = esl_zext<11,8>(shift_reg_V_1.read());
}

void fir::thread_lhs_V_fu_75_p1() {
    lhs_V_fu_75_p1 = esl_zext<12,8>(shift_reg_V_5.read());
}

void fir::thread_p_shl1_cast_fu_187_p1() {
    p_shl1_cast_fu_187_p1 = esl_zext<11,10>(p_shl1_fu_179_p3.read());
}

void fir::thread_p_shl1_fu_179_p3() {
    p_shl1_fu_179_p3 = esl_concat<8,2>(shift_reg_V_3.read(), ap_const_lv2_0);
}

void fir::thread_p_shl2_cast_fu_129_p1() {
    p_shl2_cast_fu_129_p1 = esl_zext<12,11>(p_shl2_fu_121_p3.read());
}

void fir::thread_p_shl2_fu_121_p3() {
    p_shl2_fu_121_p3 = esl_concat<8,3>(shift_reg_V_4.read(), ap_const_lv3_0);
}

void fir::thread_p_shl3_cast_fu_141_p1() {
    p_shl3_cast_fu_141_p1 = esl_zext<12,9>(p_shl3_fu_133_p3.read());
}

void fir::thread_p_shl3_fu_133_p3() {
    p_shl3_fu_133_p3 = esl_concat<8,1>(shift_reg_V_4.read(), ap_const_lv1_0);
}

void fir::thread_p_shl4_cast_fu_87_p1() {
    p_shl4_cast_fu_87_p1 = esl_zext<12,11>(p_shl4_fu_79_p3.read());
}

void fir::thread_p_shl4_fu_79_p3() {
    p_shl4_fu_79_p3 = esl_concat<8,3>(shift_reg_V_5.read(), ap_const_lv3_0);
}

void fir::thread_p_shl_cast_fu_257_p1() {
    p_shl_cast_fu_257_p1 = esl_zext<11,10>(p_shl_fu_249_p3.read());
}

void fir::thread_p_shl_fu_249_p3() {
    p_shl_fu_249_p3 = esl_concat<8,2>(shift_reg_V_1.read(), ap_const_lv2_0);
}

void fir::thread_r_V_10_fu_278_p2() {
    r_V_10_fu_278_p2 = (!rhs_V_4_cast_fu_274_p1.read().is_01() || !lhs_V_10_cast_fu_271_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(rhs_V_4_cast_fu_274_p1.read()) + sc_biguint<15>(lhs_V_10_cast_fu_271_p1.read()));
}

void fir::thread_r_V_11_fu_294_p3() {
    r_V_11_fu_294_p3 = esl_concat<8,1>(shift_reg_V_0.read(), ap_const_lv1_0);
}

void fir::thread_r_V_12_fu_306_p2() {
    r_V_12_fu_306_p2 = (!rhs_V_5_cast_fu_302_p1.read().is_01() || !r_V_10_fu_278_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(rhs_V_5_cast_fu_302_p1.read()) + sc_biguint<15>(r_V_10_fu_278_p2.read()));
}

void fir::thread_r_V_13_fu_322_p2() {
    r_V_13_fu_322_p2 = (!rhs_V_6_cast_fu_318_p1.read().is_01() || !r_V_12_fu_306_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(rhs_V_6_cast_fu_318_p1.read()) + sc_biguint<15>(r_V_12_fu_306_p2.read()));
}

void fir::thread_r_V_1_fu_91_p2() {
    r_V_1_fu_91_p2 = (!p_shl4_cast_fu_87_p1.read().is_01() || !lhs_V_fu_75_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl4_cast_fu_87_p1.read()) - sc_biguint<12>(lhs_V_fu_75_p1.read()));
}

void fir::thread_r_V_2_fu_105_p2() {
    r_V_2_fu_105_p2 = (!rhs_V_fu_101_p1.read().is_01() || !lhs_V_1_fu_97_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(rhs_V_fu_101_p1.read()) + sc_biguint<13>(lhs_V_1_fu_97_p1.read()));
}

void fir::thread_r_V_3_fu_145_p2() {
    r_V_3_fu_145_p2 = (!p_shl2_cast_fu_129_p1.read().is_01() || !p_shl3_cast_fu_141_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl2_cast_fu_129_p1.read()) - sc_biguint<12>(p_shl3_cast_fu_141_p1.read()));
}

void fir::thread_r_V_4_fu_159_p2() {
    r_V_4_fu_159_p2 = (!rhs_V_1_fu_155_p1.read().is_01() || !lhs_V_2_fu_151_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(rhs_V_1_fu_155_p1.read()) + sc_biguint<14>(lhs_V_2_fu_151_p1.read()));
}

void fir::thread_r_V_5_fu_191_p2() {
    r_V_5_fu_191_p2 = (!lhs_V_5_cast2_fu_175_p1.read().is_01() || !p_shl1_cast_fu_187_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(lhs_V_5_cast2_fu_175_p1.read()) + sc_biguint<11>(p_shl1_cast_fu_187_p1.read()));
}

void fir::thread_r_V_6_fu_201_p2() {
    r_V_6_fu_201_p2 = (!rhs_V_2_cast_fu_197_p1.read().is_01() || !r_V_4_fu_159_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(rhs_V_2_cast_fu_197_p1.read()) + sc_biguint<14>(r_V_4_fu_159_p2.read()));
}

void fir::thread_r_V_7_fu_217_p3() {
    r_V_7_fu_217_p3 = esl_concat<8,2>(shift_reg_V_2.read(), ap_const_lv2_0);
}

void fir::thread_r_V_8_fu_229_p2() {
    r_V_8_fu_229_p2 = (!rhs_V_3_cast_fu_225_p1.read().is_01() || !r_V_6_fu_201_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(rhs_V_3_cast_fu_225_p1.read()) + sc_biguint<14>(r_V_6_fu_201_p2.read()));
}

void fir::thread_r_V_9_cast_fu_267_p1() {
    r_V_9_cast_fu_267_p1 = esl_sext<12,11>(r_V_9_fu_261_p2.read());
}

void fir::thread_r_V_9_fu_261_p2() {
    r_V_9_fu_261_p2 = (!p_shl_cast_fu_257_p1.read().is_01() || !lhs_V_9_cast1_fu_245_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl_cast_fu_257_p1.read()) - sc_biguint<11>(lhs_V_9_cast1_fu_245_p1.read()));
}

void fir::thread_r_V_fu_57_p3() {
    r_V_fu_57_p3 = esl_concat<8,3>(shift_reg_V_6.read(), ap_const_lv3_0);
}

void fir::thread_rhs_V_1_fu_155_p1() {
    rhs_V_1_fu_155_p1 = esl_zext<14,12>(r_V_3_fu_145_p2.read());
}

void fir::thread_rhs_V_2_cast_fu_197_p1() {
    rhs_V_2_cast_fu_197_p1 = esl_zext<14,11>(r_V_5_fu_191_p2.read());
}

void fir::thread_rhs_V_3_cast_fu_225_p1() {
    rhs_V_3_cast_fu_225_p1 = esl_zext<14,10>(r_V_7_fu_217_p3.read());
}

void fir::thread_rhs_V_4_cast_fu_274_p1() {
    rhs_V_4_cast_fu_274_p1 = esl_zext<15,12>(r_V_9_cast_fu_267_p1.read());
}

void fir::thread_rhs_V_5_cast_fu_302_p1() {
    rhs_V_5_cast_fu_302_p1 = esl_zext<15,9>(r_V_11_fu_294_p3.read());
}

void fir::thread_rhs_V_6_cast_fu_318_p1() {
    rhs_V_6_cast_fu_318_p1 = esl_zext<15,8>(x_V.read());
}

void fir::thread_rhs_V_fu_101_p1() {
    rhs_V_fu_101_p1 = esl_zext<13,12>(r_V_1_fu_91_p2.read());
}

void fir::thread_y_V() {
    y_V = esl_zext<19,15>(r_V_13_fu_322_p2.read());
}

void fir::thread_y_V_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        y_V_ap_vld = ap_const_logic_1;
    } else {
        y_V_ap_vld = ap_const_logic_0;
    }
}

void fir::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XX";
            break;
    }
}

void fir::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_V\" :  \"" << y_V.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"y_V_ap_vld\" :  \"" << y_V_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"x_V\" :  \"" << x_V.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

