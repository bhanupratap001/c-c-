#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int c,i,d;
char name[]={'*','*','*','*','*','*','*','*','*','*'};
clrscr();
printf("Enter the String\t");
//scanf("%ch",&name);
for(i=0;i<=10;i++)
{
printf("%ch\n",name[i]);
}
getch();
}