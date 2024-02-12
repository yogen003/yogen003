//66. Write a C++ program to illustrate unary minus operator overloading using friend function.
//Code:
#include<iostream>
using namespace std;
class overload 
{ 
 int a; 
 public: 
 void get() 
 { 
   cout<<"Enter the number : ";
   cin>>a; 
   cout<<"Before overloading value of a is := "<<a<<endl; 
 } 
 friend void operator -(overload ); // Declaring friend function with operator overloading
}; 
void operator -(overload x) 
 { 
 x.a=-x.a;  
 cout<<"After overloading value of a is := "<<x.a<<endl; 
 } 
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 11-12-2023 20:15 "<<endl;
cout<<"*-------*--------*"<<endl;
}
int main()
{
my_info();
overload o;
o.get();
-o; // unary minus operator
return 0;
}

