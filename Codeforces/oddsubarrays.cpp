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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0;
    int cnt=0;
    while(i<n){
        if(arr[i]>arr[i+1]){
            cnt++;
            i+=2;
        }else{
            i++;
        }
    }
    cout<<cnt<<endl;
}
return 0;
}