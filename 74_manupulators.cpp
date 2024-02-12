//74.  WAP to demonstrate manupulators(setw, setprecision, setbase, setfill).
//
//Code:-

#include <iostream>
#include <iomanip>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 01:05 "<<endl<<endl;
}
int main() 
{
cout<<setw(10)<<"Name: "<<setw(20)<< "YOGEN CHANDRAKAR " << endl;
cout<<setw(10)<<"Age: "<<setw(20)<<20<<endl<<endl;

double pi = 3.141592653589793;
cout<<fixed<<setprecision(4)<<"Pi (4 decimal places): "<<pi<<endl<<endl;

int number = 273;
cout<<setbase(16)<<"Hexadecimal representation of 273: "<<number<<endl<<endl;

cout<<"Original width: "<<setw(10)<<"Hello"<<endl;
cout << setfill('_') << "New width with setfill('_'): " << setw(10) << "Hello" << endl;
cout << setfill(' '); // Reset fill character to space
return 0;
}
