#include<iostream>
using namespace std;
void hollow(){
	int n;
	cout<<"enter number ";
	cin>>n;
	for(int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (i==1 || i ==n || j==1 || j ==n){
				cout<<"* ";
			}
			else cout<<"  ";
		}
		cout<<endl;
	}
}
void triangle(){
	for(int i=1;i<=4;i++){
		for(int j =1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void triangle2(){
	for(int i=1;i<=4;i++){
		for(int j =1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
}
}
void triangle3(){
	for(int i=4;i>=1;i--){
		for(int j= 1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}
void triangle4(){
	for(int i = 8;i>=1;i--){
		for(int j=1;j<8;j++){
			if(j>=i){
			cout<<"* ";	
			}
			else cout<<" ";
		}
		cout<<endl;
	}
}
void triangle5(){
	for(int i = 4;i>=1;i--){
		for(int j=1;j<=4;j++){
			if(j>=i){
			cout<<"* ";	
			}
			else cout<<"  ";
		}
		cout<<endl;
	}
}
int main()
{
hollow();
triangle();
triangle2();
triangle3();
triangle4();
triangle5();
return 0;
}

