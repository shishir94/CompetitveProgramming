def mean(list):
    sum = 0
    for x in list:
        sum = sum + x
    if len(list) == 0:
        return 0
    return (sum/len(list))
list = []
i = int(input())
while i > 0:
    list.append(i)
    i = int(input())
print(mean(list))