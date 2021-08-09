#uri1030
#1030 - A Lenda de Flavious Josephus

nc = int(input())
for i in range(nc):
    n , k = input().split()
    n , k = int(n), int(k) - 1
    morto = 0
    H = []
    for j in range(n):
        H.append(j+1)
    while len(H) != 1:
        morto += k
        if morto >= len(H):
            morto %= len(H)
        H.pop(morto)
    print("Case {}: {}".format(i+1,H[0]))