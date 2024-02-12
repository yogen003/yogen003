// Program27:  Write a C++ program to demonstrate enum with switch case.
#include <iostream>
using namespace std;
enum Days
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main()
{
    cout << "NAME : YOGEN " << endl;
    cout << "MCA 1ST SEM " << endl;
    cout << "DATE : 01-11-2023 " << endl
         << endl;

    Days today = FRIDAY;
    switch (today)
    {
    case SUNDAY:
        cout << "It's Sunday. It's the weekend!" << endl;
        break;
    case MONDAY:
        cout << "It's Monday. The workweek begins." << endl;
        break;
    case TUESDAY:
        cout << "It's Tuesday. Work continues." << endl;
        break;
    case WEDNESDAY:
        cout << "It's Wednesday. Midweek point." << endl;
        break;
    case THURSDAY:
        cout << "It's Thursday. Almost there!" << endl;
        break;
    case FRIDAY:
        cout << "It's Friday. The weekend is near." << endl;
        break;
    case SATURDAY:
        cout << "It's Saturday. Enjoy the weekend!" << endl;
        break;
    default:
        cout << "Invalid day." << endl;
        break;
    }
    return 0;
}
