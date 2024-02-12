#include<iostream>
using namespace std;
class complex 
{ 
 int r, i; 
 public: 
 complex() 
 { 
 r=3; 
 i=2; 
 } 
 complex(int x,int y) 
 { 
 r=x; 
 i=y; 
 } 
 void show() 
 { 
 cout<<r<<"+"<<i<<"i"<<endl; 
 } 
 complex operator +(complex ob) 
 { 
 complex t; 
 t.r=r+ob.r; 
 t.i=i+ob.i; 
 return t; 
 } 
}; 
int main() 
{ 
 complex c1; 
 c1.show(); 
 complex c2(2,2); 
 c2.show(); 
 complex c3=c1+c2; 
 c3.show(); 
 return 0; 
} 

