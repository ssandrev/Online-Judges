#214A - System of Equations

import math

a , b = [int(x) for x in input().split()]

x = int(math.sqrt(a))
y = int(math.sqrt(b))
resp = 0
for i in range (x+1):
    for j in range(y+1):
        if i**2 + j == a and j ** 2 + i == b:
            resp +=1
print(resp)