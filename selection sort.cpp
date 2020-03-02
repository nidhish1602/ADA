#include<bits/stdc++.h>
using namespace std;

int print(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main(){
		int n, g;
		cout << "Enter the array size:";
		cin>>n;
		int a[n];
		for(int k=0; k<n; k++){
			cin>>a[k];
		}
		for(int i=0; i<n; i++){
			int x=a[i], sm=a[i+1];
			for(int j=i+2; j<n; j++){
				if(sm>a[j]){
					sm=a[j];
					g=j;
				}
			}
			if(a[i]>a[g]){
				swap(a[i], a[g]);
				print(a, n);
			}
		}
		return 0;
}
