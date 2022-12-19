def armstrong(a):
    x = str(a)
    n = len(x)
    l1 = []
    sum = 0
    for i in x:
        sum = sum + int(i)**n
    if(sum == a):
        return sum
l = [153,129,2,7]
e = [x for x in map(armstrong,l) if x is not None]
print(e)
