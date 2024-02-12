#include<iostream>
using namespace std;
class A{
	private:
		int a=10;
	public:
		 void dis(){
			cout<<"this is base class\n";
		}
				void show(){
			    cout<<a;
		}
};
class B :public A
{
  public:
		void hh(){
			cout<<"hekki";
		}
};
int main(){
B b;
b.dis();
b.hh();
return 0;
}
