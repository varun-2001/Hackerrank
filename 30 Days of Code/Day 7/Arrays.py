
import math
import os
import random
import re
import sys



n = int(input())
arr = list(map(int, input().rstrip().split()))
for i in range(0,n):
    print(str(arr[n-i-1])+" ",end='')