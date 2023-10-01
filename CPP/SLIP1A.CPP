#include<iostream.h>
#include<conio.h>
class number
{
int a,b;
public:
inline int max(int a,int b)
{
return(a>b)?a:b;
}
inline int min(int a,int b)
{
return(a<b)?a:b;
}};
void main()
{
number n;
int a,b,c;
clrscr();
cout<<"Enter the first number :";
cin>>a;
cout<<"\nEnter the second number :";
cin>>b;
c=n.max(a,b);
cout<<"\nMaximum number is :"<<c;
c=n.min(a,b);
cout<<"\nMinimum number is :"<<c;
getch();
}
