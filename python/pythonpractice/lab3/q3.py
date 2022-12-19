n = int(input())
for i in range(1,n+1):
    print(' '*(n-i),end = "")
    c = 1
    while c < i:
        print(c,end = "")
        c =c +1
    while c > 0:
        print(c,end = '')
        c = c-1
    print('')