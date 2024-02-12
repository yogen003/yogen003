//35. Write a C++ program to create simple calculator using class templates. 
#include<iostream>
using namespace std;
template <class T>
class Calculator {
    T x;
    T y;
public:
    Calculator(T x, T y) ;
    T add() {
        return x+y;
    }
    T subtract(T x, T y) {
        return x-y;
    }
    T multiply(T x, T y) {
        return x*y;
    }
    T divide(T x, T y) {
        if (y == 0) {
            cout<< "Error: Division by zero." << endl;
            return 0;
        }
        return x/y;
    }
};

int main() {
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl;
  
    double a,b;
    char operation;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: "<<endl;
    cin >>a,b;


    Calculator<double> calculator(a,b);
    switch (operation) {
        case '+':
            cout << "sum is =: " << calculator.add() << endl;
            break;
        case '-':
            cout << "subtraction is = : " << calculator.subtract() << endl;
            break;
        case '*':
            cout << "multiplication is = : " << calculator.multiply() << endl;
            break;
        case '/':
            cout << "divison is = : " << calculator.divide() << endl;
            break;
        default:
            cout<< "Invalid operation." << endl;
            break;
    }
    return 0;

return 0;
}

