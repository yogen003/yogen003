//53.	Write a C++ program to copy one object variable to another object using copy constructor.
#include<iostream>
using namespace std;
class A{
	int a;
	public :
    	A(int x){
	     a=x ;
		}
		A(A &y){
		a = y.a;
		}
		void display(){
			cout<<a<<endl;
		}
};

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 27-11-23 21:45 "<<endl<<endl;
}
int main()
{
my_info();
A x(10);
A y(x); // or A y =x;
x.display(); 
y.display();
return 0;
}

