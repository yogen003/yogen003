#include<iostream>
using namespace std;
//class A{
//	int a =10;
//public:
//	void display(){
//		cout<<"square of "<<a<<" is :- "<<a*a;
//	}
//};
//int main(){
//	A x;
//	x.display();
//	return 0;
//}
//class Parent 
//{ 
// protected: 
// int id_protected; 
// }; 
// class Child : public Parent 
//{ 
// public: 
// void setId(int id) 
// { 
// 
// id_protected = id; 
// } 
// void displayId() 
//{ 
// cout << "id_protected is: " << id_protected *id_protected << endl; 
// } 
//}; 
//int main() { 
// 
// Child obj1; 
// obj1.setId(81); 
// obj1.displayId(); 
// return 0; 
//} 
class student 
{ 
 int rollno; 
 int marks[5]; 
 public: 
 void getdata(); 
 void total(); 
}; 
void student::getdata() 
{ 
 cout<<"Enter rollno: "<<endl; 
 cin>>rollno; 
 for(int i=0;i<5;i++) 
 { 
 cout<<"enter marks in subject: "<<i+1<<" : "; 
 cin>>marks[i]; 
 } 
} 
void student::total() 
{ 
 int total=0; 
 for(int i=0;i<5;i++) 
 { 
 total=total+marks[i]; 
 } 
 cout<<"total marks: "<<total<<endl; 
} 
int main() 
{ 
 student s; 
 s.getdata(); 
 s.total(); 
 return 0; 
} 
