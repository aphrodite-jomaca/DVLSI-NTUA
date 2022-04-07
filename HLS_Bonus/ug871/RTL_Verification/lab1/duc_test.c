/*******************************************************************************
Vendor: Xilinx 
Associated Filename: duc_test.c
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

int main () {
  const int    SAMPLES=33;
  FILE         *fpi, *fpq;

  srrc_data_t xi,xq;
  imf3_data_t yi,yq;

  fpi=fopen("duc_i.dat","w");
  fpq=fopen("duc_q.dat","w");
  int i,j;
  mix_data_t   i_o[32];
  mix_data_t   q_o[32];
  mix_data_t   tmp_i_o[1];
  mix_data_t   tmp_q_o[1];

  xi = 0; xq = 0;
  for (j = 0; j < 96; j++) {
    if (j < 48) {
      duc(xi, FREQ, tmp_i_o, tmp_q_o);
    } else {
      duc(xq, FREQ, tmp_i_o, tmp_q_o);
    }
  }

  for (i=0;i<=SAMPLES;i++) {
    if (i==0) {
      xi=1<<17;
    } else {
      xi=0;
    };

    xq=-xi;

    int tmp = -1;
    for (j = 0; j < 96; j++) {
      if (j>=48 && ((j%6) < 2)) tmp++;
      if (j < 48) {
        duc(xi, FREQ, tmp_i_o, tmp_q_o);
      } else {
        duc(xq, FREQ, tmp_i_o, tmp_q_o);
      }
      if (j>=48 && ((j%6) < 2)) {
        i_o[tmp] = tmp_i_o[0];
        q_o[tmp] = tmp_q_o[0];
      }
    }

    for (j=0;j<16;j++) {
        yi = i_o[j];
        fprintf(fpi,"%i %d %d\n",i,xi>>17,yi);
        yq = q_o[j];
        fprintf(fpq,"%i %d %d\n",i,xq>>17,yq);
    }
  }
  fclose(fpi);
  fclose(fpq);

  /* Check the result */
  int ret1 = system("diff --brief -w duc_i.dat golden/duc_i.dat");
  int ret2 = system("diff --brief -w duc_q.dat golden/duc_q.dat");

  if (ret1 | ret2) {
      printf("\n *** DUC hardware test FAILED ! *** \n\n");
  } else {
      printf("\n *** DUC hardware test PASSED ! *** \n\n");
  }

  return ((ret1 | ret2) ? 1 : 0);
  //return 1;
}
