def sum(n):
    sum1 = 0
    sum2 = 0
    for i in range (1,n+1):
        if(i % 2 == 0):
            sum1 = sum1 + i
        else:
            sum2 = sum2+i
    if(sum1 == sum2):
        return True
    return False                
n = int(input())  
print(sum(n))  