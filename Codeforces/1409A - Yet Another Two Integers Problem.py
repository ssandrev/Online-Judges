#1409A - Yet Another Two Integers Problem

for i in range(int(input())):
    resp = 0
    S = [int(x) for x in input().split()]
    num = abs(S[0] - S[1])
    if S[0] == S[1]:
        print(0)
    elif num > 10:
        num, x = num%10, num//10
        if num > 0 :
            resp +=1
        print(resp + x)
    else: print(1)