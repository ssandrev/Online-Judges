#Uri2867

for i in range (int(input())):
    x = input().split(" ")
    resp = int(x[0])
    for j in range (int(x[1])-1):
        resp *= int(x[0])
    y = str(resp)
    print(len(y))