def bestmean(list):
    x = len(list)
    sum = 0
    for i in range(0,len(list)):
        sum = sum+list[i]
    mean = sum/x
    list.append(mean)
    list.sort()
    d = 0
    for i in range(0,x):
        if(list[i] == mean):
            d = i
    if(d == 0):
        return(list[d+1])
    elif(d == x-1):
        return(list[d-1])
    else:
        f = list[d]-list[d-1]
        g = list[d+1]-list[d]
        return (min(f,g))
list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(bestmean(list))