x = int(input())
c = 1
if x == 1 :
    print("neither prime nor composite")
else: 
    for i in range(2,x):
        if (x%i== 0) :
            c = 0
            break 
    if c == 0 :
        print("not a prime")
    else:
        print("prime")