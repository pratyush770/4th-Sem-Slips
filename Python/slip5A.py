class Str1():
    def __init__(self,demo=0):
        self.demo=demo
    def get_string(self):
        self.demo=input("Enter the string :")
    def print_string(self):
        str=self.demo
        print("The string in uppercase is :",str.upper())
    # def rev_string(self):
    #     str1=self.demo
    #     print("The string in reverse is :",str1[::-1]) for reversing the string
A=Str1()
A.get_string()
A.print_string()
# A.rev_string()