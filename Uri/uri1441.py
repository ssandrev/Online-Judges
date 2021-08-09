#Uri1441
#1441 - Sequências de Granizo

while True:
    x = int(input())
    if x == 0:
        break
    resp = x
    while x != 1:
        if x % 2 == 1:
            x = x* 3 + 1
            if x > resp:
                resp = x
        elif x % 2 == 0:
            x *= 0.5
    print(int(resp))