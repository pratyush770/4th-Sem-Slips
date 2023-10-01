#include<iostream.h>
#include<conio.h>
class Cuboid
{
public:
float l,b,h,v,sa;
void set_values(float a,float d,float e)
{
l=a;
b=d;
h=e;
cout<<"\nEnter the length of the cuboid :";
cin>>l;
cout<<"\nEnter the breadth of the cuboid :";
cin>>b;
cout<<"\nEnter the height of the cuboid :";
cin>>h;
}
void get_values()
{
cout<<"\nThe length of the cuboid is :"<<l;
cout<<"\nThe breadth of the cuboid is :"<<b;
cout<<"\nThe height of the cuboid is :"<<h;
}
inline float volume()
{
v=l*b*h;
cout<<"\nThe volume of the cuboid is :"<<v;
}
inline float surface_area()
{
sa=(l*b)+(b*h)+(l*h)+(l*b)+(b*h)+(l*h);
cout<<"\nThe surface area of the cuboid is :"<<sa;
}
};
void main()
{
int a,d,e;
clrscr();
Cuboid c;
c.set_values(a,d,e);
c.get_values();
c.volume();
c.surface_area();
getch();
}
