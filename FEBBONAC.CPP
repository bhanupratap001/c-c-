#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
     {
     clrscr();
    int  arr[8],current;
    cout<<"febbonacci Series";
    arr[0]=0;
    arr[1]=1;
    current=1;
    for(int i=current;i<8;i++)
	{
	    arr[current+1]=arr[current-1]+arr[current];
	    current=current+1;
	}

       for(i=0;i<8;i++)
	  {
	    cout<<"\n"<<arr[i];



	  }
	  getch();

     }