#include <iostream>
#include "svm.h"
#include <cmath>

using namespace std;

//static vector_t SupVec[Nsv][Dsv];
//static coeff_t Co[Dsv];

void svm (output_t * class_hw,
    input_t x[Dsv])
{

//#pragma HLS RESOURCE variable=SupVec core=RAM_2P_BRAM
//#pragma HLS RESOURCE variable=Co core=RAM_2P_BRAM
//#pragma HLS array_partition variable=x cyclic factor=9 dim=1
//#pragma HLS array_partition variable=SupVec cyclic factor=9 dim=2

	norm_t norm;
	diff_t dif;
	double sum = 0.0;

	//vector_t SupVec[Nsv][Dsv] = {0};
	//coeff_t Co[Dsv] = {0};

    Sum_Outter_Loop:
    for(int i=0; i<Nsv; i++)
    {
        norm = 0.0;

        Sum_Inner_Loop:
        for(int j=0; j<Dsv; j+=9)
        {
/*
            dif = (x[j] - SupVec[i][j]);
            norm += dif*dif;
*/

        	diff_t dif0,dif1,dif2,dif3,dif4,dif5,dif6,dif7,dif8;
        	norm_t mul0,mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8;

            dif0 = x[j] - SupVec[i][j];
            dif1 = x[j+1] - SupVec[i][j+1];
            dif2 = x[j+2] - SupVec[i][j+2];
            dif3 = x[j+3] - SupVec[i][j+3];
            dif4 = x[j+4] - SupVec[i][j+4];
            dif5 = x[j+5] - SupVec[i][j+5];
            dif6 = x[j+6] - SupVec[i][j+6];
            dif7 = x[j+7] - SupVec[i][j+7];
            dif8 = x[j+8] - SupVec[i][j+8];

            mul0 = dif0*dif0;
            mul1 = dif1*dif1;
            mul2 = dif2*dif2;
            mul3 = dif3*dif3;
            mul4 = dif4*dif4;
            mul5 = dif5*dif5;
            mul6 = dif6*dif6;
            mul7 = dif7*dif7;
            mul8 = dif8*dif8;

            norm = mul0 + mul1 + mul2 + mul3 + mul4 + mul5 + mul6 + mul7 + mul8;

        }

        sum += double(Co[i])*exp(double(g*double(norm))) - double(b);
    }

    if (sum > 0) *class_hw = 1;
    else *class_hw = -1;
}
