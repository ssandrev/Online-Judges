#1141B - Maximal Continuous Rest

x = input()
s = input().split(" ")
uns = 0
zeros = 0
x = []
for i in range(0,len(s)):
    if s[i] == '0':
        if uns > 0:
            x.append(uns)
            uns = 0
        zeros = 1
    elif s[i] == '1':
        uns += 1
        if zeros == 1:
            zeros = 0
            x.append(-1)
        if i == len(s)-1:
            x.append(uns)
if len(x) == 0:
    print(0)
elif len(x) == 1:
    print(x[0])
elif x[0] > 0 and x[-1] > 0:
    x[0] += x[-1]
if len(x) > 1:
    print(max(x))