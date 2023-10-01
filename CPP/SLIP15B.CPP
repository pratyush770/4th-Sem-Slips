#include<iostream.h>
#include<conio.h>
class MyMatrix
{
int m[3][3],i,j;
public:
void getdata()
{
cout<<"\nEnter the matrix elements :";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>m[i][j];
}
}
cout<<endl;
}
void display()
{
cout<<"\nThe matrix elements are :";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
}
void operator -()
{
MyMatrix a;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a.m[i][j]=m[j][i];
}
}
a.display();
}
void operator ++()
{
MyMatrix a1;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
a1.m[i][j]=m[i][j]+1;
}
}
a1.display();
}
};
void main()
{
clrscr();
MyMatrix o1,o2;
o1.getdata();
o1.display();
-o1;
cout<<"\nIncrement by one :";
o2.getdata();
o2.display();
++o2;
getch();
}
