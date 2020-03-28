#include<stdio.h>
#include<conio.h>
void sort(void);
void print(void);
void main()
     {
     int list[10]={2,1,9,5,0,3,6,8,7,4},i;
     clrscr();
    // void sort(void)
	      //{
		       for(i=0;i<=9;i++)
			    {

				     for(int j=0;j<=9;j++)
					 {
						if(list[j]>=list[j+1])
						  {
						    int temp=list[j+1];
						    list[j+1]=list[j];
						    list[j]=temp;
						  }

					   }



			    }
		//}

		   //void print(void)
				 // {
				    for(i=0;i<=9;i++)
					{
					   printf("%d\n",list[i]);





					}//end of print funtion
				   // }

//sort();
//print();
     getch();

     }