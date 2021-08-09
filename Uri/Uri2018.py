#Uri2018

country = {}
while True:
        try:
            modality=input()
            if modality == '0':
                break
            for i in range(3):
                podium = input()
                if podium not in country.keys():
                    country[podium] = [0,0,0]
                    country[podium][i] +=1
                else:
                    country[podium][i] +=1
        except EOFError:
            break
pre = sorted(country.items(), key = lambda item:item[0])
result = sorted(pre,key = lambda item: (item[1][0],item[1][1], item[1][2]),reverse = True)
print('Quadro de Medalhas')
for i in range (len(result)):
	print(result[i][0],result[i][1][0],result[i][1][1], result[i][1][2])