#include<iostream.h>
#include<conio.h>
class Dynamic
{
int *ptr,n,i;
public:
Dynamic()
{
cout<<"Enter the size of the array :";
cin>>n;
ptr=new int[40];
for(i=0;i<n;i++)
{
cin>>ptr[i];
}
}
void number()
{
cout<<"\nThe even elements are :";
for(i=0;i<n;i++)
{
if(ptr[i]%2==0)
{
cout<<ptr[i]<<" ";
}
}
cout<<"\nThe odd elements are :";
for(i=0;i<n;i++)
{
if(ptr[i]%2!=0)
{
cout<<ptr[i]<<" ";
}
}
}
~ Dynamic()
{}
};
void main()
{
clrscr();
Dynamic d1;
d1.number();
getch();
}
