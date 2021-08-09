#679 - Dropping Balls

nTries = int(input())

for i in range(nTries):
    profundidade, quedas = [int(x) for x in input().split()]
    numero = 1
    for j in range(profundidade - 1):
        if quedas % 2 == 0:
            quedas /= 2 
            numero = 2*numero + 1
        else:
            quedas = (quedas + 1) / 2
            numero *= 2
    print(numero)
x = input()