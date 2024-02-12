//35. Write a C++ program to create simple calculator using class templates. 
#include<iostream>
using namespace std;
template <class T>
class Calculator {
    T num1;
    T num2;
public:
    Calculator(T x, T y) : num1(x), num2(y) {}
    T add() {
        return num1 + num2;
    }
    T subtract() {
        return num1 - num2;
    }
    T multiply() {
        return num1 * num2;
    }
    T divide() {
        if (num2 == 0) {
            cout<< "Error: Division by zero." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main() {
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl;
  
    double num1, num2;
    char operation;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: "<<endl;
    cin >> num1 >> num2;


    Calculator<double> calculator(num1, num2);
    switch (operation) {
        case '+':
            cout << "sum is = : " << calculator.add() << endl;
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

