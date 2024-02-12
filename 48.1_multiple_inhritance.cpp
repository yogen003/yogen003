//48. Write a C++ program to implement multiple inheritance. 
#include<iostream>
using namespace std;
class A  //base class first
{ 
 public: 
 	int x; 
 	void getx() 
 	{ 
 		cout << "enter value of x: "; 
 		cin >> x; 
    	}	 
}; 
class B  //base class second
{ 
 public: 
 	int y; 
 	void gety() 
 	{ 
 		cout << "enter value of y: "; 
		cin >> y; 
    	} 
}; 
class C : public A, public B  //C is derived from base class A and class B 
{ 
 public: 
 	void mul() 
 	{ 
 		cout << "multiplication is  = " << x * y; 
 		}		 
}; 

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 15-11-2023 00:05 "<<endl<<endl;
}
int main()
{
my_info();
 C obj1; //object of derived class C 
 obj1.getx(); 
 obj1.gety(); 
 obj1.mul(); 
 return 0; 
}

