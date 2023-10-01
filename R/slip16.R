L=sample(LETTERS,size=50,replace=TRUE)
print(L)
f=factor(L)
print("The contents of the factor are")
print(f)
print("The five levels extracted from the factor are")
print(table(L[1:5]))
#table function is used for occurence of any character