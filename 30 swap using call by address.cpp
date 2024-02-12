//30. Write a C++ program to swap two values using third variable of call by address function invoking.
#include<iostream>
using namespace std;
void swap(int *x,int*y){
int temp =*x;
  *x=*y;
  *y=temp;
}

int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  int a,b;
  cout<<"Enter the first value for swap ";
  cin>>a;
  cout<<"Enter the second value for swap ";
  cin>>b;
  cout<<"Before swap value of a is = "<<a<<" and b is = "<<b<<endl;
  swap(a,b);
  cout<<"After swap value of a is = "<<a<<" and b is = "<<b;
return 0;
}

