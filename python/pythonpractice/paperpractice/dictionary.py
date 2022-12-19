#dictioanry is nothing bu  key value pairs
d1 = {}
print(type(d1))   # output = <class 'dict'>
d2 = {"Harry":"Burger","Rohan" : "Fish","Shubhum" :{"B":"maggie","L":"roti" ,"D":"chicken"}}
print(d2)     # print dictiobary
print(d2["Harry"])    # print the value of harry
# we can create dictionary inside dictionary
print(d2["Shubhum"])    # output will be the dictionary
print(d2["Shubhum"]["B"])  
d2["Ankit"] = "Junk food"  # it will  add Ankit i the dictionary
print(d2)
d2["Arufn"] = "hauf"
print(d2)
d2[420] = "dfe"
print(d2)
del d2[420]  # remove the element from the dictionary
print(d2)
d3 = d2.copy()  # copy the given dictionary
print(d3)
#d3 = d2
del d3["Harry"]  # it will delete the key harry from d2 as well
print(d2)
# if we use "copy" and delete some key value from it the key will not delete from the original one
print(d2.get("Harry"))  # print the value of harry
d2.update({"Leena":"hay"})  # it will update this key in the dictionary
print(d2)
print(d2.keys())
print(d2.items())