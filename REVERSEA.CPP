#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
     {
     clrscr();
	int arry[]={10,5,6,8,3,9};
	for(int i=0;i<6;i++)
	   {
	   printf("\nArry Element is =%d",arry[i]);
	   }
	    int end=sizeof(arry)/2-1;
	    int s=0;
	    int temp;
	    printf("***\nsizeofArry %d",end+1);
	while(s<end)
	{


	    temp=arry[s];
	    arry[s]=arry[end];
	    arry[end]=temp;

	   s++;
	   end--;
	}



		for(i=0;i<6;i++)
		  {
		    printf("\n%d",arry[i]);
		  }
	    getch();
       }
