#1463A - Dungeon

nTries = int(input())
for i in range (nTries):
    vidas = [int(x) for x in input().split()]
    soma = sum(vidas)
    
    r9 = soma % 9
    d9 = soma/9
    
    if r9 !=0 or vidas[0] < d9 or vidas[1] < d9 or vidas[2] < d9:
        print("NO") 
    else: 
        print("YES")