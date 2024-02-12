#include<iostream>
using namespace std;
int main()
{
  cout<<"NAME : YOGEN "<<endl;
  cout<<"MCA 1ST SEM "<<endl;
  cout<<"DATE : 01-11-2023 "<<endl<<endl;
  
int oneDarry[7];
//for enter values
for(int i=0;i<7;i++){
cout<<"Enter element "<<i+1<<":";
cin>>oneDarry[i];
}	
//calculate sum& avrage
int sum=0;
for(int i=0; i<7;i++){
sum += oneDarry[i];
}	
//double avg =static_cast<double>(sum)/array_size;
//display
cout<<"element is: ";
for(int i=0;i<7;i++){
cout<<oneDarry[i]<<" ";
}	
cout<<"\n Average of the element : "<<sum/7<<endl;
return 0;
}

