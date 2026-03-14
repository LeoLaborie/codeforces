for _ in range(int(input())):
    n = int(input())
    c = []
    p = []
    for i in range(n):
        temp = input().split()
        c.append(int(temp[0]))
        p.append(int(temp[1])/100)
    
    total = c[-1]
    for i in range(n-2,-1,-1):
        if (1 - p[i]) * total + c[i] > total:
            total = (1 - p[i]) * total + c[i]
    
    print(total)