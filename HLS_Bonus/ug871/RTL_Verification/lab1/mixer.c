/*******************************************************************************
Vendor: Xilinx 
Associated Filename: mixer.c
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

// Subtraction is absorbed into DSP
int37 mix_SubDSP(int18 a, int18 b, int18 c)
{
  //return ((int36)a-(int36)b) * (int36)c;
  int19 tmp = a - b;
  int37 m = mult(c, tmp);
  return m;
}

// Addition is absorbed into DSP
int36 mix_AddDSP(int18 a, int18 b, int18 c)
{
  //return ((int36)a+(int36)b) * (int36)c;
  int19 tmp = a + b;
  int37 m = mult(c, tmp);
  return m;
}

void mixer (
  acc_t        freq,
  mix_data_t   Din,
  mix_data_t   *Dout_I,
  mix_data_t   *Dout_Q
  ) {
  mix_data_t Din_re;
  static mix_data_t Din_im;
  dds_t cosine, sine;
  static mix_data_t DI_cache[16];
  static uint1 init = 1;

  static uint4 index = 0;
  static uint3 i = 0;
  static uint1 ch = 1;

  uint3 inc = i + 1;
  bool valid_in = (i<2);
  acc_t freq_dds = init ? 0 : freq;

  L1:

  Din_im = Din;

  if (ch && valid_in) {
    DI_cache[index] = Din_im;
  }
  else if (valid_in) {
    dds(freq_dds,&sine,&cosine);
    Din_re = DI_cache[index];
#if 0
    int34 tmp1 = mix_SubDSP(sine, cosine, Din_im);
    int34 tmp2 = mix_SubDSP(Din_re, Din_im, sine);
    int34 tmp3 = mix_AddDSP(Din_re, Din_im, cosine);
    *Dout_I = (tmp1 + tmp2)>>(M-2);
    *Dout_Q = (tmp1 + tmp3)>>(M-2);
#else
    int34 tmp = mix_SubDSP(sine, cosine, Din_im);
    *Dout_I = (tmp + mix_SubDSP(Din_re, Din_im, sine))>>(M-2);
    *Dout_Q = (tmp + mix_AddDSP(Din_re, Din_im, cosine))>>(M-2);
#endif
    if (index==15)
    {
      init = 0;
    }
  }

  if (index==15){ ch = !ch; }
  if (valid_in) index++;
  i = (i==5) ? 0 : inc;
}
