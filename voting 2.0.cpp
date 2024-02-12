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

	if (age >= 18)
	{
		cout << "Enter your gender (M/m for Male, F/f for Female): ";
		cin >> gender;
		if (gender == 'm' || gender == 'M' || gender == 'f' || gender == 'F')
		{
			if (gender == 'm' || gender == 'M')
				cout << "ja 15 me\n ";
			else
				cout << "ja 20 me \n";
		}
		else
			cout << "ja hospital me\n ";
	}
	else
		cout << "tum bete not eligible\n ";

	return 0;
}
