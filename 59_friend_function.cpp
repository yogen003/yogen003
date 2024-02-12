//59. Write a C++ program to create two classes (named First_class and Second_class), and perform 
//multiplication of two number (where first number is public data member of First_class and second 
//number is public data member of Second_class) using friend function

#include<iostream>
using namespace std;
class First_class{
    public:
		int a;
		void get_first(){
		cout<<"Enter the first number : ";
		cin>>a;
	}
//			friend int mul(First_class,Second_class); // declaring friend function 
			
};
class Second_class{
	public:
		int b;
		void get_second(){
		cout<<"Enter the second number : ";
		cin>>b;
	}
		friend int mul(First_class f,Second_class s); // declaring friend function 
};
int mul(First_class f,Second_class s){   //defining friend function outside the class
	int result = f.a*s.b;
	return result;
}


void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 10-12-23 00:00 "<<endl<<endl;
}
int main()
{
my_info();
First_class l;
l.get_first();
Second_class m;
m.get_second();
int r = mul(l,m);
cout<<"Multiplication is : "<<r<<endl;
return 0;
}



