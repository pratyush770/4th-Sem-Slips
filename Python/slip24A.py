class factorial():
    def __init__(self,num):
        self.num=num
        factnum=1
        if self.num<0:
            print("Sorry, factorial does not exist for negative numbers")
        elif self.num==0:
            print("The factorial of 0 is 1")
        else:
            for i in range(1,num+1):
                factnum=factnum*i
            print("The factorial of {} is {}".format(num,factnum))
num=int(input("Enter a number :"))
if num>1:
    for i in range(2,num):
        if(num % i)==0:
            print(num,"is not a prime number")
            print(i,"times",num//i,"is",num)
            break
    else:
         print(num,"is a prime number")
print(factorial(num))