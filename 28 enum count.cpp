//28. Write a C++ program to create an enum having number of enum list or elements and
// count the size of elements inside the enum. 
#include<iostream>
using namespace std;
enum count{sun,mon,tue,wed,thr,fri,sat};
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
  int ctr=0;
  for(int i=sun;i<=sat;i++){
  	
  	ctr++ ;
  }
  cout<<"size of enum is "<<ctr;
return 0;
}
                              
