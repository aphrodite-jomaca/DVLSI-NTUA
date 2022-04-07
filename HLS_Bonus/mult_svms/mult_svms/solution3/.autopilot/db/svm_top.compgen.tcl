# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name x0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename x0 \
    op interface \
    ports { x0_address0 { O 5 vector } x0_ce0 { O 1 bit } x0_d0 { O 32 vector } x0_q0 { I 32 vector } x0_we0 { O 1 bit } x0_address1 { O 5 vector } x0_ce1 { O 1 bit } x0_d1 { O 32 vector } x0_q1 { I 32 vector } x0_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'x0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name x1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename x1 \
    op interface \
    ports { x1_address0 { O 5 vector } x1_ce0 { O 1 bit } x1_d0 { O 32 vector } x1_q0 { I 32 vector } x1_we0 { O 1 bit } x1_address1 { O 5 vector } x1_ce1 { O 1 bit } x1_d1 { O 32 vector } x1_q1 { I 32 vector } x1_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'x1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 61 \
    name x2 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename x2 \
    op interface \
    ports { x2_address0 { O 5 vector } x2_ce0 { O 1 bit } x2_d0 { O 32 vector } x2_q0 { I 32 vector } x2_we0 { O 1 bit } x2_address1 { O 5 vector } x2_ce1 { O 1 bit } x2_d1 { O 32 vector } x2_q1 { I 32 vector } x2_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'x2'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 62 \
    name x3 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename x3 \
    op interface \
    ports { x3_address0 { O 5 vector } x3_ce0 { O 1 bit } x3_d0 { O 32 vector } x3_q0 { I 32 vector } x3_we0 { O 1 bit } x3_address1 { O 5 vector } x3_ce1 { O 1 bit } x3_d1 { O 32 vector } x3_q1 { I 32 vector } x3_we1 { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'x3'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 55 \
    name class_hw0 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_class_hw0 \
    op interface \
    ports { class_hw0 { O 16 vector } class_hw0_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 56 \
    name class_hw1 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_class_hw1 \
    op interface \
    ports { class_hw1 { O 16 vector } class_hw1_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 57 \
    name class_hw2 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_class_hw2 \
    op interface \
    ports { class_hw2 { O 16 vector } class_hw2_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 58 \
    name class_hw3 \
    type other \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_class_hw3 \
    op interface \
    ports { class_hw3 { O 16 vector } class_hw3_ap_vld { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


