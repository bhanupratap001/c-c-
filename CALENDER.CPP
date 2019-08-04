#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class calender
{
public:
//int date[30],i;
//char day[7][4];
public:
void insertdate(void)
{
int j=0,date[31],i,cntr=7;
char day[8][4]={"NULL","sun","mun","tue","wed","thu","fri","sat"};
 for(i=0;i<31;i++)
 {
   j++;
   date[i]=j;
  }
       /*	 for(i=1;i<8;i++)
	    {
	    cout<<day[i]<<"\t";
	    }
	    cout<<"\n";

		    for(i=0;i<31;i++)
			  {
			     cout<<date[i]<<"\t";
			    if(date[i]==cntr){cout<<"\n";cntr=cntr+7;}

			   }                                          */

int mnth,dt;
cout<<"\n"<<"Enter the Month Name";
cin>>mnth;
//cout<<"\n"<<"Enter the Date";
//cin>>dt;
//dt=dt%7;
switch(mnth)
{
case 1:{//cout<<" JAN  "<<"  "<<day[dt];break;}
//cout<<"Date="<<dt;

	 for(i=1;i<8;i++)
	    {
	    cout<<day[i]<<"\t";
	    }
	    cout<<"\n";

		    for(i=0;i<31;i++)
			  {
			     cout<<date[i]<<"\t";
			    if(date[i]==cntr){cout<<"\n";cntr=cntr+7;}

			   }
			   break;
			   default:{cout<<"roung mounth"; break;}
}

 case 2:
 {      int fmnt=1;
	 for(i=1;i<8;i++)
	    {
	    cout<<day[i]<<"\t";
	    }
	    cout<<"\n";

		    for(i=32;i<60;i++)
			  {   date[i]=fmnt;
			     cout<<date[i]<<"\t";
			     fmnt++;
			    if(date[i]==cntr){cout<<"\n";cntr=cntr+7;}

			   }
			   break;
 //cout<<"FAB"<<" "<<day[dt];break;
 }

 }

 }

};
   void main(void)
   {
   clrscr();
   calender c;
   c.insertdate();
   getch();
   }