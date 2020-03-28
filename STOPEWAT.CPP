#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
void Fun(void)
    { int h=0,m=0,s,i;
     char val;
      clrscr();
      while(val!='x')
		{  val=getch();    //BodyOfWhileLoop
	   for(s=0;s<=60;s++)
       {
	 printf("Seconds=%d\tMinuts=%d\thours=%d",s,m,h);
	 delay(1000);
	 clrscr();
	 if(s>=60)
	   {
	     m=m+1;
	     delay(1000);
	     clrscr();
	     s=0;
	   printf("Second=%d\tMinuts=%d\tHours=%d",s,m,h);
	   if(m>3){break;}
	  }//CloseIfBlock
	 if(m>=60)
	   {
	    h=h+1;

	    printf("Hours=%d\n\t",h);
	   }//2ndIfBlock
       }//CloseForLoop

    }//CloseWhileLoop
     }//CloseFuntion

int stop(void)
     {
       char x=getch()
       if(x==''x)
	 {
	  return 0;
	 }//ifBlock

     }//stopFuntion



void main()
    {

	printf("Press S For Start Stopwatch");
    val=getchar();
	if(val=='s')
	  {       printf("Press X For Stop");
		  Fun();
	  }//Ifblock
	else
	  {
	   printf("Thanku");
	  }//ElseBlock

   getch();
    }//MainMethod