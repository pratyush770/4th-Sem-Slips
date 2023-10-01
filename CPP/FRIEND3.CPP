//friend class
#include<iostream.h>
#include<conio.h>
class B;
class A
{
int x;
friend class B;
};
class B
{
public:
void display(A t1)
{
t1.x=20;
cout<<"Value :"<<t1.x;
}
};
void main()
{
A obj1;
B obj2;
clrscr();
obj2.display(obj1);
getch();
}