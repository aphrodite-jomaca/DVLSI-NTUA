#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "image.h"

#define PADDED_DIM 1026

int main(void){
	int *padded_image = (int *)malloc(PADDED_DIM*PADDED_DIM*sizeof(int));
	int *r_sw = (int *)malloc(N*N*sizeof(int));
	int *g_sw = (int *)malloc(N*N*sizeof(int));
	int *b_sw = (int *)malloc(N*N*sizeof(int));
	/* Central pixel of 3x3 neighbourhood */
	int *cpixel; 
  	int i, j;
  	int index, pos;
  	int row = 0, col = 0;

  	/* Initialize padded image to 0 to create padding */
  	for (i = 0; i < PADDED_DIM*PADDED_DIM; i++)
  		padded_image[i] = 0;

  	/* Copy the rest of the pixels */
  	for (i=1; i<PADDED_DIM-1; ++i){
        for (j=1; j<PADDED_DIM-1; ++j){
          index = i*PADDED_DIM + j;
          padded_image[index] = pixels[(i-1) * N + j - 1];
      	}
  	}

	
  	for (i=1; i<PADDED_DIM-1; ++i){
        for (j=1; j<PADDED_DIM-1; ++j){
        	index = i*PADDED_DIM + j;
        	pos = row*N + col;
          	cpixel = padded_image + index;

          	/* G with B neighbours */
			if (row % 2 == 0){ 
				if (col % 2 == 0){ 
					r_sw[pos]   = (cpixel[-PADDED_DIM] + cpixel[PADDED_DIM])/2;;
					g_sw[pos] = cpixel[0];
					b_sw[pos]  = (cpixel[-1] + cpixel[1])/2;;
				}
				/* B */
				else{ 
					r_sw[pos]   = (cpixel[-PADDED_DIM-1] + cpixel[1-PADDED_DIM] + cpixel[PADDED_DIM-1] + cpixel[PADDED_DIM+1])/4;
					g_sw[pos] = (cpixel[-1] + cpixel[1] + cpixel[-PADDED_DIM] + cpixel[PADDED_DIM])/4;;
					b_sw[pos]  = cpixel[0];
				} 
			}
			/* G */
			else{ 
				if (col % 2 == 0){ 
					r_sw[pos]   = cpixel[0];
					g_sw[pos] = (cpixel[-1] + cpixel[1] + cpixel[-PADDED_DIM] + cpixel[PADDED_DIM])/4;
					b_sw[pos]  = (cpixel[-PADDED_DIM-1] + cpixel[1-PADDED_DIM] + cpixel[PADDED_DIM-1] + cpixel[PADDED_DIM+1])/4;;
				}
				/* G with R neighbours */
				else{ 
					r_sw[pos]   = (cpixel[-1] + cpixel[1])/2;
					g_sw[pos] = cpixel[0];
					b_sw[pos]  = (cpixel[-PADDED_DIM] + cpixel[PADDED_DIM])/2;
				} 
			}

			/* Check for edge case or increment */
			if (col == N-1){
				row++;
				col = 0;
			}
			else{
				col++;
			}
		}
	} 
}

