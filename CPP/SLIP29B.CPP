#include<iostream.h>
#include<conio.h>
class Clock
{
public:
int h,m,s;
void setclock(int a,int b,int c)
{
h=a;
m=b;
s=c;
cout<<"\nEnter the hour :";
cin>>h;
cout<<"\nEnter the minute :";
cin>>m;
cout<<"\nEnter the second :";
cin>>s;
}
void showclock()
{
cout<<"\nThe time is :"<<" "<<h<<":"<<m<<":"<<s;
}
void tick()
{
s++;
cout<<"\nThe time is :"<<" "<<h<<":"<<m<<":"<<s;
}
};
void main()
{
int a,b,c;
clrscr();
Clock cl;
cl.setclock(a,b,c);
cl.showclock();
cl.tick();
getch();
}