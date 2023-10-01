import collections
str1=input("Enter a string :")
d=collections.defaultdict(int)
for c in str1:
    if c =='':
        continue
    d[c]+=1
for c in sorted(d,key=d.get):
    if d[c]>1:
        print('%s - %d' % (c,d[c]))