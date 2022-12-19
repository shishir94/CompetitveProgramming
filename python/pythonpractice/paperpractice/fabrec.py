def fab(n):
    if n == 1:
        return 0
    if n == 2:
        return 1
    return fab(n-1)+fab(n-2)

n = int(input())
print(fab(n))