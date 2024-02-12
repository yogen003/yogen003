//50.	Write a C++ program to initialize three integer values through constructor using parameter.
#include<iostream>
using namespace std;
class Number{
	int a,b,c;
	public:
		Number(int x,int y,int z){
		a = x;
		b = y;
		c = z;
		cout<<"a is = "<<a<<"\nb is = "<<b<<"\nc is = "<<c;	
		}
};
void myinfo(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 23-11-23 15:25 "<<endl<<endl;
}
int main()
{
myinfo();
Number n(5,6,7);	
 
return 0;
}

