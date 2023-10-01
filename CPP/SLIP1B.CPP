#include<iostream.h>
#include<conio.h>
class acc
{
public:
char name[20];
int cno;
void getdata()
{
cout<<"\nEnter the name :";
cin>>name;
cout<<"\nEnter the contact number :";
cin>>cno;
}
void putdata()
{
cout<<"\nThe name of the account holder is :"<<name;
cout<<"\nThe contact number of the account holder is :"<<cno;
}};
class SA:public acc
{
public:
int acn,bal,total;
void input()
{
cout<<"\nEnter the account number :";
cin>>acn;
cout<<"\nEnter the balance :";
cin>>bal;
}
void output()
{
cout<<"\nThe saving account number is :"<<acn;
cout<<"\nThe balance of the saving account is :"<<bal;
}
void cals()
{
total=bal+(bal*(0.05));
cout<<"\nTotal saving account balance with interest is :"<<total;
}};
class CA:public acc
{
public:
int acn1,bal1;
void input1()
{
cout<<"\nEnter the account number :";
cin>>acn1;
cout<<"\nEnter the balance :";
cin>>bal1;
}
void output1()
{
cout<<"\nThe current account number is :"<<acn1;
cout<<"\nThe current account balance is :"<<bal1;
}
void calc()
{
int total1;
total1=bal1+(bal1*(1.5/100));
cout<<"\nTotal current account balance is :"<<total1;
}};
void main()
{
int i,n,ch;
clrscr();
SA aa[40];
CA bb[40];
do
{
cout<<"\n1)Details of n account holders";
cout<<"\n2)Total balance";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter the number of account holders :";
cin>>n;
cout<<"\nThe details of saving account holders are as follows :";
for(i=0;i<n;i++)
{
aa[i].getdata();
aa[i].input();
aa[i].putdata();
aa[i].output();
}
cout<<"\nThe details of current account holders are as follows :";
for(i=0;i<n;i++)
{
bb[i].getdata();
bb[i].input1();
bb[i].putdata();
bb[i].output1();
}
break;
case 2:
cout<<"\nThe total balance is :";
for(i=0;i<n;i++)
{
aa[i].cals();
bb[i].calc();
}
break;
}
}while(ch!=3);
getch();
}

