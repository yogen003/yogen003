#include<iostream>
using namespace std;
int count=0; 
class construct { 
public: 
 int a, b; 
 construct() 
 { 
 a = 10; 
 b = 20; 
 count++; 
 cout<<a<<endl<<b<<endl<<"count is: "<<count<<endl; 
 cout<<"_________________________________________________"<<endl; 
 } 
 ~construct() 
 { 
 cout<<"count is: "<<count<<endl; 
 } 
}; 
int main() 
{ 
 construct c,d,e; 
 return 0; 
} 
