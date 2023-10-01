class String:
    def __init__(self):
        self.string=""
    def get(self):
        self.string=input("Enter a string :")
    def put(self):
        print("The entered string is :",self.string)
class Country:
    def __init__(self):
        self.string1=""
    def getNationality(self):
        self.string1=input("Enter the nationality :")
    def printNationality(self):
        print("The entered nationality is :",self.string1)
class State(Country):
    def __init__(self):
        self.string2=""
        self.string3=""
    def getNationality(self):
        super(State, self).getNationality()  # calling the function in derived class which is created in base class 
    def printNationality(self):
        super(State, self).printNationality()
    def getCountry(self):
        self.string2=input("Enter the country :")
    def printCountry(self):
        print("The entered country is :",self.string2)
    def getState(self):
        self.string3=input("Enter the state :")
    def printState(self):
        print("The entered state is :",self.string3)
obj=String()
obj1=State()
obj.get()
obj.put()
obj1.getNationality()
obj1.printNationality()
obj1.getCountry()
obj1.printCountry()
obj1.getState()
obj1.printState()