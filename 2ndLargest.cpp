
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

