def isprime(list):
    x = len(list)
    t = 0
    cnt = 0
    for i in range (0,x):
        for j in range (2,list[i]):
            if(list[i] % 2 != 0):
                t = 1
        cnt = cnt+1
    if(cnt >= 1):
        return True
    else:
        return False
list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(isprime(list))