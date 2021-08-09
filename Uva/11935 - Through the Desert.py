#11935 - Through the Desert

while True:
    caminhado = 0.0
    leak = 0
    gas = 0
    tanque = 0.0
    tanques = []
    kilometragem = 0
    x = input().split()
    if x[3] == "0":
        break
    consumo = int(x[3])
    while True:
        x = input().split()
        
        if int(x[0]) != kilometragem:
        	caminhado = int(x[0]) - kilometragem
        	kilometragem = int(x[0])
        	tanque += ((caminhado/100) * consumo) + (caminhado * leak)
        if x[1] == "Goal":
        	tanques.append(tanque)
        	tanque = max(tanques)
        	print("{:.3f}".format(tanque))
        	break
        elif x[1] == "Leak":
            leak += 1
        elif x[1] == "Gas":
        	tanques.append(tanque)
        	tanque = 0
        elif x[1] == "Mechanic":
            leak = 0
        elif x[1] == "Fuel":
            consumo = int(x[3])