#include<iostream.h>
#include<conio.h>
class Vector
{
public:
int size,*ptr;
Vector(int s1)
{
int i;
size=s1;
ptr=new int[size];
cout<<"\nEnter the elements of vector :";
for(i=0;i<size;i++)
{
cin>>ptr[i];
}
}
Vector(Vector &obj1)
{
size=obj1.size;
ptr=obj1.ptr;
}
void display()
{
int i;
cout<<"\nThe elements of vector are : (";
for(i=0;i<size;i++)
{
cout<<ptr[i]<<" ,";
}
cout<<ptr[size-1]<<")";
}
friend void uni(Vector v1, int s1,Vector v2,int s2)
{
int i,j,flag;
cout<<"\nUnion of vector is : (";
for(i=0;i<s1;i++)
{
cout<<v1.ptr[i]<<" ,";
}
for(j=0;j<s2;j++)
{
flag=0;
for(i=0;i<s1;i++)
{
if(v1.ptr[i]==v2.ptr[j])
{
flag=1;
break;
}
}
if(flag !=1)
{
cout<<v2.ptr[j]<<" ,";
}
}
cout<<")";
}
};
void main()
{
int s1,s2,ch;
clrscr();
cout<<"\nEnter the size of the first vector :";
cin>>s1;
cout<<"\nEnter the size of the second vector :";
cin>>s2;
Vector v1(s1),v2(s2);
Vector v3(v1);
v1.display();
v2.display();
uni(v1,s1,v2,s2);
getch();
}