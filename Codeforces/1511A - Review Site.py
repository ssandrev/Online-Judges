#1511A - Review Site

n = int(input())

for j in range(n):
    resp = 0
    x = input()
    S = [int(x) for x in input().split()]
    for i in S:
        if i == 1 or i == 3:
            resp+=1     
    print(resp)