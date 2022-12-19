def pal(x):
    d = len(x)
    t = 0
    for i in range (0,d//2):
        if(x[i] == x[d-i-1]):
            t = 1
        else:
            t = 0
            break
    return t

x = input()
print(pal(x))