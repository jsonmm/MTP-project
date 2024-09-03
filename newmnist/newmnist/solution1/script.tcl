############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project newmnist
set_top mnist_original
add_files mnist_original.c
add_files -tb mnist_original_test_suite.c -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xa7a12tcsg325-1q}
create_clock -period 10 -name default
#source "./newmnist/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
