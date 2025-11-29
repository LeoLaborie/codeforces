n=int(input())
liste = input().split()
res = []
compteur = 0
for i,mot in enumerate(liste):
    lenght = len(mot)
    if mot not in res:
        compteur +=1
        for y in range(lenght):
            res.append(mot[y:lenght]+mot[0:y])

print(compteur)
