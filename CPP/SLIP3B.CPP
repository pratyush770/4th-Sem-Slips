#include<iostream.h>
#include<conio.h>
class shape
{
public:
virtual void area()=0;
};
class circle:public shape
{
public:
int r;
float pi;
float a;
void area()
{
pi=3.14;
cout<<"\nEnter the radius of the circle :";
cin>>r;
a=pi*r*r;
cout<<"\nThe area of the circle is :"<<a;
}};
class rectangle:public shape
{
public:
int l,b;
float a1;
void area()
{
cout<<"\nEnter the length of the rectangle :";
cin>>l;
cout<<"\nEnter the breadth of the rectangle :";
cin>>b;
a1=l*b;
cout<<"\nThe area of the rectangle is :"<<a1;
}};
class triangle:public shape
{
public:
int b1,h;
float a2;
void area()
{
cout<<"\nEnter the base of the triangle :";
cin>>b1;
cout<<"\nEnter the height of the triangle :";
cin>>h;
a2=(0.5)*(b1*h);
cout<<"\nThe area of the triangle is :"<<a2;
}};
void main()
{
circle cc;
rectangle rr;
triangle tt;
clrscr();
cc.area();
rr.area();
tt.area();
getch();
}

