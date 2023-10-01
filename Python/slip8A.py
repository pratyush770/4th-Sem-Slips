import collections
tuplex=(2,4,5,6,2,3,4,4,7,5,6,7,1)
dictx=collections.defaultdict(int)
for x in tuplex:
    dictx[x]+=1
for x in sorted(dictx,key=dictx.get):
    if dictx[x]>1:
        print('%d repeated %d times' %(x,dictx[x]))