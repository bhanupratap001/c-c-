#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{

int data;
struct node *Lchild;
struct node *Rchild;
};
 typedef struct node node;
  node *root=NULL;
  node *insert(node *tree,long num);
  void preorder(node *tree);

      void main()
	   {
	      int digit;
	      clrscr();
	      puts("Insert a DIGIT");
	      scanf("%d",&digit);
	     root=insert(root,digit);
	     preorder(root);
	     getch();
	    }




 //Insert Module Defination
    node *insert(node *p,long digit)
	       {  int count=0,value;
		  if(p==NULL)
		    {
		      p=(node *)malloc(sizeof(node));
		      p->Lchild=p->Rchild=NULL;
		      printf("Enter value\t\t");
		      scanf("%d",&value);
		      p->data=value;count++;
		      }
		  else
		       if(count%2==0)
			  p->Lchild=insert(p->Lchild,digit);
		   else
		       p->Rchild=insert(p->Rchild,digit);
		       return(p);
	       } ///End OF Insert Module Deefination

//Defination of Preorder Module

void preorder(node *p)
     {
	if(p!=NULL)
	   {
	       printf("%d",p->data);
	       preorder(p->Lchild);
	       preorder(p->Rchild);
	   }



     }