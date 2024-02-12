#include <iostream> 
using namespace std ;

class Husband{
	public :
	 void fun1(){
	   cout << "I am going to office "<< endl ;
	}
} ;

class Wife{
	public :
	 void fun2(){
		 cout << "I am making lunch "<<endl ;
	 }
} ;

class Child : public Husband , public Wife{
	
	public :
	void eat(){ 
	fun2();
	fun1();
		cout << "I am going to school " << endl ;
	}
} ;


int main(){
  Child c;
  c.eat();
	return 0 ;
}
