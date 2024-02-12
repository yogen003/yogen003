//56. Write a C++ program to demonstrate run time polymorphism(function overriding).
#include<iostream>
using namespace std;
class Base {
public:
    void print() {
        cout << "This is Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void print() {      //using function overriding
        cout << "This is Derived Function" << endl;
    }
};
void my_info(){
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE AND TIME : 11-12-23 16:12 "<<endl<<endl;
}
int main()
{
my_info();
Derived derived1;
derived1.print();
return 0;  

}

