//7. Take an array of 8 integers from the user. Write a program that prints only the even numbers from the array and also prints their count.
#include<iostream>
using namespace std ;
int main()
{
	int num[8] ,count=0 ;
	cout<<"Enter numbers: ";
	for(int i=0 ; i<8 ; i++)
	{
		cin>>num[i];
	}
	 for (int i= 0; i <8; i++) {
      if(num[i]%2==0)
      cout<<"\nEven numbers are:  "<<num[i];
     
    }
  count=count+1;
    return 0;
}
