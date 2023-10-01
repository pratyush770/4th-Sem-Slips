//usage of class and functions//
#include<iostream.h>
#include<conio.h>
class rectangle
{
int l,b;
float a,p;
public:
void getdata()
{
cout<<"Enter the length of the rectangle :";
cin>>l;
cout<<"Enter the breadth of the rectangle :";
cin>>b;
}
void area()
{
a=l*b;
}
void perimeter()
{
p=2*(l+b);
}
void putdata()
{
cout<<"\nArea of the rectangle is :"<<a;
cout<<"\nPerimeter of the rectangle is :"<<p;
}};
void main()
{
rectangle O;
clrscr();
O.getdata();
O.area();
O.perimeter();
O.putdata();
getch();
}