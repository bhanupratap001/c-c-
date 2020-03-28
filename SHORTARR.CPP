#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int arr[5],i,var,j,swap=1;
clrscr();
cout<<"Enter a Arry no\n\t";
for(i=0;i<=5;i++)
		{
		cin>>arr[i];
		}

			      /*	for(i=0;i<5;i++)
				{
				       if(i==5)
					 {
					  break;
					 }

					    if(arr[i]<arr[i+1])
					      {
					       int var=arr[i];
					       arr[i]=arr[i+1];
					       arr[i+1]=var;
					       i=0;
					       }
				  }*/ //else{break;}





		       //	    for(i=0;i<=5;i++)
					       //	{

					    for(j=0;j<5;j++)
					    {

					   if(j==6){break;}


					     if(arr[j]>arr[j+1])
					     {
					     var=arr[j];
					     arr[j]=arr[j+1];
					     arr[j+1]=var;
					     j=0;

					   //  cout<<"hmm\n\t"<<arr[i];
					     }
					     }


					       //	}  */
						cout<<"after short arry =\n\n" ;
						for(i=0;i<=5;i++)
						{
					      cout<<"\n\n"<<arr[i];
						}
				getch();
}