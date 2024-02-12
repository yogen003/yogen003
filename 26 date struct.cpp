//Program26: Write a C++ program to create a structure named "Date" which contains three member Day,
// month, year and display current date entering by the user using function definition.
#include<iostream>
using namespace std;
struct Date{
	int day,month,year;
}s;
void show(){
cout<<"Enter Day "<<endl;
cin>>s.day;
cout<<"Enter Month "<<endl;
cin>>s.month;
cout<<"Enter Year "<<endl;
cin>>s.year;
cout<<"Date : "<<s.day<<"/"<<s.month<<"/"<<s.year;
}
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
show();  
return 0;
}

