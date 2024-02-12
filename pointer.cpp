#include<iostream>
using namespace std;
//void my_info(){
//cout<<"NAME : YOGEN "<<endl;
//cout<<"MCA 1ST SEM "<<endl;
//cout<<"DATE AND TIME :  "<<endl<<endl;
//}
//int main()
//{
//my_info();
//  int a =10;
//  int *p =&a;
//  cout<<"address of variable a "<<&a;
//    cout<<"\naddress of variable p "<<p;
//      cout<<"\nvalue of variable a "<<*p<<endl;
//      cout<<sizeof(p);
//
//
//  
//return 0;
//}
//int main() 
//{ 
// int a[4]={1,2,3,4}; 
// int *p=a;//assigning the address of the first element to the pointer 
// for(int i=0;i<4;i++) 
// { 
// cout<<"value at index"<<"[ "<<i<<" ]"<<":-"<<*(p+i)<<endl; 
// } 
// return 0; 
//} 
void ptr_arr(int a[],int len) 
{ 
 for(int i=0;i<len;i++) 
 { 
 cout<<"value at index"<<"[ "<<i<<" ]"<<":-"<<a[i]<<endl; 
 } 
} 
int main() 
{ 
 int a[4]={1,2,3,4}; 
 int len=sizeof(a)/sizeof(a[0]);
 cout<<"LENGTH of array IS "<<len<<endl; 
  cout<<sizeof(a)<<endl;
  cout<<sizeof(a[0])<<endl;

 ptr_arr(a,len); 
 return 0; 
} 

