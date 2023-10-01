#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class Product
{
public:
int pno,price;
char pname[40];
void accept()
{
cout<<"\nEnter the product number :";
cin>>pno;
cout<<"\nEnter the product name :";
cin>>pname;
cout<<"\nEnter the product price :";
cin>>price;
}
};
class Discount:public Product
{
public:
int disc;
void accept1()
{
cout<<"\nEnter the discount :";
cin>>disc;
}
void display()
{
cout<<"\nThe product number is :"<<pno;
cout<<"\nThe name of the product is :"<<pname;
cout<<"\nThe price of the product is :"<<price;
cout<<"\nThe discount is :"<<disc<<"%";
}
void bill()
{
int discnt,total;
discnt=(disc*price)/100;
total=price-discnt;
cout<<"\nTotal bill is :"<<setw(10)<<setfill('*')<<total;
}
};
void main()
{
int i,n,q;
clrscr();
Discount d;
cout<<"\nEnter the number of products :";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nEnter the quantity of product :";
cin>>q;
d.accept();
d.accept1();
cout<<"\nThe quantity of product is :"<<q;
d.display();
d.bill();
}
getch();
}

