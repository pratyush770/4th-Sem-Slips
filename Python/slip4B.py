class Employee:
    def __init__(self,id,name,department,salary):
        self.id=id
        self.name=name
        self.department=department
        self.salary=salary
class manager(Employee):
    def __init__(self,id,name,department,salary,bonus):
        super().__init__(id,name,department,salary)
        self.bonus=bonus
    def totalsalary(self):
        print(self.name,"got total salary :",self.salary+self.bonus)
n=manager(14460,"Pratyush","General Management",20000,8000)
m=manager(14461,"Prayushi","Managemer",40000,10000)
n.totalsalary()
m.totalsalary()