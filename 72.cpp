//72. WAP to find current position of input/output pointer of a file.
//
//Code:-

#include <iostream>
#include <fstream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:05 "<<endl<<endl;
}
void curr_pos()
{	
ifstream fin("File");
cout<<"Current position of input pointer: " << fin.tellg() << endl;
ofstream fout;
fout.open("File",ios::app);
fout<<endl<<"aaj kare so ab";
cout << "Current position of output pointer: " << fout.tellp() << endl;
fin.close();
fout.close();
}
int main() 
{
my_info();
curr_pos();
return 0;
}

