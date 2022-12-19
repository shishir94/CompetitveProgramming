def sort(list):
    x = len(list)
    for i in range(1,x):
        key = list[i]
        j = i-1
        while j >= 0 and key < list[j]:
            list[j+1] = list[j]
            j = j-1
        list[j+1] = key
    return list

list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(sort(list))