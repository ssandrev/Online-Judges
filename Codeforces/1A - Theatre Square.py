#1A - Theatre Square

S = [int(x) for x in input().split()]
n , m , a = S[0], S[1], S[2]
resp = -(-n // a) * -(-m // a)
print(resp)