t= int(input())
for _ in range(t):
    dico = {}
    nb_lettres= int(input())
    a,b = input().split()
    # print(a,b)
    res =  1
    for lettre in a:
        if lettre not in dico:
            dico[lettre] = 1
        else:
            dico[lettre] +=1
    # print(dico)
    for lettre in b:
        if lettre not in dico:
            res = 0
            break
        else:
            dico[lettre] -=1
        
    for i in dico.values():
        if i != 0:
            res = 0
            break
    # print(dico)
    
    print("YES") if res else print("NO")
    