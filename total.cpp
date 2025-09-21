//11. Suppose you store the marks of 5 students in an array. Write a program that calculates an	prints the total marks, average marks, and highest marks among them.
#include<iostream>
using	namespace	std;
int	main()
{
	int	marks[5]={10,20,30,40,50},total=0,avg,max=0;
	
	for(int	i;i<=5;i++)
	{
		total=total+marks[i];//calculate	total
	}
	cout<<"Total:	"<<total;
		
	for(int	i;i<=5;i++)
	{
		avg=total/5;
	}
	cout<<"\nAverage:	"<<avg;
		
	for(int	i=0;i<5;i++)//caculate	average
	{
	if(marks[i]>max)//calculate	highest	marks
	max=marks[i];
	}
	cout<<"\nHighestmarks:	"<<max;
	
	
	return	0;
}
