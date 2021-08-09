#uri1318
#1318 - Bilhetes Falsos

while True:
    S = [int(x) for x in input().split()]
    if S[0] == 0 and S[1] == 0:
        break
    else:
        C = [0] * (int(S[0]) + 1)
        foram =  [int(x) for x in input().split()]
        B = []
        penetra  = 0
        for i in range(len(foram)):
            C[foram[i]] += 1 
        for i in C:
            if i > 1:
                penetra += 1
        print(penetra)