//same as slip30a
#include<iostream.h>
#include<conio.h>
class Float_Array;
class Integer_Array
{
public:
int size[5],i,sum;
void accept()
{
cout<<"\nEnter the array elements :";
for(i=0;i<5;i++)
{
cin>>size[i];
}
}
void display()
{
sum=0;
cout<<"\nThe array elements are :";
for(i=0;i<5;i++)
{
cout<<" "<<size[i];
}
for(i=0;i<5;i++)
{
sum=sum+size[i];
}
//cout<<"\nThe sum of array elements is :"<<sum;
}
friend void average(Integer_Array,Float_Array);
};
class Float_Array
{
public:
float size1[5],i1,sum1;
void accept1()
{
cout<<"\nEnter the array elements :";
for(i1=0;i1<5;i1++)
{
cin>>size1[i1];
}
}
void display1()
{
sum1=0;
cout<<"\nThe array elements are :";
for(i1=0;i1<5;i1++)
{
cout<<" "<<size1[i1];
}
for(i1=0;i1<5;i1++)
{
sum1=sum1+size1[i1];
}
//cout<<"\nThe sum of array elements are :"<<sum1;
}
friend void average(Integer_Array,Float_Array);
};
void average(Integer_Array ia,Float_Array fa)
{
int avg;
avg=((ia.sum+fa.sum1)/2);
cout<<"\nThe average of 2 arrays is :"<<avg;
}
void main()
{
clrscr();
Integer_Array ia;
Float_Array fa;
ia.accept();
ia.display();
fa.accept1();
fa.display1();
average(ia,fa);
getch();
}