#include<iostream.h>
#include<conio.h>
class student
{
public:
int r;
char n[40];
void getdata()
{
cout<<"\nEnter the roll number of the student :";
cin>>r;
cout<<"\nEnter the name of the student :";
cin>>n;
}
};
class theory:public virtual student
{
protected:
int m1,m2,m3,m4;
public:
void getdata1()
{
cout<<"\nEnter the marks of the first subject :";
cin>>m1;
cout<<"\nEnter the marks of the second subject :";
cin>>m2;
cout<<"\nEnter the marks of the third subject :";
cin>>m3;
cout<<"\nEnter the marks of the fourth subject :";
cin>>m4;
}
};
class practical:public virtual student
{
protected:
int p1,p2;
public:
void getdata2()
{
cout<<"\nEnter the first practical marks :";
cin>>p1;
cout<<"\nEnter the second practical marks :";
cin>>p2;
}
};
class result:public theory,public practical
{
public:
int t;
float p;
void calc()
{
t=m1+m2+m3+m4+p1+p2;
cout<<"\nThe total marks of the student is :"<<t;
p=t/6;
cout<<"\nThe percentage of the student is :"<<p;
if(p>80 || p==80)
cout<<"\nYou got A grade";
if(p==70 || p>70 && p<79)
cout<<"\nYou got B grade";
if(p==60 || p>60 && p<69)
cout<<"\nYou got C grade";
if(p==50 || p>50 && p<59)
cout<<"\nYou got D grade";
if(p==40 || p>40 && p<49)
cout<<"\nYou got E grade";
if(p<39)
cout<<"\nYou are failed";
}
void display()
{
cout<<"\nThe details of the student is as follows :";
cout<<"\n\nThe roll number of the student is :"<<r;
cout<<"\nThe name of the student is :"<<n;
cout<<"\nThe marks of the first subject is :"<<m1;
cout<<"\nThe marks of the second subject is :"<<m2;
cout<<"\nThe marks of the third subject is :"<<m3;
cout<<"\nThe marks of the fourth subject is :"<<m4;
cout<<"\nThe marks of the first practical is :"<<p1;
cout<<"\nThe marks of the second practical is :"<<p2;
}
};
void main()
{
int ch;
clrscr();
result r1;
do
{
cout<<"\n1)Accept Student Information";
cout<<"\n2)Display Student Information";
cout<<"\n3)Calculate Total_marks,Percentage and Grade";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
r1.getdata();
r1.getdata1();
r1.getdata2();
break;
case 2 :
r1.display();
break;
case 3:
r1.calc();
break;
}
}while(ch!=4);
getch();
}