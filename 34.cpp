//34. Write a C++ program using function template to add two integers and two float number.
#include<iostream>
using namespace std;
template <class T,class C>
T Addition (T x, T y) {
cout<<"Sum of int is = "<<x+y<<endl;
}
C addition (C a, C b)
{
cout<<"Sum of float is = "<<a+b<<endl;
}
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  int a = 4, b=5;
  float x = 5.6, y = 7.7;
  Addition(a,b);
  addition(x,y);

return 0;
}

