#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class villg
{
int population,male, female,gn;
char gender,fname,malename,name[10],education[10];
public:
void addPreson(void);
void DELETE(void);
void Show(void);
};

void main()
{
clrscr();
villg obj;
int ch;
cout<<"\t\tWelcome In Village Management System\n ";
cout<<"\n\nPress the Number Which You Want To Do \n";
cout<<"1.ADDPreson 2.Show\t";
cin>>ch;
switch(ch)
{
case 1:{obj.addPreson();}
}
obj.Show();
getch();
}
void villg::addPreson(void)
{
cout<<"\t\tEnter the Name of Preson\t";
cin>>name;
cout<<"\t\tEnter The Gender OfPreson\t";
cin>>gender;
cout<<"\t\tEnter The Education\t";
cin>>education;
//population++;
//if(gn==f){famale++;}else{male++;}
//if(educated=='y'){educated++;}else{uneducated++;}
}
   void villg::Show(void)
   {
   clrscr();
    cout<<"Name Of Preson\t"<<name;
    cout<<"\n\nGender Of Preson\t"<<gender;
    cout<<"\n\nEducation Of Preson\t"<<education;
   }