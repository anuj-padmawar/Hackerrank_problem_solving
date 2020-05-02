import sys
 
def getWays(squares, d, m):
    cnt = 0
    q = squares[:m-1]
    for ele in squares[m-1:]:
        q.append(ele)
        if (sum(q) == d):
            cnt += 1
        q.pop(0)
    return cnt
 
n = int(raw_input().strip())
s = map(int, raw_input().strip().split(' '))
d,m = raw_input().strip().split(' ')
d,m = [int(d),int(m)]
result = getWays(s, d, m)
print(result)
