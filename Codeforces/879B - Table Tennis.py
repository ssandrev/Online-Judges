#879B - Table Tennis

nP, k = [int(x) for x in input().split()]
if k >= nP:
    print(nP)
else:
    Power = [int(x) for x in input().split()]
    vic = 0
    pri = Power[0]
    for x in Power:
        if x == nP:
            print(nP)
            break
        elif pri > x:
            vic += 1
            if vic == k:
                print(pri)
                break
        elif pri < x: 
            pri = x
            vic = 1