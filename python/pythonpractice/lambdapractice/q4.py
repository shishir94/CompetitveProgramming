'''a = int(input())
b = int(input())
e = (lambda a,b:True if a <b else False)
if e(a,b):
    print(a)

else:
    print(b)'''

l3 = []
def permut(l,s):
    if s==len(l)-1:
        print(l)
        l3.append(l)
        return l
    else:
        adil=l
        for i in range(s,len(l)):
            t=adil[0]
            adil[0]=adil[i]
            adil[i]=t
            permut(l,s+1)
l=[1,2,3]
permut(l,0)
#print(permut(l,0))