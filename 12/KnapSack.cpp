#include<bits/stdc++.h>
#include <iterator> 
using namespace std;

int max(int arr[], int n){
    int x=arr[0], i;
    for(i=1; i<n; i++){
        if(x<arr[i]){
            x=arr[i];
        }
    }
    return i;
}

void func(int v[], int w[], int h){
    int n=sizeof(v)/sizeof(v[0]);
    int x=max(v, n);
    if(w[x]<=h){
        cout<<v[x]<<endl;
        func(v, w, h-w[x]);
        // h=h-w[x];
    }
    w[x]=0;
    v[x]=0;
    func(v, w, h);
}

int main(){
    int n, h, i, j;
    cin>>n>>h;
    int v[n], w[n];
    for (i=0; i<n; i++){
        cin>>v[i];              //profit
    }
    for (i=0; i<n; i++){
        cin>>w[i];              //weight
    }
    func(v, w, h);
    return 0;
}
