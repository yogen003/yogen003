
#include<iostream>
using namespace std;
double interest(double P , float R = 5.0, float T = 3.0) {
return (P*R*T)/100.0;
}

int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
double P;
cout<<"Enter a Principal amount: "<<endl;
cin>>P;

cout<<"simple interest is = "<<interest(P);
return 0;
}

