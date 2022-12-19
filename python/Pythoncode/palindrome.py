'''n = (input("Enter a number "))
x = len(n)
t = 0
for i in range (0,x//2):
    if(n[i] == n[x-i-1]):
        t = 1
    else:
        t = 0
if (t == 1):
    print("plaindrome")
else:
    print("no")3'''

def strin(string):
    for i in range (0,len(string)-1):
        p = 1
        ans = 0
        if string[i] == string[i+1]:
            p+=1

    ans = str(p)
    z=string[i]+ans
    print(z,end="")
z=input()
s=[]
for i in range (len(str(z))):
    s.append(z[i])

while s!=[]:
    w=strin(s)
    print(w)
    s=s.pop(w[0])
