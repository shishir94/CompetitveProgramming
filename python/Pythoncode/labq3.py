def factorial(i):
    s = 1
    for x in range (1,i+1):
        s = s*x
    return s

n = int(input("Enter a number "))
for i in range(0,n):
    for j in range(0,n-i):
        print(end = " ")
    for j in range (0,i+1):
        print(factorial(i)//(factorial(i-j)*factorial(j)),end = " ")
    print()