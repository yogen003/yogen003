//"	read()
#include<iostream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:45 "<<endl<<endl;
}

int main()
{
my_info();
char name[20];
cout<<"Enter the name : ";
cin.read(name,10);
cout<<"name : "<<name<<endl;
return 0;
}

