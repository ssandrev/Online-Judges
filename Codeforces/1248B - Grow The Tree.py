#1248B - Grow The Tree

x= input()
S = [int(x) for x in input().split()]
if len(S) == 1:
    print (S[0]**2)
elif len(S) == 2:
    print(S[0]**2 + (S[1]**2))
else:
    S.sort()
    meio = (len(S))//2
    x = sum(S[:meio])
    y = sum(S[meio:])
    print(x**2 + y**2)