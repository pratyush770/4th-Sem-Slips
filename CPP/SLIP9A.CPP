#include<iostream.h>
#include<conio.h>
class MyArray
{
public:
int size,*ptr,sum;
MyArray(int no)
{
size=no;
ptr=new int[20];
cout<<"\nEnter the elements :";
for(int i=0;i<size;i++)
{
cin>>ptr[i];
}
}
void display()
{
cout<<"\nThe elements are :";
for(int i=0;i<size;i++)
{
cout<<ptr[i]<<" ";
}
}
void n_sum()
{
sum=0;
for(int i=0;i<size;i++)
{
sum=sum+ptr[i];
}
cout<<"\nThe sum of the elements is :"<<sum;
}
~MyArray()
{}
};
void main()
{
int n;
clrscr();
cout<<"\nEnter the size of array :";
cin>>n;
MyArray m(n);
m.display();
m.n_sum();
getch();
}