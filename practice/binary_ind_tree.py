class Bit(object):
    def __init__(self,l):
        self.size = l
        self.bit = [0] *(self.size+1)

    def sum(self,i):
        s = 0
        while i > 0:
            s+=  self.bit[i]
            i -= i & -i
        return s

    def add(self, i,x):
        while i <= self.size:
            self.bit[i] += x
            i += i& -i
    def __str__(self):
        return str(self.bit)

if __name__ == '__main__':

    a = [3,1,4,2]
    ans = 0
    bit = Bit(len(a))
    for i, v in enumerate(a):
        ans++ i - bit.sum(v)
        bit.add(v,1)

        print "%d: ans = %d v = %d %s" %(i,ans, v,bit)

    print ans
