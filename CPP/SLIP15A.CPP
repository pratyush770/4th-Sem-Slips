#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class Machine
{
int mid;
float price;
char mname[40];
public:
Machine(int mm,float pp,char nn[])
{
mid=mm;
price=pp;
strcpy(mname,nn);
}
Machine(Machine &m1)
{
mid=m1.mid;
price=m1.price;
strcpy(mname,m1.mname);
}
void display()
{
cout<<"\nMachine ID :"<<setw(8)<<mid;
cout<<"\nThe name of the machine is :"<<setw(16)<<mname;
cout<<"\nThe price of the machine is :"<<setw(8)<<setprecision(2)<<price;
}
};
void main()
{
int mm;
float pp;
char nn[40];
clrscr();
cout<<"\nEnter the machine ID :";
cin>>mm;
cout<<"\nEnter the name of the machine :";
cin>>nn;
cout<<"\nEnter the price of the machine :";
cin>>pp;
Machine m1(mm,pp,nn);
Machine m2(m1);
m2.display();
getch();
}