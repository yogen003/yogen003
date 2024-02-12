//67. WAP to demonstrate the use of  >> and getline( ) for reading the string.
#include<iostream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 13-12-2023 11:30 "<<endl<<endl;

}
void str(){
	string Fname,Lname ;
	cout<<"Enter your first name : ";
	cin>>Fname;
	cout<<"Enter your last name : ";
	getline(cin,Lname);
	getline(cin,Lname);
	cout<<"The name of student is : "<<Fname<<" "<<Lname;
}
int main()
{
my_info();
str();
return 0;
}

