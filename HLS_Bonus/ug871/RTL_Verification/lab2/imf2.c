/*******************************************************************************
Vendor: Xilinx 
Associated Filename: imf2.c
Purpose: Vivado HLS tutorial example 
Device: All 
Revision History: July 21, 2020 - 2020.1 Release
                                                
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
(individually and collectively, "Critical Applications"). Customer asresultes the 
sole risk and liability of any use of Xilinx products in Critical Applications, 
subject only to applicable laws and regulations governing limitations on product 
liability. 

THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE AT 
ALL TIMES.

*******************************************************************************/
#include "duc.h"

void imf2 (
  imf2_data_t	*y,
  imf2_data_t	x
  ) {
  const imf2_coef_t c[12]={
#include "imf2_coef.h"
    };
/*
Transposed form FIR poly branches
*/
  static imf2_acc_t	shift_reg_p[13][2];
  static imf2_data_t	in = 0;
  imf2_acc_t	acc;

  static uint1 init = 1;
  static uint2 cnt = 0;
  static uint1 ch = 0;
  static uint4 i = 0;
  
  L1:
  //Latch input
  if (i==0) {
    in = x;
  }
  uint4 inc = i+1;
  //Calculate tap
  acc = mac2(c[i], in, (init || i==5 || i==11) ? 0 : shift_reg_p[inc][ch]);
  //Shift
  shift_reg_p[i][ch] = acc;
  if (i==11) {
    if (cnt == 3) {
      if (ch) init = 0;  
      ch = !ch;
    }
    cnt++;
  }
  //Output
  if ((i==0) || (i==6))
  {
    *y = acc >> 17;
  }

  i = (i == 11) ? 0 : inc;
}
