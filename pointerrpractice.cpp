#include<iostream>
using namespace std;
//int main() 
//{ 
// int a[4]={1,2,3,4}; 
// int *p=a;//assigning the address of the first element to the pointer 
// for(int i=0;i<=3;i++) 
// { 
// cout<<"value at index"<<"[ "<<i<<" ]"<<":-"<<*(p+i)<<endl; 
// } 
// return 0; 
//} 

//-----------------------------------------------------------------------------------------
//void ptr_arr(int a[],int len)  //passing AS AN ARRAY ARGUMENT 
//{ 
// for(int i=0;i<len;i++) 
// { 
// cout<<"value at index"<<"[ "<<i<<" ]"<<":-"<<a[i]<<endl; 
// } 
//} 
//int main() 
//{ 
// int a[4]={1,2,3,4}; 
// cout<<sizeof(a)<<endl<<sizeof(a[0])<<endl;
// int len=sizeof(a)/sizeof(a[0]); 
// ptr_arr(a,len); 
// return 0; 
//}
//-------------------------------------------------------------------------------------------
class A 
{ 
 public: 
 int a; 
 void disp( ) 
 { 
 cout<<"this is base : "<<a<<endl; 
 } 
}; 
class B:public A 
{ 
 public: 
 int b; 
 void disp( ) 
 { 
 cout<<"this is derived : "<<b<<endl; 
 } 
}; 
//-----------------------------------------------------------------------------------------------
int main() 
{ 
 A *ptr; 
 //A obj; 
 //ptr=&obj; 
 B obj2; 
 ptr=&obj2; 
 (*ptr).a=10; 
 ptr->disp(); 
 
 B *ptr1; 
 ptr1=&obj2; 
 (*ptr1).b=20; 
 ptr1->disp(); 
 return 0; 
}
