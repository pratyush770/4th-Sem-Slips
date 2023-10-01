#include<iostream.h>
#include<conio.h>
class Matrix
{
int m[5][5],i,j,r,c;
public:
Matrix(int a,int b)
{
r=a;
c=b;
}
void getdata()
{
cout<<"\nEnter the matrix elements :";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>m[i][j];
}
}
cout<<endl;
}
void putdata()
{
cout<<"\nThe matrix elements are :\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<m[i][j]<<" ";
}
cout<<endl;
}
}
void transpose()
{
cout<<"\nThe transpose of matrix is :\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<m[j][i]<<" ";
}
cout<<endl;
}
}
~Matrix()
{}
};
void main()
{
int a,b;
clrscr();
cout<<"\nEnter the number of rows in the matrix :";
cin>>a;
cout<<"\nEnter the number of columns in the matrix :";
cin>>b;
Matrix ma(a,b);
ma.getdata();
ma.putdata();
ma.transpose();
getch();
}


