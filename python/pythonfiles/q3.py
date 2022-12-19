f = open("temp1.txt")
t = f.read()
max = 0 
temp=""
for i in t:
    if(i == " " or i == "\n"):
        if(int(temp) > max):
            max = int(temp)
        temp = ""
    else:
        temp += i
    
if(int(temp)>max):
    max=int(temp)

print(max)
f.close()

'''ef search(line,term):
    for i in range(len(line)):
        flag = 0
        for j in range(len(term)):
            if line[i+j] != term[i]:
                flag = 1
                break
    if flag == 1:
        return True
    return False
'''
