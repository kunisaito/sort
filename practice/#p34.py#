n = 4
k = 22
list = [1,2,3,7]

def search(i,sum):
    if i == n:
        return sum == k
    if search(i + 1,sum):
        return True
    if (search(i+1,sum + list[i])):
        return True
    return False

def solve():
    if search(0,0):
        print 'yes'
    else:
        print 'no'

if __name__ == '__main__':
    solve()
