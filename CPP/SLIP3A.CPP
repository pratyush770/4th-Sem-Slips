#include<iostream.h>
#include<conio.h>
void swap(int *,int *);
void swap(int *x,int *y)
{
int t;
t=*x;
*x=*y;
*y=t;
cout<<"\nThe interchanged value is :"<<*x;
cout<<"\nThe interchanged value is :"<<*y;
}
void main()
{
int a,b;
clrscr();
cout<<"\nEnter the first number :";
cin>>a;
cout<<"\nEnter the second number :";
cin>>b;
swap(&a,&b);
getch();
}