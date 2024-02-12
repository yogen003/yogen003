#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter a number ";
	cin>>a;
//	int fact(){
	long long int fact =1;
		for(int i=1;i<=a;i++){
			fact = fact *i;				
	}
	cout<<fact;
	return 0;
	}
