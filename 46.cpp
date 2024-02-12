//46.Define a class candidate in C++ with the following description:=
//Private member:-
//•	A data member RNo (Registration Number) of type long.
//•	A data member Name of type string.
//•	A data member Score of type float.
//•	A data member Remarks of type string.
//•	A member function AssignRem( ) to assign Remarks as per the Score obtained by a candidate. Score range and the respective Remarks are shown as follows:
//Score                        Remarks
//>=50                         Selected
//Less than 50            Not Selected
//          Public member:-
//•	A member function Enter( ) to allow user to enter values for RNo, Name, Score and call function AssignRem( ) to assign the remarks.
//•	A member function DISPLAY( ) to allow user to view the content of all the data members. 

#include<iostream>
using namespace std;
class candidate{
	long rno;
	string name,Remarks;
	float score;
	void AssignRem();
	public:
		void Enter();
		void Display();
};
void candidate::AssignRem(){
	score>=50? Remarks = "SELECTED":Remarks = "NOT SELECTED";
}
void candidate::Enter(){
	cout<<"Enter roll no. : ";
	cin>>rno;
	cout<<"Enter name : ";
	getline(cin,name);
	getline(cin,name);
	cout<<"Enter score : ";
	cin>>score;
	AssignRem(); // calling private member function 
}
void candidate::Display(){
	cout<<"\nRoll no : "<<rno;
	cout<<"\nName : "<<name;
	cout<<"\nScore : "<<score
	;
	cout<<"\nRemarks : "<<Remarks;
}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 07-11-2023 "<<endl<<endl;

candidate obj;
obj.Enter();
obj.Display();  
  
return 0;
}

