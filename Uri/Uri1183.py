#Uri1183

T = input()
a = []
mat = []
for i in range (144):
        a.append(float(input()))
lines = 12
columns = 12
for i in range(lines):
    line = []
    for j in range(columns):
        line.append(a[lines * i + j])
    mat.append(line)
sum_All = 0
for i in range (0,12):
    for j in range(0,12):
        if j <= i:
            pass
        else:
            sum_All += mat[i][j]
if T == 'S':
    print(round(sum_All,1))
else:
    print(round(sum_All/66,1))