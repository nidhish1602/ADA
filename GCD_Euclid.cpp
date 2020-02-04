#include<iostream>
using namespace std;

int func(int x, int y){
	int z;
	if(x%y!=0){
		z=x%y;
		if(z==0){
			cout << y; 
		}
		func(y,z);
	}
	else 
		cout << y;
}

int main(){
	int x=35, y=14;
	func(x, y);
	return 0;
}
