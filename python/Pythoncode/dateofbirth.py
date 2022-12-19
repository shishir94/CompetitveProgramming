d = int(input("Enter a date "))
m = int(input("Enter a month "))
y = int(input("Enter a year "))
cnt = 0
for i in range(1920 , y+1) :
    if((i % 4 == 0 and i%100!=0) or y%400==0 ) :
        cnt = cnt+1
cnt1 = 0
print(cnt)
for u in range(1920,2023) :
    if(u % 4 == 0) :
        cnt1 = cnt1 +1
print(cnt1)        
l = [31,28,31,30,31,30,31,31,30,31,30,31]
yy = y - 1920
mm = m -1
dd = d -1
sum = 0
for s in range(1,m):
    sum = sum + l[s]
sum = sum + d
sum = sum + (yy*364)+cnt+yy
if y % 4 == 0 and m > 2 :
    sum = sum +1
print(sum)
yy1 = 2022 - 1920
mm1 = 3
dd1 = 24
sum1 = 0
for s in range (1,4):
    sum1 = sum1+l[s]
sum1 = sum1 + dd1
sum1 = sum1 + (yy1*364)+cnt1+yy1
print(sum1)
if y % 4 == 0:
    print(sum1-sum-1)
else:
    print(sum1-sum)