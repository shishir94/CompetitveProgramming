def recursive(l):
    if len(l) == 0:
        return []  
    else:
        return [l.pop()] + recursive(l)  

list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(recursive(list))