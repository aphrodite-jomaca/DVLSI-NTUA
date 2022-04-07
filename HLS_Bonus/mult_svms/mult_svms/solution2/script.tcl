############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project mult_svms
set_top svm_top
add_files svm_top.cpp
add_files svm.cpp
add_files -tb testing_set.csv -cflags "-Wno-unknown-pragmas"
add_files -tb svm_test.cpp -cflags "-Wno-unknown-pragmas"
add_files -tb annotation.csv -cflags "-Wno-unknown-pragmas"
open_solution "solution2"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./mult_svms/solution2/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
