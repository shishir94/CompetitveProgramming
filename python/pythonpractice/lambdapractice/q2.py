def rearange(l):
    return[x for x in l if x < 0]+[x for x in l if x>=0]
l = [12,11,-13,-5,2]
print(rearange(l))