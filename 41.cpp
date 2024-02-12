//1.	Write a C++ program create class named “Student”,
// having two data member of private specifier name rollno and
//  marks. and make marks data member as array of size 5. Student class also contains 
//  public member function named getdata( ) , showdata( ), and totalmarks( ) which will
//   define outside of the class. getdata( ) will take input from the user only, showdata( )
//    will show the input data from the user, and totalmarks( ) will sum all the 5 marks of 
//	subject and display the total marks. 
#include<iostream>
using namespace std;
class Student{
int rollno;
int marks[5];
public :
	void getdata();
	void showdata();
	void totalmarks();
};
void Student :: getdata(){
cout<<"Enter roll no. :";
cin>>rollno;
cout<<"Enter marks :";
for(int i=1;i<=5;i++){
cin>>marks[i];
}
}
void Student::showdata(){
int i,sum;
cout<<"Roll no. is : "<<rollno<<endl;
cout<<"Marks is :"<<endl;
for( i=1;i<=5;i++){
cout<<marks[i]<<endl;
}
cout<<"Total marks is : ";
//for(int i=1;i<=5;i++){
//cout<<marks[i];
sum += marks[i];
cout<<sum;
}

void Student::totalmarks(){
int sum=0;
for(int i=1;i<=5;i++){
sum += marks[i];
}
cout<<sum;
}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;

Student s;
s.getdata();
s.showdata();
s.totalmarks();
  
return 0;
}

























//2.	Write a C++ program to find greatest number among three numbers implementing the nesting of member function .
//3.	Write a C++ program to create class named “My_class”, having two private member of integer type. And perform addition, multiplication, and subtraction operation inside the class body.
//4.	Write a C++ program to make outside function inline.
