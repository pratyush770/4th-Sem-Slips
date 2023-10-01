#include<iostream.h>
#include<conio.h>
#include<string.h>
class MyString
{
char str1[30];
public:
void getdata()
{
cout<<"\nEnter the string :";
cin>>str1;
}
void putdata()
{
cout<<"\nThe string is :"<<str1;
}
MyString operator +(MyString a)
{
MyString s;
strcat(str1,a.str1);
strcpy(s.str1,str1);
return s;
}
};
void main()
{
clrscr();
MyString s1;
MyString s2;
MyString s3;
s1.getdata();
s2.getdata();
s3=s1 + s2;
s3.putdata();
getch();
}

