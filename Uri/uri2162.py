n = int(input())
x = input().split(' ')
resp = 1
for i in range (1,n):
    if i == 1:
        if int(x[i-1]) > int(x[i]):
            p = 0
        elif int(x[i-1]) < int(x[i]):
            p = 1
        else:
            resp = 0
    else:
        if int(x[i-1]) > int(x[i]):
            if p == 1:
                p = 0
            else:
                resp = 0
        elif int(x[i-1]) < int(x[i]):
            if p == 0:
                p = 1
            else:
                resp = 0
        else: resp = 0
print(resp)