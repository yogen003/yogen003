// voting eligibilty accroding to sex send him to room no.
#include <iostream>
using namespace std;
int main()
{
    cout << "NAME : YOGEN " << endl;
    cout << "MCA 1ST SEM " << endl;
    cout << "DATE : 29-09-2023 " << endl
         << endl;

    int age;
    char gender;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your gender (M/m for Male, F/f for Female): ";
    cin >> gender;

    if (age >= 18)
    {
        if (gender == 'M' || gender == 'm')
        {
            cout << "Send him to Room number 10 for voting." << endl;
        }
        else if (gender == 'F' || gender == 'f')
        {
            cout << "Send her to Room number 12 for voting." << endl;
        }
        else
        {
            cout << "Gender not recognized. Send to Room number 8." << endl;
        }
    }
    else
    {
        cout << "Not eligible for voting." << endl;
    }
    return 0;
}
