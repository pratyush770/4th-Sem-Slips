m=matrix(1:9,nrow=3,ncol=3)  #creates a matrix with 3 rows and 3 columns
print("Original matrix")
print(m)
as.list(as.data.frame(m))   #converts the matrix into data frame first and then 
#converts the data frame into a list
print(sort(m))   #sorts the list