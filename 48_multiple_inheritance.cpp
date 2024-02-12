// C++ program to explain 
// multiple inheritance 
#include <iostream> 
using namespace std; 

// first base class 
class twowheeler {
 
public: 
    int a=8;
	twowheeler() { cout << "This is a twowheeler\n"; } 
}; 

// second base class 
class FourWheeler { 
public: 
    int b=9;
	FourWheeler() 
	{ 
		cout << "This is a 4 wheeler Vehicle\n"; 
	} 
}; 

// sub class derived from two base classes 
class Car : public twowheeler, public FourWheeler { 
public:
	int sum(){
     int add =a+b;
     cout<<add;
	 }
}; 

// main function 
int main() 
{ 
	// Creating object of sub class will 
	// invoke the constructor of base classes. 
	Car obj;
	obj.sum();
	return 0; 
}

