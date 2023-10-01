v=c("Karan","Shubham","Aarya","Mrunmayee")   #creates a vector
print("Original vector")
print(v)
f=factor(v)   #converts the created vector into a factor
print("Factor of the said vector")
print(f)
v1=c("Aditya","Margi","Riya","Hemant")
print("Original vector")
print(v1)
f1=factor(v1)
print("Factor of the said vector")
print(f1)
levels(f)[2]=levels(f1)[1]   #values get interchanged according to index which 
#are stored in alphabetical order i.e in v Karan is in index 2 according to 
#alphabetical order and in v1 Aditya is in index 1 according to 
#alphabetical order so Karan will get replaced by Aditya in factor 1
print(f)