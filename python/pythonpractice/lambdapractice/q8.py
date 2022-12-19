'''def sumprefix(l):
    i = 0
    l = []
    while(i<len(l)):
        if(l[0]%2!=0):
            t = False
        elif(l[0]%2 == 0):
            t = True
        else:
            return l[1:]
        l.append(t)
        i = i+1
    return l
   
l = [2,1,3]
print(sumprefix(l))
    '''

'''l = [1,2,3,4,5]
l1 = [2,3,4,6,0]
s = filter(lambda x : x in l ,l1)
print(list(s))'''


'''l = [1,2,3,4,5,6]
e = filter(lambda x : x%2 == 0,l)
print(list(e))'''


