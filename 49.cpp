//49. Write a C++ program to implement multilevel inheritance. 
//Multilevel inheritance:
#include<iostream>
using namespace std;

class base //single base class 
{ 
 public: 
 int x; 
 void getdata() 
 { 
 cout << "Enter value of x= "; 
cin >> x; 
 } 
}; 
class derive1 : public base // derived class from base class 
{ 
 public: 
 int y; 
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
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 15-11-2023 00:05 "<<endl<<endl;
}
int main()
{
my_info();
 derive2 a; //object of derived class 
 a.getdata(); 
 a.readdata(); 
 a.indata(); 
 a.product(); 
 return 0; 
} 

