//55.	Write a C++ program to allocate and deallocate memory at run time for a variable.
#include<iostream>
using namespace std;
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 27-11-23 23:46 "<<endl<<endl;
}
int main()
{
	my_info();
	int *p = new int();
	*p = 10;
	cout<<"Value of p is "<<*p<<"\nAnd address of p is "<<p<<endl;
	delete p;
	cout<<"After delete value of p is "<<*p<<"\nAnd address is "<<p<<endl;
	cout<<endl;
	
return 0;
}
