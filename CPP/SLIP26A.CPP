#include<iostream.h>
#include<conio.h>
int *a,i,n;
void getarray()
{
cout<<"\nEnter the size of array ";
cin>>n;
a=new int[n];
cout<<"\nEnter the array elements :";
for(i=0;i<n;i++)
{
cin>>a[i];
}
}
void putarray()
{
cout<<"\nThe array elements are :";
for(i=0;i<n;i++)
{
cout<<" "<<a[i];
}
}
void reverse()
{
cout<<"\nArray in reverse order is as follows :";
for(i=n-1;i>=0;i--)
{
cout<<" "<<a[i];
}
}
void main()
{
clrscr();
getarray();
putarray();
reverse();
getch();
}

