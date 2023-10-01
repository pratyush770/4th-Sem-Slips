from math import pi
class Circle():
    def __init__(self,Radius):
        self.Radius=Radius
    def area(self):
        a=pi*self.Radius*self.Radius
        return round(a,2)
    def circumference(self):
        c=2*self.Radius*pi
        return round(c,2)
r=int(input("Enter radius of the circle :"))
a=Circle(r)
print("Area of the circle is :",a.area())
print("Circumference of the circle is :",a.circumference())