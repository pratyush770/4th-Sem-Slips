v1=c(2,4,6,7)
v2=c(5,6,7,8,1,3)
array1=array(c(v1,v2),dim=c(2,3,2))
print(array1)
M1=array1[,,1]
M2=array1[,,2]
M3=M1*M2
M3
