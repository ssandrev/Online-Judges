#466A - Cheap Travel

x = input().split(" ")
n = int(x[0])
m = int(x[1])
a = int(x[2])
b = int(x[3])
if n / m < 1:
    valor1 = b
else:
    valor1 = ((n // m + 1) * b) 
valor3 = ((n // m) * b) + ((n % m) * a)
valor2 = a * n
resp = min(valor1, valor2, valor3)
print(resp)