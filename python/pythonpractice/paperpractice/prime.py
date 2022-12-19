def prime(n):
    t = 0
    for i in range (2,n):
        if(n % i == 0):
            t = 1
            break
        else:
            t = 0
    return t

n = int(input())
print(prime(n))