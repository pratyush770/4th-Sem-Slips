//using friend  function in 2 different classes
#include<iostream.h>
#include<conio.h>
class B;
class A
{
int a;
public:
void input()
{
cout<<"Enter the first number :";
cin>>a;
}
friend void max(A,B);
};
class B
{
int b;
public:
void display()
{
cout<<"Enter the second number :";
cin>>b;
}
friend void max(A,B);
};
void max(A aa,B bb)
{
if(aa.a>bb.b)
cout<<"\nMaximum number is :"<<aa.a;
else
cout<<"\nMaximum number is :"<<bb.b;
}
void main()
{
A aa;
B bb;
clrscr();
aa.input();
bb.display();
max(aa,bb);
getch();
}