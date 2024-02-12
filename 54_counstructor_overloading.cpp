//54.	Write a C++ program to perform constructor overloading having three constructor within a class.
#include<iostream>
using namespace std;
class cons {
	int a,b,c;
	public:
		cons(int x=10,int y=20){ // counstrutor with default argument 
			a = x;
			b = y;
			cout<<"1st constructor value is:\n"<<a<<endl<<b<<endl;	
		}
		cons(int x,int y,int z){ // parameterized counstructor
			a = x;
			b = y;
			c = z;
			cout<<"2nd constructor value is:\n"<<a<<endl<<b<<endl<<c<<endl;	
		}
		cons(float x,float y,float z){  // parameterized counstructor
			a = x;
			b = y;
			c = z;
			cout<<"3rd constructor value is:\n"<<a<<endl<<b<<endl<<c<<endl;	
		}
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 27-11-23 22:47 "<<endl<<endl;
}
int main()
{
my_info();
cons c;
cons d(99,98,97);
cons e(11,22,33);
return 0;
}



