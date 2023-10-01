class Date:
    try: 
        def __init__(self,day,month,year):
            self.day=day
            self.month=month
            self.year=year
        def accept(self):
            self.day=int(input("Enter the date :"))
            self.month=int(input("Enter the month :"))
            self.year=int(input("Enter the year :"))
        def display(self):
            print("The date is :",self.day)
            print("The month is :",self.month)
            print("The year is :",self.year)
    except ValueError:
        print("Invalid number")
a=Date(1,2,3)
a.accept()
a.display()