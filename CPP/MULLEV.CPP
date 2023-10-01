//mutliple level inheritance in cpp
#include<iostream.h>
#include<conio.h>
class A
{
protected:
int roll;
public:
void getdata()
{
cout<<"\nEnter the roll number :";
cin>>roll;
}
void putdata()
{
cout<<"\nThe roll number is :"<<roll;
}};
class B:public A
{
protected:
int sub1,sub2;
public:
void getmarks()
{
cout<<"\nEnter the marks of the first subject :";
cin>>sub1;
cout<<"\nEnter the marks of the second subject :";
cin>>sub2;
}
void putmarks()
{
cout<<"\nMark of first subject is :"<<sub1;
cout<<"\nMark lf second subject is :"<<sub2;
}};
class C:public B
{
int spt;
public:
void getspt()
{
cout<<"\nEnter the sports marks :";
cin>>spt;
}
void total()
{
cout<<"\nthe total marks is :"<<sub1+sub2+spt;
}};

void main()
{
clrscr();
C aa;
aa.getdata();
aa.putdata();
aa.getmarks();
aa.putmarks();
aa.getspt();
aa.total();
getch();
}