#include<iostream.h>
#include<conio.h>
#include<stdio.h>

class square
{
	//member variable access mode
       public:double n;
     private:double result;//member variable declairation

//member method acces mode
public: void getdata()//declairation and defination of method  to take input from user
		{
		  cout<<"Enter a nomber to find out the Square and no shuld not be 0 or less than \t";
		  cin>>n;

		}

private: void find_square()
		 {
		  result=n*n;
		 }

public:void show_square()
		 {
		  find_square();
		cout<<"The Square of "<<n<< "is =\t"<<result;

		 }





};//close calss body


   void main()
	     {
	     clrscr();
	       square sq;//create a object of square class
	       sq.getdata();//funtion calling with object
	      // sq.find_square();
	       sq.show_square();
	       getch();

	     }


