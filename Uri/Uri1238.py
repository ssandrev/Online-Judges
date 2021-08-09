#Uri1238

for i in range(int(input())):
    s = input().split(" ")
    resp = ""
    rang = max(len(s[0]), len(s[1]))
    for i in range(0,rang):
        if i < len(s[0]):
            resp += s[0][i]
        if i < len(s[1]):
            resp += s[1][i]
    print(resp)