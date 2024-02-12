//73.  WAP to differentiate read( ) and getline( ) function.
//
//Code:-
//"	getline()

#include<iostream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:40 "<<endl<<endl;
}
int main()
{
my_info();
char name[20];
cout<<"Enter the name : ";
cin.getline(name,18); // read maximum 18 character
cout<<"name : "<<name<<endl;
return 0;
}


