def age(d,m,y,d1,m1,y1):
    month = [31,28,31,30,31,30,31,31,30,31,30,31]
    if(d1 > d):
        m = m-1
        d = d+month[m1-1]
    if(m1 > m):
        y = y-1
        m = m+12
    d = d - d1
    m = m - m1
    y = y-y1
    print(y,"years",m,"months",d,"days")


d = int(input("Enter current date "))
m = int(input("Enter current month "))
y = int(input("Enter current year "))
d1 = int(input("Enter birth date "))
m1 = int(input("Enter birth month "))
y1 = int(input("Enter birth year ")) 
age(d,m,y,d1,m1,y1)