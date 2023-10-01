class Complex():
    def __init__(self,r,i):
        self.r=r
        self.i=i
    def accept(self):
        self.r=int(input("Enter the real number :"))
        self.i=int(input("Enter the imaginary number :"))
    def display(self):
        print("The entered complex number is {} + i{}:".format(self.r,self.i))
    def sum(self,c1,c2):
         self.r=c1.r+c2.r
         self.i=c1.i+c2.i
         print("The sum of 2 complex numbers is {} + i{}:".format(self.r,self.i))
c1=Complex(1,2)
c2=Complex(3,4)
c3=Complex(5,6)
c1.accept()
c1.display()
c2.accept()
c2.display()
c3.sum(c1,c2)