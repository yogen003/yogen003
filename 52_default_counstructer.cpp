//52.	Write a C++ program to invoke a constructor having default argument.
#include<iostream>
using namespace std;
class Addition{
	int a,b,c;
	public :
		Addition(int x=97,int y=98,int z=99){    // creating default counstructer
			a = x;
			b = y;
			c = z;
			cout<<"a is "<<a<<"\nb is "<<b<<"\nC is "<<c<<endl;
		}
};
void my_info(){	
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 24-11-23 23:57"<<endl<<endl;
}
int main()
{
my_info();
Addition a;  
}

