m = []
for i in range (4):
    a = []
    for j in range (4):
        a.append(int(input()))
    m.append(a)
    print("end")
l = []
x = 0
ans = 0
for i in range (4):
    sum = 0
    for j in range(4):
        sum += m[i][j]
    l.append(sum)
for i in range(len(l)):
    if(ans <= l[i]):
        x = i
        ans = l[i]
print(x)