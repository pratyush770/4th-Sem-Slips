//copy constructor usage
#include<iostream.h>
#include<conio.h>
class demo
{
int a;
public:
demo()
{
a=10;
}
demo(demo &z)
{
a=z.a;
}
void putdata()
{
cout<<"\nThe value of A is :"<<a;
}};
void main()
{
demo aa;
demo bb(aa);
clrscr();
aa.putdata();
bb.putdata();
getch();
}