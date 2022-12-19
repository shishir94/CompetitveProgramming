def helper(l,index):
    if index == len(l):
        return True
    return(l[index]%2==0) and helper(l,index+1)

def Sumprefix(l):
    return helper(l,0)

l = [2,1,4]
print(Sumprefix(l))