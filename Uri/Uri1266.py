#Uri1266

while(True):
    n_fences = int(input())
    if n_fences == 0:
        break
    fences = input().split(" ")
    fence = []
    resp = 0
    zeros = 0
    ones = 0
    for i in range(n_fences):
        if fences[i] == '1':
            if zeros > 0:
                fence.append(zeros)
            if ones == 0:
                fence.append(-1)
            zeros = 0
            ones += 1
        elif fences[i] == '0':
            ones = 0
            zeros += 1
            if i == n_fences-1:
                fence.append(zeros)
    if len(fence) > 1:
        if fence[0] > -1 and fence[-1] > -1:
            resp +=(int((fence[0] + fence[-1])/2)) 
        elif fence[0] > -1 or fence[-1] > -1:
            if fence[0] > -1:
                resp += int(fence[0]/2)
            elif fence[-1]/2 > -1:
                resp +=  int(fence[-1]/2)
        for i in range(len(fence)-2):
            resp += int(fence[i+1]/2)
    else:
        resp += int((fence[0]+1)/2)
    print(resp)