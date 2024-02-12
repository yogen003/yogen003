//29. Write a C++ program to swap two values without using third variable.
#include<iostream>
using namespace std;
int main()
{
 	cout<<"NAME : YOGEN "<<endl;
	cout<<"MCA 1ST SEM "<<endl;
	cout<<"DATE : 01-11-2023 "<<endl<<endl;
  	int a, b;
	cout << "Enter two values to swap:" << endl;
	cout << "Enter the first value : ";
 	cin >> a;
    cout << "Enter the second value : ";
    cin >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // Swap the values
    a = a * b;
    b = a / b;
    a = a / b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}


