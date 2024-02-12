#include <iostream>
#include <fstream>
using namespace std;

//void yogen()
//{
//    fstream sai;  //ofstrea,ifstream
//    sai.open("yogen.cpp", ios::out);
//    string lawda;
//    // char sai[20];
//    getline(cin, lawda);
//    // cin.getline(sai,20);
//    sai << lawda;
//    sai.close();
//}
void da()
{
   ifstream dd("fstream.cpp",ios::in);
  string lawda;
  if (dd != '\0'){
  
   while (dd.eof() == 0)
   {
      getline(dd, lawda);
      cout << lawda << endl;
    }
 dd.close();
}
 else cout<<"file not opened";
}
//
//void pu()
//{
//  ofstream gg("gg.txt");
//  char kk[20];
//  cin.getline(kk,20);
//  gg<<kk;
//  gg.close();
//
//}


int main()
{
     da();
//    pu();

}
