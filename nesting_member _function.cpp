#include<iostream>
using namespace std;
class A 
{ 
 int m,n; 
 public: 
 void input(); 
 void display(); 
 int largest(); 
}; 
void A::input() 
{ 
 cout<<"input values of m and n: "<<endl; 
 cin>>m>>n; 
} 
int A::largest() 
{ 
 if(m>=n) 
 return m; 
 else 
 return n;                                                                                 
} 
void A::display() 
{ 
 cout<<"Largest value: "<<largest(); // using nested member function
} 
int main() 
{ 
 A a; 
 a.input(); 
 a.display(); 
 return 0; 
}
