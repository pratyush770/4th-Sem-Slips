#include<iostream.h>
#include<conio.h>
class Student
{
int sid;
char sname[40],sclass[40];
public:
void accept()
{
cout<<"\nEnter the ID of the student :";
cin>>sid;
cout<<"\nEnter the name of the student :";
cin>>sname;
cout<<"\nEnter the class of the student :";
cin>>sclass;
}
void display()
{
cout<<"\nThe ID of the student is :"<<sid;
cout<<"\nThe name of the student is :"<<sname;
cout<<"\nThe class of the student is :"<<sclass;
}
};
class Competition
{
int cid;
char cname[40];
public:
void accept1()
{
cout<<"\nEnter the ID of the competition :";
cin>>cid;
cout<<"\nEnter the name of the competition :";
cin>>cname;
}
void display1()
{
cout<<"\nThe ID of the competition is :"<<cid;
cout<<"\nThe name of the competition is :"<<cname;
}
};
class Studcomp:public Student,public Competition
{
public:
int rank;
void accept2()
{
cout<<"\nEnter the rank of the student :";
cin>>rank;
}
void display2()
{
cout<<"\nThe rank of the student is :"<<rank;
}
void sort(Studcomp &r1,Studcomp &r2)
{
Studcomp rt;
if(r1.rank>r2.rank)
{
rt=r1;
r1=r2;
r2=rt;
}
}
};
void main()
{
int i,n,ch;
clrscr();
Studcomp sc[40];
do
{
cout<<"\n1) Display information";
cout<<"\n2) Display student details in the ascending order of rank of specified competition";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of students :";
cin>>n;
for(i=0;i<n;i++)
{
sc[i].accept();
sc[i].accept1();
sc[i].accept2();
sc[i].display();
sc[i].display1();
sc[i].display2();
}
break;
case 2 :
for(i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
sc[i].sort(sc[i],sc[j]);
}
sc[i].display();
sc[i].display2();
}
break;
}
}while(ch!=3);
getch();
}

