n = int(input())
for i in range(n):
    a = int(input())
    X = int(input())
    Y = int(input())
    sum = X+(Y*2)
    if sum > a:
        print("No")
    else:
        print("YES")
    n = n-1