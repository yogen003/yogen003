//69. WAP to create a file name "Info" using open function having details about  your name,age,class and address.and display them into the console using eof( ).
 
//Code:-
#include <iostream>
#include <fstream>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 13-12-2023 00:01 "<<endl<<endl;
}

int main() {
my_info();
ofstream outFile("Inf.txt");

if (outFile.is_open()) {
    string name, address;
    int age;
    char className[50];
    cout << "Enter your name: ";
    getline(cin, name);
    
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); 
    
    cout << "Enter your class: ";
    cin.getline(className, 50);
    
	cout << "Enter your address: ";
    getline(cin, address);

    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;
    outFile << "Class: " << className << endl;
    outFile << "Address: " << address << endl;

    outFile.close();
    cout << "File 'Inf.txt' created successfully!" << endl << endl;
ifstream fin; 
 char c; 
 fin.open("Inf.txt"); 
 while(!fin.eof()) 
 { 
 fin.get(c); 
 cout<<c; 
 } 
 fin.close();
    return 0;
}}

