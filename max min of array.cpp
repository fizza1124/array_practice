/*1. You are given an array of 10 integers representing the marks of 10 students in a test. Your task is
to write a program that finds and prints the highest mark and the lowest mark from the array. Make
sure to clearly identify which one is the maximum and which one is the minimum.*/
#include<iostream>
using namespace std;
int main()
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
