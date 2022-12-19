r = int(input("Enter row "))
c = int(input("Enter column "))
matrix = []
for i in range(0,r):
    a = []
    for j in range(0,c):
        a.append(int(input("Enter data ")))
    matrix.append(a)
for i in range (0,r):
    for j in range (0,c):
        print(matrix[i][j],end = " ")
    print()
matrix1 = []
for i in range(0,r):
    a = []
    for j in range(0,c):
        a.append(int(input("Enter data ")))
    matrix1.append(a)
for i in range (0,r):
    for j in range (0,c):
        print(matrix1[i][j],end = " ")
    print()
matrix3 = []
for i in range(r):
    a = []
    for j in range(c):
        add = (matrix[i][j]+matrix1[i][j])
        a.append(add)
    matrix3.append(a)
for i in range (0,r):
    for j in range (0,c):
        print(matrix3[i][j],end = " ")
    print()
print(matrix3[0][0])