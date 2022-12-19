def swap(a,b):
    t = a
    a = b
    b = t
    return(a,b)
a = int(input())
b = int(input())
print(swap(a,b))    