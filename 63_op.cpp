//63. Write a C++ program to for operator overloading to compare two objects are equal are not using = 
//=operator.
// code :
#include<iostream>
using namespace std;
class First_class{
	int number;
	public:
		First_class(int num){
		number = num;
		cout<<"Number  is : "<<number<<endl;
		}
		
	First_class operator ==(First_class obj)
	{
		if(number==obj.number)
		{
			cout<<"Both are equal "<<endl;
		}
		else
		{
			cout<<"Both are not equal "<<endl;
		}
	}
};

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 10-12-2023 04:05 "<<endl<<endl;
}
int main()
{
my_info();
First_class F1(5),F2(3) ,F3(3);
cout<<"Comaparison between the first and second object  : "<<endl;
F1==F2;
cout<<"Comaparison between the second and third object : "<<endl;
F2==F3;

return 0;
}

