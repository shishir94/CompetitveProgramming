def matrix(l):
    s = 0
    for i in l:
        s = s+i
    return s
m=[[1,2,3,4],[5,6,7,8],[1,10,11,2]]
e = map(matrix,m)
ans = matrix(e)
print(ans)