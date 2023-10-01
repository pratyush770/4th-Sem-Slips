#include<iostream.h>
#include<conio.h>
int l,w;
void accept()
{
cout<<"\nEnter the length of the rectangle :";
cin>>l;
cout<<"\nEnter the width of the rectangle :";
cin>>w;
}
inline int perimeter()
{
int a;
a=l+w+l+w;
cout<<"\nThe perimeter of rectangle is :"<<a;
}
inline int area()
{
int a1;
a1=l*w;
cout<<"\nThe area of the rectangle is :"<<a1;
}
void main()
{
clrscr();
accept();
perimeter();
area();
getch();
}