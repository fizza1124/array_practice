/*3. Suppose you have an array of 5 numbers entered by the user. Write a program that checks
whether a given number (also entered by the user) is present in the array or not. If it is present,
display the position (index) where it is found, otherwise print a message saying it was not found*/
#include<iostream>
using namespace std ;
int main()
{
	int num[5] ,n ;//declaraion and initialization
	cout<<"Enter 5 numbers :";
	
	for(int i=0;i<5;i++)//input num
	{
		cin>>num[i];
	}
	cout<<"Enter a number ";
	cin>>n;
	 for (int i = 0; i < 5; i++) // checks each element
       {
       	
		 if (num[i] == n)
        cout << "  It is present at index " << i;
       else 
       cout<<"It was not present";
       break;
    }

	return 0;
}
