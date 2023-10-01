#include<iostream.h>
#include<conio.h>
class square
{
int s,ar;
public:
void getdata()
{
cout<<"\nEnter the side of the square :";
cin>>s;
ar=s*s;
cout<<"\nThe area of the square is :"<<ar;
}
friend void compare(class square, class rectangle);
};
class rectangle
{
int l,b,ar1;
public:
void getdata1()
{
cout<<"\nEnter the length of the rectangle :";
cin>>l;
cout<<"\nEnter the breadth of the recatngle :";
cin>>b;
ar1=l*b;
cout<<"\nThe area of the recatngle is :"<<ar1;
}
friend void compare(class square, class rectangle);
};
void compare(square s1,rectangle r1)
{
if(s1.ar>r1.ar1)
cout<<"\nThe area of square is bigger than the area of the rectangle";
else
cout<<"\nThe area of rectangle is bigger than the area of the square";
}
void main()
{
clrscr();
square s1;
rectangle r1;
s1.getdata();
r1.getdata1();
compare(s1,r1);
getch();
}