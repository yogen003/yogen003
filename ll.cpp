#include<iostream> 
#include<fstream> 
using namespace std; 
//int main() 
//{ 
// char name[30]; 
// int age; 
// string class1; 
// string address; 
// ofstream fout; 
// fout.open("INFO"); 
// cout<<"Enter your name:- "<<endl; 
// cin.getline(name,30); 
// cout<<"Enter your age:- "<<endl; 
// cin>>age; 
// cout<<"Enter your class:- "<<endl; 
// cin>>class1; 
// cout<<"Enter your address:- "<<endl; 
// cin>>address; 
// fout<<"Name is:- "<<name<<endl; 
// fout<<"Age is:- "<<age<<endl; 
// fout<<"Class is:- "<<class1<<endl; 
// fout<<"Address is:- "<<address<<endl; 
// fout.close(); 
// 
// ifstream fin; 
// char c; 
// fin.open("INFO"); 
// while(!fin.eof()) 
// { 
// fin.get(c); 
// cout<<c; 
// } 
// fin.close(); 
// 
// return 0; 
////} 
//int main() 
//{ 
// ofstream fout("File"); 
// cout<<"output pointer pos:- "<<fout.tellp()<<endl; 
// fout<<"Hello Ranu"; 
// cout<<"output pointer pos2:-"<<fout.tellp()<<endl; 
// fout.seekp(3,ios::cur); 
// cout<<"After using seekp output pointer pos3:-"<<fout.tellp()<<endl; 
// fout.close(); 
// 
// ifstream fin("File"); 
// cout<<"input pointer pos:- "<<fin.tellg()<<endl; 
// fin.seekg(-4,ios::end); 
// cout<<"After using seekg input pointer pos2:-"<<fin.tellg()<<endl; 
//}
class student 
{ 
 char name[30]; 
 int age; 
 public: 
 void getdata() 
 { 
 cout<<"enter student name:- "<<endl; 
 cin.getline(name,30); 
 cout<<"enter age:- "<<endl; 
 cin>>age; 
 } 
 void display() 
 { 
 cout<<"Name is:- "<<name<<endl; 
 cout<<"Age is:- "<<age<<endl; 
 } 
}; 
int main() 
{ 
 student s; 
 ofstream file; 
 file.open("NAVO",ios::out); 
 s.getdata(); 
 file.write((char *)&s,sizeof(s));//reference and size 
 file.close(); 
 
 ifstream file2; 
 file2.read((char *)&s,sizeof(s)); 
 s.display(); 
 file2.close(); 
 return 0; 
}
