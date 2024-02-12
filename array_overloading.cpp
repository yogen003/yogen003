#include<iostream>
using namespace std;
class BMW(){
	int a=10,b=20;
	public:
		sum(){
			cout<<"Addition of "<<a<<"and"<<b<<"is = "<<a+b;
		}		
};
class Audi(){
	int a=10,b=20;
	public:
		sum(){
			cout<<"Subtraction of "<<a<<"and"<<b<<"is = "<<a-b;
		}
};
class Jaguar:public BMW:public Audi{
	
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME :  "<<endl<<endl;
}
int main()
{
my_info();
  
return 0;
}

