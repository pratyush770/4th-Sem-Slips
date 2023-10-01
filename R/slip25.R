f1=function(a=3,b=6)  #function with 2 parameters
{
  result=a*b   #multiplies the 2 parameters
  print(result)   
}
l=list(c(1,2,3,4),f1(),matrix(c(1,2,3,4),nrow=2))  #first list gets created,
# then function f1 gets called and then a matrix gets created
print(l)