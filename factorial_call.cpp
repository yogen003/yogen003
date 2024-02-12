#include<iostream>
using namespace std;
int main(){
	int i =1,n,result =1;
	cout<<"enter no ";
	cin>>n;
	while (i<=n){
		result *= i;
		i++;
	}
	cout<<result;
	return 0;
}
