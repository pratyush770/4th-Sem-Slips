//hybrid inheritance in cpp
#include<iostream.h>
#include<conio.h>
class A
{
public:
void message()
{
cout<<"\nHello";
}};
class B:public A
{
public:
void display()
{
cout<<"\nIndia";
}};
class C
{
public:
void display1()
{
cout<<"\nBye";
}};
class D:public B,public C
{
public:
void display2()
{
cout<<"\nPakistan";
}};
void main()
{
clrscr();
D dd;
dd.message();
dd.display();
dd.display1();
dd.display2();
getch();
}