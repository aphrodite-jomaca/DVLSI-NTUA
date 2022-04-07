############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls1-fir2
set_top fir
add_files fir.cpp
add_files -tb out.gold.dat -cflags "-Wno-unknown-pragmas"
add_files -tb fir_test.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1} -tool vivado
create_clock -period 10 -name default
#source "./hls1-fir2/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
