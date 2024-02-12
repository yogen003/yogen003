#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the year : ";
	cin>>n;
	if (n%400==0){
		cout<<n<<" is leap year : ";
	}
	else {
		if  ( n%4==0)
		{	
	  	  if (n%100==0)
			{
            	cout<<n<<" is not leap year : ";
            }
          else 
	        {
    	        cout<<n<<" is leap year ";
     	    }
        }
        else
		{
   	 		cout<<n<<" is not leap year ";
 		}
}
return 0;
}
