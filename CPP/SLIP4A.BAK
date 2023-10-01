#include<iostream.h>
#include<conio.h>
class Worker
{
public:
int no_h,pay_r,sal;
char wname[40];
void accept()
{
cout<<"\nEnter the number of hours worked :";
cin>>no_h;
cout<<"\nEnter the name of the worker :";
cin>>wname;
}
void display()
{
pay_r=1000;
sal=0;
cout<<"\nThe number of hours worked is :"<<no_h;
cout<<"\nThe name of the worker is :"<<wname;
sal=sal+(pay_r)*(no_h);
cout<<"\nThe total salary of the worker is :"<<sal;
}
};
void main()
{
int i,n;
clrscr();
Worker w;
cout<<"\nEnter the number of workers :";
cin>>n;
for(i=0;i<n;i++)
{
w.accept();
w.display();
}
getch();
}
