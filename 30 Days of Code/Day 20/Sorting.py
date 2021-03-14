#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
swapCount=0
for i in range(1,n):
    max=i
    for j in range (i+1,n):
        if a[j]>a[max]:
            max=j
            swapCount+=1
    a[max],a[i]=a[i],a[max]

print("Array is sorted in "+swapCount+" swaps")
print("First Element:"+a[0])
print("Last Element:"+a[n-1])
