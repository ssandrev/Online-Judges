#103185N - Non-Integer Donuts

nDays = int(input())
resp = 0
x = input()
x = x.split(".")
banco = int(x[1])
for i in range(nDays):
    x = input().split(".")
    banco += int(x[1])
    banco %= 100
    if banco != 0:
        resp +=1
print(resp)