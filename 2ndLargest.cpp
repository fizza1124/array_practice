//8. You have an array of 10 integers. Write a program to find the second largest number in the array.(Do not sort the array; try to solve it using logic with comparisons.)
#include<iostream>
using	namespace	std;
int	main()
{
	int	n[10],max,secondMax;
			
	cout<<"Enter 10 numbers :  ";
	for(int i=0 ; i <10 ; i++)

	cin>> n[i];
			
for (int i = 1; i < 10; i++) {
        if (n[i] > max) 
            max = n[i]; //highest number
           
        }
        
  
        return	0;
}

