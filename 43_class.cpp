//Write a C++ program to create class named "My_class", having two private member
// of integer type. And perform addition, multiplication, and subtraction operation inside the class body.
//Code : 
#include<iostream>
using namespace std;
class My_class {
int a,b;
public:
	void addition(int a,int b){
	cout<<"addition of "<<a<<" and "<<b<<" is = "<<a+b<<endl;
	}
	void subtraction(int a,int b){
	cout<<"subtraction of "<<a<<" and "<<b<<" is = "<<a-b<<endl;
	}
	void multiplication(int a,int b){
	cout<<"multiplication of "<<a<<" and "<<b<<" is = "<<a*b<<endl;
	}
	void division(int a,int b){
	cout<<"division of "<<a<<" and "<<b<<" is = "<<a/b<<endl;
	}
};
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 04-11-2023 "<<endl<<endl;

int a,b; 
cout<<"Enter two number "<<endl;
cin>>a>>b;
My_class yogen;
yogen.addition(a,b);
yogen.subtraction(a,b);
yogen.multiplication(a,b);
yogen.division(a,b);
  
  
    
return 0;
}


