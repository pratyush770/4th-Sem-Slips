cbin=function(n)
{
  a=c()   #creates an empty vector
  while(n>0)
  {
    r=n%%2    #calculates modulus
    a=append(a,r)    #joins the value of r into a i.e empty vector
    n=as.integer(n/2)
  }
  rev(a)   #reverses the vector
}
n=as.integer(6)
cbin(n)   #function calling