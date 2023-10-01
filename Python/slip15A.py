class Student:
    def __init__(self,Student_name,marks):
        self.Student_name=Student_name
        self.marks=marks
    def get_marks(self):
        print("\nOriginal names and values")
        print(self.Student_name,'marks are :',self.marks)
    def modify_marks(self):
        self.Student_name1=input("Enter the modified name :")
        self.marks1=int(input("Enter the modified marks :"))
        print(self.Student_name1,"modified marks are :",self.marks1)
    # def modified_marks(self):
    #     print("\nModified name and values")
    #     print(self.Student_name1,"marks are :",self.marks1)
x=Student('Pratyush',81)
x.get_marks()
x.modify_marks()
# x.get_marks()
# x.modified_marks()