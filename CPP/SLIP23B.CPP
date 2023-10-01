#include<iostream.h>
#include<conio.h>
class Mobile
{
public:
int p,q;
char m[40],com[40],col[20];
void accept()
{
cout<<"\nEnter the model :";
cin>>m;
cout<<"\nEnter the mobile comapny :";
cin>>com;
cout<<"\nEnter the color of the mobile :";
cin>>col;
cout<<"\nEnter the price of the mobile :";
cin>>p;
cout<<"\nEnter the quantity of mobile :";
cin>>q;
}
void display()
{
cout<<"\nThe model of mobile is :"<<m;
cout<<"\nThe mobile company is :"<<com;
cout<<"\nThe color of the mobile is :"<<col;
cout<<"\nThe price of the mobile is :"<<p;
cout<<"\nThe quantity of mobile is :"<<q;
}
};
void main()
{
int ch,sale,purc;
clrscr();
Mobile mo;
do
{
cout<<"\n1)To accept mobile details from user";
cout<<"\n2)To sale a mobile";
cout<<"\n3)To purchase a mobile";
cout<<"\nEnter your choice :";
cin>>ch;
switch(ch)
{
case 1 :
mo.accept();
mo.display();
break;
case 2 :
cout<<"\nEnter the number of mobiles to be sold :";
cin>>sale;
cout<<"\nThe number of mobiles to be sold are :"<<sale;
mo.display();
break;
case 3 :
cout<<"\nEnter the number of mobiles to be purchased :";
cin>>purc;
cout<<"\nThe number of mobiles to be purchased are :"<<purc;
mo.display();
break;
}
}while(ch!=4);
getch();
}


