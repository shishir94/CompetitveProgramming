def conrtwrd(n):
    d = {"zero":0,"one":1,"two":2,"three":3,"four":4,"five":5,"six":6,"seven":7,"eight":8,"nine":9}
    l = [-1]
    for i in range(len(n)):
        if(n[i] == " "):
            x = i
            l.append(x)
    l1 = []
    for i in range(len(l)-1):
        x = ""
        for j in range(l[i]+1,l[i+1]):
            x = x + n[j]
        l1.append(x)
    t = len(l)
    p = l[t-1]
    h = ""
    for i in range (p+1,len(n)):
        h = h + n[i]
    l1.append(h)
    for i in range(0,len(l1)):
        print(d[l1[i]],end = '')
    print()
    print(l1)
n = "one two three four one two zero five nine"
conrtwrd(n)