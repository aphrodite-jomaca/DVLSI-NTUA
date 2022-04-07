-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity svm_top is
port (
    class_hw0 : OUT STD_LOGIC_VECTOR (15 downto 0);
    class_hw1 : OUT STD_LOGIC_VECTOR (15 downto 0);
    x0_0_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_0_ce0 : OUT STD_LOGIC;
    x0_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_0_we0 : OUT STD_LOGIC;
    x0_0_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_0_ce1 : OUT STD_LOGIC;
    x0_0_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_0_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_0_we1 : OUT STD_LOGIC;
    x0_1_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_1_ce0 : OUT STD_LOGIC;
    x0_1_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_1_we0 : OUT STD_LOGIC;
    x0_1_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_1_ce1 : OUT STD_LOGIC;
    x0_1_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_1_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_1_we1 : OUT STD_LOGIC;
    x0_2_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_2_ce0 : OUT STD_LOGIC;
    x0_2_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_2_we0 : OUT STD_LOGIC;
    x0_2_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_2_ce1 : OUT STD_LOGIC;
    x0_2_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_2_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_2_we1 : OUT STD_LOGIC;
    x0_3_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_3_ce0 : OUT STD_LOGIC;
    x0_3_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_3_we0 : OUT STD_LOGIC;
    x0_3_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_3_ce1 : OUT STD_LOGIC;
    x0_3_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_3_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_3_we1 : OUT STD_LOGIC;
    x0_4_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_4_ce0 : OUT STD_LOGIC;
    x0_4_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_4_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_4_we0 : OUT STD_LOGIC;
    x0_4_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_4_ce1 : OUT STD_LOGIC;
    x0_4_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_4_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_4_we1 : OUT STD_LOGIC;
    x0_5_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_5_ce0 : OUT STD_LOGIC;
    x0_5_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_5_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_5_we0 : OUT STD_LOGIC;
    x0_5_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_5_ce1 : OUT STD_LOGIC;
    x0_5_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_5_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_5_we1 : OUT STD_LOGIC;
    x0_6_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_6_ce0 : OUT STD_LOGIC;
    x0_6_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_6_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_6_we0 : OUT STD_LOGIC;
    x0_6_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_6_ce1 : OUT STD_LOGIC;
    x0_6_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_6_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_6_we1 : OUT STD_LOGIC;
    x0_7_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_7_ce0 : OUT STD_LOGIC;
    x0_7_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_7_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_7_we0 : OUT STD_LOGIC;
    x0_7_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_7_ce1 : OUT STD_LOGIC;
    x0_7_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_7_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_7_we1 : OUT STD_LOGIC;
    x0_8_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_8_ce0 : OUT STD_LOGIC;
    x0_8_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_8_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_8_we0 : OUT STD_LOGIC;
    x0_8_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x0_8_ce1 : OUT STD_LOGIC;
    x0_8_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x0_8_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x0_8_we1 : OUT STD_LOGIC;
    x1_0_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_0_ce0 : OUT STD_LOGIC;
    x1_0_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_0_we0 : OUT STD_LOGIC;
    x1_0_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_0_ce1 : OUT STD_LOGIC;
    x1_0_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_0_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_0_we1 : OUT STD_LOGIC;
    x1_1_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_1_ce0 : OUT STD_LOGIC;
    x1_1_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_1_we0 : OUT STD_LOGIC;
    x1_1_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_1_ce1 : OUT STD_LOGIC;
    x1_1_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_1_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_1_we1 : OUT STD_LOGIC;
    x1_2_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_2_ce0 : OUT STD_LOGIC;
    x1_2_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_2_we0 : OUT STD_LOGIC;
    x1_2_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_2_ce1 : OUT STD_LOGIC;
    x1_2_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_2_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_2_we1 : OUT STD_LOGIC;
    x1_3_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_3_ce0 : OUT STD_LOGIC;
    x1_3_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_3_we0 : OUT STD_LOGIC;
    x1_3_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_3_ce1 : OUT STD_LOGIC;
    x1_3_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_3_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_3_we1 : OUT STD_LOGIC;
    x1_4_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_4_ce0 : OUT STD_LOGIC;
    x1_4_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_4_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_4_we0 : OUT STD_LOGIC;
    x1_4_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_4_ce1 : OUT STD_LOGIC;
    x1_4_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_4_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_4_we1 : OUT STD_LOGIC;
    x1_5_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_5_ce0 : OUT STD_LOGIC;
    x1_5_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_5_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_5_we0 : OUT STD_LOGIC;
    x1_5_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_5_ce1 : OUT STD_LOGIC;
    x1_5_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_5_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_5_we1 : OUT STD_LOGIC;
    x1_6_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_6_ce0 : OUT STD_LOGIC;
    x1_6_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_6_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_6_we0 : OUT STD_LOGIC;
    x1_6_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_6_ce1 : OUT STD_LOGIC;
    x1_6_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_6_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_6_we1 : OUT STD_LOGIC;
    x1_7_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_7_ce0 : OUT STD_LOGIC;
    x1_7_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_7_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_7_we0 : OUT STD_LOGIC;
    x1_7_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_7_ce1 : OUT STD_LOGIC;
    x1_7_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_7_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_7_we1 : OUT STD_LOGIC;
    x1_8_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_8_ce0 : OUT STD_LOGIC;
    x1_8_d0 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_8_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_8_we0 : OUT STD_LOGIC;
    x1_8_address1 : OUT STD_LOGIC_VECTOR (0 downto 0);
    x1_8_ce1 : OUT STD_LOGIC;
    x1_8_d1 : OUT STD_LOGIC_VECTOR (31 downto 0);
    x1_8_q1 : IN STD_LOGIC_VECTOR (31 downto 0);
    x1_8_we1 : OUT STD_LOGIC;
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    class_hw0_ap_vld : OUT STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    class_hw1_ap_vld : OUT STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC );
end;


