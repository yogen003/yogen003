#include<iostream>
using namespace std;
int add(int x, int y);
int main()
{
int num1;
int num2;
int sum;
//clrscr();
cout<< "Enter the first number" <<endl;
cin>>num1;
cout<< "Enter the second number" <<endl;
cin>>num2;
sum=add(num1, num2);
cout<<"sum of two numbers "<<sum<<endl;
//getch();
return 0;
}
