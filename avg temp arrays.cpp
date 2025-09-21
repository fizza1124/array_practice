/*2. Imagine you are storing the daily temperature readings of a city for 7 days inside an array. Write
a program that calculates the average temperature of the week and then prints the result.
(Remember that the average is the sum of all elements divided by the total number of elements.)*/
#include<iostream>
using namespace std;
int main()
{
	float temp[7], avg,sum=0 ;//declaration and initialization
	cout<<"Enter the temperature: ";
	
	for(int i=0 ; i<7 ; i++)//input temp
	{
	
		cin>>temp[i];
		 sum=sum+temp[i];//calculate sum
		 
	 }
		 
		avg = sum/ 7;//calculating average
		cout<<"Average is :"<<avg;
		
		return 0;
}
