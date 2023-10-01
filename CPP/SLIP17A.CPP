#include<iostream.h>
#include<conio.h>
class Student
{
public:
int rno,per;
char sname[40],sclass[40];
void accept()
{
cout<<"\nEnter the roll number of the student :";
cin>>this->rno;
cout<<"\nEnter the percentage of the student :";
cin>>this->per;
cout<<"\nEnter the name of the student :";
cin>>this->sname;
cout<<"\nEnter the class of the student :";
cin>>this->sclass;
}
void display()
{
cout<<"\nThe roll number of the student is :"<<this->rno;
cout<<"\nThe percentage of the student is :"<<this->per;
cout<<"\nThe name of the student is :"<<this->sname;
cout<<"\nThe class of the student is :"<<this->sclass;
}
};
void main()
{
int i,n,ch;
float max=0;
clrscr();
Student s;
do
{
cout<<"\n1)Accept and display details of students";
cout<<"\n2)Display details of student having maximum percentage";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of students :";
cin>>n;
for(i=0;i<n;i++)
{
s.accept();
s.display();
}
break;
case 2 :
for(i=0;i<n;i++)
{
if(s.per>max)
{
max=s.per;
}
}
cout<<"\nThe information of student having maximum percentage is as follows :";
s.display();
break;
}
}while(ch!=3);
getch();
}


