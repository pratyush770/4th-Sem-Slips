#include<iostream.h>
#include<conio.h>
class MyMatrix
{
int i,j,a[3][3];
public:
void getdata()
{
cout<<"\nEnter the matrix elements :";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>a[i][j];
}
}
}
void display()
{
cout<<"\nThe matrix elements are :";
for(i=0;i<3;i++)
{
cout<<endl;
for(j=0;j<3;j++)
{
cout<<" "<<a[i][j];
}
}
}
MyMatrix operator -(MyMatrix p)
{
MyMatrix r;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
r.a[i][j]=a[i][j]-p.a[i][j];
}
}
r.display();
}
};
void main()
{
MyMatrix m,n,s;
clrscr();
m.getdata();
m.display();
n.getdata();
n.display();
s=m-n;
getch();
}

