#include<iostream>
using namespace std;
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
