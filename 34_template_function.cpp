//34. Write a C++ program using function template to add two integers and two float number.
#include<iostream>
using namespace std;
template <class T,class C>
T Addition (T x, T y, C a, C b)
{
cout<<"Sum of int is = "<<x+y<<endl;
cout<<"Sum of float is = "<<a+b<<endl;
}
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  int x,y;
  float a,b;
  cout<<"Enter two integer no. "<<endl;
  cin>>x>>y;
  cout<<"Enter two float no. "<<endl;
  cin>>a>>b;
  Addition(x,y,a,b);
return 0;
}
