def factorial(x):
    fact = 1
    for i in range (1,x+1):
        fact = fact*i
    return fact
n = int(input())
l = []
for i in range(0,n):
    m = []
    for j in range(0,i+1):
        x = (factorial(i)//(factorial(i-j)*factorial(j)))
        m.append(x)
    l.append(m)
print(l)