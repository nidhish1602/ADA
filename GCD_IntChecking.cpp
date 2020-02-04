#include<iostream>
#include <cmath>    	
using namespace std;

int func(int x, int y){
	int a, b;
	int small=min(x, y);
	while(small!=0){
		a=x%small;
		b=y%small;
		if(a==0 && b==0){
			cout << small;
		}
		small=small-1;
	}
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
