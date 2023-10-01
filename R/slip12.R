vect1=c(1,2,3,4,5,6,7,8,9)
vect2=c(10,11,12)
arr=array(c(vect1,vect2),dim=c(2,3,2))
arr    #2 matrices gets displayed
M1=arr[,,1]
M2=arr[,,2]
M3=M1+M2   #addition of 2 matrices
M3
M4=M2-M1   #subtraction of 2 matrices
M4