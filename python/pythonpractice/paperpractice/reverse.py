#first method
 #def revrese(s):
 #   if len(s) == 0:
  #      return s
   # return revrese(s[1:])+s[0]

#s = input()
#print(revrese(s))

# second method
def reverse(s):
    str = ""
    for i in s:
        str = i + str

    return str
s = input()
print(reverse(s))
