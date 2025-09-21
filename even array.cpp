//5. Write a program that stores the first 10 even numbers in an array and then prints them all.

#include<iostream>
using namespace std ;
int main()
{
	int even[10],num;
 for (int i = 0; i < 10; i++) {
        even[i] = num;  // store current even number
        num = num + 2;  // next even number
    }

    cout << " Even numbers: ";//print array
    for (int i = 0; i < 10; i++) {
        cout << "\n"<<even[i] ;
    }
return 0;
}
