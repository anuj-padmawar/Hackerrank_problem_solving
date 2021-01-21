#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superDigit function below.
#digital root function
def superDigit(n, k):
    return 1+(k*sum(int(x) for x in n)-1)%9
    #for _ in n:
     #   k*sum(int(x))
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()

