#include<conio.h>
#include<stdio.h>
void main()
{
int km;
float metres,inch,centimetres,foot;
clrscr();
printf("Enter Distance in Kilo Metres\t");
scanf("%d",&km);
metres=km*1000;
printf("your distance into metres=%f\n",metres);
centimetres=km*100000;
printf("Your Distance into centimetres=%f\n",centimetres);
inch=km*39370.079;
printf("Your Distance into inches=%f\n",inch);
foot=km*3280.84;
printf("Your Distance into foot=%f\n",foot);


getch();
}