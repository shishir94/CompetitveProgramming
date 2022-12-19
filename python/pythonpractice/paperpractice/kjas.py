d1= {"IC100":['6','A'],"IC150":['4','B']}
d2 ={"A":'10',"B":'8'}
print(d2[d1["IC100"][1]])
for key in d1:
    print(d2[d1[key][1]])