#include<iostream>
#include<fstream>
using namespace std;
int main() 
{ 
 char name[20]; 
 int mark; 
 ofstream fout; 
 fout.open("Rudra"); 
 cout<<"enter the name:- "<<endl; 
 cin.getline(name,20); 
 cout<<"enter the marks:- "<<endl; 
 cin>>mark; 
 fout<<name<<endl; 
 fout<<mark<<endl; 
 fout.close(); 
 ifstream fin; 
 fin.open("Rudra"); 
 cout<<"name:- "<<name<<endl; 
 cout<<"marks:- "<<mark; 
 fin.close(); 
 return 0; 
} 
