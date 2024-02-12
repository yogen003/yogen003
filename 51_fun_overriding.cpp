//51.	Write a C++ program to illustrate order of invocation for these, Define two class first class named “Sub” and second named “Mark”  in C++ with the following description:=
//Class “Sub” contains -
//Private member:-
//•	A data member ppr1_code of type int.
//•	A data member ppr2_code of type int.
//          Public member:-
//•	A default constructor which initializes and display the private member of its class.
//
//Class “Mark” contains – 
//Private member:-
//•	A data member ppr1_mark of type float.
//•	A data member ppr2_mark of type float.
//          Public member:-
//create an object of Sub class inside these class.
//
//•	A Parameterized constructor which initializes and display the private member of its class.
#include<iostream>
using namespace std;
class Sub{
	int ppr1_code;
	int ppr2_code;
	public:
		Sub(){
			ppr1_code = 101;
			ppr2_code = 102;
			cout<<"\nppr1 code : "<<ppr1_code<<"\nppr2_code : "<<ppr2_code<<endl;
		}
};
class Mark {
	float ppr1_mark;
	float ppr2_mark;
	public:
		Mark(float x , float y){  // intializing parameterized counstructer
        	
		ppr1_mark = x;
		ppr2_mark = y;
		cout<<"\nppr1 mark : "<<ppr1_mark<<"\nppr2_mark : "<<ppr2_mark<<endl;
		Sub s;
    }
};
my_info(){
	
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 24-11-23 11:07 "<<endl;
 
}
int main()
{
my_info(); 
Mark m(98,97);
  
return 0;
}



