Dict={}
n=int(input('enter number of keys:'))
for x in range(0,n):
    key=input('enter the key:')
    if key in Dict:
        print('the given key exists!')
        key=input('enter the key:')
    value=input('enter the value:')
    Dict[key]=value
print(Dict)