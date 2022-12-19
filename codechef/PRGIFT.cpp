#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n ,k;
    cin>>n>>k;
    int arr[n];
    int d = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if( arr[i] % 2 == 0){
            d++;
        }
    }
    if(k == 0 && d == n){
        cout<<"NO"<<endl;
    }else{
        if( d >= k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}