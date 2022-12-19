n = input()
l = len(n)
l1 = []
l3 = []
for i in range(0,l):
    l1.append(n[i])
print(l1)
l1.sort()
print(l1)
for i in range(0,l):
    d = 0
    for j in range(0,l):
        if(l1[i] == l1[j]):
            d = d+1
    if(d%2 == 1):
        l3.append(l1[i])
print(l3)
for i in range(0,len(l3)):
    l1.remove(l3[i])
print(l1)


l5 = []
for i in range(0,len(l1),2):
    l5.append(l1[i])
print(l5)

for i in range(0,len(l5)):
  print(l5[i],end='')
for i in range(0,len(l3)):
   print(l3[0],end= '')
for i in range((len(l5)-1),-1,-1):
    print(l5[i],end='')
print()