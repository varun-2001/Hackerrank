n=int(input())
d=dict()
for i in range(n):
    line=input()
    entry=line.split()
    d[entry[0]]=entry[1]
    
while 1:
    try:
        q=input()
        if q in d:
            print(q+"="+d[q])
        else:
            print("Not found")
    except:
        break




