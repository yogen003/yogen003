//program 58.Write a c++ program to illustrate functioning of this point
#include<iostream>
using namespace std;
class A{
	int a,b;
public:
		void GetData(int a,int b){
			this->a=a*b;
	    	this->b=a+b;
		}
		void Display(){
			cout<<"multiplication is : "<<a<<endl;
			cout<<"addition is : "<<b<<endl;
		}
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 10-12-23 20:25 "<<endl<<endl;
}
int main()
{
my_info();
A a;
a.GetData(10,15);
a.Display();
return 0;
}

