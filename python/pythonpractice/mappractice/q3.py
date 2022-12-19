def binary(n):
    cnt = 0
    while(n):
        x = n % 2
        n = n//2
        if(x==1):
            cnt+=1
    return cnt
t = int(input())
l = []
for i in range (1,t+1):
    l.append(i)
result = list(map(binary,l))
print(list(result))
sum = 0
for i in range(0,len(result)):
    sum = sum + result[i]
print(sum)