#include<iostream.h>
#include<conio.h>
class Student
{
public:
int rno,age;
char name[40];
void accept()
{
cout<<"\nEnter the roll number of the student :";
cin>>rno;
cout<<"\nEnter the name of the student :";
cin>>name;
cout<<"\nEnter the age of the student :";
cin>>age;
}
void display()
{
cout<<"\nThe roll number of the student is :"<<rno;
cout<<"\nThe name of the student is :"<<name;
cout<<"\nThe age of the student is :"<<age;
}
};
class Teacher:public Student
{
public:
char name1[30];
int age1;
void accept1()
{
cout<<"\nEnter the name of the teacher :";
cin>>name1;
cout<<"\nEnter the age of the teacher :";
cin>>age1;
}
void display1()
{
cout<<"\nThe name of the teacher is :"<<name1;
cout<<"\nThe age of the teacher is :"<<age1;
}
};
void main()
{
int i,n,ch;
clrscr();
Teacher t[20];
do
{
cout<<"\n1)Accept the details of 'n' student and teacher";
cout<<"\n2)Display the details of 'n' student and teacher";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of students and teachers :";
cin>>n;
for(i=0;i<n;i++)
{
t[i].accept();
t[i].accept1();
}
break;
case 2 :
for(i=0;i<n;i++)
{
t[i].display();
t[i].display1();
}
break;
}
}
while(ch!=3);
getch();
}
