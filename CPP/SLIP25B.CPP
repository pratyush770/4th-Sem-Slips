#include<iostream.h>
#include<conio.h>
#include<string.h>
char s_date[10];
class Travel
{
public:
int tno;
char cname[30];
void accept()
{
cout<<"\nEnter the travel number :";
cin>>tno;
cout<<"\nEnter the company name :";
cin>>cname;
}
void display()
{
cout<<"\nThe travel number is :"<<tno;
cout<<"\nThe name of the company is :"<<cname;
}
};
class Route : public Travel
{
public:
int rid;
char source[30],dest[30];
void accept1()
{
cout<<"\nEnter the route id :";
cin>>rid;
cout<<"\nEnter the source :";
cin>>source;
cout<<"\nEnter the destination :";
cin>>dest;
}
void display1()
{
Travel::display();
cout<<"\nThe route id is :"<<rid;
cout<<"\nThe source is :"<<source;
cout<<"\nThe destination is :"<<dest;
}
};
class Reservation:public Route
{
public:
int nos,fare;
char t_cl[30],td[30];
void accept2()
{
cout<<"\nEnter the number of seats :";
cin>>nos;
cout<<"\nEnter the travel class :";
cin>>t_cl;
cout<<"\nEnter the fare :";
cin>>fare;
cout<<"\nEnter the travel date :";
cin>>td;
}
void display2()
{
cout<<"\nThe number of seats are :"<<nos;
cout<<"\nThe travel class is :"<<t_cl;
cout<<"\nThe fare is :"<<fare;
cout<<"\nThe travel date is :"<<td;
}
void show()
{
if (strcmp(td,s_date)==0)
{
display();
display1();
display2();
}
}
};
void main()
{
int i,n,ch;
clrscr();
Reservation re[10];
do
{
cout<<"\n1)Accept details of 'n' reservations";
cout<<"\n2)Display details of all reservations";
cout<<"\n3)Display reservation details of a specified date";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1:
cout<<"\nEnter the number of reservations :";
cin>>n;
for(i=0;i<n;i++)
{
re[i].accept();
re[i].accept1();
re[i].accept2();
}
break;
case 2:
cout<<"\nThe details of reservation are as follows :";
for(i=0;i<n;i++)
{
re[i].display();
re[i].display1();
re[i].display2();
}
break;
case 3:
cout<<"\nEnter the date :";
cin>>s_date;
for(i=0;i<n;i++)
{
re[i].show();
}
break;
}
}while(ch!=4);
getch();
}


