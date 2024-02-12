#include<iostream>
using namespace std;
int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 01-11-2023 "<<endl<<endl;

//size of one D array	
int oneDarry[] ={1,2,3,4,5,6};
int size1D = sizeof(oneDarry)/sizeof(oneDarry[0]);
cout<<"Size of 1D array is : "<<size1D<<endl;
//size of 2D array
int twoDarry[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
int row2D =sizeof(twoDarry)/sizeof(twoDarry[0]);
int col2D =sizeof(twoDarry[0])/sizeof(twoDarry[0][0]);
cout<<"Size of 2D array is : "<<row2D<<"rows *"<<col2D<<"columns"<<endl;
//size of 3D(multi dimension) array
int threeDarry[2][3][2] ={{
{1,2},{3,4},{5,6}},
{{7,8},{9,10},{11,12}}
};
int dim1 = sizeof(threeDarry)/sizeof(threeDarry[0]);
int dim2 = sizeof(threeDarry[0])/sizeof(threeDarry[0][0]);
int dim3 = sizeof(threeDarry[0][0])/sizeof(threeDarry[0][0][0]);
cout<<" Size of 3D array is : "<<dim1<<"*"<<dim2<<"*"<<dim3<<endl;
return 0;
}
