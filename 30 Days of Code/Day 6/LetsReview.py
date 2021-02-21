# Enter your code here. Read input from STDIN. Print output to STDOUT
T=int(input())
i=0
for i in range(0,T):
    s=input()
    for j in range(0,len(s)):
        if j%2==0:
            print(s[j],end='')
    print(" ",end='')
    for j in range(0,len(s)):
        if j%2!=0:
            print(s[j],end='')
    print()




