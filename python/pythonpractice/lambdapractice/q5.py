'''def fab(count):
    fib_list=[1,0]
    any(map(lambda _: fib_list.append(sum(fib_list[-2:])),range(2,count)))
    return fib_list[:count]
print(fab(10))'''



'''def check(n,m):
    if(n == 2 or m == 2 or n%m == 0):
        return "YES"
    else:
        return "NO"
m= 3
n = 9
print(check(n,m))'''


def gcd(a,b):
    if a == 0:
        return b
    if b == 0:
        return a
    else:
        return gcd(b , a%b)

        
a = int(input())
b = int(input())
x = a//(gcd(a,b))
y = b//(gcd(a,b))
print(x)
print(y)