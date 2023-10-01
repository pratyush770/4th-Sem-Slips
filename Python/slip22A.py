class MyString:
    def __init__(self):
        self.str=""
        self.num=""
    def accept(self):
        self.str=input("Enter a string :")
        self.num=int(input("Enter a number :"))
    def display(self):
        print("The entered string is :",self.str)
        print("The entered number is :",self.num)
    def __mult__(self):
        return self.str * self.num
a=MyString()
a.accept()
a.display()
