class Rectangle():
    def __init__(self,l,w):
        self.l=l
        self.w=w
    def rectangle_area(self):
        return self.l*self.w
    def rectangle_perimeter(self):
        return(self.l*2)+(self.w*2)
L=int(input("Enter the length of the rectangle :"))
W=int(input("Enter the width of the rectangle :"))
a1=Rectangle(L,W)
print(a1.rectangle_area())
print(a1.rectangle_perimeter())   