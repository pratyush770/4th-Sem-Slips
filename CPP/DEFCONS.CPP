//default constructor usage
#include<iostream.h>
#include<conio.h>
class abc
{
int a,b;
public:
abc()
{
a=20;
b=50;
}
void putdata()
{
cout<<"\nA :"<<a;
cout<<"\nB :"<<b;
}};
void main()
{
abc S;
clrscr();
S.putdata();
getch();
}