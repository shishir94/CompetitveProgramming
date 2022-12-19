d = {1:"one",2:"two",3:"three"}
print(d)
n = input()
for i in range (0,3):
    a = int(n[i])
    print(d[a],end=" ")