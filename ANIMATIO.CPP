#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
class animation
{
public:
char name[10];
int i;
	 void getname(void)
			   {
			   cout<<"Enter Youre Name\t ";
			   cin>>name;
			   clrscr();
			   }
	  void show(void)
			{
			int len;
			len=strlen(name);
			for(i=0;i<len;i++)
			{

			gotoxy(i,i+1);
			delay(1000);
			cout<<name[i];



			}
			cout<<"\nYoure Name Is=\t"<<name;


			}



} ;
void main(void)
{
clrscr();

animation m;
m.getname();
m.show();


getch();
}