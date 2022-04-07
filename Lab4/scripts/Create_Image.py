#!/usr/bin/env python
# generate random integer values
from random import seed
from random import randint
# seed random number generator
seed(1)

#define N
N = 4

f = open("image.txt", "w")
tb = open("image_tb.txt", "w")
for i in range(0,N):
    for j in range(0,N-1):
        num = str(randint(0, 255)).zfill(3)
        f.write(num)
        f.write(" ")
        tb.write(num)
        tb.write("\n")
    num = str(randint(0, 255)).zfill(3)
    f.write(num)
    f.write("\n")
    tb.write(num)
    tb.write("\n")
f.close()
tb.close()