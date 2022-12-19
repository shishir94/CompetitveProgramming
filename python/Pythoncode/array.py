x = int(input("Enter a number "))
n = int(input("Enter another number "))
sum = 0
a = 1
b = 1
for i in range (1,n+1) :
    a = a*x
    b = b*i
    sum = sum+(a/b)
sum = sum +1
print(sum)

