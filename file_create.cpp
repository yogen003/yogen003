#include<iostream>
#include<fstream>
using namespace std;
class CreateFile{
	public:
		CreateFile(){
			ofstream obj("mafia.txt");
			if (obj.is_open()){
				cout<<"file name is create succesfully "<<endl;
					obj << "Hello, rudra this side." <<endl;
			obj.close();
			}
			else{
				cout<<cerr<<"error creating the file"<<endl;
			}
		}
//		obj << "Hello, rudra this side." <<endl;
  // Close the file stream
};
int main(){
	CreateFile c;
	return 0;
}
