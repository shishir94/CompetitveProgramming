'''l = [1,3,4,5]
l1 = [2,3,5,6]
result = list(map(lambda x,y :x*y, l,l1 ))
print(result)
#intersection(l,l1)'''


'''l = [12,13,26,20,117,130,102,221,39]
result = list(filter(lambda x :(x%13 == 0),l))
print(result)'''



'''l=[1,3,2,5,6,8,9]
e=[x*x for x in l if (x%2!=0)]
print(e)'''

'''l=[0,1,1,1,0,1,0,0]
e=[x for x in l if(x==0)] + [x for x in l if(x==1)]
print(e)'''


l = [1,2,3,4]
v = 4
x = (lambda l,v:True if v in l else False)
if(x(l,v)):
    print("present")
else:
    print("not")