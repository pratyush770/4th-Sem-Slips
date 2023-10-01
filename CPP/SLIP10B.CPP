#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
char cn[40];
class City
{
public:
int code,pop;
char cname[40];
void accept()
{
cout<<"\nEnter the city code :";
cin>>code;
cout<<"\nEnter the name of the city :";
cin>>cname;
cout<<"\nEnter the population of the city :";
cin>>pop;
}
void display()
{
cout<<"\nThe city code is :"<<setw(8)<<code<<endl;
cout<<"The name of the city is :"<<setw(8)<<cname<<endl;
cout<<"The population of the city is :"<<setw(8)<<pop<<endl;
}
void sort(City &c1,City &c2)
{
City ct;
if(c1.pop>c2.pop)
{
ct=c1;
c1=c2;
c2=ct;
}
}
};
void main()
{
int i,n,ch;
clrscr();
City c[40];
do
{
cout<<"\n1)Accept details of n cities";
cout<<"\n2)Display details of n cities in ascending order of population";
cout<<"\n3)Display details of a particular city";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
cout<<"\nEnter the number of cities :";
cin>>n;
for(i=0;i<n;i++)
{
c[i].accept();
c[i].display();
}
break;
case 2 :
for(i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
c[i].sort(c[i],c[j]);
}
c[i].display();
}
break;
case 3 :
cout<<"\nEnter the name of the city :";
cin>>cn;
for(i=0;i<n;i++)
{
if(strcmp(c[i].cname,cn)==0)
{
c[i].display();
}
}
break;
}
}while(ch!=4);
getch();
}
