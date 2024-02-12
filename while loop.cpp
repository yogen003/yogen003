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
	
	int i=0;
	while(i<=18)
    {
    	i+=2;
    	cout<<i<<",";
	 } ;
 return 0;
}
//	int i;
//	while(i<=18)
//	{
//		i+=2;
//		cout<<i<<",";
//	}
