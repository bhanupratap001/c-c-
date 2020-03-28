#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char name[]="kalisman";
char *ptr;
ptr=name;
int i=0;
while(i<=7)
{
printf("%c",*ptr);
ptr++;
i++;
}
getch();

}
