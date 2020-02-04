#include<iostream>
#include <cmath>    	
using namespace std;

int func(int x, int y){
	int z;
	if(x!=y){
		z=abs(x-y);
		if(z==0){
			cout << z;
		}
		func(y, z);
	}
	else 
		cout << x;
}

int main(){
	int x, y;
	cout << "Enter the 1st value:";
	cin >> x;
	cout << "Enter the 2nd value:";
	cin >> y;
	func(x, y);
	return 0;
}


//abs	
