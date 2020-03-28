#include<conio.h>
#include<stdio.h>
void main()
{
int bs;
float hra,da,gs;
clrscr();
printf("Input Basic Salary\t");
scanf("%d",&bs);
hra=0.4;
da=0.2;
printf("HRA= %f\n",hra=bs*hra);
printf("DA= %f\n",da=bs*da);

gs=bs+hra+da;
printf("Gross Salary= %f\n",gs);
getch();
}