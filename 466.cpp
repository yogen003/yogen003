#include<iostream>
using namespace std;
class yogen{
public:
             static int a;          // intialize static data member
             int count(){
            return ++a;}
//	  cout<<"No. of object is = "<<a<<endl;	
//	   cout<<"object is ";
//	   return a; } 
//	  }
	   int ObjectCount() {
              return a;               // Return the current count of objects
              }  
};
int yogen::a=0;         // define static data member
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 05-11-2023 "<<endl<<endl;
 
yogen y1;
y1.count();
yogen y2;
y2.count();
yogen y3;
y3.count(); 
cout<<"Total number of object created is = "<<y1.ObjectCount();
  
return 0;
}

