def sumN(a,b,c,n):
    l = [[i,j,k] for i in range(1,a+1) for j in range(1,b+1) for k in range(1,c+1) if (i+j+k) == n ]
    return l
print(sumN(5,5,10,6))
