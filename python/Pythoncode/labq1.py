def nLargest(unique,n):
    for i in range (1,len(unique)):
        key = unique[i]
        j = i-1
        while j >= 0 and key < unique[j]:
            unique[j+1] = unique[j]
            j = j-1
        unique[j+1] = key
    return unique[len(unique)- n]


n = int(input("Enter a valid index ")) 
numbers = []
i = int(input())
while i > 0:
    numbers.append(i)
    i = int(input())
unique = []
for number in numbers:
    if number in unique:
        continue
    else:
        unique.append(number)
print(nLargest(unique,n))        