def multiply(matrix1,matrix2,n):
    matrix3= []
    for i in range(0,n):
        b = []
        for j in range (0,n):
            sum = 0
            for k in range (0,n):
               sum += matrix1[i][k]*matrix2[k][j]
            b.append(sum) 
        matrix3.append(b)
    for i in range (0,n):
        for j in range (0,n):
            print(matrix3[i][j],end = " ")
        print()   

n = int(input("Enter a number "))
matrix1 = []
for i in range (0,n):
    a = []
    for j in range (0,n):
        a.append(int(input("Enter a data ")))
    matrix1.append(a)
matrix2 = []
for i in range (0,n):
    b = []
    for j in range (0,n):
        b.append(int(input("Enter a data ")))
    matrix2.append(b)
(multiply(matrix1,matrix2,n))           