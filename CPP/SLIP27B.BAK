#include<iostream.h>
#include<conio.h>
#include<string.h>
class vs
{
int sub,wh,tsal;
char name[20],fname[40];
public:
vs(int m,int n,char y[])
{
sub=m;
wh=n;
strcpy(name,y);
cout<<"Enter the subjects :";
for(int i=0;i<sub;i++)
cin>>fname[i];
}
void display()
{
cout<<"\nName of Faculty is :"<<name;
cout<<"\nTotal number of subjects are :"<<sub;
cout<<"\nTotal number of working hours are :"<<wh;
cout<<"\nSubjects are :";
for(int i=0;i<sub;i++)
cout<<fname[i]<<" ";
}
void calculate()
{
tsal=wh*300;
cout<<"\nRemuneration is :"<<tsal;
}
};
void main()
{
int n,m;
char y[50];
clrscr();
cout<<"\nEnter name of Faculty :";
cin>>y;
cout<<"\nEnter total working hours :";
cin>>n;
cout<<"\nEnter the total number of subjects :";
cin>>m;
vs s1(m,n,y);
s1.display();
s1.calculate();
getch();
}