architecture behav of svm_top is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "svm_top,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=dataflow,HLS_SYN_CLOCK=8.427200,HLS_SYN_LAT=175969,HLS_SYN_TPT=175970,HLS_SYN_MEM=152,HLS_SYN_DSP=108,HLS_SYN_FF=9986,HLS_SYN_LUT=16242,HLS_VERSION=2018_2}";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal svm5_U0_ap_start : STD_LOGIC;
    signal svm5_U0_ap_done : STD_LOGIC;
    signal svm5_U0_ap_continue : STD_LOGIC;
    signal svm5_U0_ap_idle : STD_LOGIC;
    signal svm5_U0_ap_ready : STD_LOGIC;
    signal svm5_U0_class_hw : STD_LOGIC_VECTOR (15 downto 0);
    signal svm5_U0_class_hw_ap_vld : STD_LOGIC;
    signal svm5_U0_x_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x_ce0 : STD_LOGIC;
    signal svm5_U0_x1_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x1_ce0 : STD_LOGIC;
    signal svm5_U0_x2_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x2_ce0 : STD_LOGIC;
    signal svm5_U0_x3_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x3_ce0 : STD_LOGIC;
    signal svm5_U0_x4_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x4_ce0 : STD_LOGIC;
    signal svm5_U0_x5_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x5_ce0 : STD_LOGIC;
    signal svm5_U0_x6_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x6_ce0 : STD_LOGIC;
    signal svm5_U0_x7_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x7_ce0 : STD_LOGIC;
    signal svm5_U0_x8_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm5_U0_x8_ce0 : STD_LOGIC;
    signal ap_sync_continue : STD_LOGIC;
    signal svm_U0_ap_start : STD_LOGIC;
    signal svm_U0_ap_done : STD_LOGIC;
    signal svm_U0_ap_continue : STD_LOGIC;
    signal svm_U0_ap_idle : STD_LOGIC;
    signal svm_U0_ap_ready : STD_LOGIC;
    signal svm_U0_class_hw : STD_LOGIC_VECTOR (15 downto 0);
    signal svm_U0_class_hw_ap_vld : STD_LOGIC;
    signal svm_U0_x_0_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_0_ce0 : STD_LOGIC;
    signal svm_U0_x_1_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_1_ce0 : STD_LOGIC;
    signal svm_U0_x_2_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_2_ce0 : STD_LOGIC;
    signal svm_U0_x_3_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_3_ce0 : STD_LOGIC;
    signal svm_U0_x_4_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_4_ce0 : STD_LOGIC;
    signal svm_U0_x_5_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_5_ce0 : STD_LOGIC;
    signal svm_U0_x_6_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_6_ce0 : STD_LOGIC;
    signal svm_U0_x_7_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_7_ce0 : STD_LOGIC;
    signal svm_U0_x_8_address0 : STD_LOGIC_VECTOR (0 downto 0);
    signal svm_U0_x_8_ce0 : STD_LOGIC;
    signal ap_sync_done : STD_LOGIC;
    signal ap_sync_ready : STD_LOGIC;
    signal ap_sync_reg_svm5_U0_ap_ready : STD_LOGIC := '0';
    signal ap_sync_svm5_U0_ap_ready : STD_LOGIC;
    signal svm5_U0_ap_ready_count : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal ap_sync_reg_svm_U0_ap_ready : STD_LOGIC := '0';
    signal ap_sync_svm_U0_ap_ready : STD_LOGIC;
    signal svm_U0_ap_ready_count : STD_LOGIC_VECTOR (1 downto 0) := "00";
    signal svm5_U0_start_full_n : STD_LOGIC;
    signal svm5_U0_start_write : STD_LOGIC;
    signal svm_U0_start_full_n : STD_LOGIC;
    signal svm_U0_start_write : STD_LOGIC;

    component svm5 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        class_hw : OUT STD_LOGIC_VECTOR (15 downto 0);
        class_hw_ap_vld : OUT STD_LOGIC;
        x_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_ce0 : OUT STD_LOGIC;
        x_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x1_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x1_ce0 : OUT STD_LOGIC;
        x1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x2_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x2_ce0 : OUT STD_LOGIC;
        x2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x3_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x3_ce0 : OUT STD_LOGIC;
        x3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x4_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x4_ce0 : OUT STD_LOGIC;
        x4_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x5_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x5_ce0 : OUT STD_LOGIC;
        x5_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x6_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x6_ce0 : OUT STD_LOGIC;
        x6_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x7_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x7_ce0 : OUT STD_LOGIC;
        x7_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x8_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x8_ce0 : OUT STD_LOGIC;
        x8_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component svm IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_continue : IN STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        class_hw : OUT STD_LOGIC_VECTOR (15 downto 0);
        class_hw_ap_vld : OUT STD_LOGIC;
        x_0_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_0_ce0 : OUT STD_LOGIC;
        x_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_1_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_1_ce0 : OUT STD_LOGIC;
        x_1_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_2_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_2_ce0 : OUT STD_LOGIC;
        x_2_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_3_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_3_ce0 : OUT STD_LOGIC;
        x_3_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_4_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_4_ce0 : OUT STD_LOGIC;
        x_4_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_5_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_5_ce0 : OUT STD_LOGIC;
        x_5_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_6_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_6_ce0 : OUT STD_LOGIC;
        x_6_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_7_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_7_ce0 : OUT STD_LOGIC;
        x_7_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
        x_8_address0 : OUT STD_LOGIC_VECTOR (0 downto 0);
        x_8_ce0 : OUT STD_LOGIC;
        x_8_q0 : IN STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    svm5_U0 : component svm5
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => svm5_U0_ap_start,
        ap_done => svm5_U0_ap_done,
        ap_continue => svm5_U0_ap_continue,
        ap_idle => svm5_U0_ap_idle,
        ap_ready => svm5_U0_ap_ready,
        class_hw => svm5_U0_class_hw,
        class_hw_ap_vld => svm5_U0_class_hw_ap_vld,
        x_address0 => svm5_U0_x_address0,
        x_ce0 => svm5_U0_x_ce0,
        x_q0 => x0_0_q0,
        x1_address0 => svm5_U0_x1_address0,
        x1_ce0 => svm5_U0_x1_ce0,
        x1_q0 => x0_1_q0,
        x2_address0 => svm5_U0_x2_address0,
        x2_ce0 => svm5_U0_x2_ce0,
        x2_q0 => x0_2_q0,
        x3_address0 => svm5_U0_x3_address0,
        x3_ce0 => svm5_U0_x3_ce0,
        x3_q0 => x0_3_q0,
        x4_address0 => svm5_U0_x4_address0,
        x4_ce0 => svm5_U0_x4_ce0,
        x4_q0 => x0_4_q0,
        x5_address0 => svm5_U0_x5_address0,
        x5_ce0 => svm5_U0_x5_ce0,
        x5_q0 => x0_5_q0,
        x6_address0 => svm5_U0_x6_address0,
        x6_ce0 => svm5_U0_x6_ce0,
        x6_q0 => x0_6_q0,
        x7_address0 => svm5_U0_x7_address0,
        x7_ce0 => svm5_U0_x7_ce0,
        x7_q0 => x0_7_q0,
        x8_address0 => svm5_U0_x8_address0,
        x8_ce0 => svm5_U0_x8_ce0,
        x8_q0 => x0_8_q0);

    svm_U0 : component svm
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => svm_U0_ap_start,
        ap_done => svm_U0_ap_done,
        ap_continue => svm_U0_ap_continue,
        ap_idle => svm_U0_ap_idle,
        ap_ready => svm_U0_ap_ready,
        class_hw => svm_U0_class_hw,
        class_hw_ap_vld => svm_U0_class_hw_ap_vld,
        x_0_address0 => svm_U0_x_0_address0,
        x_0_ce0 => svm_U0_x_0_ce0,
        x_0_q0 => x1_0_q0,
        x_1_address0 => svm_U0_x_1_address0,
        x_1_ce0 => svm_U0_x_1_ce0,
        x_1_q0 => x1_1_q0,
        x_2_address0 => svm_U0_x_2_address0,
        x_2_ce0 => svm_U0_x_2_ce0,
        x_2_q0 => x1_2_q0,
        x_3_address0 => svm_U0_x_3_address0,
        x_3_ce0 => svm_U0_x_3_ce0,
        x_3_q0 => x1_3_q0,
        x_4_address0 => svm_U0_x_4_address0,
        x_4_ce0 => svm_U0_x_4_ce0,
        x_4_q0 => x1_4_q0,
        x_5_address0 => svm_U0_x_5_address0,
        x_5_ce0 => svm_U0_x_5_ce0,
        x_5_q0 => x1_5_q0,
        x_6_address0 => svm_U0_x_6_address0,
        x_6_ce0 => svm_U0_x_6_ce0,
        x_6_q0 => x1_6_q0,
        x_7_address0 => svm_U0_x_7_address0,
        x_7_ce0 => svm_U0_x_7_ce0,
        x_7_q0 => x1_7_q0,
        x_8_address0 => svm_U0_x_8_address0,
        x_8_ce0 => svm_U0_x_8_ce0,
        x_8_q0 => x1_8_q0);





    ap_sync_reg_svm5_U0_ap_ready_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_sync_reg_svm5_U0_ap_ready <= ap_const_logic_0;
            else
                if (((ap_sync_ready and ap_start) = ap_const_logic_1)) then 
                    ap_sync_reg_svm5_U0_ap_ready <= ap_const_logic_0;
                else 
                    ap_sync_reg_svm5_U0_ap_ready <= ap_sync_svm5_U0_ap_ready;
                end if; 
            end if;
        end if;
    end process;


    ap_sync_reg_svm_U0_ap_ready_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_sync_reg_svm_U0_ap_ready <= ap_const_logic_0;
            else
                if (((ap_sync_ready and ap_start) = ap_const_logic_1)) then 
                    ap_sync_reg_svm_U0_ap_ready <= ap_const_logic_0;
                else 
                    ap_sync_reg_svm_U0_ap_ready <= ap_sync_svm_U0_ap_ready;
                end if; 
            end if;
        end if;
    end process;


    svm5_U0_ap_ready_count_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((svm5_U0_ap_ready = ap_const_logic_0) and (ap_sync_ready = ap_const_logic_1))) then 
                svm5_U0_ap_ready_count <= std_logic_vector(unsigned(svm5_U0_ap_ready_count) - unsigned(ap_const_lv2_1));
            elsif (((ap_sync_ready = ap_const_logic_0) and (svm5_U0_ap_ready = ap_const_logic_1))) then 
                svm5_U0_ap_ready_count <= std_logic_vector(unsigned(svm5_U0_ap_ready_count) + unsigned(ap_const_lv2_1));
            end if; 
        end if;
    end process;

    svm_U0_ap_ready_count_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((svm_U0_ap_ready = ap_const_logic_0) and (ap_sync_ready = ap_const_logic_1))) then 
                svm_U0_ap_ready_count <= std_logic_vector(unsigned(svm_U0_ap_ready_count) - unsigned(ap_const_lv2_1));
            elsif (((ap_sync_ready = ap_const_logic_0) and (svm_U0_ap_ready = ap_const_logic_1))) then 
                svm_U0_ap_ready_count <= std_logic_vector(unsigned(svm_U0_ap_ready_count) + unsigned(ap_const_lv2_1));
            end if; 
        end if;
    end process;
    ap_done <= ap_sync_done;
    ap_idle <= (svm_U0_ap_idle and svm5_U0_ap_idle);
    ap_ready <= ap_sync_ready;
    ap_sync_continue <= ap_sync_done;
    ap_sync_done <= (svm_U0_ap_done and svm5_U0_ap_done);
    ap_sync_ready <= (ap_sync_svm_U0_ap_ready and ap_sync_svm5_U0_ap_ready);
    ap_sync_svm5_U0_ap_ready <= (svm5_U0_ap_ready or ap_sync_reg_svm5_U0_ap_ready);
    ap_sync_svm_U0_ap_ready <= (svm_U0_ap_ready or ap_sync_reg_svm_U0_ap_ready);
    class_hw0 <= svm5_U0_class_hw;
    class_hw0_ap_vld <= svm5_U0_class_hw_ap_vld;
    class_hw1 <= svm_U0_class_hw;
    class_hw1_ap_vld <= svm_U0_class_hw_ap_vld;
    svm5_U0_ap_continue <= ap_sync_done;
    svm5_U0_ap_start <= ((ap_sync_reg_svm5_U0_ap_ready xor ap_const_logic_1) and ap_start);
    svm5_U0_start_full_n <= ap_const_logic_1;
    svm5_U0_start_write <= ap_const_logic_0;
    svm_U0_ap_continue <= ap_sync_done;
    svm_U0_ap_start <= ((ap_sync_reg_svm_U0_ap_ready xor ap_const_logic_1) and ap_start);
    svm_U0_start_full_n <= ap_const_logic_1;
    svm_U0_start_write <= ap_const_logic_0;
    x0_0_address0 <= svm5_U0_x_address0;
    x0_0_address1 <= ap_const_lv1_0;
    x0_0_ce0 <= svm5_U0_x_ce0;
    x0_0_ce1 <= ap_const_logic_0;
    x0_0_d0 <= ap_const_lv32_0;
    x0_0_d1 <= ap_const_lv32_0;
    x0_0_we0 <= ap_const_logic_0;
    x0_0_we1 <= ap_const_logic_0;
    x0_1_address0 <= svm5_U0_x1_address0;
    x0_1_address1 <= ap_const_lv1_0;
    x0_1_ce0 <= svm5_U0_x1_ce0;
    x0_1_ce1 <= ap_const_logic_0;
    x0_1_d0 <= ap_const_lv32_0;
    x0_1_d1 <= ap_const_lv32_0;
    x0_1_we0 <= ap_const_logic_0;
    x0_1_we1 <= ap_const_logic_0;
    x0_2_address0 <= svm5_U0_x2_address0;
    x0_2_address1 <= ap_const_lv1_0;
    x0_2_ce0 <= svm5_U0_x2_ce0;
    x0_2_ce1 <= ap_const_logic_0;
    x0_2_d0 <= ap_const_lv32_0;
    x0_2_d1 <= ap_const_lv32_0;
    x0_2_we0 <= ap_const_logic_0;
    x0_2_we1 <= ap_const_logic_0;
    x0_3_address0 <= svm5_U0_x3_address0;
    x0_3_address1 <= ap_const_lv1_0;
    x0_3_ce0 <= svm5_U0_x3_ce0;
    x0_3_ce1 <= ap_const_logic_0;
    x0_3_d0 <= ap_const_lv32_0;
    x0_3_d1 <= ap_const_lv32_0;
    x0_3_we0 <= ap_const_logic_0;
    x0_3_we1 <= ap_const_logic_0;
    x0_4_address0 <= svm5_U0_x4_address0;
    x0_4_address1 <= ap_const_lv1_0;
    x0_4_ce0 <= svm5_U0_x4_ce0;
    x0_4_ce1 <= ap_const_logic_0;
    x0_4_d0 <= ap_const_lv32_0;
    x0_4_d1 <= ap_const_lv32_0;
    x0_4_we0 <= ap_const_logic_0;
    x0_4_we1 <= ap_const_logic_0;
    x0_5_address0 <= svm5_U0_x5_address0;
    x0_5_address1 <= ap_const_lv1_0;
    x0_5_ce0 <= svm5_U0_x5_ce0;
    x0_5_ce1 <= ap_const_logic_0;
    x0_5_d0 <= ap_const_lv32_0;
    x0_5_d1 <= ap_const_lv32_0;
    x0_5_we0 <= ap_const_logic_0;
    x0_5_we1 <= ap_const_logic_0;
    x0_6_address0 <= svm5_U0_x6_address0;
    x0_6_address1 <= ap_const_lv1_0;
    x0_6_ce0 <= svm5_U0_x6_ce0;
    x0_6_ce1 <= ap_const_logic_0;
    x0_6_d0 <= ap_const_lv32_0;
    x0_6_d1 <= ap_const_lv32_0;
    x0_6_we0 <= ap_const_logic_0;
    x0_6_we1 <= ap_const_logic_0;
    x0_7_address0 <= svm5_U0_x7_address0;
    x0_7_address1 <= ap_const_lv1_0;
    x0_7_ce0 <= svm5_U0_x7_ce0;
    x0_7_ce1 <= ap_const_logic_0;
    x0_7_d0 <= ap_const_lv32_0;
    x0_7_d1 <= ap_const_lv32_0;
    x0_7_we0 <= ap_const_logic_0;
    x0_7_we1 <= ap_const_logic_0;
    x0_8_address0 <= svm5_U0_x8_address0;
    x0_8_address1 <= ap_const_lv1_0;
    x0_8_ce0 <= svm5_U0_x8_ce0;
    x0_8_ce1 <= ap_const_logic_0;
    x0_8_d0 <= ap_const_lv32_0;
    x0_8_d1 <= ap_const_lv32_0;
    x0_8_we0 <= ap_const_logic_0;
    x0_8_we1 <= ap_const_logic_0;
    x1_0_address0 <= svm_U0_x_0_address0;
    x1_0_address1 <= ap_const_lv1_0;
    x1_0_ce0 <= svm_U0_x_0_ce0;
    x1_0_ce1 <= ap_const_logic_0;
    x1_0_d0 <= ap_const_lv32_0;
    x1_0_d1 <= ap_const_lv32_0;
    x1_0_we0 <= ap_const_logic_0;
    x1_0_we1 <= ap_const_logic_0;
    x1_1_address0 <= svm_U0_x_1_address0;
    x1_1_address1 <= ap_const_lv1_0;
    x1_1_ce0 <= svm_U0_x_1_ce0;
    x1_1_ce1 <= ap_const_logic_0;
    x1_1_d0 <= ap_const_lv32_0;
    x1_1_d1 <= ap_const_lv32_0;
    x1_1_we0 <= ap_const_logic_0;
    x1_1_we1 <= ap_const_logic_0;
    x1_2_address0 <= svm_U0_x_2_address0;
    x1_2_address1 <= ap_const_lv1_0;
    x1_2_ce0 <= svm_U0_x_2_ce0;
    x1_2_ce1 <= ap_const_logic_0;
    x1_2_d0 <= ap_const_lv32_0;
    x1_2_d1 <= ap_const_lv32_0;
    x1_2_we0 <= ap_const_logic_0;
    x1_2_we1 <= ap_const_logic_0;
    x1_3_address0 <= svm_U0_x_3_address0;
    x1_3_address1 <= ap_const_lv1_0;
    x1_3_ce0 <= svm_U0_x_3_ce0;
    x1_3_ce1 <= ap_const_logic_0;
    x1_3_d0 <= ap_const_lv32_0;
    x1_3_d1 <= ap_const_lv32_0;
    x1_3_we0 <= ap_const_logic_0;
    x1_3_we1 <= ap_const_logic_0;
    x1_4_address0 <= svm_U0_x_4_address0;
    x1_4_address1 <= ap_const_lv1_0;
    x1_4_ce0 <= svm_U0_x_4_ce0;
    x1_4_ce1 <= ap_const_logic_0;
    x1_4_d0 <= ap_const_lv32_0;
    x1_4_d1 <= ap_const_lv32_0;
    x1_4_we0 <= ap_const_logic_0;
    x1_4_we1 <= ap_const_logic_0;
    x1_5_address0 <= svm_U0_x_5_address0;
    x1_5_address1 <= ap_const_lv1_0;
    x1_5_ce0 <= svm_U0_x_5_ce0;
    x1_5_ce1 <= ap_const_logic_0;
    x1_5_d0 <= ap_const_lv32_0;
    x1_5_d1 <= ap_const_lv32_0;
    x1_5_we0 <= ap_const_logic_0;
    x1_5_we1 <= ap_const_logic_0;
    x1_6_address0 <= svm_U0_x_6_address0;
    x1_6_address1 <= ap_const_lv1_0;
    x1_6_ce0 <= svm_U0_x_6_ce0;
    x1_6_ce1 <= ap_const_logic_0;
    x1_6_d0 <= ap_const_lv32_0;
    x1_6_d1 <= ap_const_lv32_0;
    x1_6_we0 <= ap_const_logic_0;
    x1_6_we1 <= ap_const_logic_0;
    x1_7_address0 <= svm_U0_x_7_address0;
    x1_7_address1 <= ap_const_lv1_0;
    x1_7_ce0 <= svm_U0_x_7_ce0;
    x1_7_ce1 <= ap_const_logic_0;
    x1_7_d0 <= ap_const_lv32_0;
    x1_7_d1 <= ap_const_lv32_0;
    x1_7_we0 <= ap_const_logic_0;
    x1_7_we1 <= ap_const_logic_0;
    x1_8_address0 <= svm_U0_x_8_address0;
    x1_8_address1 <= ap_const_lv1_0;
    x1_8_ce0 <= svm_U0_x_8_ce0;
    x1_8_ce1 <= ap_const_logic_0;
    x1_8_d0 <= ap_const_lv32_0;
    x1_8_d1 <= ap_const_lv32_0;
    x1_8_we0 <= ap_const_logic_0;
    x1_8_we1 <= ap_const_logic_0;
end behav;
