//36. Write a C++ program using inline function to calculate area of circle.
#include<iostream>
using namespace std;
inline float AreaCircle(float r,float pie=3.14){ // Using inline function
return pie*r*r;
}
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
float r;
cout<<"Enter the radius of circle is = ";
cin>>r;
cout<<"Area of circle is = " <<AreaCircle(r) ;
return 0;
}



