def binary(n):
    s = ""
    while(n):
        x = n % 2
        n = n//2
        s = s + str(x)
    cnt = 0
    for i in range(0,len(s)):
        if(s[i] == '1'):
            cnt= cnt+1
    return cnt
def count(l,m):
    c = 0
    for i in range(0,len(l)-1):
        for j in range(i+1,len(l)):
            if(l[i] + l[j]== m):
                c = c+1
    return c
l = [1,2,3,4]
m = 3
e = list(map(binary,l))
res = count(e,m)
print(e)
print(res)