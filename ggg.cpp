#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
 char name[30]; 
 int age; 
 string class1; 
 string address; 
 ofstream fout; 
 fout.open("INFO"); 
 cout<<"Enter your name:- "<<endl; 
 cin.getline(name,30); 
 cout<<"Enter your age:- "<<endl; 
 cin>>age; 
 cout<<"Enter your class:- "<<endl; 
 getline(cin,class1); 
  getline(cin,class1); 
 cout<<"Enter your address:- "<<endl; 
 cin>>address; 
 fout<<"Name is:- "<<name<<endl; 
 fout<<"Age is:- "<<age<<endl; 
 fout<<"Class is:- "<<class1<<endl; 
 fout<<"Address is:- "<<address<<endl; 
 fout.close(); 
 
 ifstream fin; 
 char c; 
 fin.open("INFO"); 
 while(!fin.eof()) 
 { 
 fin.get(c); 
 cout<<c; 
 } 
 fin.close(); 
 
 return 0; 
} 
