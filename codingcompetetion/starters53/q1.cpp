#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n-1];
    for(int i = 0;i<n-1;i++){
        arr[i] = i+2;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 2;i<=sqrt(n);i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]%i==0  && arr[j] != i){
                arr[j] = 0;
            }
        }
    }
    for(int i = 0;i<n-1;i++){
        if(arr[i]!= 0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;

return 0;
}