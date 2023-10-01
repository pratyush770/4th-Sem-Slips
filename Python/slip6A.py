import math
class cube():
    def __init__(self,edge):
        self.edge=edge
    def cube_area(self):
        cubearea=6*self.edge*self.edge
        print("Area of cube is :",cubearea)
    def cube_volume(self):
        cubevolume=self.edge*self.edge*self.edge
        print("Volume of cube is :",cubevolume)
class sphere():
    def __init__(self,radius):
        self.radius=radius
    def sphere_area(self):
        spherearea=4*math.pi*self.radius*self.radius
        print("Area of the sphere is :",spherearea)
    def sphere_volume(self):
        spherevolume=float(4/3*math.pi*self.radius**3)
        print("Volume of the sphere is :",spherevolume)
e1=cube(5)
e1.cube_area()
e1.cube_volume()
r1=sphere(5)
r1.sphere_area()
r1.sphere_volume()