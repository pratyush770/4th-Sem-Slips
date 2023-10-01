#include<iostream.h>
#include<conio.h>
class Point
{
int p1,p2;
public:
void accept()
{
cout<<"\nEnter the first point :";
cin>>p1;
cout<<"\nEnter the second point :";
cin>>p2;
}
void display()
{
cout<<"\nThe two dimensional point is :"<<p1<<" "<<p2;
}
Point operator +(Point pt2)
{
Point tp;
tp.p1=p1+pt2.p1;
tp.p2=p2+pt2.p2;
return tp;
}
void operator -()
{
p1=-p1;
p2=-p2;
display();
}
Point operator *(int n)
{
Point tp;
tp.p1=p1*n;
tp.p2=p2*n;
return tp;
}
};
void main()
{
int n;
clrscr();
Point pt1,pt2,pt3;
pt1.accept();
pt1.display();
pt2.accept();
pt2.display();
pt3=pt1+pt2;
cout<<"\nAfter adding,";
pt3.display();
cout<<"\nAfter negating co-ordinate of p1,";
-pt1;
cout<<"\nEnter a number :";
cin>>n;
pt2=pt1*n;
pt2.display();
getch();
}
