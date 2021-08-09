#Uri1062

while True:
    n = int(input())
    if n == 0:
        break
    while True:
        entry = input()
        if entry == '0':
            break
        cars = [int(car) for car in entry.split()]
        end = False
        stack = []
        i = 1
        for car in cars:
            if end:
                break
            while True:
                if stack != [] and stack[-1] == car:
                    stack.pop()
                    break
                if(i <=n):
                    stack.append(i)
                    i+=1
                    if stack[-1] == car:
                        stack.pop()
                        break
                else :
                    end = True
                    break
        if stack == []:
            print("Yes")
        else:
            print("No")
    print()