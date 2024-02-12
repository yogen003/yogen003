#include<iostream>
using namespace std;
int main(){
	int *p = new int();
	*p = 10;
	cout<<"before delete value of p is "<<*p<<"\nAnd address is "<<p<<endl;
	delete p;
	cout<<"after delete value of p is "<<*p<<"\nafter delete address is "<<p<<endl;
	cout<<endl;
	
	return 0;
}
