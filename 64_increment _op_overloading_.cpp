//64. Write a C++ program to illustrate unary operator overloading on increment operator by using 
//member function.

#include<iostream>
using namespace std;
class yogen{
	int a,b;
	public:
		yogen(int x){
			a=x;
			cout<<"Before increment value of a is "<<a<<endl;	
		}
		void operator ++(){
			a=++a;
			cout<<"After increment value of a is "<<a<<endl;
		}
};

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 10-12-2023 00:05 "<<endl<<endl;
}
int main()
{
my_info();
yogen y(10);
++y;
return 0;
}

