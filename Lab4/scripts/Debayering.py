#!/usr/bin/env python
#we ned matplotlibs
## sudo apt-get install python-matplotlib
# Import libraries 
import os
import sys
import numpy as np

N = 4
sys.stdout = open("uotput_python_pretty.txt", "w")
f = open("output_python.txt", "w")

arr=[] 
arr = map(str.split, open('image_tb.txt'))
arr = [list( map(int,i) ) for i in arr] 


arr = np.array(arr)
aa = arr.reshape(N, N)
a = aa.tolist()



from copy import copy, deepcopy
b = deepcopy(a)

for i in range(0, N):
    for j in range(0,N):
        right = j+1 if j<N-1 else 0
        left = j-1 if j>0  else 0
        up = i-1 if i>0  else 0
        down = i+1 if i<N-1 else 0
        #print(left,up,right,down)
        r = a[i][right] if j<N-1 else 0
        l = a[i][left] if j>0   else 0
        u = a[up][j] if i>0   else 0
        d = a[down][j] if i<N-1 else 0
        d1 = a[up][left] if (i>0 and j>0)   else 0 
        d2 = a[up][right] if (i>0 and j<N-1) else 0 
        d3 = a[down][left] if (i<N-1 and j>0) else 0 
        d4 = a[down][right] if (i<N-1 and j<N-1)  else 0 
        #print(l,u,r,d,d1, d2, d3, d4)
        if(i%2):
            if(j%2):
                b[i][j] = [int((r+l)/2), int(a[i][j]) , int((u+d)/2)]  #green
            else:
                b[i][j] = [int(a[i][j]), int((u+d+r+l)/4) , int((d1+d2+d3+d4)/4)]  #red
        else:
            if(j%2):
                b[i][j] = [int((d1+d2+d3+d4)/4) , int((u+d+r+l)/4) , int(a[i][j])]  #blue
            else:
                b[i][j] = [int((u+d)/2), int(a[i][j]) , int((r+l)/2)]  #green

c = deepcopy(b)

for i in range(0, N):
    for j in range(0,N):
        for k in range(0,3):
            b[i][j][k] = str(b[i][j][k]).zfill(3)


for i in range(0, N):
    for j in range(0,N-1):
        print('['+', '.join(b[i][j])+']'),
        print(" "),
    print('['+', '.join(b[i][N-1])+']')


for i in range(0, N):
    for j in range(0,N):
        for k in range(0,3):
            f.write(str(c[i][j][k]).ljust(3))
            f.write(" ")
        f.write("\n")
f.close()