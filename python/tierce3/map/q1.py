# Write a program that will return the list of armstrong number from a given list using map.

'''def armstrong(n):
    x = str(n)
    t = len(x)
    sum = 0
    for i in x:
        sum = sum + int(i)**t
    if(sum == n):
        return n
l = [123,2383,153,28]
l1 = [x for x in map(armstrong,l) if x is not None]
print(l1)'''


# Write a program which takes list of list as input and if its element is  not divisible by 5 convert it to 0 and return another list.
'''def matrix(a):
    l2 = []
    for i in a:
        if i % 5 != 0 :
            l2.append(0)
        else:
            l2.append(i)
    return(l2)
l = [[1,5,2,10,11],[1,3,5,10,20]]
l3 = []
e = list(map(matrix,l))
print(e)'''

# Write a program to find the sum of whole matrix.

'''def matrixsum(l):
    sum = 0
    for i in l: 
        sum = sum + i
    return sum
l = [[1,2,3],[2,3,4],[2,10,11]]
x = list(map(matrixsum,l))
y = matrixsum(x)
print(y)'''

# Write a program which takes list of numbers and returns a list whose elements are the binary representation.

'''def binary(n):
    s = ''
    while n:
        t = n%2
        n = n//2
        s = s+str(t)
    x = len(s)
    s1 = ''
    for i in range(0,x):
        s1 = s1+s[x-i-1]
    return s1
l = [2,3,10,1]
x = list(map(binary,l))
print(x)'''

# Write a program which list of string as an argument and returns a list containing the reverse of elements of string.

'''def reverse(n):
    x = len(n)
    s = ''
    for i in range(x):
        s = s + n[x-i-1]
    return s
l = ['asdd','ajh','shishir']
x = list(map(reverse,l))
print(x)'''

# Write a program which takes list of numbers as an argument and a list of numbers which are plaimdrome.

'''def plaindrome(n):
    x = str(n)
    c = len(x)
    t = 0
    for i in range(0,c//2):
        if(x[i] == x[c-i-1]):
            t = 1
        else:
            t = 0
    if(t == 1):
        return n
l = [123,1221,290,12112]
x = list(y for y in map(plaindrome,l) if y is not None)
print(x)'''

# Write a python program to find row woth maximum number of 1's.

'''def matrixsum(l):
    sum = 0
    for i in l: 
        sum = sum + i
    return sum

def max(n):
    h = len(n)
    ans = n[0]
    for i in range(0,h):
        if(ans < n[i]):
            ans = n[i]
    return ans

l = [[1,0,0,1],[1,1,1,0]]
x = list(map(matrixsum,l))
y = max(x)
print(y)'''