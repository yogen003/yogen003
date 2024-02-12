#include<iostream>
using namespace std;
//class A{
//	public:
//	 int a=20;
//
//};
//class B: public A{
//	public:
//	 int b =12;
//	 void display(){
//	 	cout<<"mul is "<<a*b;
//	 }	
//		
//};
//int main(){
//	B n;
//	n.display();
//	return 0;
//}
class base //single base class 
{ 
 protected: 
 int x; 
 public:
 void getdata() 
 { 
 cout << "Enter value of x= "; 
cin >> x; 
 } 
}; 
class derive1 : public base // derived class from base class 
{ 
 protected: 
 int y;
 public: 
 void readdata() 
 { 
 cout << "\nEnter value of y= "; 
 cin >> y; 
 } 
}; 
class derive2 : public derive1 // derived from class derive1 
{ 
 private: 
 int z; 
 public: 
 void indata() 
 { 
 cout << "\nEnter value of z= "; 
 cin >> z; 
 } 
 void product() 
 { 
 cout << "\nProduct= " << x * y * z; 
 } 
}; 
int main() 
{ 
 derive2 a; //object of derived class 
 a.getdata(); 
 a.readdata(); 
 a.indata(); 
 a.product(); 
 return 0; 
} 

