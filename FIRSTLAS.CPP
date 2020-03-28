#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
//float num;int first,last;
int num,first,last;
cout<<"enter a number";
cin>>num;
first=num/100;
last=num%100;
cout<<"\nFirstdigit=\t"<<first<<"\tlast\t="<<last;
getch();
}