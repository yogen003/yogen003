#include<iostream>
using namespace std;
struct Student 
{ 
 int rollno; 
 int age; 
}; 
void display(Student s) 
{ 
 cout<<"Display function displaying student details:- "<<endl<<endl; 
 s.rollno=102; 
 cout<<"Rollno is: - "<<s.rollno<<endl; 
 cout<<"age is: - "<<s.age<<endl<<endl<<endl; 
} 
void show(Student *s) 
{ 
 cout<<"Show function displaying student details:- "<<endl<<endl; 
 s->rollno=102; 
 cout<<"Rollno is: - "<<s->rollno<<endl; 
 cout<<"age is: - "<<s->age<<endl<<endl<<endl; 
} 
int main() 
{ 
 Student a={101,25}; 
 display(a); 
 cout<<a.rollno; 
 cout<<endl<<endl<<"------------------------------------------------------"; 
 cout<<endl<<endl; 
 show(&a); 
 cout<<a.rollno; 
 return 0; 
}
