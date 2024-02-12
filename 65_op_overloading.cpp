//65. Write a C++ program to add two complex number using + operator overloading by friend function. 
//Code:-
#include<iostream>
using namespace std;
class add_two_complex {
    int a,b,c,d;
public:
	void firstcomplex(){
		cout<<"Enter the value of a and b : "<<endl;
		cin >>a >> b;
		cout<<"First complex number is : "<<endl;
		cout<<a<<"+"<<b<<"i"<<endl;
		}
	void secondcomplex(){
		cout<<"Enter the value of c and d : "<<endl;
		cin>>c>>d;
		cout<<"Second complex number is : "<<endl;
		cout<<c<<"+"<<d<<"i"<<endl;
		}
	friend void operator +(add_two_complex);  //declare friend function
};
void operator + (add_two_complex s1)
{
int n,m;
n = s1.a+s1.c;
m = s1.b+s1.d;
cout<<"addition is = "<<n<<" + "<<m<<"i"<<endl;
}
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 11-12-2023 20:07 "<<endl<<endl;
}
int main() 
{
my_info();
add_two_complex s1;
s1.firstcomplex();
s1.secondcomplex();
+s1;
return 0;
}


