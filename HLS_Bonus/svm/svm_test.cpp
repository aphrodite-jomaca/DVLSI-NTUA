#include "svm.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    const int SAMPLES = 1000;

    FILE * fin, * annot;//, *sup_vectors, *coeff;

    static input_t x[Dsv];
    output_t * class_hw;
	//static vector_t supvectors[Nsv][Dsv];
	//static coeff_t c[Dsv];

    int gold,counter = 0;

/*Reading support vectors and its coefficients from csv files*/
/*    coeff = fopen("sv_coef.csv", "r");
    sup_vectors = fopen("support_vectors.csv", "r");
    for(int i=0; i<Nsv; i++)
    {
        for(int j=0; j<Dsv; j++)
        {
            fscanf(sup_vectors, "%f,", &supvectors[i][j]);
        }
        fscanf(coeff, "%f,", &c[i]);
    }
    fclose(coeff);
    fclose(sup_vectors);
*/

    fin = fopen("testing_set.csv", "r");
    annot = fopen("annotation.csv", "r");

    for(int j=0; j<SAMPLES; j++)
    {
        for(int i=0; i<Dsv; i++)
        {
            fscanf(fin, "%f,", &x[i]);
        }
        fscanf(annot, "%d\n", &gold);
        svm(class_hw, x);

        if (gold != *class_hw)  counter++;
    }


    fclose(fin);
    fclose(annot);
    
    cout << "*********************" << endl;
    cout << "* Precision " << 100.0 - (counter*1.0)/SAMPLES << "% *" << endl;
    cout << "*********************" << endl;
    return 0;
}
