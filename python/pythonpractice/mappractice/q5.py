'''def matrix(a):
    n = len(a)
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

'''l=[5,10,12]
l1=[x for x in l if x%5==0 ]  
print(l1)'''

'''def r(a):
    n=len(a)
    sum=0
    l2=[]
    for i in range(n):
        sum=sum+a[i]
    l2.append(sum)
    return l2
l=[[1,2,3,4],[5,6,7,8],[1,10,11,2]]
e=list(map(r,l))
sum = 0
print(e)
for i in e:
    sum=sum+i[0]
print(sum)
'''

'''a = [[1],[2],[3],[0]]
max=a[0][0]
x = 0
for i in range (4):
    if(a[i][0] > max):
        max = a[i][0]
        x = i
print(x)'''

