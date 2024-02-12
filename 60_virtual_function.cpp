//60. Write a C++ program to the working of virtual function. 
#include<iostream>
using namespace std;
class A{
	int x=5;
	public:
		virtual void display(){    // create virtual function 
			cout<<"squre of "<<x<<" is "<<x*x<<endl;
		}
};
class B:public A{ //create derived class b
	int y=10;
	public:
		 void display(){
			cout<<"square of "<<y<<" is = "<<y*y<<endl;
		}
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME :  "<<endl<<endl;
}
int main()
{
my_info();

A *a;
B b;
a = &b;
a->display();
b.display();

return 0;
}



