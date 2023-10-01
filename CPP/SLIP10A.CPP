#include<iostream.h>
#include<conio.h>
class acc
{
int num;
float bal;
char type[20];
public:
void get();
void display();
};
void acc::get()
{
cout<<"\nEnter the account number :";
cin>>num;
cout<<"\nEnter the account type :";
cin>>type;
cout<<"\nEnter the balance :";
cin>>bal;
}
void acc::display()
{
cout<<"\nThe account number is :"<<num;
cout<<"\nThe account type is :"<<type;
cout<<"\nThe balance is :"<<bal;
}
void main()
{
acc *a;
int i,n;
clrscr();
cout<<"\nEnter the number of accounts you want to enter :";
cin>>n;
a=new acc[n];
for(i=1;i<=n;i++)
{
a[i].get();
}
for(i=1;i<=n;i++)
{
a[i].display();
}
getch();
}