#include<iostream>
using namespace std;
class A{
	public:
		int a,c;
		void display(){
		    cout<<"Enter the value ";
			cin>>c;
			cout<<c<<endl<<a;
		}
};
int main(){
A b;
b.a=123456;
b.display();
return 0;
}
