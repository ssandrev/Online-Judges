#STPAR - Street Parade

while True:
    n = int(input())
    if n == 0:
        break
    carros = [int(car) for car in input().split()]
    resp = True
    pilha = []
    i = 1
    for carro in carros:
        while pilha != [] and pilha[-1] == i:
            i+=1
            pilha.pop()
        
        if carro == i:
            i+=1
           
        elif pilha != [] and carro > pilha[-1]:
                resp = False
                break
        else:
            pilha.append(carro)

    if resp:
        print("yes")
    else:
        print("no")