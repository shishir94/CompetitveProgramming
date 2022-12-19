jack = {"name":"Jackfrost","assignment":[80,50,40,20],"test":[5,0],"lab":[78.20,77.20]}
def grade(jack):
    sum = 0
    sum1 = 0
    sum2 = 0
    for i in jack["assignment"]:
        sum += i
    for j in jack["test"]:
        sum1 += j
    for k in jack["lab"]:
        sum2 += k
    d = 0.1*sum+0.7*sum1+0.2*sum2
    if(d >= 90):
        return "A"
    elif d >= 80:
        return "B"
    elif d >= 70:
        return "C"
    else:
        return "D"
print(grade(jack))

