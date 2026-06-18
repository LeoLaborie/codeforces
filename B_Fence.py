n,k = input().split()
n=int(n)
k=int(k)

liste = input().split()
m = {}
for nb in liste:
    if int(nb) in m:
        m[int(nb)]+=1
    else:
        m[int(nb)] = 1
total = 0
for key in sorted(m):
    value = m[key]
    if (k >= value):
        total += value*key
        k-=value
    else:
        total += key*k
        break
        
        
print(total)
