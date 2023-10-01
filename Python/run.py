class College:
    def __init__(self,id,name,city):
        self.id=id
        self.name=name
        self.city=city
    def accept(self):
        self.id=int(input("Enter the id :"))
        self.name=input("Enter the name of the college :")
        self.city=input("Enter the city :")
    def display(self):
        print("The id of the college is :",self.id)
        print("The name of the college is :",self.name)
        print("The city of the college is :",self.city)
class Student(College):
    def __init__(self,rno,age,name1,id,name,city):
        super().__init__(id,name,city)
        self.rno=rno
        self.age=age
        self.name1=name1
    def accept1(self):
        self.rno=int(input("Enter the roll number :"))
        self.age=int(input("Enter the age :"))
        self.name1=input("Enter the name of the student :")
    def display1(self):
        print("The roll number of the student is :",self.rno)
        print("The age of the student is :",self.age)
        print("The name of the student is :",self.name1)
s=Student(1,18,"piyush",1234,"garware","pune")
s.accept()
s.accept1()
s.display()
s.display1()
