//Define a class candidate in C++ with the following description:=
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
	string name;
	float score;
	string remark;
	void AssignRem(){
		
		if(score>=50){
			cout<<"SELECTED";
		}
		else{
			cout<<"NOT SELECTED";
		}
	}
	
	public:
		void Enter();
		void DISPLAY();
};
void candidate::Enter(){
	cout<<"enter roll no. ";
	cin>>rno;
	cout<<"enter name ";
	cin>>name;
	cout<<"enter score ";
	cin>>score;	
}
void candidate::DISPLAY(){
	cout<<"Roll no. is "<<rno<<endl;
	cout<<"Name is "<<name<<endl;
	cout<<"Score is "<<score<<endl;
}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 06-11-2023 "<<endl<<endl;
  
candidate c;
c.Enter();
c.DISPLAY();
return 0;
}

