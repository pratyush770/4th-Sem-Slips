class Calculator:
    def __init__(self,num1,num2,operation):
        self.num1=num1
        self.num2=num2
        self.operation=operation
        if self.operation=='*':
            print("Multiplication of {} and {} is :".format(num1,num2),self.num1*self.num2)
        elif self.operation=='/':
             print("Division of {} and {} is :".format(num1,num2),self.num1/self.num2)
        elif self.operation=='-':
             print("Subtraction of {} and {} is :".format(num1,num2),self.num1-self.num2)
        elif self.operation=='+':
             print("Addition of {} and {} is :".format(num1,num2),self.num1+self.num2)
num1=int(input("Enter the first number :"))
num2=int(input("Enter the second number :"))
operator1=input("ENTER A CALCULATOR OPERATOR FROM THE FOLLOWING :/,*,-,+\n")
Calculator(num1,num2,operator1)