//Write a C++ program to find greatest number among three numbers implementing the nesting of member function .
#include<iostream>
using namespace std;
//class G
		class ThreeNum{
	public :
		int a , b ,c ;
		
	int max(int x, int y){
		return x > y ? x : y ;
	}
	void display(){
		cout << "a : " <<a  ;
		cout << ", b : " <<b  ;
		cout << ", c : " <<c << endl  ;
	}
	void displayMax(){
		cout << "max : " << max(a,max(b,c)) << endl ;
	}
};

int main()
{
cout<<"NAME : YOGEN "<<endl;
cout<<"MCA 1ST SEM "<<endl;
cout<<"DATE : 04-11-2023 "<<endl<<endl;

ThreeNum t ;
	t.a = 200 ;
	t.b = 305 ;
	t.c = 150 ;
	
	t.display() ;
	t.displayMax() ;
	
	return 0 ;
}

  
