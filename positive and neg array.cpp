//6. Take an array of 6 integers from the user and count how many of them are positive and how
//many are negative.
#include<iostream>
using namespace std;
int main()
{
	int num[6];
	cout<<"Enter 6 numbers: ";
	for(int i=0;i<6;i++){
	
	cin>>num[i];
}
	  cout << "\nPositive numbers: ";
    for (int i = 0; i < 6; i++) {
        if (num[i] > 0) {           // check positive
            cout<< " \n" << num[i] ;
        }
    }
                       
    cout << "\nNegative numbers: ";
    
    for (int i = 0; i < 6; i++) {
        if (num[i] < 0) {           // check negative
            cout << " \n"<<num[i];
        }
    }

    return 0;

}
