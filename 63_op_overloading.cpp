//63. Write a C++ program to for operator overloading to compare two objects are equal are not using = =operator
#include <iostream>

class MyClass {
	int a,b;
	public:
	void Get(MyClass obj1,MyClass obj2){
		a=obj1;
		b=obj2;
	}
};

int main() {
    // Creating two objects of MyClass
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(10);

    // Comparing objects using ==
    if (obj1 == obj2) {
        std::cout << "obj1 and obj2 are equal.\n";
    } else {
        std::cout << "obj1 and obj2 are not equal.\n";
    }

    if (obj1 == obj3) {
        std::cout << "obj1 and obj3 are equal.\n";
    } else {
        std::cout << "obj1 and obj3 are not equal.\n";
    }
      if (obj2 == obj3) {
        std::cout << "obj2 and obj3 are equal.\n";
    } else {
        std::cout << "obj2 and obj3 are not equal.\n";
    }
    return 0;
}

