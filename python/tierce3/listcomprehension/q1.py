# Write a program which takes list as an arrgument and returns another list containing chaarecters.
'''n = input()
l = [x for x in n]
print(l)'''

# Write a program which list of numbers in such a way that negative number comes first and positive numbers afterwards.

'''l = [1,-2,0,2,-3,39,-22,-12]
x = ([i for i in l if i <=0 ] + [i for i in l if i > 0])
print(x)'''

# Write a python program to square each odd number in an list.
'''
l = [1,2,3,4,5,6,7,8,11]
x = list(i*i for i in l if i % 2 != 0)
print(x)'''

'''def nonvowel(n):
    x = [i for i in n if i is not "a"]
    return x
l = 'kGaD'
print((nonvowel(l)))'''
