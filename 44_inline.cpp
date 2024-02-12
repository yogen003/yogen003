//Q.44 Write a C++ program to make outside function inline.
#include<iostream>
using namespace std;
class InFun{
int a,b;
public:
	void sum();
};
inline void InFun::sum(){    // using inline function
cout<<"Enter two number "<<endl;
cin>>a>>b;
cout<<"Sum of "<<a<<" and "<<b<<" is = "<<a+b;
//return 0;
}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;

InFun s;
s.sum(); 
return 0;
}


