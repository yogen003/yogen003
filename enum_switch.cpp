#include<iostream>
using namespace std;
int main() 
{ 
 int num; 
 char c; 
 enum week{sun,mon,tue}; 
 do 
 { 
 cout<<"enter your choice:- "<<endl; 
 cin>>num; 
 switch(num) 
 { 
 case sun: 
 cout<<"sunday you pressed"<<endl; 
 break; 
 case mon: 
 cout<<"monday you pressed"<<endl; 
 break; 
 case tue: 
 cout<<"tuesday you pressed"<<endl; 
 break; 
 default: 
 cout<<"please enter valid choice"<<endl; 
 } 
 cout<<"wants to continue:-(y||Y)"; 
 cin>>c; 
}while(c=='y'||c=='Y'); 
 return 0 ; 
} 
