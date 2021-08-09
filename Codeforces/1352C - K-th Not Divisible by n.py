#1352C - K-th Not Divisible by n

nTries = int(input())

for i in range(nTries):
    numero, qtDiv = [int(x) for x in input().split()]
    naoDiv = qtDiv // (numero - 1)
    if qtDiv % (numero -1) == 0:
        resp = numero * naoDiv - 1
    else:
        resp = numero * naoDiv + (qtDiv%(numero-1))
    print(resp)