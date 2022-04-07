#include <iostream>
#include "svm.h"
#include <cmath>

using namespace std;


void svm_top(
		output_t * class_hw0,
		output_t * class_hw1,
		output_t * class_hw2,
		output_t * class_hw3,
		input_t x0[Dsv],
		input_t x1[Dsv],
		input_t x2[Dsv],
		input_t x3[Dsv])
{
#pragma HLS DATAFLOW
	svm(class_hw0, x0);
	svm(class_hw1, x1);
	svm(class_hw2, x2);
	svm(class_hw3, x3);
}
