n = int(input("Enter number of students "))
list1 = []
list2 = []
list3 = []
for i in range (0,n):
    s = input("Enter a name ")
    list1.append(s)
for i in range (0,n):
    x = int(input("Enter a rollno. "))
    list2.append(x)
for i in range (0,n):
    h = float(input("Enter a cgpa "))
    list3.append(h)           
b = input("Enter a name ")
c = 0
for i in range(0,n):
    if(list1[i] == b):
        c = i
print(list2[c])
print(list3[c])