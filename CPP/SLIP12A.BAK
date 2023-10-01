#include<iostream.h>
#include<conio.h>
class product
{
int id,qty,p;
char n[40];
static int cnt;
public:
void getdata()
{
cout<<"\nEnter the product id :";
cin>>id;
cout<<"\nEnter the product name :";
cin>>n;
cout<<"\nEnter the quantity :";
cin>>qty;
cout<<"\nEnter the product price :";
cin>>p;
cnt++;
}
void display()
{
cout<<"\nThe product id is :"<<id;
cout<<"\nThe name of the product is :"<<n;
cout<<"\nThe quantity of the product is :"<<qty;
cout<<"\nThe price of the product is :"<<p;
}
static void nob()
{
cout<<"\nNumber of objects created for class are :"<<cnt;
}
};
int product::cnt;
void main()
{
int i,n;
clrscr();
product p1[10];
cout<<"\nEnter the number of products :";
cin>>n;
for(i=0;i<n;i++)
{
p1[i].getdata();
}
for(i=0;i<n;i++)
{
p1[i].display();
}
product::nob();
getch();
}