 #include <iostream>
#include<ctime>
using namespace std;

int main() {
	cout<<"NAME : YOGEN "<<endl;
	cout<<"MCA- 1sem"<<endl;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"Date and Time is: "<<dt<<endl;
    int n;
    cout << "Enter the number of rows or columns: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print '*' for the outer row, inner row, outer column, and inner column
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  "; // Print a space for the interior of the square
            }   }
        cout << endl;
    } 
return 0;
}

