//Program25: write a C++ program to display detail of 5 student detail should contained student name, roll number , marks using structure.
#include<iostream>
using namespace std;
struct Student{	
    string name;
    int roll_no;
    int marks;
};
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  Student s[5];
  for(int i=0;i<5;i++){
  	cout<<"Enter the details for student "<<i+1<<endl;
  	cout<<"Name : ";
  	cin>>s[i].name;
  	cout<<"Roll no : ";
  	cin>>s[i].roll_no;
  	cout<<"Marks : ";
  	cin>>s[i].marks;
	cout<<endl;    	 
  }
    cout << "Student Details:" << endl;
    for (int i = 0; i < 5; i++)
 {
    cout << "Student " << i + 1 << " - Name: "<<s[i].name << ", Roll Number:"<<s[i].roll_no << ", Marks: " << s[i].marks << endl;
    } 

return 0;
}


