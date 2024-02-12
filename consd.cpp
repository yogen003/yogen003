#include<iostream>
using namespace std;
////class yogen{
////	int a =10;
////	public:
////		yogen(){
////			a=++a;
////			cout<<a<<endl;
////		}
////};
////int main (){
////	yogen c;
////	yogen s;
////}
//class Base 
//{ 
// public: 
// Base() 
// { 
// cout<<"Base class constructor."<<endl; 
// } 
//}; 
//class Derived:public Base 
//{ 
// public: 
// Derived() 
// { 
// cout<<"Derived class constructor."<<endl; 
// } 
//}; 
//int main() 
//{ 
// Derived d; 
// return 0; 
//} 
//class Sub 
//{ 
// int ppr1_code; 
// int ppr2_code; 
// public: 
// Sub() 
// { 
// ppr1_code=101; 
// ppr2_code=102; 
// cout<<"Paper codes are:- "<<ppr1_code<<" and "<<ppr2_code<<endl; 
// } 
//}; 
//class Stu 
//{ 
// int rollno; 
// float mark_ppr1; 
// float mark_ppr2; 
// public: 
// Stu(int x, int y) 
// { 
// mark_ppr1=x; 
// mark_ppr2=y; 
// cout<<"Paper marks are:- "<<mark_ppr1<<" and "<<mark_ppr2<<endl; 
// } 
// Sub s1; 
//}; 
//int main() 
//{ 
// Stu s(80,30); 
// return 0; 
//}
//int count=0; 
//class construct { 
//public: 
// int a, b; 
// construct() 
// { 
// a = 10; 
// b = 20; 
// count++; 
// cout<<a<<endl<<b<<endl<<"count is: "<<count<<endl; 
// cout<<"_________________________________________________"<<endl; 
// } 
// ~construct() 
// { 
// cout<<"count is: "<<count<<endl; 
// } 
//}; 
//int main() 
//{ 
// construct c,d,e; 
// return 0; 
//}

#define pi 3.14159 
class circle 
{ 
 public: 
 void area() 
 { 
 float r; 
 cout<<"enter radius:- "<<endl; 
 cin>>r; 
 cout<<"circle area is:- "<<pi*r*r<<endl; 
 } 
}; 
class Rectangle:public circle 
{ 
 public: 
 void area() 
 { 
 float l; 
 float w; 
 //circle::area(); 
 cout<<"enter the length and width:- "<<endl; 
 cin>>l>>w; 
 cout<<"Rectangle area is:- "<<l*w<<endl; 
 } 
}; 
int main() 
{ 
 Rectangle a; 
 a.circle::area(); 
 a.area(); 
 return 0; 
}

