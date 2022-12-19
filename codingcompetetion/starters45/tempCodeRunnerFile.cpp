#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    int arr1[n];
    int x = sum/(n+1);
    for(int i = 0;i<n;i++){
        arr1[i] = arr[i] - x;
    }
    for(int i = 0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
return 0;
}