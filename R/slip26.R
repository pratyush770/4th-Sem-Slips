vect1=c(1,2,3,4,5,6,7,8,9)
vect2=c(10,11,12)
row_names=c("r1","r2")
col_names=c("c1","c2","c3")
mat_names=c("m1","m2")
arr=array(c(vect1,vect2),dim=c(2,3,2),
dimnames=list(row_names,col_names,mat_names))  #name gets displayed
print(arr)