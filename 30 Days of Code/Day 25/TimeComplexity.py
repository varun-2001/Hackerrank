import math
n=int(input())
test=[]
def Prime(p):
    if p<=1:
        return "Not prime"
    if p==2:
        return "Prime"
    if p>2 and p%2==0:
        return "Not prime"
    for i in range (3, 1+math.floor(math.sqrt(p)),2):
        if p%i==0:
            return "Not prime"
    return "Prime"



for i in range(n):
    test.append(int(input()))
for i in test:
    print(Prime(i))

