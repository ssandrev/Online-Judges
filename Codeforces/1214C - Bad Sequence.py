#1214C - Bad Sequence

pilha = []
troca = 0
n = int(input())
if n % 2 == 1:
    print("NO")
else:
    S = input()
    for i in S:
        if i == "(" : pilha.append(i)
        elif (i == ")"): 
            if(pilha == []):
                troca += 1
            else:
                x = pilha.pop() 

    if troca > 1:
        print('NO')
    elif troca == 1 and pilha == ['(']:
        print("YES")
    elif (pilha == []):
        print('YES')
    else:
        print("NO")