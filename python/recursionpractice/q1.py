def fitsquares(n):
    if n <= 3:
        return 0
    elif n%2==0:
        return ((n//2)*(n//2-1))//2
    else:
        return fitsquares((n-1))
t = int(input())
for i in range (0,t):
    x = int(input())
    print(fitsquares(x))