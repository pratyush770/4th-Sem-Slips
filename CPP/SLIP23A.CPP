#include<iostream.h>
#include<conio.h>
class Number
{
public:
int a,b,c;
float m;
void accept()
{
cout<<"\nEnter the first number :";
cin>>a;
cout<<"\nEnter the second number :";
cin>>b;
cout<<"\nEnter the third number :";
cin>>c;
}
inline int mean()
{
m=((a+b+c)/3);
cout<<"\nThe mean of the three numbers is :"<<m;
}
inline int median()
{
if(a>b && a<c)
cout<<"\nThe median is :"<<a;
else if(b>a && b<c)
cout<<"\nThe median is :"<<b;
else
cout<<"\nThe median is :"<<c;
}
inline int mode()
{
if(a==b || a==c)
cout<<"\nThe mode is :"<<a;
else if(b==a || b==c)
cout<<"\nThe mode is :"<<b;
else
cout<<"\nThe mode is :"<<c;
}
};
void main()
{
clrscr();
Number n;
n.accept();
n.mean();
n.median();
n.mode();
getch();
}