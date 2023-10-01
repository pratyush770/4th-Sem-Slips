//constructor with default argument
#include<iostream.h>
#include<conio.h>
class date
{
int d,m,y;
public:
date(int d3,int m3,int y1=2014)
{
d=d3;
m=m3;
y=y1;
}
void display()
{
cout<<"\nDay :"<<d;
cout<<"\nMonth :"<<m;
cout<<"\nYear :"<<y;
}
};
void main()
{
date d1(15,11);
date d2(16,1);
clrscr();
d1.display();
d2.display();
getch();
}