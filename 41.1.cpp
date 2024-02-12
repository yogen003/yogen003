#include<iostream>
using namespace std;
class student
{
int roll_no;
int marks[5];
public:
void getdata();
void showdata();
void totalmarks();

};
void student :: getdata()
{
cout<<"enter the roll no"<<endl;
cin>>roll_no;
cout<<"enter 5 marks "<<endl;
for (int i=0;i<5;i++)
{
cin>>marks[i];
}
}
void student :: showdata()
{ 	  int i,sum;
cout<<"roll no is ="<<roll_no<<endl;
//	  cout<<" marks is"<<marks[i];

cout<<"marks is"<<endl;
for (int i=0;i<5;i++)
{
cout<<marks[i]<<endl;
}

cout<<"total marks is ";
for (int i=0;i<5;i++)
{
sum += marks[i];
}

cout<<sum;
}
void student :: totalmarks()
{
int i, sum;
for (int i=0;i<5;i++)
{
//	 	cin>>marks[i];
sum += marks[i];
}

}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;

student s;
s.getdata();
s.showdata();
s.totalmarks();
return 0;
}

