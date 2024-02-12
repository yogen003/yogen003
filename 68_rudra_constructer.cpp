//68. WAP to create a file named "Rudra" using constructor.

//Code:-
#include <iostream>
#include <fstream>
using namespace std;
class CreateFile {
public:
    CreateFile() {   // Constructor to create a file named "Rudra"

       ofstream file("Rudra.txt");
       if (file.is_open())
		{
            cout<<"File named 'Rudra.txt' created successfully!" << std::endl;
            // Closing the file
            file.close();
        } 
		else 
		{
            cout<<cerr << "Error creating the file!" << std::endl;
        }
    }
};
void my_info()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 13-12-2023 11:38 "<<endl<<endl;
}
int main(){
my_info();
CreateFile c;
return 0;
}
    


