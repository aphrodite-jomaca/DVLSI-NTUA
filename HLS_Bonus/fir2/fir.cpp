/*******************************************************************************
Vendor: Xilinx 
Associated Filename: fir.c
Purpose: Vivado HLS Tutorial Example 
Device: All 
Revision History: May 30, 2008 - initial release
                : July 21, 2020 - 2020.1 Release
                                                
*******************************************************************************
Copyright 2008 - 2020 Xilinx, Inc. All rights reserved. 

This file contains confidential and proprietary information of Xilinx, Inc. and 
is protected under U.S. and international copyright and other intellectual 
property laws.

DISCLAIMER
This disclaimer is not a license and does not grant any rights to the materials 
distributed herewith. Except as otherwise provided in a valid license issued to 
you by Xilinx, and to the maximum extent permitted by applicable law: 
(1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND WITH ALL FAULTS, AND XILINX 
HEREBY DISCLAIMS ALL WARRANTIES AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, 
INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, OR 
FITNESS FOR ANY PARTICULAR PURPOSE; and (2) Xilinx shall not be liable (whether 
in contract or tort, including negligence, or under any other theory of 
liability) for any loss or damage of any kind or nature related to, arising under 
or in connection with these materials, including for any direct, or any indirect, 
special, incidental, or consequential loss or damage (including loss of data, 
profits, goodwill, or any type of loss or damage suffered as a result of any 
action brought by a third party) even if such damage or loss was reasonably 
foreseeable or Xilinx had been advised of the possibility of the same.

CRITICAL APPLICATIONS
Xilinx products are not designed or intended to be fail-safe, or for use in any 
application requiring fail-safe performance, such as life-support or safety 
devices or systems, Class III medical devices, nuclear facilities, applications 
related to the deployment of airbags, or any other applications that could lead 
to death, personal injury, or severe property or environmental damage 
(individually and collectively, "Critical Applications"). Customer assumes the 
sole risk and liability of any use of Xilinx products in Critical Applications, 
subject only to applicable laws and regulations governing limitations on product 
liability. 

THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE AT 
ALL TIMES.

*******************************************************************************/
#include "fir.h"

void fir (acc_t8 *y, data_t x)
{

  coef_t c[N] = {1,2,3,4,5,6,7,8};
  static data_t shift_reg[N];
  acc_t1 acc1;  acc_t2 acc2;  acc_t3 acc3;  acc_t4 acc4;
  acc_t5 acc5;  acc_t6 acc6;  acc_t7 acc7;  acc_t8 acc8;
  data_t data;
  mult_t mul;
  
  shift_reg[7]=shift_reg[6];
  data = shift_reg[7];
  acc1 = data*c[7];

  shift_reg[6]=shift_reg[5];
  data = shift_reg[6];
  mul = data*c[6];
  acc2 = acc1 + mul;

  shift_reg[5]=shift_reg[4];
  data = shift_reg[5];
  mul = data*c[5];
  acc3 = acc2 + mul;

  shift_reg[4]=shift_reg[3];
  data = shift_reg[4];
  mul = data*c[4];
  acc4 = acc3 + mul;

  shift_reg[3]=shift_reg[2];
  data = shift_reg[3];
  mul = data*c[3];
  acc5 = acc4 + mul;

  shift_reg[2]=shift_reg[1];
  data = shift_reg[2];
  mul = data*c[2];
  acc6 = acc5 + mul;

  shift_reg[1]=shift_reg[0];
  data = shift_reg[1];
  mul = data*c[1];
  acc7 = acc6 + mul;

  shift_reg[0]=x;
  data = x;
  mul = data*c[0];
  acc8 = acc7 + mul;

  *y=acc8;
}

