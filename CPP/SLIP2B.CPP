#include<iostream.h>
#include<conio.h>
#include<string.h>
class li
{
protected:
int rno,per;
char name[30],cls[30];
public:
li(int r,char n[],char cl[],int p)
{
rno=r;
strcpy(name,n);
strcpy(cls,cl);
per=p;
}
void display()
{
cout<<"\nThe roll number is :"<<rno;
cout<<"\nThe name of the student is :"<<name;
cout<<"\nThe name of the class is :"<<cls;
cout<<"\nPercentage obtained is :"<<per;
}};
class ei
{
protected:
int no_h,charges;
public:
ei(int hr,int chr)
{
no_h=hr;
charges=chr;
}
void putdata()
{
cout<<"\nNo of hours worked is :"<<no_h;
cout<<"\nThe charges per hour is :"<<charges;
}};
class eli:public li,public ei
{
protected:
int total;
public:
eli(int r,char n[],char cl[],int p,int hr, int chr):li(r,n,cl,p),ei(hr,chr)
{
total=hr*chr;
}
void t_money()
{
cout<<"\nThe total money earned is :"<<total;
}};
void main()
{
int r,p,hr,chr;
char n[40],cl[40];
clrscr();
cout<<"\nEnter the roll number :";
cin>>r;
cout<<"\nEnter the name :";
cin>>n;
cout<<"\nEnter the class :";
cin>>cl;
cout<<"\nEnter the percentage :";
cin>>p;
cout<<"\nEnter the number of hours :";
cin>>hr;
cout<<"\nEnter the charges per hour :";
cin>>chr;
eli aa(r,n,cl,p,hr,chr);
aa.display();
aa.putdata();
aa.t_money();
getch();
}