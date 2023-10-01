class person:
    def __init__(self,name,address):
        self.empname=name
        self.address=address
    def display(self):
        print("The name of the employee is :",self.empname)
        print("The address of the employee is :",self.address)
        print("The salary of the employee is :",a.getsalary())
class employee(person):
    def __init__(self,name,address,salary):
        super().__init__(name,address)
        self.salary=salary
    def getsalary(self):
        return self.salary
name=input("Enter the name of the employee :")
address=input("Enter the address of the employee :")
salary=int(input("Enter the salary of the employee :"))
a=employee(name,address,salary)
a.display()

