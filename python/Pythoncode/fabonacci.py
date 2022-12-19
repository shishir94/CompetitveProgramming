def fabonacci(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    return fabonacci(n-1)+fabonacci(n-2)
n = int(input())
print(fabonacci(n))    