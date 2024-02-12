#include<iostream>
using namespace std;
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
int size;
cout<<"enter the size of array";
cin>>size;
int number[size];
for(int i=0; i<size; i++){
cout<<"Enter number "<<i+1<<":";
cin>>number[i];
}
//printing number from backside
cout<<"number in reverse order: ";
for(int i= size-1;i>=0; i--){
cout<<number[i]<<" ";
}	
cout<<endl;
return 0 ;
}
 


