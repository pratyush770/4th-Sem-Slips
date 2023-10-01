#include<iostream.h>
#include<conio.h>
class Complex
{
public:
int real,imag;
Complex()
{
cout<<"\nEnter the real number :";
cin>>real;
cout<<"\nEnter the imaginary number :";
cin>>imag;
}
void display()
{
cout<<"\nThe complex number is :"<<real<<"+"<<"i"<<imag;
}
friend int sum(Complex,Complex);
};
int sum(Complex c1,Complex c2)
{
int c3,c4;
c3=c1.real+c2.real;
c4=c1.imag+c2.imag;
cout<<"\nAddition of two complex numbers is :"<<c3<<"+"<<"i"<<c4;
}
void main()
{
clrscr();
Complex c1,c2;
c1.display();
c2.display();
sum(c1,c2);
getch();
}


