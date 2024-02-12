#include <iostream>
using namespace std;
class Parent
{
	int rollno;
	int marks;

public:
	void enter()
	{
		cout << "Enter roll no.  ";
		cin >> rollno;
		cout << "Enter marks ";
		cin >> marks;
	}
	void show()
	{
		cout << "Roll no.:  " << rollno << endl;
		cout << "Marks : " << marks << endl;
	}
};
 
class Child : private Parent
{
	char name[100];
	int age;

public:
	void input()
	{
		enter();
		cout << "enter name ";
		cin >> name;
		cout << "enter age ";
		cin >> age;
	}

	void output()
	{
		show();
		cout << "Name :  " << name << endl;
		cout << "age : " << age << endl;
	}
};
int main()
{
	cout << "NAME : YOGEN " << endl;
	cout << "MCA 1ST SEM " << endl;
	cout << "DATE :08-11-2023 " << endl
		 << endl;

	Child c;
	c.input();
	c.output();
	return 0;
}
