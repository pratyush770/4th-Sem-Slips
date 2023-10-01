#include<iostream.h>
#include<conio.h>
class point
{
int x,y;
public:
point()
{
x=5;
y=5;
}
point(int m,int n)
{
x=m;
y=n;
}
point(point &p2)
{
x=p2.x;
y=p2.y;
}
void display()
{
cout<<"\nValue of x is :"<<x;
cout<<"\nValue of y is :"<<y<<"\n";
}
};
void main()
{
clrscr();
point p1;
point p2(14,15);
point p3(p2);
cout<<"\nDefault Constructor";
p1.display();
cout<<"\nParameterized Constructor";
p2.display();
cout<<"\nCopy Constructor";
p3.display();
getch();
}
