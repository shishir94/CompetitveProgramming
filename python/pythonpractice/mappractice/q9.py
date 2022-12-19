def gcd(a,b):
    if a == 0:
        return b
    if b == 0:
        return a
    else:
        return gcd(b,a%b)
a = int(input())
b = int(input())
print(gcd(a,b))    