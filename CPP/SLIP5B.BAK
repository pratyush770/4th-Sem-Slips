#include<iostream.h>
#include<conio.h>
class Shape
{
public:
virtual void area()=0;
};
class Circle:public Shape
{
public:
int r;
float pi,a;
void accept()
{
cout<<"\nEnter the radius of the circle :";
cin>>r;
}
void area()
{
pi=3.14;
a=pi*r*r;
cout<<"\nThe area of the circle is :"<<a;
}
};
class Sphere:public Shape
{
public:
int r1;
float pi1,a1;
void accept1()
{
cout<<"\nEnter the radius of the sphere :";
cin>>r1;
}
void area()
{
pi1=3.14;
a1=4*pi1*r1*r1;
cout<<"\nThe area of the sphere is :"<<a1;
}
};
class Cylinder:public Shape
{
public:
int r2,h;
float pi2,a2;
void accept2()
{
cout<<"\nEnter the radius of the cylinder :";
cin>>r2;
cout<<"\nEnter the height of the cylinder :";
cin>>h;
}
void area()
{
pi2=3.14;
a2=2*pi2*r2*(r2+h);
cout<<"\nThe area of the cylinder is :"<<a2;
}
};
void main()
{
clrscr();
Circle c;
Sphere s;
Cylinder cd;
c.accept();
c.area();
s.accept1();
s.area();
cd.accept2();
cd.area();
getch();
}

