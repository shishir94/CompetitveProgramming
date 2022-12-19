def sum(dict):
    l = []
    sum = 0
    for i in dict:
        l.append(dict[i])
    print(l)
    for i in l:
        sum+= i
    return sum
dict = {"a":100,"b":10,"c":20}
print(sum(dict))