#include<iostream.h>
#include<conio.h>
class Number
{
int a,b,c;
public:
void accept()
{
cout<<"\nEnter the number :";
cin>>a;
}
void display()
{
cout<<"\nThe entered number is :"<<a;
}
void operator --()
{
b=a-1;
cout<<"\nThe number after decrementing is :"<<b;
}
void operator ++()
{
c=a+1;
cout<<"\nThe number after incrementing is :"<<c;
}
};
void main()
{
clrscr();
Number n;
n.accept();
n.display();
--n;
++n;
getch();
}


