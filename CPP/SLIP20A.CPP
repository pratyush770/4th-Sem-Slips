#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Employee
{
public:
int eid,sal;
char ename[40],cname[40];
void accept()
{
cout<<"\nEnter the employee id :";
cin>>eid;
cout<<"\nEnter the employee name :";
cin>>ename;
cout<<"\nEnter the company name :";
cin>>cname;
cout<<"\nEnter the salary of the employee :";
cin>>sal;
}
void display()
{
cout<<"\nThe employee id is :"<<eid;
cout<<"\nThe name of the employee is :"<<ename;
cout<<"\nThe name of the company is :"<<cname;
cout<<"\nThe salary of the employee is :"<<setw(7)<<setfill('*')<<sal;
}
};
void main()
{
int i,n;
clrscr();
Employee e;
cout<<"\nEnter the number of employees :";
cin>>n;
for(i=0;i<n;i++)
{
e.accept();
e.display();
}
getch();
}
