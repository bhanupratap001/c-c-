#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float a;
printf("Enter a Floting point number\t");
scanf("%f",&a);
int b=a*100;
//printf("b=%d",b);
int first,last;
first=b/100;
last=b%100;

printf("first=%d",first);
printf("\nlast=%d",last);
getch();
}