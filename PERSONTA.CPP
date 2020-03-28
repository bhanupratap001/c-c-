#include<conio.h>
#include<stdio.h>
void main()
{
int marks,a,b,c,d,e;
float prntg;
clrscr();
printf("Enter the marks of each subject\n\t");
scanf("%d%d%d%d%d",a,b,c,d,e);
marks=a+b+c+d+e;
marks=marks*100;
prntg=marks/500;
printf("Your Percentage is =%f",prntg,"'%'");
getch();

}
