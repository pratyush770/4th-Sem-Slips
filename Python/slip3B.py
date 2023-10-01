class Student():
    def __init__(self,roll_no,name,age,gender):
        self.roll_no=roll_no
        self.name=name
        self.age=age
        self.gender=gender
class Test(Student):
    def __init__(self,roll_no,name,age,gender,sub1,sub2,sub3):
        super().__init__(roll_no,name,age,gender)
        self.mark1=sub1
        self.mark2=sub2
        self.mark3=sub3
    def get_marks(self):
        self.total=self.mark1+self.mark2+self.mark3
        print(self.name,"\b's marks are :",self.total)
        print("Marks of 1st subject are :",self.mark1)
        print("Marks of 2nd subject are :",self.mark2)
        print("Marks of 3rd subject are :",self.mark3)
p1=Test(1,"Pratyush",19,"Male",82,89,76)
p2=Test(2,"Prayushi",22,"Female",92,89,96)
p1.get_marks()
p2.get_marks()