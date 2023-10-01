#include<iostream.h>
#include<conio.h>
class media
{
public:
virtual void accept()=0;
};
class np:public media
{
public:
char n_name[40];
char n_editor[40];
int price,nop;
void accept()
{
cout<<"\nEnter the name of the newspaper :";
cin>>n_name;
cout<<"\nEnter the name of the newspaper editor :";
cin>>n_editor;
cout<<"\nEnter the price of the newspaper :";
cin>>price;
cout<<"\nEnter the number of pages in the newspaper :";
cin>>nop;
}
void display()
{
cout<<"\nThe name of the newspaper is :"<<n_name;
cout<<"\nThe name of the newspaper editor is :"<<n_editor;
cout<<"\nThe price of the newspaper is :"<<price;
cout<<"\nThe number of pages in the newspaper are :"<<nop;
}};
class mg:public media
{
public:
char m_name[40];
char m_editor[40];
int p;
void accept()
{
cout<<"\nEnter the name of the magazine :";
cin>>m_name;
cout<<"\nEnter the name of the magazine editor :";
cin>>m_editor;
cout<<"\nEnter the price of the magazine :";
cin>>p;
}
void display1()
{
cout<<"\nThe name of the magazine is :"<<m_name;
cout<<"\nThe name of the magazine editor is :"<<m_editor;
cout<<"\nThe price of the magazine is :"<<p;
}};
void main()
{
np nn;
mg mm;
clrscr();
nn.accept();
nn.display();
mm.accept();
mm.display1();
getch();
}
