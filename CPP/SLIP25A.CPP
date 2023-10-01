#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
float a,b;
void display(float a,float b)
{
cout<<"\nThe first number is :"<<a;
cout<<"\nThe second number is :"<<b;
}
inline int sum(float a,float b)
{
float c;
c=a+b;
cout<<"\n\nThe addition of two numbers is :"<<setprecision(2)<<c;
}
inline int sub(float a,float b)
{
float c1;
c1=b-a;
cout<<"\nThe subtraction of two numbers is :"<<setprecision(2)<<c1;
}
inline int mul(float a,float b)
{
float c2;
c2=a*b;
cout<<"\nThe subtraction of two numbers is :"<<setprecision(2)<<c2;
}
inline int div(float a,float b)
{
float c3;
c3=b/a;
cout<<"\nThe subtraction of two numbers is :"<<setprecision(2)<<c3;
}
void main()
{
clrscr();
cout<<"\nEnter the first number :";
cin>>a;
cout<<"\nEnter the second number :";
cin>>b;
display(a,b);
sum(a,b);
sub(a,b);
mul(a,b);
div(a,b);
getch();
}