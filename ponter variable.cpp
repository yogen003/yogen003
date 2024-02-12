#include<iostream>
using namespace std;
int main (){
	int a=10;
	int *b;
	 b = &a;
	
	cout<<"value of a is "<<&a;
	cout<<"\nvalue of a is "<< *b;
	cout<<"\nvalue of b is "<<b;
	return 0;
}
