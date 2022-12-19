#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    long long arr[x];
    long long arr1[x];
    for(int i =0;i<x;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<x;i++){
        cin>>arr1[i];
    }
    int cnt = 0;
    for (int i = 0;i<x-1;i++){
        for(int j = i+1;j<x;j++){
            if(arr[i] == arr1[j]){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
return 0;
}