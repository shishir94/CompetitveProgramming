'''f=open("mode.py","r")'''
'''print(len(f.readlines()))
f.close()'''
'''w  = 0
for line in f:
    for i in range(len(line)):
        if line[i] == " " or line[i] == '\n':
            w = w+1
print(w)
f.close()'''
'''w = 0
state = 0
wsp = [' ','/n','/t']
for line in f.readlines():
    for i in range (len(line)):
        if (state == 0 or state == 1) and(line[i] in wsp):
            state =2
        elif(state == 0 or state == 2) and (line[i] in wsp):
            state = 1
            w = w+1

print(w)
f.close()'''

'''def search(line,term):
    for j in range(len(line)):
        flag = 0
        for i in range(len(term)):
            if line[j+i] != term[i]:
                flag = 1
                break
        if flag == 0:
            return True
    return False

f=open("mode.py","r")
term = input()
for line in f:
    if search(line,term):
        print("found",line)
        break
f.close()'''

'''f = open("mode.py","r")
no = int(input())
cur = 0
lines = f.readlines()
lines = lines[:no-1]+lines[no:]   -------------->>>>>  slicing of list

f.close()
f=open("mode.py","r")
for line in lines:
    f.write(line)
f.close()'''


#1 :  Given a file, you need to replace one string with another string

def search(line,t):
    for j in range(len(s)-len(t)):
        flag = 0
        for i in range(len(t)):
            if line[j+i] != t[i]:
                flag = 1
                break
        if flag == 0:
            return i
    return -1
f=open("mode.py","r+")
s = f.read()
l = search(s,"while")
if l != -1:
    s = s[:l]+"abhinav"+s[l+4:]
    f.seek(0)
    f.write(s)
f.close()



