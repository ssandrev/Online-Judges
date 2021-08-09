#Uri1911

n = int(input())
while (n != 0):
    signatures = {}
    resp = 0
    for i in range (n):
        name, signature = input().split()
        signatures[name] = signature
    n = int(input())
    for i in range(n):
        name, signature = input().split()
        dif = 0
        for i in range(len(name)):
            if signatures[name][i] != signature[i]:
                dif += 1
                if dif > 1:
                    resp += 1
                    break
    print(resp)
    n = int(input())