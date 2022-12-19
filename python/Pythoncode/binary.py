n = int(input("Enter a number "))
s = ""
while(n):
    x = n % 2
    n = n//2
    s = s + str(x)
g = len(s)
num2 =""
for i in range (0,g):
        num2 = num2 + s[g - i - 1]
print(num2)