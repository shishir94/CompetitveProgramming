
# LIST COMPREHENSION PRACTICE

'''def max(n):
    x = len(n)
    ans = n[0]
    for i in range(0,x):
        if(n[i] >= ans):
            ans = n[i]
    return ans
    
l = [[1,7,4,4],[1,2,3,10]]
e = list(map(max,l))
a = [max(i) for i in l]
print(e)'''



'''names = ['ch','afs','cbf','dgd','cgd']
a = [i for i in names if i.lower().endswith('d') and len(i)>2]
print(a)'''

'''names = ['ch','afs','cbf','dgd','cgd']
a = [i for i in names if i.lower().endswith('d') | i.lower().startswith('c')]
print(a)'''



'''vals = [[1,2,3],[2,3,4],[4,5,6]]
new = [y for x in vals for y in x]
print(new)'''



'''n = [['ass','as','sss'],['sdjfj','sj','jhdshj','shsh'],['sajk','sdg','jkd']]
new = [y for x in n if len(x) >3 for y in x]
print(new)'''


'''
n = [['ass','as','sss'],['sdjfj','sj','jhdshj','shsh'],['sajk','sdg','jkd']]
new = [y for x in n  for y in x if len(y) >3]
print(new)'''




'''n = [['ass','as','sss'],['sdjfj','sj','jhdshj','shsh'],['sajk','sdg','jkd']]
new = [y for x in n  if len(x) > 3 for y in x if y.lower().startswith('s') and len(y) > 3 and y.lower().endswith('h')]
print(new)'''


vals = [[1,2,3],[2,3,4],[4,5,6]]
e = [y for x in vals for y in x if(y%2==0)]
print(e)