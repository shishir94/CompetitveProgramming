l1 = []
a = int(input())
while a > 0:
    l1.append(a)
    a = int(input())
l2 = []
b = int(input())
while b > 0:
    l2.append(b)
    b = int(input())
l3 = []
c = int(input())
while c > 0:
    l3.append(c)
    c = int(input())
common = []
common1 = []
for i in l1:
    if i in l2:
        common.append(i)
    else:
        continue
for j in common:
    if j in l3:
        common1.append(j)
print(common1)