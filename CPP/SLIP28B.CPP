//same as slip30b.cpp
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class Marksheet
{
public:
int i,sno,t[5],gt,in_m[5],ex_m[5],perc;
char sname[40],cname[40],subname[40],grade[10];
void accept()
{
cout<<"\nEnter the seat number of the student :";
cin>>sno;
cout<<"\nEnter the student name :";
cin>>sname;
cout<<"\nEnter the class name :";
cin>>cname;
for(i=0;i<5;i++)
{
cout<<"\nEnter the subject name :";
cin>>subname;
cout<<"\nEnter the internal marks :";
cin>>in_m[i];
cout<<"\nEnter the external marks :";
cin>>ex_m[i];
}
}
void display()
{
cout<<"\nThe seat number of the student is :"<<sno;
cout<<"\nThe name of the student is :"<<sname;
cout<<"\nThe name of the class is :"<<cname;
for(i=0;i<5;i++)
{
cout<<"\nThe subject name is :"<<subname;
cout<<"\nThe internal marks are :"<<in_m[i];
cout<<"\nThe external marks are :"<<ex_m[i];
}
}
void calculate()
{
for(i=0;i<5;i++)
{
t[i]=(in_m[i]+ex_m[i]);
cout<<"\nThe total marks are :"<<setw(6)<<setfill('*')<<t[i];
}
}
void grand_total()
{
gt=0;
for(i=0;i<5;i++)
{
gt=gt+t[i];
}
cout<<"\nThe grand total is :"<<gt;
}
void percentage()
{
perc=0;
for(i=0;i<5;i++)
{
perc=perc+((t[i]*100)/1000);
}
cout<<"\nThe percentage is :"<<perc<<" "<<"%";
}
void marksgrade()
{
if(perc<99 && perc>80 || perc==80)
strcpy(grade,"You got A grade");
else if(perc<79 && perc>60 || perc==60)
strcpy(grade,"You got B grade");
else if(perc<59 && perc>40 || perc==40)
strcpy(grade,"You got C grade");
else if(perc<39 && perc>20 || perc==20)
strcpy(grade,"You got D grade");
else
strcpy(grade,"You are failed");
cout<<"\n"<<grade;
}
};
void main()
{
Marksheet m;
clrscr();
m.accept();
m.display();
m.calculate();
m.grand_total();
m.percentage();
m.marksgrade();
getch();
}