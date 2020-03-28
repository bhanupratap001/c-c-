#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
     {clrscr();
     int n,i,sum=0;
     cout<<"Enter a num";
     cin>>n;
     for(i=1;i<n;i++)
	{

	 sum+=i*i;

	}


	cout<<"Sum of Squre is ="<<sum;
	getch();

     }