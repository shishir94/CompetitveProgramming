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
    int l ,r;
    int arr[n+2] = {0};
    for(int i = 0;i<n;i++){
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    int arr1[n+2];
    arr1[0] = arr[0];
    for(int i = 1;i<n+2;i++){
        arr1[i] = arr1[i-1]+arr[i];
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++){
        if(arr1[i] == n-1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i = 1;i<=n;i++){
        if(arr1[i] == n-1){
            cout<<i<<endl;
        }
    }
}
return 0;
}