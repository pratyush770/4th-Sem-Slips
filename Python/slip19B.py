class Shape():
    def __init__(self):
        pass
class Square(Shape):
    def __init__(self,l):
        Shape.__init__(self)
        self.length=l
    def area(self):
        return self.length*self.length
a=Square(4)
print(a.area())