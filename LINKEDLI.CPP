#include<iostream.h>
#include<conio.h>
class Node
{
public:
int val;
Node *next;
};

class Linkedlist
{
public:
Node head;
Node temp;
public:
void addnode(int b)
     {


     if(head.next==0)
		 {
		   Node n;
		   n.val=b;
		   n.next=0;
		   head=n;
		 }

	   else
	   {


	   }
     }


};


void  main()
{
  clrscr();
    Linkedlist li;
    li.addnode(30);

     getch();
}