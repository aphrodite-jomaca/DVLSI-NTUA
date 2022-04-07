#include "svm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const int SAMPLES = 1000;

    FILE * fin, * annot;

    static input_t x0[Dsv], x1[Dsv], x2[Dsv], x3[Dsv];
    output_t * class_hw0, * class_hw1, * class_hw2, * class_hw3;

    int gold0, gold1, gold2, gold3, counter = 0;


    fin = fopen("testing_set.csv", "r");
    annot = fopen("annotation.csv", "r");

    for(int j=0; j<SAMPLES-3; j++)
    {
        for(int i=0; i<Dsv; i++)
        {
            fscanf(fin, "%f,", &x0[i]);
            fscanf(fin, "%f,", &x1[i+Dsv]);
            fscanf(fin, "%f,", &x2[i+2*Dsv]);
            fscanf(fin, "%f,", &x3[i+3*Dsv]);
        }
        fscanf(annot, "%d\n", &gold0);
        fscanf(annot, "%d\n", &gold1);
        fscanf(annot, "%d\n", &gold2);
        fscanf(annot, "%d\n", &gold3);

        svm_top(class_hw0, class_hw1, class_hw2, class_hw3, x0, x1, x2, x3);

        if (gold0 != *class_hw0 || gold1 != *class_hw1 || gold2 != *class_hw2 || gold3 != *class_hw3)  counter++;
    }


    fclose(fin);
    fclose(annot);
    
    cout << "*********************" << endl;
    cout << "* Precision " << 100.0 - (counter*1.0)/SAMPLES << "% *" << endl;
    cout << "*********************" << endl;
    return 0;
}
