#231A - Team

x = int (input())
resp = 0
for i in range(x):
    sol = [int(x) for x in input().split()]
    if sum(sol) >= 2:
        resp +=1
print(resp)