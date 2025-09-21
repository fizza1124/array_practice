//14. You are given an array of 10 integers entered by the user. Write a program that finds the largest	and smallest numbers in the array and prints both.
#include<iostream>
using	namespace	std;
int	main()
{
		int marks[10] , max, min;//declaration of array
		
	cout<<"Enter marks of 10 students: ";
	for(int i=0 ; i <10 ; i++)

	cin>> marks[i];
	
	for (int i = 1; i < 10; i++) {
        if (marks[i] > max) 
            max = marks[i]; //highest mark
 
        if (marks[i] < min) 
            min = marks[i]; //lowest mark
    }
    
    cout<<"Highest marks is :"<<max;
    cout<<"\n Lowest marks is :"<<min;
    
	return 0;
	
}
