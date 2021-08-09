#Uri2136

yes = []
no = []
ctrl = 0
while True:
    test = input()
    if test == 'FIM':
        break
    name, sn = test.split(" ")
    if ctrl == 0:
        ctrl += 1
        resp = name
    if sn == 'YES':
        if name in yes:
            pass
        else: 
            yes.append(name)
        if len(name) > len(resp):
            resp = name
            
    else:
        no.append(name)
        
no.sort()
yes.sort()
for i in yes:
    print(i)
for i in no:
    print(i)
print("\n" + "Amigo do Habay:\n" + resp)