//71. WAP to open a existing file name "Shiva" in append mode to add some content in a file.

//Code:-
#include <iostream>
#include <fstream>
using namespace std;
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:25 "<<endl<<endl;
}

int main() {
my_info();
ofstream outFile("Shiva",ios::app);

if (outFile.is_open()) {
cout << "File 'Shiva' opened in append mode." << endl;

string additionalContent;
cout << "Enter additional content to append to the file: ";
getline(cin,additionalContent);

outFile << additionalContent << endl;

cout <<"Content added to the file." << endl;

outFile.close();
}
else
  {
	cout << "Error opening the file for appending!" << endl;
   }
	return 0;
}

