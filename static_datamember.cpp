#include<iostream>
using namespace std;
class X 
{ 
 int codeno; 
 float price; 
 static int count; 
 public: 
 void getval(int i,float j) 
 { 
 codeno=i; 
 price=j; 
 ++count; 
 } 
 void display() 
 { 
 cout<<"codeno:- "<<codeno<<"\t"; 
 cout<<"price:- "<<price<<"\n"; 
 } 
 static void dispcount() 
 { 
 cout<<"Number of created object is := "<<count<<"\n"; 
 } 
 }; 
 int X::count=0; 
 int main() 
 { 
 X obj1,obj2; 
 obj1.getval(101,29.35); 
 obj2.getval(102,30.2); 
// X::dispcount(); 
 X obj3; 
 obj3.getval(103,57.8); 
 X::dispcount(); 
 obj1.display(); 
 obj2.display(); 
 obj3.display(); 
 return 0; 
 }
