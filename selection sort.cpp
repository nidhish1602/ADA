#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void selection(int arr[], int n){
    int temp=0, i;
    for(i=0; i<n; i++){
        int x=*min_element(arr+i, arr+n);
        auto t = find(arr, arr+n, x);
        int y=distance(arr, t);
        if(arr[y]<arr[i]){
            temp=arr[y];
            arr[y]=arr[i];
            arr[i]=temp;
        }
    }
    print(arr, n);
}

int main(){
    int n, i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    selection(arr, n);
    return 0;
}
//  64 25 12 22 11
