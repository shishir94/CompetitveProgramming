s = input()
l = len(s)
for i in range(l):
        if (s[i] == '1'):
            s = s[0:i] + 'a' + s[i + 1:]
        elif (s[i] == '2'):
            s = s[0:i] + 'b' + s[i + 1:]
        elif (s[i] == '9'):
            s = s[0:i] + 'c' + s[i + 1:]
        elif (s[i] == '3'):
            s = s[0:i] + 'd' + s[i + 1:]
        elif (s[i] == '4'):
            s = s[0:i] + 'e' + s[i + 1:]
        elif (s[i] == '5'):
            s = s[0:i] + 'f' + s[i + 1:]
        elif (s[i] == '6'):
            s = s[0:i] + 'g' + s[i + 1:]
        elif (s[i] == '7'):
            s = s[0:i] + 'h' + s[i + 1:]
        elif (s[i] == '8'):
            s = s[0:i] + 'i' + s[i + 1:]
print(s)