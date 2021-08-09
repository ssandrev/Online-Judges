#10282 - Babelfish

dic = {}
while True:
    try:
        x = input().split()
        dic[x[1]] = x[0]
    except:
        break
while True:
    try:
        x = input()
        if x in dic:
            print(dic[x])
        else:
            print("eh")
    except:
        break