class Difference:
    def __init__(self, a):
        self.__elements = a
    
    def computeDifference(self):
        max=0
        for i in self.__elements:
            for j in self.__elements:
                diff=abs(i-j)
                if diff>max:
                    max=diff
        self.maximumDifference=max


_ = input()
a = [int(e) for e in input().split(' ')]

d = Difference(a)
d.computeDifference()

print(d.maximumDifference)