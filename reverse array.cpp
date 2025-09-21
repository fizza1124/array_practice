//4. Create an array of size 5 and print all its elements in reverse order.
#include<iostream>
using namespace std;
int main()
{
	int num[5] , temp;
	cout<<"Enter 5 numbers: ";
	for(int i;i<5 ; i++){
		cin>>num[i];
	}
	for (int i = 0; i < 5 / 2; i++) {
      temp = num[i];
        num[i] = num[5 - 1 - i];//exchange the array num
        num[5 - 1 - i] = temp;
    }
    
    for (int i = 0; i < 5; i++) {
        cout <<num[i] ;//print reverse array
    }
	return 0;
}
