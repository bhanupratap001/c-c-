#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],i,sum=0,occrn=0,j;
clrscr();
printf("Enter a arry value in ");
for(i=0;i<=5;i++)
    {
      scanf("%d",&arr[i]);
    }

    for(i=0;i<=5;i++)
	{
	    if(arr[i]%2==0)
		     {
		      sum=sum+arr[i];
		      occrn++;
		       }
	   }
	   printf("Sum of Eeven Value =\t%d\n",sum);
	    printf("Sum of Eeven  occrn\n%d",occrn);
	   getch();
}

