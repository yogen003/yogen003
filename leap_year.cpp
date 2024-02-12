#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter year ";
	cin>>a;
	if (a % 400 == 0){
		cout<<"leap year"<<endl;
		}
	else if (a % 100 == 0){
		cout<<"not leap year"<<endl;
	}
	else if (a % 4 == 0){
		cout<<"leap year"<<endl;
	}
	else 
	 	cout<<a<<"is not leap year ";
return 0;
	
}
