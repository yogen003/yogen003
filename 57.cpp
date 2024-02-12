//57. Write a C++ program to create a class named “Student” having two private member name type 
//string and age type int. and in public section class contain one member function named “Stu_info” 
//which initializes the data members of its class at run time and one another member function named 
//“Show_info” which display the detail of a student (name,age). And invoke them using pointer to 
//object. 

#include<iostream>
using namespace std;
class Student {
	int age;
	string name;
	public:
		int Stu_info(string n,int a){
			name = n;
			age = a ;	
		}
		int Show_info(){
			cout<<"The name of student is : "<<name<<endl<<"age of student : "<<age;
		}
};

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 09-12-23 23:52 "<<endl<<endl;
}
int main()
{
my_info();

Student s,*p;
p = &s;
p->Stu_info("yogen",20); //invoke using pointer
p->Show_info();

return 0;
}

