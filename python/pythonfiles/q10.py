f = open("temp1.txt")
t = f.readlines()
l = []
# print(t)
for i in t:
    if(int(i[0]) %3 == 0):
        l.append(int(i[0]))
print(l)  
