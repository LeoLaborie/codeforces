n = int(input())
dico = {}
for i in range(n):
    prenom = input()
    if prenom not in dico:
        dico[prenom] = 1
        print("NO")
    else:
        print("YES")