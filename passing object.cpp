#include<iostream>
using namespace std;
class yogen{
      	int a;
	public:
		void GetData(){
			cout<<"Enter the value : ";
			cin>>a;
		}
		void PutData(){
			cout<<"Value is : "<<a;
		}
		yogen mafia(yogen t){    // take object as argument 
        	t.a = t.a + 5;
    	cout<<"\nAfter updation value is : "<<t.a;
        }	
};
int main(){
	yogen p,q;
	p.GetData();
	p.PutData();
	p=q.mafia(p); // passing object as argument
return 0;
}
