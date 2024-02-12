#include <iostream>

class MyClass {
private:
    int privateData;

public:
//    MyClass() : privateData(0) {}

    // Declare the friend function
    friend void friendFunction(MyClass );

    // Member function to access private data
    void setPrivateData(int value) {
        privateData = value;
    }
};

// Definition of the friend function
void friendFunction(MyClass obj) {
    // Accessing private data of MyClass
    std::cout << "Friend Function accessing privateData: " << obj.privateData << std::endl;
}

int main() {
    MyClass myObject;

    // Set private data using a member function
    myObject.setPrivateData(14);

    // Call the friend function to access private data
    friendFunction(myObject);

    return 0;
}

