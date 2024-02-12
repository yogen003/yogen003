//37. Write a C++ program to demonstrate function overloading.
#include<iostream>
using namespace std;
int add(int a, int b){
return a+b;
}
double add(double a,double b){
return a+b;
}
string add(string x, string y){
return x+y;
}

int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;

int x=5,y=10;
double c=5.857,d=8.766;
string r="YOGEN ",s="CHANDRAKAR";
int result1 = add(x,y);
double result2 = add(c,d);
string result3 = add(r,s);
cout<<"Addition of integer value : "<<result1<<endl;
cout<<"Addition of double value : "<<result2<<endl;
cout<<"Addition of string value: "<<result3<<endl;

return 0;
}

