#include<iostream.h>
#include<conio.h>
#include<string.h>
char uni[20];
int yr;
void detail(char[]);
void detail(int);
class College
{
public:
int cid,eyr;
char cname[30],uname[30];
void accept()
{
cout<<"\nEnter the college id :";
cin>>cid;
cout<<"\nEnter the college name :";
cin>>cname;
cout<<"\nEnter the establishment year :";
cin>>eyr;
cout<<"\nEnter the university name :";
cin>>uname;
}
void display()
{
cout<<"\nThe college id is :"<<cid;
cout<<"\nThe name of the college is :"<<cname;
cout<<"\nThe establishment year is :"<<eyr;
cout<<"\nThe name of the university is :"<<uname;
}
void detail(char uni[])
{
if(strcmp(uname,uni)==0)
{
display();
}
}
void detail(int yr)
{
if(eyr==yr)
{
display();
}
}
};
void main()
{
int i,n,ch;
clrscr();
College c[20];
do
{
cout<<"\n1)To accept 'n' College details";
cout<<"\n2)To display College details of a specified university";
cout<<"\n3)To display College details according to a specified establishment year";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of colleges :";
cin>>n;
for(i=0;i<n;i++)
{
c[i].accept();
c[i].display();
}
break;
case 2 :
cout<<"\nEnter the name of the university :";
cin>>uni;
for(i=0;i<n;i++)
{
c[i].detail(uni);
}
break;
case 3 :
cout<<"\nEnter the establishment year :";
cin>>yr;
for(i=0;i<n;i++)
{
c[i].detail(yr);
}
break;
}
}while(ch!=4);
getch();
}

