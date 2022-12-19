def printn(row,val):
    if row == 0:
        return 
    #print(val,end=" ")
    if val % 3== 1:
        print("*",end=" ")
    elif val% 3 == 2:
        print("#",end = " ")
    elif val % 3 == 0:
        print("$",end = " ")
    printn(row-1,val)



def pattern(n,num):
    if n == 0:
        return
    printn(num-n+1,num-n+1)
    print("")
    pattern(n-1,num)

n = 10
pattern(10,10)