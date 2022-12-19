# Working of open function ::
    # syntax ::  f = open(filename,mode)
# example::
f = open("q1.py", 'r')   # filename q1 will be opened with the reading mode
for each in f:
    print(each)    # this will print every line one by one in the file



# Working of read() mode ::
#example ::
f = open("q1.py", 'r')
print(f.read())


f = open("q1.py", 'r')
print(f.read(5))     # it will print first 5 characters 


# Creating a file using write() mode::
f = open("q1.py", "w")
f.write("This is the write command")  # "w" means write it will wrte this lines in code
f.write("Kushwah")
f.close()

f2 = open("q2.py", "w")       
f2.write("This is the write command")
f2.write("Kushwah")
f2.close()
f = open("q2.py", 'r')    
f1 = open("q1.py","w")   # this is  a program to copy one code from file to another file
t = f.readlines()
for i in t:
    f1.write(i)
f.close()
f1.close()


# working of append mode
f = open("q1.py",'a')    # 'a' is used to append something in a code
f.write("adh")
f.close()



# Python seek()  and tell() function
 #  seek() --->  changes the position of the file handle to a given specific position
f = open("q1.py",'r')
f.seek(250)

print(f.tell())
f2 = open("q5.py",'w')
t = f.readlines()
for i in t:
    f2.write(i)

f.close()
f2.close()

# readlines() : read all the lines and return them as each line a string element in a list.