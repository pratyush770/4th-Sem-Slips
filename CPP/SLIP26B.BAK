#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
char en[40];
class Employee
{
public:
int eid,sal;
double mno;
char ename[40];
void accept()
{
cout<<"\nEnter the employee id :";
cin>>eid;
cout<<"\nEnter the name of the employee :";
cin>>ename;
cout<<"\nEnter the mobile number of the employee :";
cin>>mno;
cout<<"\nEnter the salary of the employee :";
cin>>sal;
}
void display()
{
cout<<"\nThe employee id is :"<<setw(8)<<eid<<endl;
cout<<"The name of the employee is :"<<setw(8)<<ename<<endl;
cout<<"The mobile number of the employee is :"<<setw(8)<<mno<<endl;
cout<<"The salary of the employee is :"<<setw(8)<<sal<<endl;
}
void sort(Employee &e1,Employee &e2)
{
Employee emp;
if(e1.sal<e2.sal)
{
emp=e1;
e1=e2;
e2=emp;
}
}
};
void main()
{
int i,n,ch;
clrscr();
Employee e[30];
do
{
cout<<"\n1)Accept details of n employees";
cout<<"\n2)Display employee details in descending order of their salary";
cout<<"\n3)Display details of a particular employee";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of employees :";
cin>>n;
for(i=0;i<n;i++)
{
e[i].accept();
e[i].display();
}
break;
case 2 :
for(i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
e[i].sort(e[i],e[j]);
}
e[i].display();
}
break;
case 3 :
cout<<"\nEnter the name of the employee :";
cin>>en;
for(i=0;i<n;i++)
{
if(strcmp(e[i].ename,en)==0)
{
e[i].display();
}
}
break;
}
}while(ch!=4);
getch();
}


