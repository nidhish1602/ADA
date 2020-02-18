#include<bits/stdc++.h>
using namespace std;

void binary(int arr[], int key, int front, int end){
    int mid=(front+end)/2;
    if(arr[mid]==key){
        cout<<"found";
    }
    else if(key<=arr[mid]){
        binary(arr, key, front, mid);
    }
    else if(key>=arr[mid]){
        binary(arr, key, mid, end);
    }
    else 
        cout << "Item not found in the given array of numbers";
}

void linear(int arr[], int key, int i){
    if(arr[i]==key){
        cout << "found";
    }
    else{
        i++;
        if(i<n)
            linear(arr[], key, i);
        else
            cout << "Item not found in the given array of numbers";
    }
}

int main(){
    int c, k;
    cout<<"1. Binary search"<<endl<<"2. Linear search"<<endl<<"choice:"<<endl;
    cin >> c;
    cout<<"Array size:";
    cin >> n;
    int arr[n];
    cout<<"array:";
    for(int i=0; i<n; i++{
        cin>>arr[i];
    }
    cout << "key:";
    cin >> k;

    if(c==2){
        int front=0, end=n-1;
        binary(arr, key, front, end);
    }

    else if(c==1){
        int i=0;
        linear(arr, k, i);
    }
    else 
        break;
    return 0;
}