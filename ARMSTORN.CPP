#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
     {
     clrscr();


	      int nm=371,qb=0,arm=0;
	      int tem =0;
		     while(nm>=1){
	      tem=nm%10;
	      int qb=tem*tem*tem;
	       arm=arm+qb;


	     cout<<arm<<"\n";

	     nm=nm/10;
	     }


	    getch();

     }