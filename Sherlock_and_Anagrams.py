#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter

# Complete the sherlockAndAnagrams function below.
def sherlockAndAnagrams(s):
    count=Counter(("".join(sorted(s[j:j+i]))for i in range(1,len(s))for j in range(0,len(s)-i+1)))
    #sorted(result)
    #count={k:v for k,v in Counter(result).items() if v>1}
    #print(count)
    total_count=0
    for i in count.values():
       total_count=total_count+sum(range(i))
    #total_count+=sum(count.values())
    return total_count


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        s = input()

        result = sherlockAndAnagrams(s)

        fptr.write(str(result) + '\n')

    fptr.close()

