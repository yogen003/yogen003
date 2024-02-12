//75. WAP which reads input from the keyboard whose width specified with 8 and  
//         unused space filled with '#'and input should be left-justified.
//Code:-
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 14-12-2023 00:40 "<<endl<<endl;
}

int main(){
my_info();
cout << "Enter a string: ";
string input;
getline(cin, input);

if (input.length() < 8) {
input.insert(0, 8 - input.length(), '#');
}
cout << "Left-justified input with width 8: " << input << endl;
return 0;
}

