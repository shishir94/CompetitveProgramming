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
def sum(l):
    sum = 0
    for i in l:
        sum = sum + i
    return sum
x = int(input())
l1 = []
for i in range(1,x+1):
    l1.append(i)
e = list(map(binary,l1))
res = sum(e)
print(res)
