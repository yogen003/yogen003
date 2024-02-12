#include <iostream>
#include<ctime>
using namespace std;

int main() {
	cout<<"NAME : YOGEN "<<endl;
	cout<<"MCA- 1st sem"<<endl;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"Date and Time is: "<<dt<<endl;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        goto positive;
    } else if (number < 0) {
        goto negative;
    } else {
        goto zero;
    }

positive:
    cout << "The number is positive." << endl;
    goto end;

negative:
    cout << "The number is negative." << endl;
    goto end;

zero:
    cout << "The number is zero." << endl;

end:
    return 0;
}

