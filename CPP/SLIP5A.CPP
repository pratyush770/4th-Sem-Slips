#include<iostream.h>
#include<conio.h>
class point
{
int x,y;
public:
void setpoint(int,int);
void showpoint();
};
void point::setpoint(int x1,int y1)
{
x=x1;
y=y1;
}
void point::showpoint()
{
cout<<"\nThe co-ordinates are :"<<x<<" "<<y;
}
void main()
{
point p;
clrscr();
p.setpoint(25,50);
p.showpoint();
getch();
}