#include<iostream.h>
#include<conio.h>
class Sumdata
{
public:
void intsum(int a,int b)
{
int c;
c=a+b;
cout<<"\nAddition of the two numbers is :"<<c;
}
void floatsum(float a,float b,float c)
{
float d;
d=a+b+c;
cout<<"\nThe addition of the three numbers is :"<<d;
}
void intsum(int a[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
cout<<"\nThe sum of all the elements is :"<<sum;
}
void accept(int a[],int n)
{
cout<<"\nEnter the elements :";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
}
};
void main()
{
int a,b,n,k[20];
float x,y,z;
Sumdata ob;
clrscr();
cout<<"\nEnter the first number :";
cin>>a;
cout<<"\nEnter the second number :";
cin>>b;
ob.intsum(a,b);
cout<<"\nEnter the first number :";
cin>>x;
cout<<"\nEnter the second number :";
cin>>y;
cout<<"\nEnter the third number :";
cin>>z;
ob.floatsum(x,y,z);
cout<<"\nEnter the numbers you want to enter :";
cin>>n;
ob.accept(k,n);
ob.intsum(k,n);
getch();
}
