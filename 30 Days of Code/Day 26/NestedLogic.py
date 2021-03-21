returned=list(map(int,input().split()))
rday,rmonth,ryear=returned

due=list(map(int,input().split()))
dday,dmonth,dyear=due
fine=0

# Start of Function
if ryear>dyear:
    fine=10000
elif ryear==dyear:
    if rmonth>dmonth:
        fine=500*(dmonth-rmonth)
    elif dmonth==rmonth and rday>dday:
        fine=15*(rday-dday)

print(fine)