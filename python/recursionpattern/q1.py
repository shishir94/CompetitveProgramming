'''def evensumprefix(l):     # to find whether all numbers in a list is even or not
    if len(l) < 1:
        return True
    if len(l) == 1:
        return (l[0] % 2 == 0)
    if len(l)>= 1:
        return (l[0]%2==0) and evensumprefix(l[1:])
print(evensumprefix([2,4,6,8]))
'''


# to find hexadecimal :

'''def oct(n):
    if n == 0:
        return 0
    return (oct(n//8)*10) + (n% 8)
print(oct(25))'''


# Python program to print a specific pattern using recursion :--
'''*
   **
   ***
   ****
   *****
'''
'''def printn(num):                         
    if (num == 0):
        return
    print("*", end = " ")
    printn(num - 1)
def pattern(n, i):
    if (n == 0):
        return
    printn(i)
    print("\n", end = "")
    pattern(n - 1, i + 1)
n = 5
pattern(n,0)
'''

''' 
    *
   **
  ***
 ****
*****
 
'''
def print_space(space):
    if (space == 0):
        return
    print(" ", end=" ")
    print_space(space - 1)
def print_asterisk(asterisk):
    if (asterisk == 0):
        return
     
    print("*", end =" ")
    print_asterisk(asterisk - 1)
 

def pattern(n, num):
    if (n == 0):
        return
     
    print_space(n - 1)
    print_asterisk(num - n + 1)
    print()
    pattern(n - 1, num)
n = 5
pattern(n,n)