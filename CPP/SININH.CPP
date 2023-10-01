//single inheritance in cpp
#include<iostream.h>
#include<conio.h>
class A
{
protected:
int x;
public:
void input()
{
cout<<"\nEnter the value of x :";
cin>>x;
}};
class B:public A
{
protected:
int y;
public:
void output()
{
cout<<"\nEnter the value of y :";
cin>>y;
}
void sum()
{
cout<<"\nThe sum of the numbers is :"<<x+y;
}};
void main()
{
clrscr();
B aa;
aa.input();
aa.output();
aa.sum();
getch();
}
