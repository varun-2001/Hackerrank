import math
import os
import random
import re
import sys



num = int(input())
result = 0
maximum = 0

while num > 0:
    if num % 2 == 1:
        # counts number of 1's
        result += 1
        if result > maximum:
            maximum = result
    else:
        # resets number of 1's but stores consecutive 1's at maximum
        result = 0
    num //= 2
print(maximum)