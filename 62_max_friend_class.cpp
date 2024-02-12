//62. Write a C++ program to find large number between two number using friend class. 

#include<iostream>
using namespace std;
class A{
 int n1,n2; 
 public: 
 A(int i,int j) 
 { 
 n1=i; 
 n2=j; 
 } 
 friend class B; // declaring friend class 

}; 
class B 
{ 
 public: 
 void max(A a){
 	if (a.n1>a.n2)
	 {
 	  cout<<a.n1<<"greater number ";
    	}
 	else
	 {
	    cout<<a.n2<<" is greater number ";
	 }
 }
}; 
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME :  "<<endl<<endl;
}
int main()
{
my_info();
 A a(100,200); 
 B b; 
 b.max(a); 
 return 0; 
}  


