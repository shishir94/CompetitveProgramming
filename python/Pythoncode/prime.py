def prime(n):
    for i in range (2,n):
        if n% i == 0:
            return False
    return True
n = int(input())
if(n == 1):
    print("neither prime nor composite")
else:
    print(prime(n))            