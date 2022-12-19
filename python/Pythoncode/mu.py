def transpose(A,i,j,r,c, B):
    if(i == r):
        return transpose(A,0,j+1,r,c,B)
    if(j == c):
        return B
    B[j][i] = A[i][j]
    return transpose(A,i+1,j,r,c,B)
A = [[1,2,3,4],[5,6,7,8]]
B = [[0,0],[0,0],[0,0],[0,0]]
print(transpose(A,0,0,2,4,B))