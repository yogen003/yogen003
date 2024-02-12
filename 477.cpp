// single inheritance
#include<iostream>
using namespace std;
class Parent{        // Base class 
	int rollno;
public:
  	void enter(){
  		cout<<"Enter roll no.  ";
  		cin>>rollno;
  	}
  		void show(){
		cout<<"\nRoll no.:  "<<rollno<<endl;
  	}
};
class Child : private Parent{    // Derived class
	char name[100];
	public:
	void input(){
		enter();
		cout<<"enter name ";
		cin>>name;
	}
		void output(){
		show();
		cout<<"Name : "<<name<<endl;
	}
};
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE :08-11-2023 "<<endl<<endl;

Child c;
c.input();
c.output();  
return 0;
}

