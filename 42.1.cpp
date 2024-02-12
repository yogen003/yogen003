#include<iostream>
using namespace std;
class A{
	int a,b,c;
	public:
		 void get();
		 int largest();
		 void display();
		 
};
void A :: get(){
	cout<<"enter three number ";
	cin>>a>>b>>c;
	cout<<"no is "<<a<<endl<<b<<endl<<c<<endl;
}
int A :: largest(){
	int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
	return max;
}
void A :: display(){
	cout<<"max is "<<largest();
}
int main()
{
A n;
n.get();
n.display();

return 0;
}

