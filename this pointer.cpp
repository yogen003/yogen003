#include<iostream>
using namespace std;
//class A{
//	public:
//	int a,b;
//	public:
//		int get(int a,int b){
//			return a+b;
//		}
//};
int data(int &a,int &b){
	int temp =a;
	a=b;
	b=temp;
}
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME :  "<<endl<<endl;
}
int main()
{
my_info();
//A a;

int x=89,y=98;
//cout<<a.get(7,8);
data(x,y);
	cout<<x<<endl<<y<<endl;

return 0;
}

