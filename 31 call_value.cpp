//32. Write a C++ program to illustrate working of call by reference method of a function invoking.
#include<iostream>
using namespace std;
void sum(int &x, int &y){ // copy the address of actual parameter into formal parameter
int z=x+y;
cout<<"Sum is = "<<z;
}
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  int a,b;
  cout<<"Enter first number = ";
  cin>>a;
  cout<<"Enter second number = ";
  cin>>b;
  sum(a,b); // passing actual parameter
  
return 0;
}

