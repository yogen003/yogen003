#include<iostream>
using namespace std;
template<class T> 
 class A 
 { 
 public: 
 T a=0; 
 T add() 
 { 
  a++;
 } 
 }; 
 int main() 
 { 
 A<int>d; 
 A<float>d1; 
 d.add(); 
 d1.add(); 
 return 0; 
 }
//template <class T> 
//T show(T a, T b) 
//{ 
// cout<<" a is: "<<a<<endl<<"b is: "<<b<<endl<<a+b<<endl; 
//} 
//int main() 
//{ 
// int x=23,y=30; 
// char m='r',n='s'; 
// float e=10.45,f=12.3; 
// show(x,y); 
// show(m,n); 
// show(e,f); 
// return 0; 
//} 

