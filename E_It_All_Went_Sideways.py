for _ in range(int(input())):
    n = int(input())
    total = 0
    
    numbers = []
    for string in input().split():
        numbers.append(int(string))
    
    alpha = [0]
    for i,number in enumerate(numbers):
        if i == 0: continue
        
        if number <= numbers[i-1]: alpha.append(alpha[i-1]+1)
        else: alpha.append(alpha[i-1])
    
    mini = alpha[-1]
    indice = n-1
    for i in range(n-1,-1,-1):
        if alpha[-1] > alpha[i]: break
        if numbers[i] < mini: 
            mini = numbers[i]
            indice = i
    numbers[indice] -=1
    
    mini = numbers[-1]
    for i in range(n-2, -1, -1):
        if numbers[i] > mini:
            total += numbers[i] - mini
            
        else:
            mini = numbers[i]
    
    print(total)
    
        
    