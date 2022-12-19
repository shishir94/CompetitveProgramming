n = 1
while n <10 :
    print(n)
    n = n+1
x = int(input())
mul = 1
while x > 0 :
    mul = mul*x
    x = x-1
print(mul)
y = int(input("Enter a number "))
i = 1
sum = 0
while i <= y :
    sum = sum + i
    i = i+1
print(sum)
xx = (input("Enter a string "))
sum = 10
for number in range(1,10,2):
    sum += number
    print(sum)
s1 = "Introduction to programming"
print(s1[0:5]+'zr'+s1[-3:].upper())