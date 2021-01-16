#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the happyLadybugs function below.
def happyladybugs(n,b):
    for x in set(b):
        if x != "_" and b.count(x)==1:
            return "NO"
    
    if b.count("_")==0:
        for i in range(1,n-1):
            if b[i-1]!=b[i] and b[i+1]!=b[i]:
                return "NO"
    return "YES"

for _ in range(int(input())):
    n=int(input())
    b=input()
    print(happyladybugs(n, b))
