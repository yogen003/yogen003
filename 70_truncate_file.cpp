//70. Write a program to perform truncate operation in a file existing file named  "File".
//Code:-

#include <iostream>
#include <fstream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:05 "<<endl<<endl;
}
void truncate(){
	ofstream outFile("File", ios::trunc);
	if (outFile.is_open()) 
	{
		cout << "file 'File' has been truncated (content cleared)." << endl;
		outFile.close();
	}
	 else
	{
		cout << "Error opening the file for truncation!" << endl;
	}
}
int main() {
my_info();
truncate();
return 0;
}

