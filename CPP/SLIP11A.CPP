#include<iostream.h>
#include<conio.h>
class Date
{
int d,m,y;
public:
Date()
{
d=1;
m=1;
y=2023;
}
Date(int dd,int mm,int yy)
{
d=dd;
m=mm;
y=yy;
}
void display()
{
switch(m)
{
case 1 :
cout<<d<<"-January-"<<y;
break;
case 2 :
cout<<d<<"-February-"<<y;
break;
case 3 :
cout<<d<<"-March-"<<y;
break;
case 4 :
cout<<d<<"-April-"<<y;
break;
case 5 :
cout<<d<<"-May-"<<y;
break;
case 6 :
cout<<d<<"-June-"<<y;
break;
case 7 :
cout<<d<<"-July-"<<y;
break;
case 8 :
cout<<d<<"-August-"<<y;
break;
case 9 :
cout<<d<<"-September-"<<y;
break;
case 10 :
cout<<d<<"-October-"<<y;
break;
case 11 :
cout<<d<<"-November-"<<y;
break;
case 12 :
cout<<d<<"-December-"<<y;
break;
default:
cout<<"You have entered wrong number";
}
}
};
void main()
{
int dd,mm,yy;
clrscr();
cout<<"\nDefault Date :";
Date d1;
d1.display();
cout<<"\nEnter the date :";
cin>>dd;
cout<<"\nEnter the month :";
cin>>mm;
cout<<"\nEnter the year :";
cin>>yy;
Date d2(dd,mm,yy);
d2.display();
getch();
}