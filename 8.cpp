#include<iostream>
#include<ctime>
using namespace std;
int main()
{
cout<<"Name : YOGEN "<<endl;
cout<<"MCA- 1st sem"<<endl;
time_t now = time(0);
char* dt = ctime(&now);
cout<<"Date and Time is: "<<dt<<endl;

int dayNumber;
cout << "Enter a number between 1 and 7: ";
cin >> dayNumber;

    switch (dayNumber) 
	{
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thrusday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 to 7." << endl;
    }
    return 0;
}

