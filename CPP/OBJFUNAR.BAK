//using object as a function argument
#include<iostream.h>
#include<conio.h>
class time
{
int h,m;
public:
void getdata()
{
cout<<"Enter the hours :";
cin>>h;
cout<<"Enter the minutes :";
cin>>m;
}
void putdata()
{
cout<<"\n Total time :"<<h<<"hours"<<m<<"minutes";
}
void sum(time T1,time T2)
{
h=(T1.m+T2.m)/60;
m=(T1.m+T2.m)%60;
h=h+(T1.h+T2.h);
}};
void main()
{
time T1,T2,T3;
clrscr();
T1.getdata();
T2.getdata();
T3.sum(T1,T2);
T1.putdata();
T2.putdata();
T3.putdata();
getch();
}