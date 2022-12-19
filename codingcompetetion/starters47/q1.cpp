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
    int d = 0;
    int r = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            d = i;
        }
    }
    for(int j = 0;j<n;j++){
        if(arr[j] == n){
            r = j;
        }
    }

    //cout<<d<<" "<<r<<endl;
    if(d == 0 && r == n-1){
        cout<<"0"<<endl;
    }else{
        if(d<r){
            cout<<d+(n-1-r)<<endl;
        }else{
            cout<<d+(n-1-r)-1<<endl;
        }
    }

}
return 0;
}