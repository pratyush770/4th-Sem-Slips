#include<iostream.h>
#include<conio.h>
#include<string.h>
char n[10],c[10];
long pno;
void search(long);
void search(char[20]);
class person
{
char name[40],city[10];
int a;
long phoneno;
public:
void getdata()
{
cout<<"\nEnter the name :";
cin>>name;
cout<<"\nEnter the phone number :";
cin>>phoneno;
cout<<"\nEnter the age :";
cin>>a;
cout<<"\nEnter the city :";
cin>>city;
}
void display()
{
cout<<"\nThe name of the person is :"<<name;
cout<<"\nThe phone number of the person is :"<<phoneno;
cout<<"\nThe age of the person is :"<<a;
cout<<"\nThe city of the person is :"<<city;
}
void search(long pno)
{
if(phoneno==pno)
{
cout<<"\nThe name of the person is :"<<name;
}
}
void search(char n[])
{
if (strcmp(name,n)==0)
{
cout<<"\nThe phone number of the person is :"<<phoneno;
}
}
void searchcity()
{
if (strcmp(city,c)==0)
{
display();
}
}
};
void main()
{
clrscr();
person t[30];
int i,n1,ch;
do
{
cout<<"\n1)Accept and display details of customer";
cout<<"\n2)Search mobile number of given person";
cout<<"\n3)Search the person name of given mobile number";
cout<<"\n4)Search all details of given city";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of persons :";
cin>>n1;
for(i=0;i<n1;i++)
{
t[i].getdata();
}
for(i=0;i<n1;i++)
{
t[i].display();
}
break;
case 2 :
cout<<"\nEnter the name of person to search :";
cin>>n;
for(i=0;i<n1;i++)
{
t[i].search(n);
}
break;
case 3 :
cout<<"\nEnter the mobile number of person to search :";
cin>>pno;
for(i=0;i<n1;i++)
{
t[i].search(pno);
}
break;
case 4 :
cout<<"\nEnter the name of the city :";
cin>>c;
for(i=0;i<n1;i++)
{
t[i].searchcity();
}
break;
}
}while(ch!=5);
getch();
}