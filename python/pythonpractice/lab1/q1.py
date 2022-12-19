def nlargest(list,n):
    unique = []
    for i in list:
        if i in unique:
            continue
        else:
            unique.append(i)
    x = len(unique)
    for i in range(1,x):
        key = unique[i]
        j = i-1
        while j >= 0 and key < unique[j]:
            unique[j+1] = unique[j]
            j = j-1
        key = unique[j+1]
        return unique[x-n-1]

n = int(input())
list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(nlargest(list,n))
