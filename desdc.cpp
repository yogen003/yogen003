#include <iostream>
#include <fstream>
using namespace std;
//
//////void yogen()
//////{
//////    fstream sai;  //ofstrea,ifstream
//////    sai.open("yogen.cpp", ios::out);
//////    string lawda;
//////    // char sai[20];
//////    getline(cin, lawda);
//////    // cin.getline(sai,20);
//////    sai << lawda;
//////    sai.close();
//////}
//void da()
//{
//    ifstream dd("fstream.cpp",ios::in);
//    string lawda;
//    while (dd.eof() == 0)
//    {
//        getline(dd, lawda);
//        cout << lawda << endl;
//    }
//    dd.close();
//}
//
//int main()
//{
////     yogen();
//     da();
////    pu();
//}
////}
////#include <iostream>
////#include <fstream>
////using namespace std;
////
////void yogen()
////{
////    fstream sai;  //ofstrea,ifstream
////    sai.open("yogen.cpp", ios::out);
////    string lawda;
////    // char sai[20];
////    getline(cin, lawda);
////    // cin.getline(sai,20);
////    sai << lawda;
////    sai.close();
////}
////int main (){
////	yogen();
////}
//int main() 
//{ 
// char name[20]; 
// int mark; 
// ofstream fout; 
// fout.open("Rudra"); 
// cout<<"enter the name:- "<<endl; 
// cin.getline(name,20); 
// cout<<"enter the marks:- "<<endl; 
// cin>>mark; 
// fout<<name<<endl; 
// fout<<mark<<endl; 
// fout.close(); 
// ifstream fin; 
// fin.open("Rudra"); 
// cout<<"name:- "<<name<<endl; 
// cout<<"marks:- "<<mark; 
// fin.close(); 
// return 0; 
//} 
int main() 
{
 char name[20]; 
 int mark; 
 ofstream fout("Rudra",ios::in); 
 cout<<"enter the name:- "<<endl; 
 cin.getline(name,20); 
 cout<<"enter the marks:- "<<endl; 
 cin>>mark; 
 fout<<name<<endl; 
 fout<<mark<<endl; 
 fout.close(); 
 ifstream fin("Rudra",ios::out); 
// fin>>name; 
// fin>>mark; 
 cout<<"name:- "<<name<<endl; 
 cout<<"marks:- "<<mark; 
 fin.close(); 
 return 0; 
}
