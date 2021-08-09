#Uri1140

while(True):
    x = input().lower().split(" ")
    if x[0] == '*':
        break
    resp = 1
    for y in x:
        if x[0][0] != y[0]:
            resp = 0
            break
    if resp == 1:
        print("Y")
    else:
        print("N")