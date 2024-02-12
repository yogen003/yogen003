
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	cout<<"Name : YOGEN "<<endl;
	cout<<"MCA- 1 sem"<<endl;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout<<"Date and Time is: "<<dt<<endl;

    int a, b, c, max;  
    cout << "Enter Three Integers\n";  
    cin >> a >> b >> c;  
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);//using ternary operator
    cout << "Maximum Number is = " << max;  
   
return 0;  
}

