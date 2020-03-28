#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream.h>
  class array
  {
  public://declairation of members varaibles
    int arr[1000];//here is arr size 1000
    int size,result;//size is given by user to add how many no he want to add

  public://declaire and define member funtion
		   int summ_arry()
		   {
			  result=0;//result is store the addtion of arry
			 cout<<"Enter the Arry size\n";
			 cout<<"SIZE shuld not be greater than 1000\t";

		       cin>>size;

			for(int i=0;i<=size;i++)//value is ressved by user
			      {  cout<<"\n\n";
			       cin>>arr[i];
			       }
				i=0;
			     while(i<=size)//addtion process
			       {
				   int temp=arr[i];
				  // sum=sum+temp;
				  result=result+temp;
				   i++;
			       }
				return result;

	}



  } ;
void main()
{
  clrscr();
    int sum=0;

    array ar;//create a object of arry class
   sum=ar.summ_arry();//funtion calling with object
   cout<<"THE sum of arry\t="<<sum;
//printf("the sum of arry is= %d",sum);
   getch();

}