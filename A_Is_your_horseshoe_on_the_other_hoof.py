string = input().split(" ")
dico = {}
for i in string:
    if i not in dico:
        dico[i]=0
    else :
        dico[i]+=1
print(sum(dico.values()))