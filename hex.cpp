//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() 
//{ 
// int a=15; 
// cout<<"dec is "<<dec<<a<<endl; 
// cout<<"hex is "<<hex<<a<<endl; 
// cout<<"oct is "<<oct<<a<<endl; 
// cout<<"______________________________"<<endl; 
// cout<<"a"; 
// cout<<"b"<<ends; 
// cout<<"d"; 
// cout<<"c"<<endl; 
// cout<<"______________________________"<<endl; 
// char x[10]; 
// cout<<"Enter char:- "<<endl; 
// cin>>ws>>x; 
// cout<<x; 
// return 0; 
// }
#include <iostream>
#include <fstream>
using namespace std;

void yogen()
{
    fstream sai;  //ofstrea,ifstream
    sai.open("yogen.cpp", ios::out);
    string lawda;
    // char sai[20];
    getline(cin, lawda);
    // cin.getline(sai,20);
    sai << lawda;
    sai.close();
}
//void da()
//{
//    ifstream dd("shubham.txt",ios::in);
//    string lawda;
//    while (dd.eof() == 0)
//    {
//        getline(dd, lawda);
//        cout << lawda << endl;
//    }
//    dd.close();
//}

int main()
{
     yogen();
//     da();
//    pu();
return 0;

}
