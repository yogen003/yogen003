//61. Write a C++ program to the working of pure virtual function. 
#include<iostream>
using namespace std;
class A {
	public:
		int a,b;
		void GetData(){
			cout<<"Enter the length ";
			cin>>a;
			cout<<"Enter the breadth ";
			cin>>b;
		}
		virtual void area()=0;  //declaring pure virtual function 
};
class B : public A{
	public:
    	void area(){     //pure virtual function define in derived class
			cout<<"Area of rectangle is "<<a*b;
		}
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 10-12-23 12:38 "<<endl<<endl;
}
int main()
{
my_info();
//A a  //we can not create an object of class A because class A is a now abstract class
A *ptr;
B b;
ptr = &b;
ptr->GetData();
ptr->area();
//b.GetData();
//b.area();
return 0;
}

