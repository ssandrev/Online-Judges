#514 - Rails

while True:
    n = int(input())
    if n == 0:
        break
    while True:
        entrada = input()
        if entrada == '0':
            break
        carros = [int(car) for car in entrada.split()]
        fim = False
        pilha = []
        i = 1
        for carro in carros:
            if fim:
                break
            while True:
                if pilha != [] and pilha[-1] == carro:
                    pilha.pop()
                    break
                if(i <=n):
                    pilha.append(i)
                    i+=1
                    if pilha[-1] == carro:
                        pilha.pop()
                        break
                else :
                    fim = True
                    break
        if pilha == []:
            print("Yes")
        else:
            print("No")
    print()