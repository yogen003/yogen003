#include<iostream>
using namespace std;
class Sub 
{ 
 int ppr1_code; 
 int ppr2_code; 
 public: 
 Sub() 
 { 
 ppr1_code=101; 
 ppr2_code=102; 
 cout<<"Paper codes are:- "<<ppr1_code<<" and "<<ppr2_code<<endl; 
 } 
}; 
class Stu 
{ 
 int rollno; 
 float mark_ppr1; 
 float mark_ppr2; 
 public: 
 Stu(int x, int y) 
 { 
 mark_ppr1=x; 
 mark_ppr2=y; 
 cout<<"Paper marks are:- "<<mark_ppr1<<" and "<<mark_ppr2<<endl; 
 } 
 Sub s1; 

}; 
int main() 
{ 
 Stu s(80,30); 
  
 return 0; 
}
