class validity:
    def f(str):
        a=['()','{}','[]']
        while any(i in str for i in a):
            for j in a:
                str=str.replace(j,"")
        return not str
s=input("Enter :")
if validity.f(s):
    print(s,"-","is balanced")
else:
    print(s,"is unbalanced")